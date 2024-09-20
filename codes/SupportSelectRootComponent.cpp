void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A57B87 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectRootComponent_TypeInfo);
    byte_4A57B87 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57B86 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A57B86 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1B88658(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v7, v8, v9);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4A57B61 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12467/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4A57B61 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12467/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4A57B80 & 1) == 0 )
  {
    sub_1B885B0(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_4A57B80 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B88814(CenterNum, v4);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1B887FC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          v10),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1B8880C(CenterNum, v4);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v9, v11);
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
    sub_1B8880C(titleInfo, method);
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
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4

  if ( (byte_4A57B79 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_4A57B79 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v9 = this->fields.copyTargetDeckId - 1, v9 >= max_length) )
    sub_1B88814(CenterNum, v6);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = supportServantData->m_Items[v9];
  v13 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    v14);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1B8880C(CenterNum, v6);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v11, v12, v13, v15);
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

  if ( (byte_4A57B84 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B84 = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1B8880C(this, orgData);
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
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        }
        if ( v10 >= *((_DWORD *)&this->fields.applyIconObj[6].fields + 1) )
          break;
        if ( !toData )
          goto LABEL_18;
        if ( v8 >= toData->max_length || v8 >= orgData->max_length )
          sub_1B88814(this, orgData);
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

  if ( (byte_4A57B73 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    byte_4A57B73 = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close_33211820(cancelConfirmMenu, 0LL, method);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
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
    sub_1B8880C(cancelConfirmMenu, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckIdCancelConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4A57B72 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A57B72 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v6 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v8);
      return;
    }
LABEL_10:
    sub_1B8880C(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  SupportSelectEditMenu_o *deckNameInputMenu; // x0
  struct SupportDeckNameInputMenu_o *v8; // x20
  System_Action_o *v9; // x21
  System_Action_o *v10; // x1

  if ( (byte_4A57B81 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__);
    byte_4A57B81 = 1;
  }
  if ( !isDecide )
  {
    deckNameInputMenu = (SupportSelectEditMenu_o *)this->fields.deckNameInputMenu;
    if ( deckNameInputMenu )
    {
      v10 = 0LL;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B8880C(deckNameInputMenu, isDecide);
  }
  this->fields.editDeckName = changeName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.editDeckName,
    (int32_t)changeName,
    (int32_t)changeName,
    (int32_t)method);
  deckNameInputMenu = this->fields.supportEditMenu;
  if ( !deckNameInputMenu )
    goto LABEL_10;
  SupportSelectEditMenu__Close(deckNameInputMenu, (const MethodInfo *)isDecide);
  v8 = this->fields.deckNameInputMenu;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, 0LL);
  if ( !v8 )
    goto LABEL_10;
  deckNameInputMenu = (SupportSelectEditMenu_o *)v8;
  v10 = v9;
LABEL_9:
  SupportDeckNameInputMenu__Close_33217856(
    (SupportDeckNameInputMenu_o *)deckNameInputMenu,
    v10,
    (const MethodInfo *)changeName);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListCancel(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B8880C(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B8880C(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A57B6A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57B6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
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
        sub_1B88814(CenterNum, isDecide);
      v8 = supportServantData->m_Items[v5];
      if ( !v8 )
        goto LABEL_15;
      SupportServantData__CopyData(v8, supportServantData->m_Items[(int)CenterNum], 0, 0LL);
      SupportSelectRootComponent__SaveTemp(this, v5, v9);
    }
    CenterNum = this->fields.copyConfirmMenu;
    if ( CenterNum )
    {
      SupportSelectConfirmCopyMenu__Close(CenterNum, (const MethodInfo *)isDecide);
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
    sub_1B8880C(CenterNum, isDecide);
  }
  CenterNum = this->fields.copyConfirmMenu;
  if ( !CenterNum )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(CenterNum, (const MethodInfo *)isDecide);
}


void __fastcall SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_1B8880C(0LL, flag);
  SupportSelectConfirmMenu__Close_33227328(supportSelectConfirmMenu, 0LL, method);
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

  if ( (byte_4A57B7D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B7D = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_33;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    confirmDeckMenu = SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v8 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= supportServantData->max_length )
LABEL_34:
        sub_1B88814(confirmDeckMenu, isDecide);
      confirmDeckMenu = (__int64)supportServantData->m_Items[(int)confirmDeckMenu];
      if ( confirmDeckMenu )
      {
        SupportServantData__ResetDeckName((SupportServantData_o *)confirmDeckMenu, 0LL);
        for ( i = 0; ; ++i )
        {
          confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    sub_1B8880C(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20

  if ( (byte_4A57B5C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__);
    byte_4A57B5C = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1B8880C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A57B7B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B7B = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_30;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1B88814(confirmDeckMenu, isDecide);
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
    sub_1B8880C(confirmDeckMenu, isDecide);
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

  if ( (byte_4A57B7F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B7F = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_22;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, (const MethodInfo *)isDecide);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
          sub_1B88814(confirmDeckMenu, isDecide);
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
    sub_1B8880C(confirmDeckMenu, isDecide);
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
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4

  if ( (byte_4A57B78 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4A57B78 = 1;
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
      sub_1B88814(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v10 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v12);
    if ( !supportEditMenu )
LABEL_10:
      sub_1B8880C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v10, isEdit, v11, v13);
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

  if ( (byte_4A57B6B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57B6B = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1B8880C(supportSelectMenu, isDecide);
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

  if ( (byte_4A57B68 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57B68 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServantWithQuest(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A57B69 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_4A57B69 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
    sub_1B8880C(CenterNum, v7);
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
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x2
  struct SupportServantData_array *v22; // x8
  SupportServantData_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  struct SupportServantData_array *v31; // x22
  SupportServantData_o *v32; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v35; // x24
  System_Int32_array *v36; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v38; // x2
  struct SupportServantData_array *v39; // x22
  SupportServantData_o *v40; // x8
  EventUpValSetupInfo_o *v41; // x27
  System_Int32_array *v42; // x25
  System_Int32_array *v43; // x26
  CommonUI_o *v44; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v45; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  SupportSelectMenu_o *v49; // x20
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  bool v52; // w1
  SupportSelectRootComponent_o *v53; // x0
  SupportSelectMenu_o *v54; // x20
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  struct SupportServantData_array *v57; // x8
  __int64 v58; // x21
  __int64 v59; // x22
  __int64 v60; // x23
  struct SupportServantData_array *v61; // x8
  SupportServantData_o *v62; // x8
  struct SupportServantData_array *v63; // x8
  SupportServantData_o *v64; // x8
  int v65; // w22
  struct SupportServantData_array *v66; // x8
  SupportServantData_o *v67; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v69; // w22
  struct SupportServantData_array *v70; // x8
  SupportServantData_o *v71; // x8
  QuestRestrictionInfo_o *v72; // x20
  __int64 v73; // x23
  __int64 v74; // x24
  int32_t v75; // w0
  int32_t v76; // w23
  int32_t v77; // w24
  PartyOrganizationUtility_c *v78; // x0
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v82; // x8
  int64_t v83; // x21
  struct SupportServantData_array *v84; // x8
  SupportServantData_o *v85; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  struct SupportServantData_array *v89; // x8
  SupportServantData_o *v90; // x8
  int32_t kind; // w20
  CommonUI_o *v92; // x22
  ServantLeaderInfo_o *v93; // x21
  ServantStatusDialog_EndDelegate_o *v94; // x23
  struct SupportServantData_array *v95; // x8
  struct SupportServantData_array *v96; // x8
  int64_t v97; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v99; // x8
  System_Reflection_MethodBase_o *v100; // x0
  struct SupportServantData_array *v101; // x8
  SupportServantData_o *v102; // x8
  int32_t v103; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v105; // x21
  ServantStatusDialog_EndDelegate_o *v106; // x23
  _QWORD *v107; // x0
  System_Reflection_MethodBase_o *v108; // x0
  _QWORD *v109; // x0
  System_Reflection_MethodBase_o *v110; // x0
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  const MethodInfo *v113; // x2
  int64_t v114; // x21
  ServantStatusDialog_FormationEndDelegate_o *v115; // x23
  Il2CppObject *v116; // x20
  ServantStatusDialog_EndDelegate_o *v117; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v119; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v121; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  int32_t v126; // w0
  SupportSelectRootComponent___c_c *v127; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v129; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v131; // x24
  struct SupportSelectRootComponent___c_StaticFields *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x0
  struct SupportServantData_array *v136; // x8
  SupportServantData_o *v137; // x0
  _QWORD *v138; // x0
  System_Reflection_MethodBase_o *v139; // x0
  const MethodInfo *v140; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v142; // x21
  SupportSelectRootComponent___c_c *v143; // x8
  System_Action_o *_9__66_2; // x23
  System_String_o *v145; // x22
  Il2CppObject *v146; // x24
  struct SupportSelectRootComponent___c_StaticFields *v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4A57B62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__);
    sub_1B885B0(&SupportSelectRootComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57B62 = 1;
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
        goto LABEL_140;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_179;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_180;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v17 = supportServantData->m_Items[CenterNum];
      v18 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B887FC(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        v19);
      if ( !cancelConfirmMenu )
        goto LABEL_179;
      CancelConfirmMenu__Open(cancelConfirmMenu, (int32_t)v11, v17, v18, v20);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v13);
      if ( (isUpdate & 1) != 0 )
      {
        v22 = this->fields.supportServantData;
        if ( !v22 )
          goto LABEL_179;
        if ( CenterNum < v22->max_length )
        {
          v23 = v22->m_Items[CenterNum];
          if ( v23 && SupportServantData__get_IsNoServant(v23, 0LL) )
          {
LABEL_15:
            v24 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v24 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v25 = (System_Reflection_MethodBase_o *)sub_1B88594(v24, v24[4]);
            OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v27 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v27,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              v28);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v27, v29);
              return;
            }
LABEL_179:
            sub_1B8880C(isUpdate, v11);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v21);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v111 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v111 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v112 = (System_Reflection_MethodBase_o *)sub_1B88594(v111, v111[4]);
          OverwriteAssetSoundName__PlaySystemSe(v112, 8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v11, v113);
          goto LABEL_140;
        }
LABEL_180:
        sub_1B88814(isUpdate, v11);
      }
      if ( this->fields.isEdit )
      {
        v109 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v109 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v110 = (System_Reflection_MethodBase_o *)sub_1B88594(v109, v109[4]);
        OverwriteAssetSoundName__PlaySystemSe(v110, 8, 0LL);
LABEL_140:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
        v53 = this;
        v52 = 0;
        this->fields.isDragSwapState = 0;
LABEL_141:
        SupportSelectRootComponent__setEditUI(v53, v52, v51);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v119 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v119 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v119->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v119->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v119);
          v119 = SupportSelectRootComponent___c_TypeInfo;
        }
        v121 = (Il2CppObject *)v119->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v121,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v123, v124);
      }
      v125 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
      v126 = System_Linq_Enumerable__Count_int_(
               v125,
               (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      v127 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v129 = v126;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v127 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v127->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v127->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v127);
          v127 = SupportSelectRootComponent___c_TypeInfo;
        }
        v131 = (Il2CppObject *)v127->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v131,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v132 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v132->__9__66_1 = _9__66_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v132->__9__66_1, (int32_t)_9__66_1, v133, v134);
      }
      v135 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v135,
                   (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v129 < 1 || (int)isUpdate <= 0 )
      {
        v136 = this->fields.supportServantData;
        if ( !v136 )
          goto LABEL_179;
        if ( CenterNum >= v136->max_length )
          goto LABEL_180;
        v137 = v136->m_Items[CenterNum];
        if ( v137 && SupportServantData__get_IsNoServant(v137, 0LL) )
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
      v138 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v138 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v139 = (System_Reflection_MethodBase_o *)sub_1B88594(v138, v138[4]);
      OverwriteAssetSoundName__PlaySystemSe(v139, 8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v140);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v30);
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
      v31 = this->fields.supportServantData;
      if ( !v31 )
        goto LABEL_179;
      if ( v31->max_length <= deckNum )
        goto LABEL_180;
      v32 = v31->m_Items[deckNum];
      if ( !v32 )
        goto LABEL_179;
      eventSetupInfo2 = v32->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v35 = this->fields.tempFixMainQuestSupportDeckIds;
      v36 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_179;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v31,
        deckNum,
        classPos,
        eventSetupInfo2,
        v14,
        v35,
        v36,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v38);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = this->fields.supportServantData;
      if ( !v39 )
        goto LABEL_179;
      if ( v39->max_length <= deckNum )
        goto LABEL_180;
      v40 = v39->m_Items[deckNum];
      if ( !v40 )
        goto LABEL_179;
      v41 = v40->fields.eventSetupInfo2;
      v42 = this->fields.tempFixMainQuestSupportDeckIds;
      v43 = this->fields.tempFixEventQuestSupportDeckIds;
      v44 = (CommonUI_o *)isUpdate;
      v45 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v44 )
        goto LABEL_179;
      CommonUI__OpenSupportServantEquipListMenu(v44, v39, deckNum, classPos, v41, v14, v42, v43, v45, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !supportSelectMenu )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v47);
      SupportSelectRootComponent__ChangeDeckName(this, v48);
      return;
    case 5:
      v49 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v49 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v49, isUpdate, v50);
      v52 = 1;
      this->fields.isDragSwapState = 1;
      v53 = this;
      goto LABEL_141;
    case 6:
      v54 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v54 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v54, isUpdate, v55);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v56);
      return;
    case 7:
      v57 = this->fields.supportServantData;
      if ( !v57 )
        goto LABEL_179;
      if ( v57->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v57->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v58 = *(_QWORD *)(isUpdate + 24);
      if ( !v58 )
        goto LABEL_125;
      v60 = *(_QWORD *)(v58 + 48);
      v59 = *(_QWORD *)(v58 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v150.fields.currentCryptoKey = v60;
      *(_QWORD *)&v150.fields.fakeValue = v59;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v150, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_125;
      v61 = this->fields.supportServantData;
      if ( !v61 )
        goto LABEL_179;
      if ( v61->max_length <= deckNum )
        goto LABEL_180;
      v62 = v61->m_Items[deckNum];
      if ( !v62 )
        goto LABEL_179;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v58,
                   v62->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_125;
      v63 = this->fields.supportServantData;
      if ( !v63 )
        goto LABEL_179;
      if ( v63->max_length <= deckNum )
        goto LABEL_180;
      v64 = v63->m_Items[deckNum];
      if ( !v64 )
        goto LABEL_179;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v58, v64->fields.questRestrictionInfo, 0LL) )
        goto LABEL_125;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      v65 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( v65 < 1 )
        goto LABEL_76;
      v66 = this->fields.supportServantData;
      if ( !v66 )
        goto LABEL_179;
      if ( v66->max_length <= deckNum )
        goto LABEL_180;
      v67 = v66->m_Items[deckNum];
      if ( !v67 )
        goto LABEL_179;
      questRestrictionInfo = v67->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_179;
      v69 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, v69, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v70 = this->fields.supportServantData;
      if ( !v70 )
        goto LABEL_179;
      if ( v70->max_length <= deckNum )
        goto LABEL_180;
      v71 = v70->m_Items[deckNum];
      if ( !v71 )
        goto LABEL_179;
      v72 = v71->fields.questRestrictionInfo;
      v74 = *(_QWORD *)(v58 + 48);
      v73 = *(_QWORD *)(v58 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v151.fields.currentCryptoKey = v74;
      *(_QWORD *)&v151.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v151, 0LL);
      v76 = *(_DWORD *)(v58 + 64);
      v77 = v75;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v58, 0LL);
      if ( !v72 )
        goto LABEL_179;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v72, v77, v76, isUpdate, v69, 1, 0LL) )
        goto LABEL_125;
LABEL_76:
      if ( !this->fields.supportInfoJump )
      {
LABEL_125:
        v107 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v107 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v108 = (System_Reflection_MethodBase_o *)sub_1B88594(v107, v107[4]);
        OverwriteAssetSoundName__PlaySystemSe(v108, 2, 0LL);
LABEL_128:
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_179;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v11);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( *(_BYTE *)(isUpdate + 148) )
      {
        v78 = PartyOrganizationUtility_TypeInfo;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v78 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v78->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_179;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v142 = (System_String_o *)isUpdate;
            v143 = SupportSelectRootComponent___c_TypeInfo;
            if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v143 = SupportSelectRootComponent___c_TypeInfo;
            }
            _9__66_2 = v143->static_fields->__9__66_2;
            v145 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( !v143->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v143);
                v143 = SupportSelectRootComponent___c_TypeInfo;
              }
              v146 = (Il2CppObject *)v143->static_fields->__9;
              _9__66_2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                _9__66_2,
                v146,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v147 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v147->__9__66_2 = _9__66_2;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v147->__9__66_2, (int32_t)_9__66_2, v148, v149);
            }
            if ( !Instance )
              goto LABEL_179;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v145,
              v142,
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
      v79 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v80 = (System_Reflection_MethodBase_o *)sub_1B88594(v79, v79[4]);
      OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0LL);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_179;
      supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
      *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
      *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v58 + 16);
      if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v82 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v82 )
        goto LABEL_179;
      if ( v82->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v82->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v83 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_125;
      v84 = this->fields.supportServantData;
      if ( !v84 )
        goto LABEL_179;
      if ( v84->max_length <= deckNum )
        goto LABEL_180;
      v85 = v84->m_Items[deckNum];
      if ( !v85 )
        goto LABEL_179;
      isFriendInfo = v85->fields.isFriendInfo;
      v87 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v87 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v88 = (System_Reflection_MethodBase_o *)sub_1B88594(v87, v87[4]);
      OverwriteAssetSoundName__PlaySystemSe(v88, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v89 = this->fields.supportServantData;
      if ( !v89 )
        goto LABEL_179;
      if ( v89->max_length <= deckNum )
        goto LABEL_180;
      v90 = v89->m_Items[deckNum];
      if ( !v90 )
        goto LABEL_179;
      kind = v90->fields.kind;
      v92 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v93 = *(ServantLeaderInfo_o **)(v83 + 24);
        v94 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v94,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v92 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30506432(v92, kind, v93, v94, 0LL);
      }
      else
      {
        v114 = *(_QWORD *)(v83 + 56);
        v115 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B887FC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v115,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v92 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30503800(v92, kind, v114, v115, 0LL, 0LL);
      }
      return;
    case 9:
      v95 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v95 )
        goto LABEL_179;
      if ( v95->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v95->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_125;
      v96 = this->fields.supportServantData;
      if ( !v96 )
        goto LABEL_179;
      if ( v96->max_length <= deckNum )
        goto LABEL_180;
      v97 = isUpdate;
      isUpdate = (int64_t)v96->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v99 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v99 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v100 = (System_Reflection_MethodBase_o *)sub_1B88594(v99, v99[4]);
      OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0LL);
      v101 = this->fields.supportServantData;
      if ( !v101 )
        goto LABEL_179;
      if ( v101->max_length <= deckNum )
        goto LABEL_180;
      v102 = v101->m_Items[deckNum];
      if ( !v102 )
        goto LABEL_179;
      if ( v102->fields.isFriendInfo )
      {
        if ( v102->fields.kind == 5 )
          v103 = 14;
        else
          v103 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_179;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v105 = (CommonUI_o *)isUpdate;
        v106 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v106,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v105 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog_30509528(v105, v103, equipTarget1, v106, 0LL, 0LL);
      }
      else
      {
        v116 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v117 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v117,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v116 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v116, 11, v97, 1, v117, 0LL, 0LL);
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
  int64_t v19; // x25
  struct EquipTargetInfo_o *v20; // x8
  __int128 v21; // q0
  int64_t v22; // x0
  const MethodInfo *v23; // x1
  int64_t v24; // x26
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v26; // x1
  struct SupportServantData_array *supportServantData; // x8
  int32_t v28; // w24
  struct SupportServantData_array *v29; // x8
  const MethodInfo *v30; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+80h] [xbp-70h]

  if ( (byte_4A57B67 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57B67 = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_41109412(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_41109412(v15->fields.svtId, 0LL);
LABEL_12:
  if ( leader1 && (v17 = leader1->fields.equipTarget1) != 0LL )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v18;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v34, 0LL, 0LL);
    v35 = v34;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v35;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
  if ( leader2 && (v20 = leader2->fields.equipTarget1) != 0LL )
  {
    v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v32, 0LL, 0LL);
    v34 = v32;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v31 = v34;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL);
  if ( classPos1 != classPos2 )
  {
    v24 = v22;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v23);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v28 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v24, v16, 0LL);
      v29 = this->fields.supportServantData;
      if ( !v29 )
        goto LABEL_39;
      if ( v28 < v29->max_length )
      {
        CenterNum = v29->m_Items[v28];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v19, v14, 0LL);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v28, v30);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v26);
              return;
            }
          }
        }
LABEL_39:
        sub_1B8880C(CenterNum, v26);
      }
    }
    sub_1B88814(CenterNum, v26);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v20; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v22; // x23
  UserServantLeaderEntity_o *v23; // x24
  UserServantLeaderEntity_o *v24; // x25
  int32_t v25; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  int32_t v27; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v29; // x8
  PartyOrganizationUtility_o *v30; // x23
  UserServantLeaderEntity_o *v31; // x25
  UserServantLeaderEntity_o *v32; // x26
  UserServantEntity_o *v33; // x8
  System_String_o *v34; // x22
  __int64 v35; // x8
  int32_t v36; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v39; // x21
  System_String_o *v40; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v42; // x23
  Il2CppObject *v43; // x19
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  System_String_o *v46; // x23
  CommonConfirmDialog_ClickDelegate_o *v47; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4A57B65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__);
    sub_1B885B0(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57B65 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_1B887FC(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor((SupportSelectRootComponent___c__DisplayClass71_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = item;
  v14 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)item, v15, v16);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v14 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B88814(UserServantLeaderEntity, v11);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v20 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v14 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v20->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v22 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v24 = userServantLeaderEntityList->m_Items[6];
          v23 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v51.fields.currentCryptoKey = v24;
          *(_QWORD *)&v51.fields.fakeValue = v23;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v51,
                                                              0LL);
          if ( !v20->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v25 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v20->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v14 )
            goto LABEL_42;
          v26 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v14 + 128LL);
          if ( !v26 )
            goto LABEL_42;
          v27 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                              v26[1],
                                                              0LL);
          if ( !v22 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v22,
                 &skillName,
                 &actMaxRarity[1],
                 v25,
                 v27,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v20->fields.isFriendInfo,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v29 = v20->fields.userServantLeaderEntityList;
                if ( v29 )
                {
                  v30 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v32 = v29->m_Items[8];
                  v31 = v29->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v52.fields.currentCryptoKey = v32;
                  *(_QWORD *)&v52.fields.fakeValue = v31;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                      v52,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v33 = (UserServantEntity_o *)v20->fields.userServantLeaderEntityList;
                    if ( v33 )
                    {
                      v34 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v33, 0LL);
                      v35 = *(_QWORD *)v14;
                      if ( *(_QWORD *)v14 )
                      {
                        v36 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v35 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(
                                                                              Name,
                                                                              0LL);
                          if ( v30 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v30,
                                                     actMaxRarity,
                                                     v34,
                                                     v36,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v39 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v39, 0LL);
                              if ( v39 )
                              {
                                System_Text_StringBuilder__Append_60868928(v39, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_60868928(v39, v40, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v42,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v42, 0LL);
                                  v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v44 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                                             v39,
                                                             v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v47,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v43 )
                                  {
                                    CommonUI__OpenConfirmDialog_30494344(
                                      (CommonUI_o *)v43,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v44,
                                      v45,
                                      v46,
                                      v47,
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
            sub_1B8880C(UserServantLeaderEntity, v11);
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
    v17);
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
    sub_1B88814(this, result);
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
    sub_1B8880C(this, *(_QWORD *)&result);
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
  System_Collections_Generic_List_object__o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  __int64 Instance; // x0
  __int64 v14; // x1
  BalanceConfig_c *v15; // x8
  __int64 v16; // x10
  unsigned __int64 v17; // x24
  int32_t v18; // w9
  int32_t v19; // w26
  __int64 v20; // x23
  __int64 v21; // x27
  struct SupportServantData_array *supportServantData; // x8
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x28
  struct SupportServantData_array *v26; // x8
  SupportServantData_o *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x19
  System_Func_object__bool__o *v29; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  ServantEntity_o *v31; // x27
  int32_t Rarity; // w0
  int v33; // w29
  int64_t v34; // x2
  int32_t v35; // w28
  System_String_o *v36; // x19
  Il2CppObject *v37; // x28
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x19
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x29
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v54; // [xsp+10h] [xbp-A0h]
  __int64 v55; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v56; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *Master_object; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v60; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A57B6D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1B885B0(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__);
    sub_1B885B0(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1B885B0(&StringLiteral_12388/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_1B885B0(&StringLiteral_12389/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_4A57B6D = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v11) )
      return (System_Collections_Generic_List_string__o *)v10;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v11) )
  {
    return (System_Collections_Generic_List_string__o *)v10;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v12);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_69:
    sub_1B8880C(Instance, v14);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v56 = (ServantLimitImageMaster_o *)Instance;
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = 184LL;
  if ( isMain )
    v16 = 180LL;
  v55 = *(unsigned int *)((char *)&v15->static_fields->CriticalRateToAddByQuickFirstBonus + v16);
  if ( *(int *)((char *)&v15->static_fields->CriticalRateToAddByQuickFirstBonus + v16) >= 1 )
  {
    v17 = 0LL;
    v54 = (unsigned int)idx;
    do
    {
      if ( v17 != v54 )
      {
        if ( !fixDeckIds )
          goto LABEL_69;
        if ( v17 >= fixDeckIds->max_length )
LABEL_70:
          sub_1B88814(Instance, v14);
        v18 = fixDeckIds->m_Items[v17 + 1];
        if ( v18 )
        {
          v19 = 0;
          v20 = v18 - 1;
          while ( 1 )
          {
            if ( !v15->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v15);
              v15 = BalanceConfig_TypeInfo;
            }
            if ( v19 >= v15->static_fields->SupportDeckMemberMax )
              break;
            v21 = sub_1B887FC(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v21,
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
                                  v19,
                                  0LL);
            if ( !v21 )
              goto LABEL_69;
            *(_QWORD *)(v21 + 16) = Instance;
            v25 = v21 + 16;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 16), Instance, v23, v24);
            if ( !*(_QWORD *)(v21 + 16) )
              goto LABEL_69;
            if ( *(_DWORD *)(*(_QWORD *)(v21 + 16) + 64LL) )
            {
              v26 = this->fields.supportServantData;
              if ( !v26 )
                goto LABEL_69;
              if ( (unsigned int)v20 >= v26->max_length )
                goto LABEL_70;
              v27 = v26->m_Items[v20];
              if ( !v27 )
                goto LABEL_69;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.userServantLeaderEntityList;
              v29 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v29,
                (Il2CppObject *)v21,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v30 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v29,
                      (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v30,
                           (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v25 )
                  goto LABEL_69;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_69;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v25 + 64LL),
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v25 )
                  goto LABEL_69;
                v31 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
                if ( !Instance )
                  goto LABEL_69;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v33 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v25 )
                    goto LABEL_69;
                  v34 = Instance;
                  Instance = (__int64)Master_object;
                  if ( !Master_object )
                    goto LABEL_69;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         v34,
                         *(_DWORD *)(*(_QWORD *)v25 + 64LL),
                         0LL) )
                  {
                    Instance = (__int64)v56;
                    if ( !*(_QWORD *)v25 )
                      goto LABEL_69;
                    if ( !entity )
                      goto LABEL_69;
                    if ( !v56 )
                      goto LABEL_69;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v56,
                                 *(_DWORD *)(*(_QWORD *)v25 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_69;
                    v35 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v35 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12388/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v60 = v33;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v60, v42, v43, v44);
                  if ( !v31 )
                    goto LABEL_69;
                  v45 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v31, v35, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v31, 0LL);
                  Instance = (__int64)System_String__Format_61721472(v41, v45, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12389/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v31 )
                    goto LABEL_69;
                  v36 = (System_String_o *)Instance;
                  v37 = (Il2CppObject *)ServantEntity__getName(v31, -1, -1, 0LL);
                  v38 = (Il2CppObject *)ServantEntity__getClassName(v31, 0LL);
                  Instance = (__int64)System_String__Format_61721404(v36, v37, v38, 0LL);
                }
                v14 = Instance;
                if ( !v10 )
                  goto LABEL_69;
                items = v10->fields._items;
                v49 = Method_System_Collections_Generic_List_string__Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_69;
                size = v10->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v51 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v51[4] = (Il2CppClass *)v14;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 4), v14, v39, v40);
                }
              }
            }
            v15 = BalanceConfig_TypeInfo;
            ++v19;
          }
        }
      }
      ++v17;
    }
    while ( v17 != v55 );
  }
  return (System_Collections_Generic_List_string__o *)v10;
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4A57B7C & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_4A57B7C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B88814(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B8880C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v7, v8, v10);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportServantData_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A57B54 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SupportServantData___TypeInfo);
    byte_4A57B54 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportServantData_array *)sub_1B88658(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v3->static_fields->SupportDeckMax);
  this->fields.supportServantData = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v4, v5, v6);
  SupportSelectRootComponent__RefreshSupportServantData(this, v7);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w23
  int64_t Servant; // x0
  int v5; // w8
  bool v6; // w20
  int32_t j; // w21
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v9; // x8
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v11; // x22
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  int64_t v14; // x22
  struct SupportServantData_array *v15; // x9
  SupportServantData_o *v16; // x9

  if ( (byte_4A57B85 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B85 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Servant = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v5 = *(_DWORD *)(*(_QWORD *)(Servant + 184) + 152LL);
    v6 = (int)i < v5;
    if ( (int)i >= v5 )
      break;
    for ( j = 0; ; ++j )
    {
      if ( !*(_DWORD *)(Servant + 224) )
      {
        j_il2cpp_runtime_class_init_0(Servant);
        Servant = (int64_t)BalanceConfig_TypeInfo;
      }
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_34;
      if ( i >= supportServantData->max_length )
        goto LABEL_35;
      v9 = supportServantData->m_Items[i];
      if ( !v9 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 164LL) )
        break;
      Servant = SupportServantData__getServant(v9, j, 0LL);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
        goto LABEL_35;
      v11 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, 0LL);
      if ( v11 != Servant )
        return 1;
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_34;
      if ( i >= v12->max_length )
        goto LABEL_35;
      Servant = (int64_t)v12->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL);
      v13 = this->fields.orgSupportServantData;
      if ( !v13 )
        goto LABEL_34;
      if ( i >= v13->max_length )
        goto LABEL_35;
      v14 = Servant;
      Servant = (int64_t)v13->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v14 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, 0LL) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v15 = this->fields.orgSupportServantData;
    if ( !v15 )
      goto LABEL_34;
    if ( i >= v15->max_length )
LABEL_35:
      sub_1B88814(Servant, method);
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_1B8880C(Servant, method);
    if ( System_String__op_Inequality(v9->fields._deckName_k__BackingField, v16->fields._deckName_k__BackingField, 0LL) )
      return v6;
  }
  return 0;
}


bool __fastcall SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x0

  if ( (byte_4A57B56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    byte_4A57B56 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4A57B55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    byte_4A57B55 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) >= 0;
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
  bool v9; // w9
  il2cpp_array_size_t v10; // w22
  signed __int64 v11; // x28
  __int64 v12; // x19
  int v13; // w8
  il2cpp_array_size_t v14; // w27
  int32_t i; // w23
  __int64 v16; // x24
  struct SupportServantData_array *supportServantData; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  struct SupportServantData_array *v21; // x8
  SupportServantData_o *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v24; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v28; // [xsp+10h] [xbp-70h]
  bool v29; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4A57B76 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1B885B0(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__);
    sub_1B885B0(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_4A57B76 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1B8880C(CenterNum, v7);
  v8 = *(_QWORD *)&fixDeckIds->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = (unsigned int)CenterNum;
    v11 = 0LL;
    v12 = (int)CenterNum;
    v28 = fixDeckIds;
    do
    {
      v29 = v9;
      if ( v11 >= (unsigned __int64)(unsigned int)v8 )
LABEL_29:
        sub_1B88814(CenterNum, v7);
      v13 = fixDeckIds->m_Items[v11 + 1];
      v14 = v13 - 1;
      if ( v13 >= 1 && v14 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[16]) )
            break;
          v16 = sub_1B887FC(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v16,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v10 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v12];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v16 )
            goto LABEL_28;
          *(_QWORD *)(v16 + 16) = CenterNum;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)CenterNum, v18, v19);
          v20 = *(_QWORD *)(v16 + 16);
          if ( !v20 )
            goto LABEL_28;
          if ( *(_DWORD *)(v20 + 64) )
          {
            v21 = this->fields.supportServantData;
            if ( !v21 )
              goto LABEL_28;
            if ( v14 >= v21->max_length )
              goto LABEL_29;
            v22 = v21->m_Items[v14];
            if ( !v22 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.userServantLeaderEntityList;
            v24 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v24,
              (Il2CppObject *)v16,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v25 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v24,
                    (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v25,
                   (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v9 = v29;
              return !v9;
            }
          }
        }
      }
      fixDeckIds = v28;
      ++v11;
      LODWORD(v8) = v28->max_length;
      v9 = v11 < (int)v8;
    }
    while ( v11 < (int)v8 );
  }
  return !v9;
}


bool __fastcall SupportSelectRootComponent__IsUpdateDeckId(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_Array_o *v6; // x22
  int monitor; // w25
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
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v20; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  int32_t v25; // w0
  SupportSelectRootComponent___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v28; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v30; // x23
  struct SupportSelectRootComponent___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w0
  bool v36; // w8

  if ( (byte_4A57B63 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__);
    sub_1B885B0(&SupportSelectRootComponent___c_TypeInfo);
    byte_4A57B63 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v6 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].klass;
  if ( !SelfUserGame )
    goto LABEL_40;
  monitor = (int)v6[12].monitor;
  if ( SelfUserGame[1].monitor )
  {
    v8 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B886EC(v8, int___TypeInfo);
      if ( !v10 )
        goto LABEL_17;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B88658(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v11->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v6[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1B8880C(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B88658(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v14->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v12 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v12 )
  {
    v13 = 0LL;
    goto LABEL_22;
  }
  v9 = v12;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B886EC(v12, int___TypeInfo);
  if ( !v13 )
  {
LABEL_17:
    sub_1B88ACC(v9);
    goto LABEL_18;
  }
LABEL_22:
  v15 = System_Linq_Enumerable__SequenceEqual_int_(
          v10,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v16 = v15 & System_Linq_Enumerable__SequenceEqual_int_(
                v13,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( (v16 & 1) == 0 )
    goto LABEL_37;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v18 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v18 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_0 = v18->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = SupportSelectRootComponent___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v20, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  v25 = System_Linq_Enumerable__Count_int_(v24, (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  v26 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v28 = v25;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v26 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v26->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = SupportSelectRootComponent___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v26->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v30, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v31 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v31->__9__67_1 = _9__67_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__67_1, (int32_t)_9__67_1, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  v35 = System_Linq_Enumerable__Count_int_(v34, (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v28 < 1 || v35 <= 0 )
    v36 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v36 = 0;
  return v36 || (v16 & 1) == 0;
}


bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4A57B57 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B57 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v20; // x22
  UserServantEntity_o *v21; // x8
  PartyOrganizationUtility_o *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v27; // w25
  UserServantEntity_o *v28; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x20
  __int64 v30; // x23
  __int64 v31; // x24
  Il2CppObject *v32; // x23
  PartyOrganizationUtility_o *v33; // x20
  UserServantEntity_o *v34; // x8
  System_String_o *v35; // x21
  EquipTargetInfo_o *v36; // x8
  int32_t v37; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v39; // x21
  System_String_o *v40; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  CommonConfirmDialog_ClickDelegate_o *v45; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4A57B64 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__);
    sub_1B885B0(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
    sub_1B885B0(&StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57B64 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_1B887FC(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor((SupportSelectRootComponent___c__DisplayClass69_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = entity;
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)entity, v15, v16);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B88814(UserServantLeaderEntity, v11);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v20 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v21 = (UserServantEntity_o *)*v14;
      if ( !*v14 )
        goto LABEL_35;
      v22 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v49.fields.currentCryptoKey = v24;
      *(_QWORD *)&v49.fields.fakeValue = v23;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v49,
                                                          0LL);
      if ( !*v14 )
        goto LABEL_35;
      v25 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v14, 0LL);
      oldServantIdList = v20->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v27 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v22 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v22,
             &skillName,
             &actMaxRarity[1],
             v25,
             v27,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          v28 = (UserServantEntity_o *)*v14;
          if ( *v14 )
          {
            v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v31 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v31;
            *(_QWORD *)&v50.fields.fakeValue = v30;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                v50,
                                                                0LL);
            if ( v29 )
            {
              v32 = DataMasterBase_object__object__int___GetEntity(
                      v29,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v14 )
              {
                v33 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                    (*v14)[6],
                                                                    0LL);
                if ( v32 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v32,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v34 = (UserServantEntity_o *)*v14;
                  if ( *v14 )
                  {
                    v35 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v34, 0LL);
                    v36 = (EquipTargetInfo_o *)v20->fields.oldServantIdList;
                    if ( v36 )
                    {
                      v37 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v36, 0LL);
                      if ( v33 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v33,
                                                 actMaxRarity,
                                                 v35,
                                                 v37,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v39 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v39, 0LL);
                          if ( v39 )
                          {
                            System_Text_StringBuilder__Append_60868928(v39, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10125/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_60868928(v39, v40, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v42 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                                                       v39,
                                                       v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v45 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v45,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30494344(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v42,
                                v43,
                                v44,
                                v45,
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
        sub_1B8880C(UserServantLeaderEntity, v11);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v9 + 24),
    *(_DWORD *)(v9 + 28),
    *(UserServantEntity_o **)(v9 + 32),
    v17);
}


void __fastcall SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  Il2CppObject *supportInfoJump; // x2
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v14; // x21
  CancelConfirmMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
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
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v39; // x27
  const MethodInfo *v40; // x3

  if ( (byte_4A57B71 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_OnClickBack__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A57B71 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v9 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickBack__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v11);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1B88814(CenterNum, v6);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v14 = supportServantData->m_Items[(int)CenterNum];
        v15 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B887FC(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          v16);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, (int32_t)v6, v14, v15, v17);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v18)
      || this->fields.isEdit )
    {
      v19 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickBack__);
      v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v6);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v21);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v28);
        return;
      }
      goto LABEL_52;
    }
    v22 = SupportSelectRootComponent__getCenterNum(this, v18);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_52;
    v23 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_52;
    pushTabButton = (int32_t)v23->fields.pushTabButton;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v25 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v25 )
      {
        v26 = v25;
        v27 = (System_Int32_array *)sub_1B886EC(v25, int___TypeInfo);
        if ( !v27 )
          goto LABEL_43;
      }
      else
      {
        v27 = 0LL;
      }
    }
    else
    {
      v29 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      v27 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v29->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v23->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v30 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v30 )
    {
      v32 = 0LL;
      goto LABEL_48;
    }
    v26 = v30;
    v32 = (System_Int32_array *)sub_1B886EC(v30, int___TypeInfo);
    if ( v32 )
      goto LABEL_48;
LABEL_43:
    sub_1B88ACC(v26);
LABEL_44:
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v32 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v33->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v31);
    v34 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickBack__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v39 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1B887FC(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      v40);
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
        v39,
        0LL);
      return;
    }
LABEL_52:
    sub_1B8880C(CenterNum, v6);
  }
  v4 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int32_t CenterNum; // w23
  const MethodInfo *v6; // x1
  int32_t v7; // w22
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_4A57B6F & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    byte_4A57B6F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v7,
                                                                  this->fields.tempFixEventQuestSupportDeckIds,
                                                                  0,
                                                                  v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1B88814(FixedErrorList, v10);
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v14 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v18);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v17, v19);
        return;
      }
LABEL_19:
      sub_1B8880C(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_19;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 1, v11);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v24);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v7, v25);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v27);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v28);
  }
  else
  {
    v20 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v23);
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
  int32_t v7; // w22
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v13; // x21
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_4A57B6E & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    byte_4A57B6E = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v7,
                                                                  this->fields.tempFixMainQuestSupportDeckIds,
                                                                  1,
                                                                  v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1B88814(FixedErrorList, v10);
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v14 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v18);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v17, v19);
        return;
      }
LABEL_19:
      sub_1B8880C(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_19;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 0, v11);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v24);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v7, v25);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v27);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v28);
  }
  else
  {
    v20 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v23);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4A57B75 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4A57B75 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B88814(CenterNum, v4);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v10);
  if ( !supportEditMenu )
LABEL_7:
    sub_1B8880C(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v8, isEdit, v9, v11);
}


void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A57B70 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
    byte_4A57B70 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
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
  SupportSelectRootComponent_o *v2; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v4; // x22
  __int64 v5; // x24
  unsigned __int64 v6; // x8
  SupportServantData_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v11; // x22
  __int64 v12; // x24
  unsigned __int64 v13; // x8
  SupportServantData_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  unsigned __int64 v20; // x8
  SupportServantData_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x0

  v2 = this;
  if ( (byte_4A57B53 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&SupportServantData_TypeInfo);
    byte_4A57B53 = 1;
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
      v7 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B886EC(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v24 = sub_1B88830();
          sub_1B886D8(v24, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1B88814(this, method);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&supportServantData[v5], (int32_t)v7, v8, v9);
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
  v11 = 0LL;
  v12 = 8LL;
  while ( 1 )
  {
    v13 = orgSupportServantData[6];
    if ( (__int64)v11 >= (int)v13 )
      break;
    if ( v11 >= v13 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v11 + 8] )
    {
      v14 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v14, 0LL);
      if ( v14 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B886EC(v14, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v11 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v11 + 8] = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&orgSupportServantData[v12], (int32_t)v14, v15, v16);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v11;
    v12 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_1B8880C(this, method);
  v18 = 0LL;
  v19 = 8LL;
  while ( 1 )
  {
    v20 = tmpSupportServantData[6];
    if ( (__int64)v18 >= (int)v20 )
      break;
    if ( v18 >= v20 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v18 + 8] )
    {
      v21 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v21, 0LL);
      if ( v21 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B886EC(v21, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v18 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v18 + 8] = v21;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&tmpSupportServantData[v19], (int32_t)v21, v22, v23);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v18;
    v19 += 2LL;
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4A57B7A & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_4A57B7A = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B88814(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B8880C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v7, v8, v10);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4A57B7E & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_4A57B7E = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B88814(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B887FC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B8880C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v7, v8, v10);
}


void __fastcall SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  il2cpp_array_size_t i; // w21
  SupportServantData_o *Instance; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  const MethodInfo *v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21

  if ( (byte_4A57B60 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A57B60 = 1;
  }
  v3 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v4) )
  {
    for ( i = 0; ; ++i )
    {
      Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1B88814(Instance, v5);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v10);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v11,
                                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1B8880C(Instance, v5);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v3,
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v10; // x2
  SupportSelectListViewIndicator_o *indicator; // x19
  const MethodInfo *v12; // x2

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
      sub_1B88814(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&IsNullOrEmpty->fields.decideButton,
            (int32_t)editDeckName,
            v6,
            v7),
          SupportSelectRootComponent__SaveTemp(this, -1, v10),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0LL)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, v5),
          !indicator) )
    {
LABEL_8:
      sub_1B8880C(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v12);
  }
}


void __fastcall SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4A57B74 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_ReturnScene__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A57B74 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    v6 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B885C8(Method_SupportSelectRootComponent_ReturnScene__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v8, v9);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v11);
      return;
    }
    goto LABEL_20;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v5);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v8, v12);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v13);
      goto LABEL_11;
    }
LABEL_20:
    sub_1B8880C(supportSelectMenu, v8);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B88814(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1B8880C(this, *(_QWORD *)&targetIdx);
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
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v29; // x20
  System_Int32_array *v30; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v31; // x24
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x5

  if ( (byte_4A57B77 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_4A57B77 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SLODWORD(supportEditMenu[1].klass->_1.methods) )
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
        goto LABEL_33;
      items = v4->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_33;
      size = v4->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          i,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size + 1] = i;
      }
    }
    else if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v18, v15)
           || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                              this,
                                                              i,
                                                              this->fields.tempFixMainQuestSupportDeckIds,
                                                              v22),
               ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v18, v15) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v23);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v5 )
      goto LABEL_33;
    v24 = v5->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !v24 )
      goto LABEL_33;
    v26 = v5->fields._size;
    if ( (unsigned int)v26 >= v24->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        i,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = v26 + 1;
      v24->m_Items[v26 + 1] = i;
    }
  }
  if ( !v4
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v4,
                                                       (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v5)
    || (v29 = (System_Int32_array *)supportEditMenu,
        v30 = System_Collections_Generic_List_int___ToArray(
                v5,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        v31 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1B887FC(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v31,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v32),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1B8880C(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v29, v30, v31, v33);
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
    sub_1B8880C(supportSelectMenu, method);
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
  System_String_array *v6; // x19
  ServantStatusBattleListViewItem_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1

  if ( (byte_4A57B5F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A57B5F = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (ServantStatusBattleListViewItem_o *)&this->fields.cacheAssetNameList;
  v6 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37797288(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (ServantStatusBattleListViewItem_c *)list;
  sub_1B88554(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3);
  if ( v6 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37799632(v6, 0LL);
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
  int32_t v13; // w22
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v18; // x8
  SupportSelectRootComponent_o *v19; // x23
  struct SupportServantData_array *v20; // x8
  struct SupportServantData_array *v21; // x8
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-50h]

  v7 = result;
  v8 = this;
  if ( (byte_4A57B66 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_IndexOf_long___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_4A57B66 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_41109412(userSvtEntity->fields.svtId, 0LL);
    v11 = item->fields.userSvtEntity;
    if ( !v11 )
      goto LABEL_32;
    v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
    v13 = (int)this;
    *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v27.fields.fakeValue = v12;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v26, 0LL, 0LL);
    v13 = 0;
    v27 = v26;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v27;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1B8880C(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v18 = supportServantData->m_Items[selectNum];
  if ( !v18 )
    goto LABEL_32;
  v19 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v18->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_2F7A4E8 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v20 = v8->fields.supportServantData;
    if ( !v20 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v20->max_length )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v20->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, 0LL);
  }
  v21 = v8->fields.supportServantData;
  if ( !v21 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= v21->max_length )
LABEL_33:
    sub_1B88814(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v21->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v19, v13, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v22 = v15;
  System_Action___ctor(v15, (Il2CppObject *)v8, *v16, 0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v22, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v23) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v24);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v24);
}


void __fastcall SupportSelectRootComponent__SetFriendInfo(
        SupportSelectRootComponent_o *this,
        int32_t *deckIndex,
        const MethodInfo *method)
{
  int32_t v3; // w3
  SupportSelectRootComponent_o *v5; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v8; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v11; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v13; // x22
  __int64 v14; // x25
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  struct System_Int32_array *v21; // x8
  unsigned __int64 v22; // x29
  unsigned int *v23; // x23
  SupportServantData_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  unsigned int *v27; // x8
  struct SupportInfoJump_o *v28; // x10
  struct System_Int32_array *v29; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v31; // x26
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  unsigned __int64 v35; // x28
  unsigned int v36; // w27
  struct System_Int32_array *v37; // x8
  unsigned int *v38; // x23
  SupportServantData_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  unsigned int *v42; // x0
  unsigned int *v43; // x8
  struct SupportInfoJump_o *v44; // x9
  struct System_Int32_array *v45; // x10
  unsigned __int64 v46; // x25
  struct System_Int32_array *v47; // x8
  unsigned int *v48; // x23
  SupportServantData_o *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  unsigned int *v52; // x0
  unsigned int *v53; // x8
  struct SupportInfoJump_o *v54; // x9
  struct System_Int32_array *v55; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x0

  v5 = this;
  if ( (byte_4A57B58 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1B885B0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1B885B0(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&SupportServantData_TypeInfo);
    byte_4A57B58 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v5->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_73;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v8 = 0LL;
  p_supportServantData = (unsigned int **)&v5->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v11 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_73;
    if ( v8 >= v11[6] )
LABEL_74:
      sub_1B88814(this, deckIndex);
    *(_QWORD *)&v11[i] = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[i], 0, (int32_t)method, v3);
    ++v8;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_73;
  v13 = *(_QWORD *)&mainSupportDeckIds->max_length;
  v14 = (unsigned int)v13;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_73;
    v31 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v32 = sub_1B88658(SupportServantData___TypeInfo, (unsigned int)(v31 + v13));
    *p_supportServantData = (unsigned int *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v32, v33, v34);
    if ( (int)v13 < 1 )
    {
      v36 = 0;
LABEL_52:
      if ( (int)v31 < 1 )
        goto LABEL_69;
      v46 = 0LL;
      while ( 1 )
      {
        v47 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v47 )
          break;
        if ( v46 >= v47->max_length )
          goto LABEL_74;
        if ( v47->m_Items[v46 + 1] >= 1 )
        {
          v48 = *p_supportServantData;
          v49 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v49, 0LL);
          if ( !v48 )
            break;
          if ( v49 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B886EC(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v36 >= v48[6] )
            goto LABEL_74;
          v52 = &v48[2 * v36];
          *((_QWORD *)v52 + 4) = v49;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 8), (int32_t)v49, v50, v51);
          v53 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v36 >= v53[6] )
            goto LABEL_74;
          v54 = v5->fields.supportInfoJump;
          if ( !v54 )
            break;
          v55 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v55 )
            break;
          if ( v46 >= v55->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v53[2 * v36 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33315660(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v54->fields.kind,
            v54->fields.isSelect,
            v54->fields.eventSetupInfo,
            1,
            v55->m_Items[v46 + 1],
            0LL);
          ++v36;
        }
        if ( (unsigned int)v31 == ++v46 )
          goto LABEL_69;
      }
    }
    else
    {
      v35 = 0LL;
      v36 = 0;
      while ( 1 )
      {
        v37 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v37 )
          break;
        if ( v35 >= v37->max_length )
          goto LABEL_74;
        if ( v37->m_Items[v35 + 1] >= 1 )
        {
          v38 = *p_supportServantData;
          v39 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v39, 0LL);
          if ( !v38 )
            break;
          if ( v39 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B886EC(v39, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
            if ( !this )
            {
LABEL_75:
              v61 = sub_1B88830();
              sub_1B886D8(v61, 0LL);
            }
          }
          if ( v36 >= v38[6] )
            goto LABEL_74;
          v42 = &v38[2 * v36];
          *((_QWORD *)v42 + 4) = v39;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 8), (int32_t)v39, v40, v41);
          v43 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v36 >= v43[6] )
            goto LABEL_74;
          v44 = v5->fields.supportInfoJump;
          if ( !v44 )
            break;
          v45 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v45 )
            break;
          if ( v35 >= v45->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v43[2 * v36 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33315660(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v44->fields.kind,
            v44->fields.isSelect,
            v44->fields.eventSetupInfo,
            0,
            v45->m_Items[v35 + 1],
            0LL);
          ++v36;
        }
        if ( v14 == ++v35 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1B8880C(this, deckIndex);
  }
  v15 = sub_1B88658(SupportServantData___TypeInfo, (unsigned int)v13);
  *p_supportServantData = (unsigned int *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v15, v16, v17);
  if ( (int)v13 >= 1 )
  {
    v18 = -(__int64)(unsigned int)v13;
    v19 = 8LL;
    v20 = 8LL;
    do
    {
      v21 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v21 )
        goto LABEL_73;
      v22 = v19 - 8;
      if ( v19 - 8 >= (unsigned __int64)v21->max_length )
        goto LABEL_74;
      if ( *((int *)&v21->obj.klass + v19) >= 1 )
      {
        v23 = *p_supportServantData;
        v24 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v24, 0LL);
        if ( !v23 )
          goto LABEL_73;
        if ( v24 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B886EC(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v22 >= v23[6] )
          goto LABEL_74;
        *(_QWORD *)&v23[v20] = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v23[v20], (int32_t)v24, v25, v26);
        v27 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v22 >= v27[6] )
          goto LABEL_74;
        v28 = v5->fields.supportInfoJump;
        if ( !v28 )
          goto LABEL_73;
        v29 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v29 )
          goto LABEL_73;
        if ( v22 >= v29->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v27[v20];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_33315660(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v28->fields.kind,
          v28->fields.isSelect,
          v28->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v29->obj.klass + v19),
          0LL);
      }
      ++v19;
      v20 += 2LL;
    }
    while ( v18 + v19 != 8 );
  }
LABEL_69:
  supportSelectMenu = v5->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v58 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)v5, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v58;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v58, v59, v60);
  this = (SupportSelectRootComponent_o *)v5->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_73;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL);
}


void __fastcall SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v6; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v9; // w21
  unsigned __int64 v10; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x26
  unsigned int *v13; // x8
  struct SupportInfoJump_o *v14; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  SupportSelectRootComponent___c_c *v19; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v21; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  unsigned int v26; // w0
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  void *monitor; // x8
  __int64 v31; // x24
  __int64 v32; // x23
  unsigned __int64 v33; // x25
  unsigned int *v34; // x26
  SupportServantData_o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  unsigned int *v38; // x9
  struct SupportInfoJump_o *v39; // x8
  __int64 v40; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  struct SupportInfoJump_o *v46; // x8
  QuestRestrictionInfo_o *v47; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v49; // x0

  v4 = this;
  if ( (byte_4A57B59 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1B885B0(&SupportServantData___TypeInfo);
    sub_1B885B0(&SupportServantData_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__);
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&SupportSelectRootComponent___c_TypeInfo);
    byte_4A57B59 = 1;
  }
  supportInfoJump = v4->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  v6 = v4->fields.supportInfoJump;
  if ( !v6 )
    goto LABEL_57;
  questRestrictionInfo = v6->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v9 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
  else
LABEL_11:
    v9 = 1;
  v10 = 0LL;
  p_supportServantData = (unsigned int **)&v4->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v13 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_57;
    if ( v10 >= v13[6] )
      goto LABEL_58;
    *(_QWORD *)&v13[i] = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v13[i], 0, v2, v3);
    ++v10;
  }
  v14 = v4->fields.supportInfoJump;
  if ( !v14 || (followerInfo = v14->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1B8880C(this, method);
  if ( v9 )
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
  v16 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_28;
  v17 = v16;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B886EC(v16, int___TypeInfo);
  if ( !v18 )
  {
    sub_1B88ACC(v17);
LABEL_28:
    v18 = 0LL;
  }
  v19 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v19 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v19->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = SupportSelectRootComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v21,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__Where_int_(
          v18,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  v26 = System_Linq_Enumerable__Count_int_(v25, (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  v27 = sub_1B88658(SupportServantData___TypeInfo, v26);
  *p_supportServantData = (unsigned int *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.supportServantData, v27, v28, v29);
  if ( !v18 )
    goto LABEL_57;
  monitor = v18[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v31 = 8LL;
    v32 = 8LL;
    while ( 1 )
    {
      v33 = v31 - 8;
      if ( v31 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v18->klass + v31) >= 1 )
      {
        v34 = *p_supportServantData;
        v35 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v35, 0LL);
        if ( !v34 )
          goto LABEL_57;
        if ( v35 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B886EC(v35, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !this )
          {
            v49 = sub_1B88830();
            sub_1B886D8(v49, 0LL);
          }
        }
        if ( v33 >= v34[6] )
          break;
        *(_QWORD *)&v34[v32] = v35;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v34[v32], (int32_t)v35, v36, v37);
        v38 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v33 >= v38[6] )
          break;
        v39 = v4->fields.supportInfoJump;
        if ( !v39 )
          goto LABEL_57;
        if ( v33 >= LODWORD(v18[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v38[v32];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_33316500(
          (SupportServantData_o *)this,
          v39->fields.followerInfo,
          v39->fields.kind,
          v39->fields.isSelect,
          v39->fields.eventSetupInfo,
          v39->fields.questRestrictionInfo,
          *((_DWORD *)&v18->klass + v31),
          0LL);
      }
      LODWORD(monitor) = v18[1].monitor;
      v40 = v31 - 7;
      ++v31;
      v32 += 2LL;
      if ( v40 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1B88814(this, method);
  }
LABEL_51:
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v4, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v43, v44, v45);
  v46 = v4->fields.supportInfoJump;
  if ( !v46 )
    goto LABEL_57;
  v47 = v46->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v4->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v47, this->fields.kind, 0LL, 0LL);
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
  int v10; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v12; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v18; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v22; // x9
  struct System_Int32_array *v23; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 j; // x25
  unsigned __int64 v28; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v30; // x9
  struct System_Int32_array *v31; // x9
  SupportSelectRootComponent_o *v32; // x0
  const MethodInfo *v33; // x4
  SupportSelectRootComponent_o *v34; // x0
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v41; // x5
  int32_t v42; // w2
  int32_t v43; // w3
  struct SupportServantData_array *supportServantData; // x21
  __int64 v45; // x8
  unsigned __int64 v46; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v48; // x21
  SupportServantData_array *v49; // x22
  SupportSelectMenu_CallbackFunc_o *v50; // x23
  const MethodInfo *v51; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v52; // x24
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x5
  struct SupportSelectMenu_o *v55; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x1
  struct SupportSelectMenu_o *v61; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  struct SupportServantData_array *v64; // x20
  __int64 v65; // x8
  unsigned __int64 v66; // x21
  struct EventUpValSetupInfo_o *v67; // x1
  SupportSelectMenu_o *v68; // x20
  SupportServantData_array *v69; // x21
  int32_t v70; // w22
  SupportSelectMenu_CallbackFunc_o *v71; // x23
  const MethodInfo *v72; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v73; // x24
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x5
  const MethodInfo *v76; // x2
  struct SupportServantData_array *v77; // x8
  bool v78; // w1
  System_Action_o *v79; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A57B5A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_1B885B0(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1B885B0(&StringLiteral_12467/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4A57B5A = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12467/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = v9->static_fields->SupportDeckMax - 1;
    if ( Int >= v10 )
      Int = v10;
    deckIndex = Int;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v12 = (struct System_Int32_array *)sub_1B88658(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v12;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int32_t)v12,
      v14,
      v15);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v18 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v18 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_76;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v18 < (int)max_length )
      {
        if ( v18 >= max_length )
          goto LABEL_77;
        v22 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_76;
        if ( v18 >= v22->max_length )
          goto LABEL_77;
        *((_DWORD *)&v22->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v23 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v23;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int32_t)v23,
      v25,
      v26);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v28 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_76;
      v30 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v28 < (int)v30 )
      {
        if ( v28 >= v30 )
          goto LABEL_77;
        v31 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_76;
        if ( v28 >= v31->max_length )
          goto LABEL_77;
        *((_DWORD *)&v31->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v6);
    SupportSelectRootComponent__CopySupportData(
      v32,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v33);
    SupportSelectRootComponent__CopySupportData(
      v34,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v35);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v36);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v37);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v38);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_37187788(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            80,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v39);
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
                  v41);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v45 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v45 >= 1 )
                  {
                    v46 = 0LL;
                    while ( v46 < (unsigned int)v45 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v46];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          (int32_t)eventSetupInfo,
                          v42,
                          v43);
                      }
                      LODWORD(v45) = supportServantData->max_length;
                      if ( (__int64)++v46 >= (int)v45 )
                        goto LABEL_49;
                    }
LABEL_77:
                    sub_1B88814(followerQuestInfomationDraw, v6);
                  }
LABEL_49:
                  v48 = this->fields.supportSelectMenu;
                  v49 = this->fields.supportServantData;
                  v50 = (SupportSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v50,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v51);
                  v52 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B887FC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v52,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v53);
                  if ( v48 )
                  {
                    SupportSelectMenu__Open(v48, v49, Int, v50, v52, v54);
                    v55 = this->fields.supportSelectMenu;
                    if ( v55 )
                    {
                      indicator = v55->fields.indicator;
                      v57 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v57,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v57;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int32_t)v57,
                          v58,
                          v59);
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
    sub_1B8880C(followerQuestInfomationDraw, v6);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v4);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v3);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v7);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  TitleInfoControl__setTitleInfo_37187788(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v60);
  v61 = this->fields.supportSelectMenu;
  if ( !v61 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v61->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v64 = this->fields.supportServantData;
  if ( !v64 )
    goto LABEL_76;
  v65 = *(_QWORD *)&v64->max_length;
  if ( (int)v65 >= 1 )
  {
    v66 = 0LL;
    while ( v66 < (unsigned int)v65 )
    {
      followerQuestInfomationDraw = v64->m_Items[v66];
      if ( followerQuestInfomationDraw )
      {
        v67 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v67;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int32_t)v67,
          v62,
          v63);
      }
      LODWORD(v65) = v64->max_length;
      if ( (__int64)++v66 >= (int)v65 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v68 = this->fields.supportSelectMenu;
  v69 = this->fields.supportServantData;
  v70 = deckIndex;
  v71 = (SupportSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v71,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v72);
  v73 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B887FC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v73,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v74);
  if ( !v68 )
    goto LABEL_76;
  SupportSelectMenu__Open(v68, v69, v70, v71, v73, v75);
  v77 = this->fields.supportServantData;
  if ( !v77 )
    goto LABEL_76;
  v78 = (int)v77->max_length >= 2 && v77->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v78, v76);
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
  v79 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v79, 2, 1, 0LL);
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
  if ( (byte_4A57B6C & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B6C = 1;
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
        j_il2cpp_runtime_class_init_0(this);
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
        j_il2cpp_runtime_class_init_0(this);
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
    sub_1B8880C(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1B88814(this, *(_QWORD *)&idx);
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
    sub_1B8880C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4A57B5E & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A57B5E = 1;
  }
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&supportSelectMenu->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  this = (SupportSelectRootComponent_o *)v4->fields.supportServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v4->fields.supportSelectConfirmMenu;
  if ( !this )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v4->fields.cancelConfirmMenu;
  if ( !this )
    goto LABEL_15;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v4->fields.deckNameInputMenu;
  if ( !this )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v4->fields.fixErrorDialog;
  if ( !this )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)this, method);
  this = (SupportSelectRootComponent_o *)v4->fields.cancelConfirmDeckIdDialog;
  if ( !this
    || (CancelConfirmDeckIdDialog__Init((CancelConfirmDeckIdDialog_o *)this, 0LL),
        (this = (SupportSelectRootComponent_o *)v4->fields.followerQuestInfomationDraw) == 0LL)
    || (FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL),
        (this = (SupportSelectRootComponent_o *)v4->fields.backSkinSprite) == 0LL)
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v4->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v4, 0LL, v6);
}


void __fastcall SupportSelectRootComponent__beginInitialize(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v5; // x0
  struct SupportServantData_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  BalanceConfig_c *v9; // x0
  struct SupportServantData_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  BalanceConfig_c *v13; // x0
  struct SupportServantData_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4A57B52 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&SupportServantData___TypeInfo);
    sub_1B885B0(&StringLiteral_13097/*"SvtEqScrollBarValue"*/);
    byte_4A57B52 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    v6 = (struct SupportServantData_array *)sub_1B88658(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v5->static_fields->SupportDeckMax);
    this->fields.supportServantData = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v6, v7, v8);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (struct SupportServantData_array *)sub_1B88658(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v9->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.orgSupportServantData, (int32_t)v10, v11, v12);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (struct SupportServantData_array *)sub_1B88658(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v13->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tmpSupportServantData, (int32_t)v14, v15, v16);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13097/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v18);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppClass *v6; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v8; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  int32_t v14; // w1
  Il2CppClass *v15; // x8
  __int64 v16; // x9
  Il2CppObject *v17; // x10
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  struct SupportInfoJump_o *v22; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v25; // x20
  EventUpValSetupInfo_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_Action_o *v29; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v31; // x20
  EventUpValSetupInfo_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x1

  if ( (byte_4A57B5B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    sub_1B885B0(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__);
    byte_4A57B5B = 1;
  }
  if ( data )
  {
    v6 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
        v8 = data;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v8;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
        v14 = (int)data;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, v14, (int32_t)method, v3);
    v15 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v16 = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v16 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v16 - 1] == SceneJumpInfo_TypeInfo )
        v17 = data;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v17;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v16 )
    {
      if ( data->klass->_2.typeHierarchy[v16 - 1] == v15 )
        v12 = (int)data;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3);
    v12 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_sceneJumpInfo, v12, v10, v11);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v18);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v22 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v22->fields.otherUserGameEntity || !v22->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v31 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        v32 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_38910068(v32, v31, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v32;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v32, v33, v34);
        SupportSelectRootComponent__StartUp(this, v35);
        return;
      }
    }
LABEL_41:
    sub_1B8880C(bgTxtSprite, v19);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v25 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v26 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v26, v25, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v26, v27, v28);
  v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v29, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B8880C(0LL, method);
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
  __int64 v5; // x23
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4A57B83 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B885B0(&SupportServantData_TypeInfo);
    byte_4A57B83 = 1;
  }
  supportServantData = v2->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1B8880C(this, method);
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
      v7 = (SupportServantData_o *)sub_1B887FC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B886EC(v7, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v10 = sub_1B88830();
          sub_1B886D8(v10, 0LL);
        }
      }
      if ( v4 >= supportServantData->max_length )
LABEL_17:
        sub_1B88814(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) = (Il2CppClass *)v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)supportServantData + v5), (int32_t)v7, v8, v9);
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
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v12; // x8
  SupportServantData_o *v13; // x23
  struct SupportServantData_array *v14; // x8
  struct SupportServantData_array *v15; // x8
  SupportServantData_o *v16; // x23
  char v17; // w20
  struct SupportServantData_array *v18; // x8

  if ( (byte_4A57B82 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A57B82 = 1;
  }
  v7 = 0;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)servant);
  while ( 1 )
  {
    OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    sub_1B88814(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1B8880C(OldServant, v8);
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
  const MethodInfo *v10; // x5
  int32_t v11; // w3
  char v12; // w1
  char v13; // w2
  int32_t v14; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v18; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  System_Int32_array *v22; // x22
  int32_t v23; // w21
  int32_t v24; // w0
  int32_t v25; // w20
  const MethodInfo *v26; // x4

  if ( (byte_4A57B5D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A57B5D = 1;
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
      v18 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      v11 = 0;
      v14 = v18 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v24 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      v14 = 0;
      v11 = v24 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v12 = ReturnTypeByQuestId == 0;
    v13 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v19 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2E99484 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v19,
                            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
    v22 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v23 = 0;
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
                                                    (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
      v23 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v14 = 0;
      goto LABEL_27;
    }
    if ( !v22 )
      goto LABEL_39;
    if ( CenterNum < v22->max_length )
    {
      v14 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v22->m_Items[CenterNum + 1],
              (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v13 = CenterNum >= max_length;
      v12 = CenterNum < max_length;
      v11 = v23;
      goto LABEL_34;
    }
LABEL_40:
    sub_1B88814(eventSupportDeckIds, v6);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v11 = (_DWORD)eventSupportDeckIds + 1;
  v12 = 1;
  v13 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v14 = v11;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v12, v13, v11, v14, v10);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v25 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v25,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          v7),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_1B8880C(eventSupportDeckIds, v6);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v25,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v26);
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
    sub_1B8880C(blackMask, editOn);
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
    sub_1B8880C(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57B88 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectRootComponent___c_TypeInfo);
    byte_4A57B88 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A57B89 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57B89 = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v8; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  Il2CppObject *v12; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v15; // w21
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_4A57B8A & 1) == 0 )
  {
    sub_1B885B0(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_4A57B8A = 1;
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
      sub_1B88814(_4__this, isDecide);
    v8 = supportServantData->m_Items[selectNum];
    if ( !v8 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v8->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v12 = (Il2CppObject *)this->fields.__4__this;
    if ( !v12
      || (monitor = (System_Int32_array *)v12[18].monitor,
          klass = (System_Int32_array *)v12[19].klass,
          v15 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B887FC(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v12,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1B8880C(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v15,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  CommonUI_o *v12; // x20
  Il2CppObject *v13; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v16; // w19
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v18; // x3

  if ( (byte_4A57B8B & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_4A57B8B = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_15;
    supportServantData = v6->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v6->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B88814(_4__this, isDecide);
    v9 = supportServantData->m_Items[selectNum];
    if ( !v9 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v9->fields.eventSetupInfo2;
    v12 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v13 = (Il2CppObject *)this->fields.__4__this;
    if ( !v13
      || (monitor = (System_Int32_array *)v13[18].monitor,
          klass = (System_Int32_array *)v13[19].klass,
          v16 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v13,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v18),
          !v12) )
    {
LABEL_15:
      sub_1B8880C(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v12,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v16,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}