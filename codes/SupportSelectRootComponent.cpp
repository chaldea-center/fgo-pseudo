void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12B8A & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectRootComponent_TypeInfo, v1, v2);
    byte_4B12B8A = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct System_Int32_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B12B89 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B12B89 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v6->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct System_Int32_array *)sub_1BCA888(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v14;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (int64_t)v14,
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

  if ( (byte_4B12B64 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12623/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result, method);
    byte_4B12B64 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12623/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SupportServantData_o *CenterNum; // x0
  __int64 v7; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SupportDeckNameInputMenu_CallbackFunc_o *v15; // x23

  if ( (byte_4B12B83 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndChangeDeckName__, v4, v5);
    byte_4B12B83 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BCAA44(CenterNum, v7);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v15 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v12,
                                                           v13,
                                                           v14),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1BCAA3C(CenterNum, v7);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v15, 0LL);
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
      v3 = 81;
      goto LABEL_7;
    }
LABEL_9:
    sub_1BCAA3C(titleInfo, method);
  }
  if ( this->fields.isDragSwapState )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 70;
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
  __int64 v6; // x2
  __int64 CenterNum; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v13; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v15; // x22
  SupportServantData_o *v16; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v17; // x23

  if ( (byte_4B12B7C & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId, method);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5, v6);
    byte_4B12B7C = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v13 = this->fields.copyTargetDeckId - 1, v13 >= max_length) )
    sub_1BCAA44(CenterNum, v8);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v15 = supportServantData->m_Items[(int)CenterNum];
  v16 = supportServantData->m_Items[v13];
  v17 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                               SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo,
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
    sub_1BCAA3C(CenterNum, v8);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v15, v16, v17, 0LL);
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
  int v10; // w24
  SupportSelectRootComponent_o **v11; // x25

  if ( (byte_4B12B87 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, orgData, toData);
    byte_4B12B87 = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1BCAA3C(this, orgData);
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
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, orgData);
          this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        }
        if ( v10 >= *((_DWORD *)&this->fields.applyIconObj[6].fields + 1) )
          break;
        if ( !toData )
          goto LABEL_18;
        if ( v8 >= toData->max_length || v8 >= orgData->max_length )
          sub_1BCAA44(this, orgData);
        this = *v11;
        if ( !*v11 )
          goto LABEL_18;
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  SupportSelectRootComponent_o *v8; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4B12B76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, isDecide, method);
    byte_4B12B76 = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0LL);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    SupportSelectRootComponent__CopySupportData(
      v8,
      this->fields.tmpSupportServantData,
      this->fields.supportServantData,
      0,
      v9);
    cancelConfirmMenu = (CancelConfirmMenu_o *)this->fields.supportSelectMenu;
    if ( cancelConfirmMenu )
    {
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, isDecide, v10);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v11);
      return;
    }
LABEL_10:
    sub_1BCAA3C(cancelConfirmMenu, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckIdCancelConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B12B75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B12B75 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v8 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22465/*"ok"*/, v10);
      return;
    }
LABEL_10:
    sub_1BCAA3C(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B12B84 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, changeName);
    sub_1BCA7E0(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11, v12);
    byte_4B12B84 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.editDeckName,
      (int64_t)changeName,
      (int64_t)changeName,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, (const MethodInfo *)isDecide);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_33827392(deckNameInputMenu, v18, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(supportEditMenu, isDecide);
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
    sub_1BCAA3C(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1BCAA3C(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12B6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12B6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
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
        sub_1BCAA44(CenterNum, isDecide);
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
    sub_1BCAA3C(CenterNum, isDecide);
  }
  CenterNum = this->fields.copyConfirmMenu;
  if ( !CenterNum )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(CenterNum, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_1BCAA3C(0LL, flag);
  SupportSelectConfirmMenu__Close_33835404(supportSelectConfirmMenu, 0LL, 0LL);
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

  if ( (byte_4B12B80 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isDecide, method);
    byte_4B12B80 = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_33;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    confirmDeckMenu = SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v8 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= supportServantData->max_length )
LABEL_34:
        sub_1BCAA44(confirmDeckMenu, isDecide);
      confirmDeckMenu = (__int64)supportServantData->m_Items[(int)confirmDeckMenu];
      if ( confirmDeckMenu )
      {
        SupportServantData__ResetDeckName((SupportServantData_o *)confirmDeckMenu, 0LL);
        for ( i = 0; ; ++i )
        {
          confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide);
            confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(confirmDeckMenu + 184) + 164LL) )
            break;
          v10 = this->fields.supportServantData;
          if ( !v10 )
            goto LABEL_33;
          if ( v8 >= v10->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v10->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v11 = this->fields.supportServantData;
            if ( !v11 )
              goto LABEL_33;
            if ( v8 >= v11->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v11->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
          v12 = this->fields.supportServantData;
          if ( !v12 )
            goto LABEL_33;
          if ( v8 >= v12->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v12->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v13 = this->fields.supportServantData;
            if ( !v13 )
              goto LABEL_33;
            if ( v8 >= v13->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v13->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
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
LABEL_33:
    sub_1BCAA3C(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *titleInfo; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  __int64 v13; // x1

  if ( (byte_4B12B5F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v6, v7);
    byte_4B12B5F = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1BCAA3C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__LoadUISkin(v12, 1, 1, 0LL);
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

  if ( (byte_4B12B7E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isDecide, method);
    byte_4B12B7E = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_30;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v7 >= confirmDeckMenu[1].fields.m_CancellationTokenSource[2].fields._threadIDExecutingCallbacks )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getServant(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v10 = this->fields.supportServantData;
        if ( !v10 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v10->max_length )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v10->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      v11 = this->fields.supportServantData;
      if ( !v11 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v11->max_length )
LABEL_31:
        sub_1BCAA44(confirmDeckMenu, isDecide);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v12 = this->fields.supportServantData;
        if ( !v12 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v12->max_length )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
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
LABEL_30:
    sub_1BCAA3C(confirmDeckMenu, isDecide);
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

  if ( (byte_4B12B82 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isDecide, method);
    byte_4B12B82 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_22;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( v7 >= confirmDeckMenu[1].fields.m_CancellationTokenSource[2].fields._threadIDExecutingCallbacks )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_22;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_23;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_22;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v10 = this->fields.supportServantData;
        if ( !v10 )
          goto LABEL_22;
        if ( (unsigned int)CenterNum >= v10->max_length )
LABEL_23:
          sub_1BCAA44(confirmDeckMenu, isDecide);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v10->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_22;
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
LABEL_22:
    sub_1BCAA3C(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndSelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v14; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_4B12B7B & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId, method);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5, v6);
    byte_4B12B7B = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, *(const MethodInfo **)&deckId);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v8);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= supportServantData->max_length )
      sub_1BCAA44(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v14 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v15 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                          SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                          *(_QWORD *)&deckId,
                                                          v9,
                                                          v10);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v15,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v16);
    if ( !supportEditMenu )
LABEL_10:
      sub_1BCAA3C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v14, isEdit, v15, v17);
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

  if ( (byte_4B12B6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12B6E = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1BCAA3C(supportSelectMenu, isDecide);
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
  struct SupportServantData_array *supportServantData; // x9
  __int64 v6; // x8
  SupportServantData_o **m_Items; // x9
  SupportServantData_o *v8; // x10

  if ( (byte_4B12B6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B12B6B = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_15;
  if ( (int)*(_QWORD *)&supportServantData->max_length >= 1 )
  {
    v6 = (unsigned int)*(_QWORD *)&supportServantData->max_length;
    m_Items = supportServantData->m_Items;
    do
    {
      v8 = *m_Items;
      if ( *m_Items && !v8->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_15;
        v8->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.decideButton;
      }
      --v6;
      ++m_Items;
    }
    while ( v6 );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_15:
    sub_1BCAA3C(supportSelectMenu, isDecide);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B12B6C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v8, v9);
    byte_4B12B6C = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1BCAA3C(v15, v16);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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
    sub_1BCAA3C(CenterNum, v7);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t CenterNum; // w22
  const MethodInfo *v69; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x3
  int32_t v74; // w23
  __int64 v75; // x2
  __int64 v76; // x3
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v79; // x21
  CancelConfirmMenu_CallbackFunc_o *v80; // x22
  const MethodInfo *v81; // x2
  __int64 v82; // x3
  struct SupportServantData_array *v83; // x8
  SupportServantData_o *v84; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  SupportSelectConfirmMenu_CallbackFunc_o *v91; // x21
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x2
  __int64 v94; // x2
  __int64 v95; // x3
  struct SupportServantData_array *v96; // x22
  SupportServantData_o *v97; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v100; // x24
  System_Int32_array *v101; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v103; // x2
  __int64 v104; // x2
  __int64 v105; // x3
  struct SupportServantData_array *v106; // x22
  SupportServantData_o *v107; // x8
  EventUpValSetupInfo_o *v108; // x27
  System_Int32_array *v109; // x25
  System_Int32_array *v110; // x26
  CommonUI_o *v111; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v112; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x1
  SupportSelectMenu_o *v116; // x20
  const MethodInfo *v117; // x2
  const MethodInfo *v118; // x2
  bool v119; // w1
  SupportSelectRootComponent_o *v120; // x0
  SupportSelectMenu_o *v121; // x20
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x1
  struct SupportServantData_array *v124; // x8
  __int64 v125; // x21
  __int64 v126; // x22
  __int64 v127; // x23
  struct SupportServantData_array *v128; // x8
  SupportServantData_o *v129; // x8
  struct SupportServantData_array *v130; // x8
  SupportServantData_o *v131; // x8
  int v132; // w22
  struct SupportServantData_array *v133; // x8
  SupportServantData_o *v134; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v136; // w22
  struct SupportServantData_array *v137; // x8
  SupportServantData_o *v138; // x8
  QuestRestrictionInfo_o *v139; // x20
  __int64 v140; // x23
  __int64 v141; // x24
  int32_t v142; // w0
  int32_t v143; // w23
  int32_t v144; // w24
  PartyOrganizationUtility_c *v145; // x0
  _QWORD *v146; // x0
  System_Reflection_MethodBase_o *v147; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v149; // x8
  int64_t v150; // x21
  struct SupportServantData_array *v151; // x8
  SupportServantData_o *v152; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v154; // x0
  System_Reflection_MethodBase_o *v155; // x0
  __int64 v156; // x2
  __int64 v157; // x3
  struct SupportServantData_array *v158; // x8
  SupportServantData_o *v159; // x8
  int32_t kind; // w20
  CommonUI_o *v161; // x22
  ServantLeaderInfo_o *v162; // x21
  ServantStatusDialog_EndDelegate_o *v163; // x23
  struct SupportServantData_array *v164; // x8
  struct SupportServantData_array *v165; // x8
  int64_t v166; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v168; // x8
  System_Reflection_MethodBase_o *v169; // x0
  struct SupportServantData_array *v170; // x8
  SupportServantData_o *v171; // x8
  int32_t v172; // w20
  __int64 v173; // x2
  __int64 v174; // x3
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v176; // x21
  ServantStatusDialog_EndDelegate_o *v177; // x23
  _QWORD *v178; // x0
  System_Reflection_MethodBase_o *v179; // x0
  _QWORD *v180; // x0
  System_Reflection_MethodBase_o *v181; // x0
  _QWORD *v182; // x0
  System_Reflection_MethodBase_o *v183; // x0
  const MethodInfo *v184; // x2
  int64_t v185; // x21
  ServantStatusDialog_FormationEndDelegate_o *v186; // x23
  Il2CppObject *v187; // x20
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  ServantStatusDialog_EndDelegate_o *v191; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v193; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v195; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v203; // x0
  int32_t v204; // w0
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x3
  SupportSelectRootComponent___c_c *v208; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v210; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v212; // x24
  struct SupportSelectRootComponent___c_StaticFields *v213; // x0
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v220; // x0
  struct SupportServantData_array *v221; // x8
  SupportServantData_o *v222; // x0
  _QWORD *v223; // x0
  System_Reflection_MethodBase_o *v224; // x0
  const MethodInfo *v225; // x1
  __int64 v226; // x1
  Il2CppObject *Instance; // x20
  __int64 v228; // x2
  __int64 v229; // x3
  System_String_o *v230; // x21
  SupportSelectRootComponent___c_c *v231; // x8
  System_Action_o *_9__66_2; // x23
  System_String_o *v233; // x22
  Il2CppObject *v234; // x24
  struct SupportSelectRootComponent___c_StaticFields *v235; // x0
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v243; // 0:x0.16

  if ( (byte_4B12B65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&deckNum);
    sub_1BCA7E0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&CancelConfirmMenu_CallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v20, v21);
    sub_1BCA7E0(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v38, v39);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v40, v41);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndConfirmMenu__, v42, v43);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndShowEquip__, v44, v45);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v46, v47);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndShowServant__, v48, v49);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v50, v51);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v52, v53);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_OnBackSelect__, v54, v55);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v56, v57);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v58, v59);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v60, v61);
    sub_1BCA7E0(&SupportSelectRootComponent___c_TypeInfo, v62, v63);
    sub_1BCA7E0(&StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v66, v67);
    byte_4B12B65 = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v69);
  v74 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v73);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_140;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_179;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_180;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v79 = supportServantData->m_Items[CenterNum];
      v80 = (CancelConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(CancelConfirmMenu_CallbackFunc_TypeInfo, v71, v75, v76);
      CancelConfirmMenu_CallbackFunc___ctor(
        v80,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_179;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v79, v80, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v73);
      if ( (isUpdate & 1) != 0 )
      {
        v83 = this->fields.supportServantData;
        if ( !v83 )
          goto LABEL_179;
        if ( CenterNum < v83->max_length )
        {
          v84 = v83->m_Items[CenterNum];
          if ( v84 && SupportServantData__get_IsNoServant(v84, 0LL) )
          {
LABEL_15:
            v85 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v85 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v86 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v85, v85[4]);
            OverwriteAssetSoundName__PlaySystemSe(v86, 2, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v91 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                               v88,
                                                               v89,
                                                               v90);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v91,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              v92);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v91, 0LL);
              return;
            }
LABEL_179:
            sub_1BCAA3C(isUpdate, v71);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v81);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v182 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v182 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v183 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v182, v182[4]);
          OverwriteAssetSoundName__PlaySystemSe(v183, 8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v71, v184);
          goto LABEL_140;
        }
LABEL_180:
        sub_1BCAA44(isUpdate, v71);
      }
      if ( this->fields.isEdit )
      {
        v180 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v180 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v181 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v180, v180[4]);
        OverwriteAssetSoundName__PlaySystemSe(v181, 8, 0LL);
LABEL_140:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v71);
        v120 = this;
        v119 = 0;
        this->fields.isDragSwapState = 0;
LABEL_141:
        SupportSelectRootComponent__setEditUI(v120, v119, v118);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v193 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v71);
        v193 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v193->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v193->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v193, v71);
          v193 = SupportSelectRootComponent___c_TypeInfo;
        }
        v195 = (Il2CppObject *)v193->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v71, v81, v82);
        System_Func_int__bool____ctor(
          _9__66_0,
          v195,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__66_0,
          (int64_t)_9__66_0,
          v197,
          v198,
          v199,
          v200,
          v201,
          v202);
      }
      v203 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
      v204 = System_Linq_Enumerable__Count_int_(
               v203,
               (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      v208 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v210 = v204;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v205);
        v208 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v208->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v208->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v208, v205);
          v208 = SupportSelectRootComponent___c_TypeInfo;
        }
        v212 = (Il2CppObject *)v208->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v205, v206, v207);
        System_Func_int__bool____ctor(
          _9__66_1,
          v212,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v213 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v213->__9__66_1 = _9__66_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v213->__9__66_1,
          (int64_t)_9__66_1,
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
               (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v220,
                   (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( v210 < 1 || (int)isUpdate <= 0 )
      {
        v221 = this->fields.supportServantData;
        if ( !v221 )
          goto LABEL_179;
        if ( CenterNum >= v221->max_length )
          goto LABEL_180;
        v222 = v221->m_Items[CenterNum];
        if ( v222 && SupportServantData__get_IsNoServant(v222, 0LL) )
          goto LABEL_15;
      }
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_179;
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_179;
      SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
      v223 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v223 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v224 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v223, v223[4]);
      OverwriteAssetSoundName__PlaySystemSe(v224, 8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v225);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v72);
      SupportSelectRootComponent__setEditUI(this, 1, v93);
      isUpdate = (int64_t)this->fields.titleInfo;
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      isUpdate = (int64_t)this->fields.backSkinSprite;
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_179;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      v96 = this->fields.supportServantData;
      if ( !v96 )
        goto LABEL_179;
      if ( v96->max_length <= deckNum )
        goto LABEL_180;
      v97 = v96->m_Items[deckNum];
      if ( !v97 )
        goto LABEL_179;
      eventSetupInfo2 = v97->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v100 = this->fields.tempFixMainQuestSupportDeckIds;
      v101 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                              v71,
                                                              v94,
                                                              v95);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_179;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v96,
        deckNum,
        classPos,
        eventSetupInfo2,
        v74,
        v100,
        v101,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v72);
      SupportSelectRootComponent__setEditUI(this, 1, v103);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v106 = this->fields.supportServantData;
      if ( !v106 )
        goto LABEL_179;
      if ( v106->max_length <= deckNum )
        goto LABEL_180;
      v107 = v106->m_Items[deckNum];
      if ( !v107 )
        goto LABEL_179;
      v108 = v107->fields.eventSetupInfo2;
      v109 = this->fields.tempFixMainQuestSupportDeckIds;
      v110 = this->fields.tempFixEventQuestSupportDeckIds;
      v111 = (CommonUI_o *)isUpdate;
      v112 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                             SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                             v71,
                                                             v104,
                                                             v105);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v112,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v111 )
        goto LABEL_179;
      CommonUI__OpenSupportServantEquipListMenu(v111, v106, deckNum, classPos, v108, v74, v109, v110, v112, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v71);
      if ( !supportSelectMenu )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v114);
      SupportSelectRootComponent__ChangeDeckName(this, v115);
      return;
    case 5:
      v116 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v71);
      if ( !v116 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v116, isUpdate, v117);
      v119 = 1;
      this->fields.isDragSwapState = 1;
      v120 = this;
      goto LABEL_141;
    case 6:
      v121 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v71);
      if ( !v121 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v121, isUpdate, v122);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v123);
      return;
    case 7:
      v124 = this->fields.supportServantData;
      if ( !v124 )
        goto LABEL_179;
      if ( v124->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v124->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v125 = *(_QWORD *)(isUpdate + 24);
      if ( !v125 )
        goto LABEL_125;
      v127 = *(_QWORD *)(v125 + 48);
      v126 = *(_QWORD *)(v125 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
      *(_QWORD *)&v242.fields.currentCryptoKey = v127;
      *(_QWORD *)&v242.fields.fakeValue = v126;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v242, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_125;
      v128 = this->fields.supportServantData;
      if ( !v128 )
        goto LABEL_179;
      if ( v128->max_length <= deckNum )
        goto LABEL_180;
      v129 = v128->m_Items[deckNum];
      if ( !v129 )
        goto LABEL_179;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v125,
                   v129->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_125;
      v130 = this->fields.supportServantData;
      if ( !v130 )
        goto LABEL_179;
      if ( v130->max_length <= deckNum )
        goto LABEL_180;
      v131 = v130->m_Items[deckNum];
      if ( !v131 )
        goto LABEL_179;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v125, v131->fields.questRestrictionInfo, 0LL) )
        goto LABEL_125;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      v132 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( v132 < 1 )
        goto LABEL_76;
      v133 = this->fields.supportServantData;
      if ( !v133 )
        goto LABEL_179;
      if ( v133->max_length <= deckNum )
        goto LABEL_180;
      v134 = v133->m_Items[deckNum];
      if ( !v134 )
        goto LABEL_179;
      questRestrictionInfo = v134->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_179;
      v136 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, v136, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v137 = this->fields.supportServantData;
      if ( !v137 )
        goto LABEL_179;
      if ( v137->max_length <= deckNum )
        goto LABEL_180;
      v138 = v137->m_Items[deckNum];
      if ( !v138 )
        goto LABEL_179;
      v139 = v138->fields.questRestrictionInfo;
      v141 = *(_QWORD *)(v125 + 48);
      v140 = *(_QWORD *)(v125 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
      *(_QWORD *)&v243.fields.currentCryptoKey = v141;
      *(_QWORD *)&v243.fields.fakeValue = v140;
      v142 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v243, 0LL);
      v143 = *(_DWORD *)(v125 + 64);
      v144 = v142;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v125, 0LL);
      if ( !v139 )
        goto LABEL_179;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v139, v144, v143, isUpdate, v136, 1, 0LL) )
        goto LABEL_125;
LABEL_76:
      if ( !this->fields.supportInfoJump )
      {
LABEL_125:
        v178 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v178 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v179 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v178, v178[4]);
        OverwriteAssetSoundName__PlaySystemSe(v179, 2, 0LL);
LABEL_128:
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_179;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v71);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( *(_BYTE *)(isUpdate + 148) )
      {
        v145 = PartyOrganizationUtility_TypeInfo;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v71);
          v145 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v145->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_179;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v226);
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v230 = (System_String_o *)isUpdate;
            v231 = SupportSelectRootComponent___c_TypeInfo;
            if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v71);
              v231 = SupportSelectRootComponent___c_TypeInfo;
            }
            _9__66_2 = v231->static_fields->__9__66_2;
            v233 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( !v231->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v231, v71);
                v231 = SupportSelectRootComponent___c_TypeInfo;
              }
              v234 = (Il2CppObject *)v231->static_fields->__9;
              _9__66_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v71, v228, v229);
              System_Action___ctor(
                _9__66_2,
                v234,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v235 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v235->__9__66_2 = _9__66_2;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v235->__9__66_2,
                (int64_t)_9__66_2,
                v236,
                v237,
                v238,
                v239,
                v240,
                v241);
            }
            if ( !Instance )
              goto LABEL_179;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v233,
              v230,
              _9__66_2,
              -1,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0LL,
              0.0,
              0LL);
            goto LABEL_128;
          }
        }
      }
      v146 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v146 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v147 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v146, v146[4]);
      OverwriteAssetSoundName__PlaySystemSe(v147, 0, 0LL);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_179;
      supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
      *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
      *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v125 + 16);
      if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isUpdate )
          goto LABEL_179;
        AvalonSceneManager__popScene(
          (AvalonSceneManager_o *)isUpdate,
          1,
          (Il2CppObject *)this->fields.supportInfoJump,
          0LL);
      }
      return;
    case 8:
      v149 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v149 )
        goto LABEL_179;
      if ( v149->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v149->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v150 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_125;
      v151 = this->fields.supportServantData;
      if ( !v151 )
        goto LABEL_179;
      if ( v151->max_length <= deckNum )
        goto LABEL_180;
      v152 = v151->m_Items[deckNum];
      if ( !v152 )
        goto LABEL_179;
      isFriendInfo = v152->fields.isFriendInfo;
      v154 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v154 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v155 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v154, v154[4]);
      OverwriteAssetSoundName__PlaySystemSe(v155, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v158 = this->fields.supportServantData;
      if ( !v158 )
        goto LABEL_179;
      if ( v158->max_length <= deckNum )
        goto LABEL_180;
      v159 = v158->m_Items[deckNum];
      if ( !v159 )
        goto LABEL_179;
      kind = v159->fields.kind;
      v161 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v162 = *(ServantLeaderInfo_o **)(v150 + 24);
        v163 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v71,
                                                      v156,
                                                      v157);
        ServantStatusDialog_EndDelegate___ctor(
          v163,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v161 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30778732(v161, kind, v162, v163, 0LL);
      }
      else
      {
        v185 = *(_QWORD *)(v150 + 56);
        v186 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BCAA2C(
                                                               ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                               v71,
                                                               v156,
                                                               v157);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v186,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v161 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30776100(v161, kind, v185, v186, 0LL, 0LL);
      }
      return;
    case 9:
      v164 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v164 )
        goto LABEL_179;
      if ( v164->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v164->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_125;
      v165 = this->fields.supportServantData;
      if ( !v165 )
        goto LABEL_179;
      if ( v165->max_length <= deckNum )
        goto LABEL_180;
      v166 = isUpdate;
      isUpdate = (int64_t)v165->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v168 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v168 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v169 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v168, v168[4]);
      OverwriteAssetSoundName__PlaySystemSe(v169, 0, 0LL);
      v170 = this->fields.supportServantData;
      if ( !v170 )
        goto LABEL_179;
      if ( v170->max_length <= deckNum )
        goto LABEL_180;
      v171 = v170->m_Items[deckNum];
      if ( !v171 )
        goto LABEL_179;
      if ( v171->fields.isFriendInfo )
      {
        if ( v171->fields.kind == 5 )
          v172 = 14;
        else
          v172 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_179;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v176 = (CommonUI_o *)isUpdate;
        v177 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v71,
                                                      v173,
                                                      v174);
        ServantStatusDialog_EndDelegate___ctor(
          v177,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v176 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog_30781828(v176, v172, equipTarget1, v177, 0LL, 0LL);
      }
      else
      {
        v187 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v191 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                      ServantStatusDialog_EndDelegate_TypeInfo,
                                                      v188,
                                                      v189,
                                                      v190);
        ServantStatusDialog_EndDelegate___ctor(
          v191,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v187 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v187, 11, v166, 1, v191, 0LL, 0LL);
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
  __int64 v19; // x1
  int64_t v20; // x25
  struct EquipTargetInfo_o *v21; // x8
  __int128 v22; // q0
  int64_t v23; // x0
  const MethodInfo *v24; // x1
  int64_t v25; // x26
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v27; // x1
  struct SupportServantData_array *supportServantData; // x8
  int32_t v29; // w24
  struct SupportServantData_array *v30; // x8
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+80h] [xbp-70h]

  if ( (byte_4B12B6A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&classPos1);
    byte_4B12B6A = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_41845724(equipTarget1->fields.svtId, 0LL);
    if ( !leader2 )
      goto LABEL_11;
  }
  else
  {
    v14 = 0;
    if ( !leader2 )
    {
LABEL_11:
      v16 = 0;
      goto LABEL_12;
    }
  }
  v15 = leader2->fields.equipTarget1;
  if ( !v15 )
    goto LABEL_11;
  v16 = BasicHelper__DecryptValue_41845724(v15->fields.svtId, 0LL);
LABEL_12:
  if ( leader1 && (v17 = leader1->fields.equipTarget1) != 0LL )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v18;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v35, 0LL, 0LL);
    v36 = v35;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
  v34 = v36;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v34, 0LL);
  if ( leader2 && (v21 = leader2->fields.equipTarget1) != 0LL )
  {
    v22 = *(_OWORD *)&v21->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v21->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v22;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0LL, 0LL);
    v35 = v33;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
  v32 = v35;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v32, 0LL);
  if ( classPos1 != classPos2 )
  {
    v25 = v23;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v24);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v29 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v25, v16, 0LL);
      v30 = this->fields.supportServantData;
      if ( !v30 )
        goto LABEL_39;
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
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v27);
              return;
            }
          }
        }
LABEL_39:
        sub_1BCAA3C(CenterNum, v27);
      }
    }
    sub_1BCAA44(CenterNum, v27);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  __int64 v43; // x20
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  const MethodInfo *v59; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v62; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v64; // x23
  UserServantLeaderEntity_o *v65; // x24
  UserServantLeaderEntity_o *v66; // x25
  int32_t v67; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v68; // x8
  int32_t v69; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v71; // x8
  PartyOrganizationUtility_o *v72; // x23
  UserServantLeaderEntity_o *v73; // x25
  UserServantLeaderEntity_o *v74; // x26
  UserServantEntity_o *v75; // x8
  System_String_o *v76; // x22
  __int64 v77; // x8
  int32_t v78; // w21
  __int64 v79; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Text_StringBuilder_o *v85; // x21
  __int64 v86; // x1
  System_String_o *v87; // x0
  Il2CppObject *Instance; // x22
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Action_o *v92; // x23
  Il2CppObject *v93; // x19
  System_String_o *v94; // x21
  System_String_o *v95; // x22
  System_String_o *v96; // x23
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  CommonConfirmDialog_ClickDelegate_o *v100; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16

  if ( (byte_4B12B68 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v25, v26);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v29, v30);
    sub_1BCA7E0(
      &Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
      v31,
      v32);
    sub_1BCA7E0(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    byte_4B12B68 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v43 = sub_1BCAA2C(
          SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&classPos,
          item);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v43,
    0LL);
  if ( !v43 )
    goto LABEL_42;
  *(_QWORD *)(v43 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)this, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v43 + 32) = item;
  v52 = v43 + 32;
  *(_DWORD *)(v43 + 24) = result;
  *(_DWORD *)(v43 + 28) = classPos;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)item, v53, v54, v55, v56, v57, v58);
  if ( *(_DWORD *)(v43 + 24) == 1 && *(_QWORD *)v52 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BCAA44(UserServantLeaderEntity, v45);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v43 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v62 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v52 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v52 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v62->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v64 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v66 = userServantLeaderEntityList->m_Items[6];
          v65 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
          *(_QWORD *)&v104.fields.currentCryptoKey = v66;
          *(_QWORD *)&v104.fields.fakeValue = v65;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v104,
                                                              0LL);
          if ( !v62->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v67 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v62->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v52 )
            goto LABEL_42;
          v68 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v52 + 128LL);
          if ( !v68 )
            goto LABEL_42;
          v69 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                              v68[1],
                                                              0LL);
          if ( !v64 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v64,
                 &skillName,
                 &actMaxRarity[1],
                 v67,
                 v69,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v62->fields.isFriendInfo,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v71 = v62->fields.userServantLeaderEntityList;
                if ( v71 )
                {
                  v72 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v74 = v71->m_Items[8];
                  v73 = v71->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
                  *(_QWORD *)&v105.fields.currentCryptoKey = v74;
                  *(_QWORD *)&v105.fields.fakeValue = v73;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                      v105,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v75 = (UserServantEntity_o *)v62->fields.userServantLeaderEntityList;
                    if ( v75 )
                    {
                      v76 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v75, 0LL);
                      v77 = *(_QWORD *)v52;
                      if ( *(_QWORD *)v52 )
                      {
                        v78 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v77 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                              v79);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(
                                                                              Name,
                                                                              0LL);
                          if ( v72 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v72,
                                                     actMaxRarity,
                                                     v76,
                                                     v78,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v85 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                                                     System_Text_StringBuilder_TypeInfo,
                                                                     v82,
                                                                     v83,
                                                                     v84);
                              System_Text_StringBuilder___ctor(v85, 0LL);
                              if ( v85 )
                              {
                                System_Text_StringBuilder__Append_61563116(v85, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
                                v87 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_61563116(v85, v87, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v89, v90, v91);
                                System_Action___ctor(
                                  v92,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v92, 0LL);
                                  v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v94 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v85->klass->vtable._3_ToString.method)(
                                                             v85,
                                                             v85->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v95 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v100 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                                  CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                  v97,
                                                                                  v98,
                                                                                  v99);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v100,
                                    (Il2CppObject *)v43,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v93 )
                                  {
                                    CommonUI__OpenConfirmDialog_30766668(
                                      (CommonUI_o *)v93,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v94,
                                      v95,
                                      v96,
                                      v100,
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
LABEL_42:
            sub_1BCAA3C(UserServantLeaderEntity, v45);
          }
        }
      }
    }
  }
  SupportSelectRootComponent__SetEquip(
    this,
    *(_DWORD *)(v43 + 24),
    *(_DWORD *)(v43 + 28),
    *(SupportServantEquipListViewItem_o **)(v43 + 32),
    v59);
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
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v8; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  struct SupportServantData_array *v11; // x9
  __int64 v12; // x8
  SupportServantData_o **m_Items; // x9

  selectNum = this->fields.selectNum;
  v6 = this;
  this->fields.state = 1;
  if ( result != 2 )
  {
    if ( result != 1 )
      goto LABEL_11;
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_31;
    if ( (unsigned int)selectNum < supportServantData->max_length )
    {
      this = (SupportSelectRootComponent_o *)supportServantData->m_Items[selectNum];
      if ( !this )
        goto LABEL_31;
      SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, 0LL);
      goto LABEL_11;
    }
LABEL_32:
    sub_1BCAA44(this, result);
  }
  v8 = this->fields.supportServantData;
  if ( !v8 )
    goto LABEL_31;
  if ( (unsigned int)selectNum >= v8->max_length )
    goto LABEL_32;
  this = (SupportSelectRootComponent_o *)v8->m_Items[selectNum];
  if ( !this )
    goto LABEL_31;
  SupportServantData__removeServantData((SupportServantData_o *)this, classPos, 0LL);
LABEL_11:
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v9);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  v11 = v6->fields.supportServantData;
  if ( !v11 )
    goto LABEL_31;
  if ( (int)*(_QWORD *)&v11->max_length >= 1 )
  {
    v12 = (unsigned int)*(_QWORD *)&v11->max_length;
    m_Items = v11->m_Items;
    do
    {
      if ( *m_Items )
      {
        if ( !this )
          goto LABEL_31;
        (*m_Items)->fields.pushUserServantId = (int64_t)this->fields.cancelConfirmMenu;
      }
      --v12;
      ++m_Items;
    }
    while ( v12 );
  }
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v10);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
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
LABEL_31:
    sub_1BCAA3C(this, *(_QWORD *)&result);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x21
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x1
  __int64 Instance; // x0
  int64_t v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  BalanceConfig_c *v58; // x8
  __int64 v59; // x10
  unsigned __int64 v60; // x24
  int32_t v61; // w9
  int32_t v62; // w26
  __int64 v63; // x23
  __int64 v64; // x27
  struct SupportServantData_array *supportServantData; // x8
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x28
  struct SupportServantData_array *v73; // x8
  SupportServantData_o *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x19
  System_Func_object__bool__o *v76; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  ServantEntity_o *v78; // x27
  int32_t Rarity; // w0
  __int64 v80; // x1
  int v81; // w29
  int64_t v82; // x2
  int32_t v83; // w28
  System_String_o *v84; // x19
  Il2CppObject *v85; // x28
  Il2CppObject *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_String_o *v93; // x19
  Il2CppObject *v94; // x29
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v103; // [xsp+10h] [xbp-A0h]
  __int64 v104; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v105; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *Master_object; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v109; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B12B70 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&nowDeckId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v16, v17);
    sub_1BCA7E0(&DataManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v24, v25);
    sub_1BCA7E0(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&int_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v34, v35);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v36, v37);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v42, v43);
    sub_1BCA7E0(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v44, v45);
    sub_1BCA7E0(&StringLiteral_12544/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_12545/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v48, v49);
    byte_4B12B70 = 1;
  }
  entity = 0LL;
  v50 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&idx,
                                                       *(_QWORD *)&nowDeckId,
                                                       fixDeckIds);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v51) )
      return (System_Collections_Generic_List_string__o *)v50;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v51) )
  {
    return (System_Collections_Generic_List_string__o *)v50;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v52);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_69:
    sub_1BCAA3C(Instance, v54);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v105 = (ServantLimitImageMaster_o *)Instance;
  v58 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54);
    v58 = BalanceConfig_TypeInfo;
  }
  v59 = 184LL;
  if ( isMain )
    v59 = 180LL;
  v104 = *(unsigned int *)((char *)&v58->static_fields->CriticalRateToAddByQuickFirstBonus + v59);
  if ( *(int *)((char *)&v58->static_fields->CriticalRateToAddByQuickFirstBonus + v59) >= 1 )
  {
    v60 = 0LL;
    v103 = (unsigned int)idx;
    do
    {
      if ( v60 != v103 )
      {
        if ( !fixDeckIds )
          goto LABEL_69;
        if ( v60 >= fixDeckIds->max_length )
LABEL_70:
          sub_1BCAA44(Instance, v54);
        v61 = fixDeckIds->m_Items[v60 + 1];
        if ( v61 )
        {
          v62 = 0;
          v63 = v61 - 1;
          while ( 1 )
          {
            if ( !v58->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v58, v54);
              v58 = BalanceConfig_TypeInfo;
            }
            if ( v62 >= v58->static_fields->SupportDeckMemberMax )
              break;
            v64 = sub_1BCAA2C(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v54, v56, v57);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v64,
              0LL);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_69;
            if ( CenterNum >= supportServantData->max_length )
              goto LABEL_70;
            Instance = (__int64)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_69;
            Instance = (__int64)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v62,
                                  0LL);
            if ( !v64 )
              goto LABEL_69;
            *(_QWORD *)(v64 + 16) = Instance;
            v72 = v64 + 16;
            sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), Instance, v66, v67, v68, v69, v70, v71);
            if ( !*(_QWORD *)(v64 + 16) )
              goto LABEL_69;
            if ( *(_DWORD *)(*(_QWORD *)(v64 + 16) + 64LL) )
            {
              v73 = this->fields.supportServantData;
              if ( !v73 )
                goto LABEL_69;
              if ( (unsigned int)v63 >= v73->max_length )
                goto LABEL_70;
              v74 = v73->m_Items[v63];
              if ( !v74 )
                goto LABEL_69;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v74->fields.userServantLeaderEntityList;
              v76 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                     v54,
                                                     v56,
                                                     v57);
              System_Func_object__bool____ctor(
                v76,
                (Il2CppObject *)v64,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v77 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v76,
                      (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v77,
                           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v72 )
                  goto LABEL_69;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_69;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v72 + 64LL),
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v72 )
                  goto LABEL_69;
                v78 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v72 + 16LL);
                if ( !Instance )
                  goto LABEL_69;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v81 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v80);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v72 )
                    goto LABEL_69;
                  v82 = Instance;
                  Instance = (__int64)Master_object;
                  if ( !Master_object )
                    goto LABEL_69;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         v82,
                         *(_DWORD *)(*(_QWORD *)v72 + 64LL),
                         0LL) )
                  {
                    Instance = (__int64)v105;
                    if ( !*(_QWORD *)v72 )
                      goto LABEL_69;
                    if ( !entity )
                      goto LABEL_69;
                    if ( !v105 )
                      goto LABEL_69;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v105,
                                 *(_DWORD *)(*(_QWORD *)v72 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_69;
                    v83 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v83 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
                  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12544/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v109 = v81;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v109);
                  if ( !v78 )
                    goto LABEL_69;
                  v94 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v78, v83, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v78, 0LL);
                  Instance = (__int64)System_String__Format_62415660(v93, v94, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v80);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12545/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v78 )
                    goto LABEL_69;
                  v84 = (System_String_o *)Instance;
                  v85 = (Il2CppObject *)ServantEntity__getName(v78, -1, -1, 0LL);
                  v86 = (Il2CppObject *)ServantEntity__getClassName(v78, 0LL);
                  Instance = (__int64)System_String__Format_62415592(v84, v85, v86, 0LL);
                }
                v54 = Instance;
                if ( !v50 )
                  goto LABEL_69;
                items = v50->fields._items;
                v98 = Method_System_Collections_Generic_List_string__Add__;
                ++v50->fields._version;
                if ( !items )
                  goto LABEL_69;
                size = v50->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v50,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                }
                else
                {
                  v100 = &items->obj.klass + size;
                  v50->fields._size = size + 1;
                  v100[4] = (Il2CppClass *)v54;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), v54, v87, v88, v89, v90, v91, v92);
                }
              }
            }
            v58 = BalanceConfig_TypeInfo;
            ++v62;
          }
        }
      }
      ++v60;
    }
    while ( v60 != v104 );
  }
  return (System_Collections_Generic_List_string__o *)v50;
}


void __fastcall SupportSelectRootComponent__Init(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22

  if ( (byte_4B12B7F & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndInitAll__, v4, v5);
    byte_4B12B7F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BCAA44(CenterNum, v7);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BCAA3C(CenterNum, v7);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v12, v13, 0LL);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct SupportServantData_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B12B57 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&SupportServantData___TypeInfo, v4, v5);
    byte_4B12B57 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct SupportServantData_array *)sub_1BCA888(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v6->static_fields->SupportDeckMax);
  this->fields.supportServantData = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.supportServantData, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  SupportSelectRootComponent__RefreshSupportServantData(this, v14);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w23
  int64_t Servant; // x0
  int v6; // w8
  bool v7; // w20
  int32_t j; // w21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v10; // x8
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v12; // x22
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  int64_t v15; // x22
  struct SupportServantData_array *v16; // x9
  SupportServantData_o *v17; // x9

  if ( (byte_4B12B88 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B12B88 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Servant = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v6 = *(_DWORD *)(*(_QWORD *)(Servant + 184) + 152LL);
    v7 = (int)i < v6;
    if ( (int)i >= v6 )
      break;
    for ( j = 0; ; ++j )
    {
      if ( !*(_DWORD *)(Servant + 224) )
      {
        j_il2cpp_runtime_class_init_0(Servant, method);
        Servant = (int64_t)BalanceConfig_TypeInfo;
      }
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_34;
      if ( i >= supportServantData->max_length )
        goto LABEL_35;
      v10 = supportServantData->m_Items[i];
      if ( !v10 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      Servant = SupportServantData__getServant(v10, j, 0LL);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
        goto LABEL_35;
      v12 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, 0LL);
      if ( v12 != Servant )
        return 1;
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_34;
      if ( i >= v13->max_length )
        goto LABEL_35;
      Servant = (int64_t)v13->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL);
      v14 = this->fields.orgSupportServantData;
      if ( !v14 )
        goto LABEL_34;
      if ( i >= v14->max_length )
        goto LABEL_35;
      v15 = Servant;
      Servant = (int64_t)v14->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v15 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v16 = this->fields.orgSupportServantData;
    if ( !v16 )
      goto LABEL_34;
    if ( i >= v16->max_length )
LABEL_35:
      sub_1BCAA44(Servant, method);
    v17 = v16->m_Items[i];
    if ( !v17 )
LABEL_34:
      sub_1BCAA3C(Servant, method);
    if ( System_String__op_Inequality(v10->fields._deckName_k__BackingField, v17->fields._deckName_k__BackingField, 0LL) )
      return v7;
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

  if ( (byte_4B12B59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId, method);
    byte_4B12B59 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4B12B58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId, method);
    byte_4B12B58 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) >= 0;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  SupportServantData_o *CenterNum; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x8
  bool v21; // w9
  il2cpp_array_size_t v22; // w22
  signed __int64 v23; // x28
  __int64 v24; // x19
  int v25; // w8
  il2cpp_array_size_t v26; // w27
  int32_t i; // w23
  __int64 v28; // x24
  struct SupportServantData_array *supportServantData; // x8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  struct SupportServantData_array *v37; // x8
  SupportServantData_o *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v40; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Int32_array *v44; // [xsp+10h] [xbp-70h]
  bool v45; // [xsp+1Ch] [xbp-64h]

  v4 = fixDeckIds;
  if ( (byte_4B12B79 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&idx, fixDeckIds);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v12, v13);
    sub_1BCA7E0(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v14, v15);
    byte_4B12B79 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !v4 )
LABEL_28:
    sub_1BCAA3C(CenterNum, v17);
  v20 = *(_QWORD *)&v4->max_length;
  v21 = (int)v20 > 0;
  if ( (int)v20 >= 1 )
  {
    v22 = (unsigned int)CenterNum;
    v23 = 0LL;
    v24 = (int)CenterNum;
    v44 = v4;
    do
    {
      v45 = v21;
      if ( v23 >= (unsigned __int64)(unsigned int)v20 )
LABEL_29:
        sub_1BCAA44(CenterNum, v17);
      v25 = v4->m_Items[v23 + 1];
      v26 = v25 - 1;
      if ( v25 >= 1 && v26 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
            CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[16]) )
            break;
          v28 = sub_1BCAA2C(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v17, v18, v19);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v28,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v22 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v24];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v28 )
            goto LABEL_28;
          *(_QWORD *)(v28 + 16) = CenterNum;
          sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)CenterNum, v30, v31, v32, v33, v34, v35);
          v36 = *(_QWORD *)(v28 + 16);
          if ( !v36 )
            goto LABEL_28;
          if ( *(_DWORD *)(v36 + 64) )
          {
            v37 = this->fields.supportServantData;
            if ( !v37 )
              goto LABEL_28;
            if ( v26 >= v37->max_length )
              goto LABEL_29;
            v38 = v37->m_Items[v26];
            if ( !v38 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v38->fields.userServantLeaderEntityList;
            v40 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                   v17,
                                                   v18,
                                                   v19);
            System_Func_object__bool____ctor(
              v40,
              (Il2CppObject *)v28,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v41 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v40,
                    (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v41,
                   (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v21 = v45;
              return !v21;
            }
          }
        }
      }
      v4 = v44;
      ++v23;
      LODWORD(v20) = v44->max_length;
      v21 = v23 < (int)v20;
    }
    while ( v23 < (int)v20 );
  }
  return !v21;
}


bool __fastcall SupportSelectRootComponent__IsUpdateDeckId(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v22; // x1
  System_Array_o *v23; // x22
  int monitor; // w25
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  BalanceConfig_c *v28; // x0
  Il2CppObject *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  BalanceConfig_c *v31; // x0
  bool v32; // w21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  char v36; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v38; // x0
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v40; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  int32_t v49; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  SupportSelectRootComponent___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v55; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v57; // x23
  struct SupportSelectRootComponent___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  int32_t v66; // w0
  bool v67; // w8

  if ( (byte_4B12B66 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v8, v9);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v14, v15);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v16, v17);
    sub_1BCA7E0(&SupportSelectRootComponent___c_TypeInfo, v18, v19);
    byte_4B12B66 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v23 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].klass;
  if ( !SelfUserGame )
    goto LABEL_40;
  monitor = (int)v23[12].monitor;
  if ( SelfUserGame[1].monitor )
  {
    v25 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v25 )
    {
      v26 = v25;
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA91C(v25, int___TypeInfo);
      if ( !v27 )
        goto LABEL_17;
    }
    else
    {
      v27 = 0LL;
    }
  }
  else
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
      v28 = BalanceConfig_TypeInfo;
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA888(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v28->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v23[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1BCAA3C(SelfUserGame, v22);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
      v31 = BalanceConfig_TypeInfo;
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA888(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v31->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v29 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v29 )
  {
    v30 = 0LL;
    goto LABEL_22;
  }
  v26 = v29;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA91C(v29, int___TypeInfo);
  if ( !v30 )
  {
LABEL_17:
    sub_1BCACFC(v26);
    goto LABEL_18;
  }
LABEL_22:
  v32 = System_Linq_Enumerable__SequenceEqual_int_(
          v27,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v36 = v32 & System_Linq_Enumerable__SequenceEqual_int_(
                v30,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( (v36 & 1) == 0 )
    goto LABEL_37;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v38 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v33);
    v38 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_0 = v38->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v33);
      v38 = SupportSelectRootComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v33, v34, v35);
    System_Func_int__bool____ctor(_9__67_0, v40, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__67_0,
      (int64_t)_9__67_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v49 = System_Linq_Enumerable__Count_int_(v48, (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  v53 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v55 = v49;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v50);
    v53 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v53->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = SupportSelectRootComponent___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v53->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v50, v51, v52);
    System_Func_int__bool____ctor(_9__67_1, v57, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v58 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v58->__9__67_1 = _9__67_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v58->__9__67_1, (int64_t)_9__67_1, v59, v60, v61, v62, v63, v64);
  }
  v65 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v66 = System_Linq_Enumerable__Count_int_(v65, (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v55 < 1 || v66 <= 0 )
    v67 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v67 = 0;
  return v67 || (v36 & 1) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4B12B5A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, method);
    byte_4B12B5A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&index);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  __int64 v37; // x19
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v46; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v56; // x22
  UserServantEntity_o *v57; // x8
  PartyOrganizationUtility_o *v58; // x23
  __int64 v59; // x24
  __int64 v60; // x25
  int32_t v61; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v63; // w25
  UserServantEntity_o *v64; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x20
  __int64 v66; // x23
  __int64 v67; // x24
  Il2CppObject *v68; // x23
  PartyOrganizationUtility_o *v69; // x20
  UserServantEntity_o *v70; // x8
  System_String_o *v71; // x21
  EquipTargetInfo_o *v72; // x8
  int32_t v73; // w22
  System_String_o *RarityInvalidMessage; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Text_StringBuilder_o *v78; // x21
  __int64 v79; // x1
  System_String_o *v80; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v82; // x21
  System_String_o *v83; // x22
  System_String_o *v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  CommonConfirmDialog_ClickDelegate_o *v88; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4B12B67 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21, v22);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v25, v26);
    sub_1BCA7E0(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    byte_4B12B67 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v37 = sub_1BCAA2C(
          SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&classPos,
          entity);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_35;
  *(_QWORD *)(v37 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)this, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 32) = entity;
  v46 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v37 + 32);
  *(_DWORD *)(v37 + 24) = result;
  *(_DWORD *)(v37 + 28) = classPos;
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)entity, v47, v48, v49, v50, v51, v52);
  if ( *(_DWORD *)(v37 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BCAA44(UserServantLeaderEntity, v39);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v37 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v56 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v57 = (UserServantEntity_o *)*v46;
      if ( !*v46 )
        goto LABEL_35;
      v58 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v60 = *(_QWORD *)&v57->fields.svtId.fields.currentCryptoKey;
      v59 = *(_QWORD *)&v57->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v92.fields.currentCryptoKey = v60;
      *(_QWORD *)&v92.fields.fakeValue = v59;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          v92,
                                                          0LL);
      if ( !*v46 )
        goto LABEL_35;
      v61 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v46, 0LL);
      oldServantIdList = v56->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v63 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v58 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v58,
             &skillName,
             &actMaxRarity[1],
             v61,
             v63,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          v64 = (UserServantEntity_o *)*v46;
          if ( *v46 )
          {
            v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v67 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
            v66 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
            *(_QWORD *)&v93.fields.currentCryptoKey = v67;
            *(_QWORD *)&v93.fields.fakeValue = v66;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                v93,
                                                                0LL);
            if ( v65 )
            {
              v68 = DataMasterBase_object__object__int___GetEntity(
                      v65,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v46 )
              {
                v69 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                    (*v46)[6],
                                                                    0LL);
                if ( v68 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v68,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v70 = (UserServantEntity_o *)*v46;
                  if ( *v46 )
                  {
                    v71 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v70, 0LL);
                    v72 = (EquipTargetInfo_o *)v56->fields.oldServantIdList;
                    if ( v72 )
                    {
                      v73 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v72, 0LL);
                      if ( v69 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v69,
                                                 actMaxRarity,
                                                 v71,
                                                 v73,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v78 = (System_Text_StringBuilder_o *)sub_1BCAA2C(
                                                                 System_Text_StringBuilder_TypeInfo,
                                                                 v75,
                                                                 v76,
                                                                 v77);
                          System_Text_StringBuilder___ctor(v78, 0LL);
                          if ( v78 )
                          {
                            System_Text_StringBuilder__Append_61563116(v78, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
                            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_61563116(v78, v80, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v82 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v78->klass->vtable._3_ToString.method)(
                                                       v78,
                                                       v78->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                           v85,
                                                                           v86,
                                                                           v87);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v88,
                              (Il2CppObject *)v37,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30766668(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v82,
                                v83,
                                v84,
                                v88,
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
LABEL_35:
        sub_1BCAA3C(UserServantLeaderEntity, v39);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v37 + 24),
    *(_DWORD *)(v37 + 28),
    *(UserServantEntity_o **)(v37 + 32),
    v53);
}


void __fastcall SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  Il2CppObject *supportInfoJump; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v33; // x21
  CancelConfirmMenu_CallbackFunc_o *v34; // x22
  const MethodInfo *v35; // x1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
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
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  CancelConfirmDeckIdDialog_CallbackFunc_o *v59; // x27

  if ( (byte_4B12B74 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&CancelConfirmMenu_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v13, v14);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v15, v16);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_OnClickBack__, v17, v18);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v19, v20);
    byte_4B12B74 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v3) )
    {
      v26 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickBack__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v28);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1BCAA44(CenterNum, v23);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v33 = supportServantData->m_Items[(int)CenterNum];
        v34 = (CancelConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(CancelConfirmMenu_CallbackFunc_TypeInfo, v23, v29, v30);
        CancelConfirmMenu_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v33, v34, 0LL);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v35)
      || this->fields.isEdit )
    {
      v36 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickBack__);
      v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v23);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v38);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22465/*"ok"*/, v45);
        return;
      }
      goto LABEL_52;
    }
    v39 = SupportSelectRootComponent__getCenterNum(this, v35);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_52;
    v40 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_52;
    pushTabButton = (int32_t)v40->fields.pushTabButton;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v42 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v42 )
      {
        v43 = v42;
        v44 = (System_Int32_array *)sub_1BCA91C(v42, int___TypeInfo);
        if ( !v44 )
          goto LABEL_43;
      }
      else
      {
        v44 = 0LL;
      }
    }
    else
    {
      v46 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
        v46 = BalanceConfig_TypeInfo;
      }
      v44 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v46->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v40->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v47 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v47 )
    {
      v49 = 0LL;
      goto LABEL_48;
    }
    v43 = v47;
    v49 = (System_Int32_array *)sub_1BCA91C(v47, int___TypeInfo);
    if ( v49 )
      goto LABEL_48;
LABEL_43:
    sub_1BCACFC(v43);
LABEL_44:
    v50 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23);
      v50 = BalanceConfig_TypeInfo;
    }
    v49 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v50->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v48);
    v51 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v51 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickBack__);
    v52 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v51, v51[4]);
    OverwriteAssetSoundName__PlaySystemSe(v52, 2, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v59 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                        CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo,
                                                        v56,
                                                        v57,
                                                        v58);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v59,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
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
        v59,
        0LL);
      return;
    }
LABEL_52:
    sub_1BCAA3C(CenterNum, v23);
  }
  v21 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickBack__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 1, 0LL);
  CenterNum = this->fields.supportServantSelectMenu;
  if ( !CenterNum )
    goto LABEL_52;
  SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
  CenterNum = (SupportServantSelectMenu_o *)this->fields.supportInfoJump;
  if ( !CenterNum )
    goto LABEL_52;
  supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
  LODWORD(CenterNum->fields.closeTransform) = -1;
  if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)CenterNum, 1, supportInfoJump, 0LL) )
  {
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( CenterNum )
    {
      AvalonSceneManager__popScene(
        (AvalonSceneManager_o *)CenterNum,
        1,
        (Il2CppObject *)this->fields.supportInfoJump,
        0LL);
      return;
    }
    goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__OnClickFixEventDeckButton(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t CenterNum; // w23
  const MethodInfo *v14; // x1
  int32_t v15; // w22
  const MethodInfo *v16; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v21; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  SupportSelectConfirmMenu_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1

  if ( (byte_4B12B72 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndConfirmMenu__, v9, v10);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__, v11, v12);
    byte_4B12B72 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v15 = SupportSelectRootComponent__getCenterNum(this, v14) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v15,
                                                                  this->fields.tempFixEventQuestSupportDeckIds,
                                                                  0,
                                                                  v16);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1BCAA44(FixedErrorList, v18);
  v21 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v22 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v28 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v25,
                                                         v26,
                                                         v27);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v29);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v28, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(FixedErrorList, v18);
    }
  }
  if ( !v21 )
    goto LABEL_19;
  if ( v21->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v15, 1, v19);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v15,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v33);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v15, v34);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v36);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v37);
  }
  else
  {
    v30 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v21,
                                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t CenterNum; // w23
  const MethodInfo *v14; // x1
  int32_t v15; // w22
  const MethodInfo *v16; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v21; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  SupportSelectConfirmMenu_CallbackFunc_o *v28; // x21
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1

  if ( (byte_4B12B71 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndConfirmMenu__, v9, v10);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__, v11, v12);
    byte_4B12B71 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v15 = SupportSelectRootComponent__getCenterNum(this, v14) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v15,
                                                                  this->fields.tempFixMainQuestSupportDeckIds,
                                                                  1,
                                                                  v16);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1BCAA44(FixedErrorList, v18);
  v21 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v22 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v28 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v25,
                                                         v26,
                                                         v27);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v29);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v28, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(FixedErrorList, v18);
    }
  }
  if ( !v21 )
    goto LABEL_19;
  if ( v21->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v15, 0, v19);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v15,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v33);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v15, v34);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v36);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v37);
  }
  else
  {
    v30 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v21,
                                                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v13; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_4B12B78 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v4, v5);
    byte_4B12B78 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BCAA44(CenterNum, v7);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v13 = supportServantData->m_Items[(int)CenterNum];
  v14 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                        SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                        v7,
                                                        v8,
                                                        v9);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v15);
  if ( !supportEditMenu )
LABEL_7:
    sub_1BCAA3C(CenterNum, v7);
  SupportSelectEditMenu__Open(supportEditMenu, v13, isEdit, v14, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B12B73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__, isFixed, method);
    byte_4B12B73 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, !isFixed, 0LL);
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
  __int64 v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v6; // x22
  __int64 v7; // x24
  unsigned __int64 v8; // x8
  SupportServantData_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v17; // x22
  __int64 v18; // x24
  unsigned __int64 v19; // x8
  SupportServantData_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v28; // x22
  __int64 v29; // x24
  unsigned __int64 v30; // x8
  SupportServantData_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x0

  v4 = this;
  if ( (byte_4B12B56 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&SupportServantData_TypeInfo, method, v2);
    byte_4B12B56 = 1;
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
      v9 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, method, v2, v3);
      SupportServantData___ctor(v9, 0LL);
      if ( v9 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BCA91C(v9, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v38 = sub_1BCAA60();
          sub_1BCA908(v38, 0LL);
        }
      }
      if ( v6 >= supportServantData[6] )
LABEL_37:
        sub_1BCAA44(this, method);
      *(_QWORD *)&supportServantData[2 * v6 + 8] = v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&supportServantData[v7], (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
      v20 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, method, v2, v3);
      SupportServantData___ctor(v20, 0LL);
      if ( v20 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BCA91C(v20, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v17 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v17 + 8] = v20;
      sub_1BCA784((PartyOrganizationUtility_o *)&orgSupportServantData[v18], (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
    sub_1BCAA3C(this, method);
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
      v31 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, method, v2, v3);
      SupportServantData___ctor(v31, 0LL);
      if ( v31 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BCA91C(v31, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v28 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v28 + 8] = v31;
      sub_1BCA784((PartyOrganizationUtility_o *)&tmpSupportServantData[v29], (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22

  if ( (byte_4B12B7D & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndRemoveAll__, v4, v5);
    byte_4B12B7D = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BCAA44(CenterNum, v7);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BCAA3C(CenterNum, v7);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v12, v13, 0LL);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 CenterNum; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v12; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v13; // x22

  if ( (byte_4B12B81 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v4, v5);
    byte_4B12B81 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BCAA44(CenterNum, v7);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BCAA2C(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BCAA3C(CenterNum, v7);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v12, v13, 0LL);
}


void __fastcall SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w20
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  il2cpp_array_size_t i; // w21
  SupportServantData_o *Instance; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  __int64 v28; // x1

  if ( (byte_4B12B63 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v12, v13);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v14, v15);
    byte_4B12B63 = 1;
  }
  v16 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v17) )
  {
    for ( i = 0; ; ++i )
    {
      Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18);
        Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (signed int)i >= SLODWORD(Instance[1].fields.oldEquipIdList->m_Items[15]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_21;
      if ( i >= supportServantData->max_length )
        goto LABEL_22;
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_21;
      if ( i >= orgSupportServantData->max_length )
LABEL_22:
        sub_1BCAA44(Instance, v18);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v18) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22465/*"ok"*/, v23);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v27,
                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1BCAA3C(Instance, v18);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v16,
          this->fields.tempFixMainQuestSupportDeckIds,
          this->fields.tempFixEventQuestSupportDeckIds,
          0LL) )
    goto LABEL_20;
}


void __fastcall SupportSelectRootComponent__RequestDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t CenterNum; // w20
  SupportSelectMenu_o *IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v14; // x2
  SupportSelectListViewIndicator_o *indicator; // x19
  const MethodInfo *v16; // x2

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
      sub_1BCAA44(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&IsNullOrEmpty->fields.decideButton,
            (int64_t)editDeckName,
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
      sub_1BCAA3C(IsNullOrEmpty, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4B12B77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result, method);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_ReturnScene__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B12B77 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v10 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectRootComponent_ReturnScene__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v12, v13);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v15);
      return;
    }
    goto LABEL_20;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v9);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v12, v16);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v17);
      goto LABEL_11;
    }
LABEL_20:
    sub_1BCAA3C(supportSelectMenu, v12);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !supportSelectMenu )
        goto LABEL_20;
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
    sub_1BCAA44(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&targetIdx);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  SupportSelectEditMenu_o *supportEditMenu; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_int__o *v24; // x21
  const MethodInfo *v25; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v27; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v29; // x1
  int32_t v30; // w0
  const MethodInfo *v31; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  int32_t v35; // w24
  int32_t i; // w25
  int32_t v37; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v48; // x20
  System_Int32_array *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v53; // x24
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x5

  if ( (byte_4B12B7A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v14, v15);
    byte_4B12B7A = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v25);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v27);
  v30 = SupportSelectRootComponent__getCenterNum(this, v29);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v30 + 1, v31);
  v35 = SupportSelectRootComponent__getCenterNum(this, v33);
  for ( i = 0; ; ++i )
  {
    supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SLODWORD(supportEditMenu[1].klass->_1.methods) )
      break;
    if ( v35 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v34),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v37 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v37,
                                                         v34),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v20 )
        goto LABEL_33;
      items = v20->fields._items;
      v39 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_33;
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          i,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size + 1] = i;
      }
    }
    else if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v37, v34)
           || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                              this,
                                                              i,
                                                              this->fields.tempFixMainQuestSupportDeckIds,
                                                              v41),
               ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v37, v34) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v42);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v24 )
      goto LABEL_33;
    v43 = v24->fields._items;
    v44 = Method_System_Collections_Generic_List_int__Add__;
    ++v24->fields._version;
    if ( !v43 )
      goto LABEL_33;
    v45 = v24->fields._size;
    if ( (unsigned int)v45 >= v43->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v24,
        i,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v24->fields._size = v45 + 1;
      v43->m_Items[v45 + 1] = i;
    }
  }
  if ( !v20
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v20,
                                                       (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v24)
    || (v48 = (System_Int32_array *)supportEditMenu,
        v49 = System_Collections_Generic_List_int___ToArray(
                v24,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        v53 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1BCAA2C(
                                                                   SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo,
                                                                   v50,
                                                                   v51,
                                                                   v52),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v53,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v54),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1BCAA3C(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v48, v49, v53, v55);
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
    sub_1BCAA3C(supportSelectMenu, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_array *v10; // x19
  PartyOrganizationUtility_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1
  __int64 v13; // x1

  if ( (byte_4B12B62 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, list, method);
    byte_4B12B62 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (PartyOrganizationUtility_o *)&this->fields.cacheAssetNameList;
  v10 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, list);
    AssetManager__loadAssetStorage_38512336(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (PartyOrganizationUtility_c *)list;
  sub_1BCA784(p_cacheAssetNameList, (int64_t)list, (int64_t)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v13);
    AssetManager__releaseAssetStorage_38514680(v10, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 selectNum; // x20
  struct UserServantEntity_o *userSvtEntity; // x8
  struct UserServantEntity_o *v21; // x8
  __int128 v22; // q0
  int32_t v23; // w22
  Il2CppObject *Instance; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x0
  __int64 *v29; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v31; // x8
  SupportSelectRootComponent_o *v32; // x23
  struct SupportServantData_array *v33; // x8
  struct SupportServantData_array *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-50h]

  v7 = result;
  v8 = this;
  if ( (byte_4B12B69 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
    sub_1BCA7E0(&Method_System_Array_IndexOf_long___, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v15, v16);
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v17,
                                             v18);
    byte_4B12B69 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    v29 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_41845724(userSvtEntity->fields.svtId, 0LL);
    v21 = item->fields.userSvtEntity;
    if ( !v21 )
      goto LABEL_32;
    v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
    v23 = (int)this;
    *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v43.fields.fakeValue = v22;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, 0LL, 0LL);
    v23 = 0;
    v43 = v42;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result);
  v41 = v43;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1BCAA3C(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v31 = supportServantData->m_Items[selectNum];
  if ( !v31 )
    goto LABEL_32;
  v32 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v31->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_300EAB0 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v33 = v8->fields.supportServantData;
    if ( !v33 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v33->max_length )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v33->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, 0LL);
  }
  v34 = v8->fields.supportServantData;
  if ( !v34 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= v34->max_length )
LABEL_33:
    sub_1BCAA44(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v34->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v32, v23, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
  v29 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v38 = v28;
  System_Action___ctor(v28, (Il2CppObject *)v8, *v29, 0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v38, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v39) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v40);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v40);
}


void __fastcall SupportSelectRootComponent__SetFriendInfo(
        SupportSelectRootComponent_o *this,
        int32_t *deckIndex,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SupportSelectRootComponent_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v22; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v25; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v27; // x22
  __int64 v28; // x25
  int64_t v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x25
  __int64 v39; // x26
  __int64 v40; // x27
  struct System_Int32_array *v41; // x8
  unsigned __int64 v42; // x29
  unsigned int *v43; // x23
  SupportServantData_o *v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  unsigned int *v51; // x8
  struct SupportInfoJump_o *v52; // x10
  struct System_Int32_array *v53; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v55; // x26
  int64_t v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  unsigned __int64 v63; // x28
  unsigned int v64; // w27
  struct System_Int32_array *v65; // x8
  unsigned int *v66; // x23
  SupportServantData_o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  unsigned int *v74; // x0
  unsigned int *v75; // x8
  struct SupportInfoJump_o *v76; // x9
  struct System_Int32_array *v77; // x10
  unsigned __int64 v78; // x25
  struct System_Int32_array *v79; // x8
  unsigned int *v80; // x23
  SupportServantData_o *v81; // x22
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  unsigned int *v88; // x0
  unsigned int *v89; // x8
  struct SupportInfoJump_o *v90; // x9
  struct System_Int32_array *v91; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x0

  v9 = this;
  if ( (byte_4B12B5B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, deckIndex, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v12, v13);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v14, v15);
    sub_1BCA7E0(&SupportServantData___TypeInfo, v16, v17);
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&SupportServantData_TypeInfo, v18, v19);
    byte_4B12B5B = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_73;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v22 = 0LL;
  p_supportServantData = (unsigned int **)&v9->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deckIndex);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v22 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v25 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_73;
    if ( v22 >= v25[6] )
LABEL_74:
      sub_1BCAA44(this, deckIndex);
    *(_QWORD *)&v25[i] = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v25[i], 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ++v22;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_73;
  v27 = *(_QWORD *)&mainSupportDeckIds->max_length;
  v28 = (unsigned int)v27;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_73;
    v55 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v56 = sub_1BCA888(SupportServantData___TypeInfo, (unsigned int)(v55 + v27));
    *p_supportServantData = (unsigned int *)v56;
    sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v56, v57, v58, v59, v60, v61, v62);
    if ( (int)v27 < 1 )
    {
      v64 = 0;
LABEL_52:
      if ( (int)v55 < 1 )
        goto LABEL_69;
      v78 = 0LL;
      while ( 1 )
      {
        v79 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v79 )
          break;
        if ( v78 >= v79->max_length )
          goto LABEL_74;
        if ( v79->m_Items[v78 + 1] >= 1 )
        {
          v80 = *p_supportServantData;
          v81 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, deckIndex, v36, v37);
          SupportServantData___ctor(v81, 0LL);
          if ( !v80 )
            break;
          if ( v81 )
          {
            this = (SupportSelectRootComponent_o *)sub_1BCA91C(v81, *(_QWORD *)(*(_QWORD *)v80 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v64 >= v80[6] )
            goto LABEL_74;
          v88 = &v80[2 * v64];
          *((_QWORD *)v88 + 4) = v81;
          sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 8), (int64_t)v81, v82, v83, v84, v85, v86, v87);
          v89 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v64 >= v89[6] )
            goto LABEL_74;
          v90 = v9->fields.supportInfoJump;
          if ( !v90 )
            break;
          v91 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v91 )
            break;
          if ( v78 >= v91->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v89[2 * v64 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33991224(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v90->fields.kind,
            v90->fields.isSelect,
            v90->fields.eventSetupInfo,
            1,
            v91->m_Items[v78 + 1],
            0LL);
          ++v64;
        }
        if ( (unsigned int)v55 == ++v78 )
          goto LABEL_69;
      }
    }
    else
    {
      v63 = 0LL;
      v64 = 0;
      while ( 1 )
      {
        v65 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v65 )
          break;
        if ( v63 >= v65->max_length )
          goto LABEL_74;
        if ( v65->m_Items[v63 + 1] >= 1 )
        {
          v66 = *p_supportServantData;
          v67 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, deckIndex, v36, v37);
          SupportServantData___ctor(v67, 0LL);
          if ( !v66 )
            break;
          if ( v67 )
          {
            this = (SupportSelectRootComponent_o *)sub_1BCA91C(v67, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
            if ( !this )
            {
LABEL_75:
              v101 = sub_1BCAA60();
              sub_1BCA908(v101, 0LL);
            }
          }
          if ( v64 >= v66[6] )
            goto LABEL_74;
          v74 = &v66[2 * v64];
          *((_QWORD *)v74 + 4) = v67;
          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 8), (int64_t)v67, v68, v69, v70, v71, v72, v73);
          v75 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v64 >= v75[6] )
            goto LABEL_74;
          v76 = v9->fields.supportInfoJump;
          if ( !v76 )
            break;
          v77 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v77 )
            break;
          if ( v63 >= v77->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v75[2 * v64 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33991224(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v76->fields.kind,
            v76->fields.isSelect,
            v76->fields.eventSetupInfo,
            0,
            v77->m_Items[v63 + 1],
            0LL);
          ++v64;
        }
        if ( v28 == ++v63 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1BCAA3C(this, deckIndex);
  }
  v29 = sub_1BCA888(SupportServantData___TypeInfo, (unsigned int)v27);
  *p_supportServantData = (unsigned int *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v29, v30, v31, v32, v33, v34, v35);
  if ( (int)v27 >= 1 )
  {
    v38 = -(__int64)(unsigned int)v27;
    v39 = 8LL;
    v40 = 8LL;
    do
    {
      v41 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v41 )
        goto LABEL_73;
      v42 = v39 - 8;
      if ( v39 - 8 >= (unsigned __int64)v41->max_length )
        goto LABEL_74;
      if ( *((int *)&v41->obj.klass + v39) >= 1 )
      {
        v43 = *p_supportServantData;
        v44 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, deckIndex, v36, v37);
        SupportServantData___ctor(v44, 0LL);
        if ( !v43 )
          goto LABEL_73;
        if ( v44 )
        {
          this = (SupportSelectRootComponent_o *)sub_1BCA91C(v44, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v42 >= v43[6] )
          goto LABEL_74;
        *(_QWORD *)&v43[v40] = v44;
        sub_1BCA784((PartyOrganizationUtility_o *)&v43[v40], (int64_t)v44, v45, v46, v47, v48, v49, v50);
        v51 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v42 >= v51[6] )
          goto LABEL_74;
        v52 = v9->fields.supportInfoJump;
        if ( !v52 )
          goto LABEL_73;
        v53 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v53 )
          goto LABEL_73;
        if ( v42 >= v53->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v51[v40];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_33991224(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v52->fields.kind,
          v52->fields.isSelect,
          v52->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v53->obj.klass + v39),
          0LL);
      }
      ++v39;
      v40 += 2LL;
    }
    while ( v38 + v39 != 8 );
  }
LABEL_69:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v94 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, deckIndex, v36, v37);
  System_Action___ctor(v94, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v94;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  this = (SupportSelectRootComponent_o *)v9->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_73;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL);
}


void __fastcall SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SupportSelectRootComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v38; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v41; // w21
  unsigned __int64 v42; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x26
  unsigned int *v45; // x8
  struct SupportInfoJump_o *v46; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *v52; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  SupportSelectRootComponent___c_c *v54; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v56; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  unsigned int v65; // w0
  int64_t v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x2
  __int64 v74; // x3
  void *monitor; // x8
  __int64 v76; // x24
  __int64 v77; // x23
  unsigned __int64 v78; // x25
  unsigned int *v79; // x26
  SupportServantData_o *v80; // x22
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  unsigned int *v87; // x9
  struct SupportInfoJump_o *v88; // x8
  __int64 v89; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v92; // x21
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct SupportInfoJump_o *v99; // x8
  QuestRestrictionInfo_o *v100; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v102; // x0

  v8 = this;
  if ( (byte_4B12B5C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v17, v18);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&int___TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v27, v28);
    sub_1BCA7E0(&SupportServantData___TypeInfo, v29, v30);
    sub_1BCA7E0(&SupportServantData_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v33, v34);
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&SupportSelectRootComponent___c_TypeInfo, v35, v36);
    byte_4B12B5C = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  v38 = v8->fields.supportInfoJump;
  if ( !v38 )
    goto LABEL_57;
  questRestrictionInfo = v38->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v41 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
  else
LABEL_11:
    v41 = 1;
  v42 = 0LL;
  p_supportServantData = (unsigned int **)&v8->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v42 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v45 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_57;
    if ( v42 >= v45[6] )
      goto LABEL_58;
    *(_QWORD *)&v45[i] = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v45[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v42;
  }
  v46 = v8->fields.supportInfoJump;
  if ( !v46 || (followerInfo = v46->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1BCAA3C(this, method);
  if ( v41 )
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.mainSupportDeckIds;
    if ( !this )
      goto LABEL_57;
  }
  else
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.eventSupportDeckIds;
    if ( !this )
      goto LABEL_57;
  }
  v48 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( !v48 )
    goto LABEL_28;
  v52 = v48;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA91C(v48, int___TypeInfo);
  if ( !v53 )
  {
    sub_1BCACFC(v52);
LABEL_28:
    v53 = 0LL;
  }
  v54 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v49);
    v54 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v54->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54, v49);
      v54 = SupportSelectRootComponent___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v49, v50, v51);
    System_Func_int__bool____ctor(
      _9__49_0,
      v56,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = System_Linq_Enumerable__Where_int_(
          v53,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v65 = System_Linq_Enumerable__Count_int_(v64, (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  v66 = sub_1BCA888(SupportServantData___TypeInfo, v65);
  *p_supportServantData = (unsigned int *)v66;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.supportServantData, v66, v67, v68, v69, v70, v71, v72);
  if ( !v53 )
    goto LABEL_57;
  monitor = v53[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v76 = 8LL;
    v77 = 8LL;
    while ( 1 )
    {
      v78 = v76 - 8;
      if ( v76 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v53->klass + v76) >= 1 )
      {
        v79 = *p_supportServantData;
        v80 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, method, v73, v74);
        SupportServantData___ctor(v80, 0LL);
        if ( !v79 )
          goto LABEL_57;
        if ( v80 )
        {
          this = (SupportSelectRootComponent_o *)sub_1BCA91C(v80, *(_QWORD *)(*(_QWORD *)v79 + 64LL));
          if ( !this )
          {
            v102 = sub_1BCAA60();
            sub_1BCA908(v102, 0LL);
          }
        }
        if ( v78 >= v79[6] )
          break;
        *(_QWORD *)&v79[v77] = v80;
        sub_1BCA784((PartyOrganizationUtility_o *)&v79[v77], (int64_t)v80, v81, v82, v83, v84, v85, v86);
        v87 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v78 >= v87[6] )
          break;
        v88 = v8->fields.supportInfoJump;
        if ( !v88 )
          goto LABEL_57;
        if ( v78 >= LODWORD(v53[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v87[v77];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_33992064(
          (SupportServantData_o *)this,
          v88->fields.followerInfo,
          v88->fields.kind,
          v88->fields.isSelect,
          v88->fields.eventSetupInfo,
          v88->fields.questRestrictionInfo,
          *((_DWORD *)&v53->klass + v76),
          0LL);
      }
      LODWORD(monitor) = v53[1].monitor;
      v89 = v76 - 7;
      ++v76;
      v77 += 2LL;
      if ( v89 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1BCAA44(this, method);
  }
LABEL_51:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v92 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v73, v74);
  System_Action___ctor(v92, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v92;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = v8->fields.supportInfoJump;
  if ( !v99 )
    goto LABEL_57;
  v100 = v99->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v100, this->fields.kind, 0LL, 0LL);
}


void __fastcall SupportSelectRootComponent__StartUp(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  int32_t Int; // w20
  BalanceConfig_c *v31; // x8
  int v32; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v34; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v44; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v48; // x9
  struct System_Int32_array *v49; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 j; // x25
  unsigned __int64 v58; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v60; // x9
  struct System_Int32_array *v61; // x9
  SupportSelectRootComponent_o *v62; // x0
  const MethodInfo *v63; // x4
  SupportSelectRootComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v71; // x5
  int64_t v72; // x2
  __int64 v73; // x3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v79; // x8
  unsigned __int64 v80; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v82; // x21
  SupportServantData_array *v83; // x22
  SupportSelectMenu_CallbackFunc_o *v84; // x23
  const MethodInfo *v85; // x3
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v89; // x24
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x5
  __int64 v92; // x2
  __int64 v93; // x3
  struct SupportSelectMenu_o *v94; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  const MethodInfo *v103; // x1
  struct SupportSelectMenu_o *v104; // x8
  int64_t v105; // x2
  __int64 v106; // x3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct SupportServantData_array *v111; // x20
  __int64 v112; // x8
  unsigned __int64 v113; // x21
  struct EventUpValSetupInfo_o *v114; // x1
  SupportSelectMenu_o *v115; // x20
  SupportServantData_array *v116; // x21
  int32_t v117; // w22
  SupportSelectMenu_CallbackFunc_o *v118; // x23
  const MethodInfo *v119; // x3
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v123; // x24
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x5
  const MethodInfo *v126; // x2
  struct SupportServantData_array *v127; // x8
  bool v128; // w1
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  System_Action_o *v132; // x20
  __int64 v133; // x1
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B12B5D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&SupportSelectMenu_CallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&int___TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v14, v15);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v16, v17);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v18, v19);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v20, v21);
    sub_1BCA7E0(&StringLiteral_12623/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v22, v23);
    byte_4B12B5D = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12623/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
      v31 = BalanceConfig_TypeInfo;
    }
    v32 = v31->static_fields->SupportDeckMax - 1;
    if ( Int >= v32 )
      Int = v32;
    deckIndex = Int;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v34 = (struct System_Int32_array *)sub_1BCA888(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v34;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int64_t)v34,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v44 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw, v27);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v44 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_76;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v44 < (int)max_length )
      {
        if ( v44 >= max_length )
          goto LABEL_77;
        v48 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_76;
        if ( v44 >= v48->max_length )
          goto LABEL_77;
        *((_DWORD *)&v48->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw, v27);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v49 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v49;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int64_t)v49,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v58 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw, v27);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v58 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_76;
      v60 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v58 < (int)v60 )
      {
        if ( v58 >= v60 )
          goto LABEL_77;
        v61 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_76;
        if ( v58 >= v61->max_length )
          goto LABEL_77;
        *((_DWORD *)&v61->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v27);
    SupportSelectRootComponent__CopySupportData(
      v62,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v63);
    SupportSelectRootComponent__CopySupportData(
      v64,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v65);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v66);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v67);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v68);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_37890892(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            81,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v69);
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
                  v71);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v79 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v79 >= 1 )
                  {
                    v80 = 0LL;
                    while ( v80 < (unsigned int)v79 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v80];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          (int64_t)eventSetupInfo,
                          v72,
                          v73,
                          v74,
                          v75,
                          v76,
                          v77);
                      }
                      LODWORD(v79) = supportServantData->max_length;
                      if ( (__int64)++v80 >= (int)v79 )
                        goto LABEL_49;
                    }
LABEL_77:
                    sub_1BCAA44(followerQuestInfomationDraw, v27);
                  }
LABEL_49:
                  v82 = this->fields.supportSelectMenu;
                  v83 = this->fields.supportServantData;
                  v84 = (SupportSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              SupportSelectMenu_CallbackFunc_TypeInfo,
                                                              v27,
                                                              v72,
                                                              v73);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v84,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v85);
                  v89 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1BCAA2C(
                                                                      SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                                      v86,
                                                                      v87,
                                                                      v88);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v89,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v90);
                  if ( v82 )
                  {
                    SupportSelectMenu__Open(v82, v83, Int, v84, v89, v91);
                    v94 = this->fields.supportSelectMenu;
                    if ( v94 )
                    {
                      indicator = v94->fields.indicator;
                      v96 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v92, v93);
                      System_Action___ctor(
                        v96,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v96;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int64_t)v96,
                          v97,
                          v98,
                          v99,
                          v100,
                          v101,
                          v102);
                        goto LABEL_71;
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
LABEL_76:
    sub_1BCAA3C(followerQuestInfomationDraw, v27);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v25);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v24);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v28);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  TitleInfoControl__setTitleInfo_37890892(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    82,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v103);
  v104 = this->fields.supportSelectMenu;
  if ( !v104 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v104->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v111 = this->fields.supportServantData;
  if ( !v111 )
    goto LABEL_76;
  v112 = *(_QWORD *)&v111->max_length;
  if ( (int)v112 >= 1 )
  {
    v113 = 0LL;
    while ( v113 < (unsigned int)v112 )
    {
      followerQuestInfomationDraw = v111->m_Items[v113];
      if ( followerQuestInfomationDraw )
      {
        v114 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v114;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int64_t)v114,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
      }
      LODWORD(v112) = v111->max_length;
      if ( (__int64)++v113 >= (int)v112 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v115 = this->fields.supportSelectMenu;
  v116 = this->fields.supportServantData;
  v117 = deckIndex;
  v118 = (SupportSelectMenu_CallbackFunc_o *)sub_1BCAA2C(SupportSelectMenu_CallbackFunc_TypeInfo, v27, v105, v106);
  SupportSelectMenu_CallbackFunc___ctor(
    v118,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v119);
  v123 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1BCAA2C(
                                                       SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                       v120,
                                                       v121,
                                                       v122);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v123,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v124);
  if ( !v115 )
    goto LABEL_76;
  SupportSelectMenu__Open(v115, v116, v117, v118, v123, v125);
  v127 = this->fields.supportServantData;
  if ( !v127 )
    goto LABEL_76;
  v128 = (int)v127->max_length >= 2 && v127->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v128, v126);
LABEL_71:
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.backSkinSprite;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)followerQuestInfomationDraw,
                                                          0LL);
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v132 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v129, v130, v131);
  System_Action___ctor(v132, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v133);
  AtlasManager__LoadUISkin(v132, 2, 1, 0LL);
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
  struct System_Int32_array *tempFixMainQuestSupportDeckIds; // x8
  unsigned __int64 v16; // x23
  struct System_Int32_array *v17; // x8
  char *v18; // x8
  struct System_Int32_array *v19; // x9
  int32_t v20; // w8

  v8 = this;
  if ( (byte_4B12B6F & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&deckId);
    byte_4B12B6F = 1;
  }
  if ( isEvent )
  {
    tempFixEventQuestSupportDeckIds = v8->fields.tempFixEventQuestSupportDeckIds;
    if ( !tempFixEventQuestSupportDeckIds )
      goto LABEL_38;
    if ( tempFixEventQuestSupportDeckIds->max_length <= idx )
      goto LABEL_39;
    v10 = tempFixEventQuestSupportDeckIds->m_Items[idx + 1];
    v11 = 0LL;
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    v12 = idx;
    while ( 1 )
    {
      if ( !LODWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&idx);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= this->fields.applyIconObj[7].fields.m_CachedPtr )
        break;
      if ( v10 != deckId && idx != v11 )
      {
        v13 = v8->fields.tempFixEventQuestSupportDeckIds;
        if ( !v13 )
          goto LABEL_38;
        if ( v11 >= v13->max_length )
          goto LABEL_39;
        v14 = (char *)v13 + 4 * v11;
        if ( *((_DWORD *)v14 + 8) == deckId )
          *((_DWORD *)v14 + 8) = 0;
      }
      ++v11;
    }
    v19 = v8->fields.tempFixEventQuestSupportDeckIds;
  }
  else
  {
    tempFixMainQuestSupportDeckIds = v8->fields.tempFixMainQuestSupportDeckIds;
    if ( !tempFixMainQuestSupportDeckIds )
      goto LABEL_38;
    if ( tempFixMainQuestSupportDeckIds->max_length <= idx )
      goto LABEL_39;
    v10 = tempFixMainQuestSupportDeckIds->m_Items[idx + 1];
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    v16 = 0LL;
    v12 = idx;
    while ( 1 )
    {
      if ( !LODWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&idx);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v16 >= SHIDWORD(this->fields.applyIconObj[7].monitor) )
        break;
      if ( v10 != deckId && idx != v16 )
      {
        v17 = v8->fields.tempFixMainQuestSupportDeckIds;
        if ( !v17 )
          goto LABEL_38;
        if ( v16 >= v17->max_length )
          goto LABEL_39;
        v18 = (char *)v17 + 4 * v16;
        if ( *((_DWORD *)v18 + 8) == deckId )
          *((_DWORD *)v18 + 8) = 0;
      }
      ++v16;
    }
    v19 = v8->fields.tempFixMainQuestSupportDeckIds;
  }
  if ( v10 == deckId )
    v20 = 0;
  else
    v20 = deckId;
  if ( !v19 )
LABEL_38:
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1BCAA44(this, *(_QWORD *)&idx);
  v19->m_Items[v12 + 1] = v20;
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
    sub_1BCAA3C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SupportSelectRootComponent_o *v8; // x19
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v10; // x2

  v8 = this;
  if ( (byte_4B12B61 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method,
                                             v2);
    byte_4B12B61 = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v8->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v8, 0LL, v10);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v12; // x0
  struct SupportServantData_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BalanceConfig_c *v20; // x0
  struct SupportServantData_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BalanceConfig_c *v28; // x0
  struct SupportServantData_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Instance; // x0
  __int64 v37; // x1

  if ( (byte_4B12B55 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&SupportServantData___TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_13259/*"SvtEqScrollBarValue"*/, v8, v9);
    byte_4B12B55 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (struct SupportServantData_array *)sub_1BCA888(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v12->static_fields->SupportDeckMax);
    this->fields.supportServantData = v13;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.supportServantData,
      (int64_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v20 = BalanceConfig_TypeInfo;
    }
    v21 = (struct SupportServantData_array *)sub_1BCA888(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v20->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v21;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.orgSupportServantData,
      (int64_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v28 = BalanceConfig_TypeInfo;
    }
    v29 = (struct SupportServantData_array *)sub_1BCA888(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v28->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v29;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.tmpSupportServantData,
      (int64_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v10);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13259/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v37);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppClass *v30; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v32; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  Il2CppObject *v42; // x1
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  Il2CppObject *v45; // x10
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v50; // x1
  struct SupportInfoJump_o *v51; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  EventUpValSetupInfo_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x20
  __int64 v69; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v71; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  EventUpValSetupInfo_o *v75; // x21
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  const MethodInfo *v82; // x1

  if ( (byte_4B12B5E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventQuestMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v18, v19);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v28, v29);
    byte_4B12B5E = 1;
  }
  if ( data )
  {
    v30 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
        v32 = data;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v32;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v30 )
        v42 = data;
      else
        v42 = 0LL;
    }
    else
    {
      v42 = 0LL;
    }
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.supportInfoJump,
      (int64_t)v42,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v43 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v44 = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v44 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v44 - 1] == SceneJumpInfo_TypeInfo )
        v45 = data;
      else
        v45 = 0LL;
    }
    else
    {
      v45 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v45;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v44 )
    {
      if ( data->klass->_2.typeHierarchy[v44 - 1] == v43 )
        v40 = data;
      else
        v40 = 0LL;
    }
    else
    {
      v40 = 0LL;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.supportInfoJump, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    v40 = 0LL;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_sceneJumpInfo, (int64_t)v40, v34, v35, v36, v37, v38, v39);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v46);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v51 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v51->fields.otherUserGameEntity || !v51->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v71 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        v75 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v72, v73, v74);
        EventUpValSetupInfo___ctor_39629568(v75, v71, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v75;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
          (int64_t)v75,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
        SupportSelectRootComponent__StartUp(this, v82);
        return;
      }
    }
LABEL_41:
    sub_1BCAA3C(bgTxtSprite, v47);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !*p_supportInfoJump )
    goto LABEL_41;
  questRestrictionInfo = (*p_supportInfoJump)->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !bgTxtSprite )
    goto LABEL_41;
  OngoingQuestTargetEventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetOngoingQuestTargetEventIds(
                                                                                      (EventQuestMaster_o *)bgTxtSprite,
                                                                                      questRestrictionInfo->fields.questId,
                                                                                      questRestrictionInfo->fields.questPhase,
                                                                                      0LL,
                                                                                      0LL);
  v54 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v58 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v55, v56, v57);
  EventUpValSetupInfo___ctor_39629568(v58, v54, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventSetupInfo, (int64_t)v58, v59, v60, v61, v62, v63, v64);
  v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v65, v66, v67);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69);
  AtlasManager__LoadOutGameAtlas(v68, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1BCAA3C(0LL, method);
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
  __int64 v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v6; // w20
  __int64 v7; // x23
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x0

  v4 = this;
  if ( (byte_4B12B86 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BCA7E0(&SupportServantData_TypeInfo, method, v2);
    byte_4B12B86 = 1;
  }
  supportServantData = v4->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1BCAA3C(this, method);
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
      v9 = (SupportServantData_o *)sub_1BCAA2C(SupportServantData_TypeInfo, method, v2, v3);
      SupportServantData___ctor(v9, 0LL);
      if ( v9 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BCA91C(v9, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v16 = sub_1BCAA60();
          sub_1BCA908(v16, 0LL);
        }
      }
      if ( v6 >= supportServantData->max_length )
LABEL_17:
        sub_1BCAA44(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v7) = (Il2CppClass *)v9;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)supportServantData + v7),
        (int64_t)v9,
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
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v12; // x8
  SupportServantData_o *v13; // x23
  struct SupportServantData_array *v14; // x8
  struct SupportServantData_array *v15; // x8
  SupportServantData_o *v16; // x23
  char v17; // w20
  struct SupportServantData_array *v18; // x8

  if ( (byte_4B12B85 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, servant, equip);
    byte_4B12B85 = 1;
  }
  v7 = 0;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)servant);
  while ( 1 )
  {
    OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    if ( v7 >= SHIDWORD(OldServant[1].fields.oldEquipIdList->m_Items[16]) )
    {
      v17 = 0;
      goto LABEL_26;
    }
    if ( servant )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_31;
      OldServant = supportServantData->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, v7, 0LL);
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v12->max_length )
        goto LABEL_31;
      v13 = OldServant;
      OldServant = v12->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, 0LL);
      if ( v13 != OldServant )
        break;
    }
    if ( equip )
    {
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v14->max_length )
        goto LABEL_31;
      OldServant = v14->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, 0LL);
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v15->max_length )
        goto LABEL_31;
      v16 = OldServant;
      OldServant = v15->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, 0LL);
      if ( v16 != OldServant )
        break;
    }
    ++v7;
  }
  v17 = 1;
LABEL_26:
  v18 = this->fields.supportServantData;
  if ( !v18 )
    goto LABEL_30;
  if ( (unsigned int)CenterNum >= v18->max_length )
LABEL_31:
    sub_1BCAA44(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1BCAA3C(OldServant, v8);
  return (v17 | SupportServantData__IsChangeDeckName(OldServant, 0LL)) & 1;
}


void __fastcall SupportSelectRootComponent__modifyCenterItemCallBack(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t CenterNum; // w20
  const MethodInfo *v11; // x1
  System_Int32_array *eventSupportDeckIds; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  const MethodInfo *v17; // x5
  int32_t v18; // w3
  char v19; // w1
  char v20; // w2
  int32_t v21; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v25; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  System_Int32_array *v29; // x22
  int32_t v30; // w21
  int32_t v31; // w0
  int32_t v32; // w20
  const MethodInfo *v33; // x4

  if ( (byte_4B12B60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    byte_4B12B60 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
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
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      v18 = 0;
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
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
      v21 = 0;
      v18 = v31 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v19 = ReturnTypeByQuestId == 0;
    v20 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v26 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v26,
                            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
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
                                                    (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v20 = CenterNum >= max_length;
      v19 = CenterNum < max_length;
      v18 = v30;
      goto LABEL_34;
    }
LABEL_40:
    sub_1BCAA44(eventSupportDeckIds, v13);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v18 = (_DWORD)eventSupportDeckIds + 1;
  v19 = 1;
  v20 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v21 = v18;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v19, v20, v18, v21, v17);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v32 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v32,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v14),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_1BCAA3C(eventSupportDeckIds, v13);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v32,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v33);
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
    sub_1BCAA3C(blackMask, editOn);
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
    sub_1BCAA3C(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B12B8B & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectRootComponent___c_TypeInfo, v1, v2);
    byte_4B12B8B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SupportSelectRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PartyOrganizationUtility_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B12B8C & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B12B8C = 1;
  }
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v12; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  Il2CppObject *v18; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v21; // w21
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_4B12B8D & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_OnBackSelect__, v7, v8);
    byte_4B12B8D = 1;
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
      sub_1BCAA44(_4__this, isDecide);
    v12 = supportServantData->m_Items[selectNum];
    if ( !v12 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v12->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v18 = (Il2CppObject *)this->fields.__4__this;
    if ( !v18
      || (monitor = (System_Int32_array *)v18[18].monitor,
          klass = (System_Int32_array *)v18[19].klass,
          v21 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                  SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                                  isDecide,
                                                                  v16,
                                                                  v17),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v18,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1BCAA3C(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v21,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v10; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v13; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v16; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  Il2CppObject *v19; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v22; // w19
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v24; // x3

  if ( (byte_4B12B8E & 1) == 0 )
  {
    sub_1BCA7E0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v7, v8);
    byte_4B12B8E = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_15;
    supportServantData = v10->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v10->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BCAA44(_4__this, isDecide);
    v13 = supportServantData->m_Items[selectNum];
    if ( !v13 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v13->fields.eventSetupInfo2;
    v16 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v19 = (Il2CppObject *)this->fields.__4__this;
    if ( !v19
      || (monitor = (System_Int32_array *)v19[18].monitor,
          klass = (System_Int32_array *)v19[19].klass,
          v22 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                     SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                                     isDecide,
                                                                     v17,
                                                                     v18),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v19,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v24),
          !v16) )
    {
LABEL_15:
      sub_1BCAA3C(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v16,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v22,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}