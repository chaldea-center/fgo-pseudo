void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BD8E5E & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectRootComponent_TypeInfo);
    byte_4BD8E5E = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Int32_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD8E5D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BD8E5D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v3->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v4;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct System_Int32_array *)sub_1C21EE0(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v11;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (int64_t)v11,
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

  if ( (byte_4BD8E38 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12711/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4BD8E38 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12711/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
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

  if ( (byte_4BD8E57 & 1) == 0 )
  {
    sub_1C21E38(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_4BD8E57 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1C2209C(CenterNum, v4);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1C22084(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          v10),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1C22094(CenterNum, v4);
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
      v3 = 81;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C22094(titleInfo, method);
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

  if ( (byte_4BD8E50 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_4BD8E50 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v9 = this->fields.copyTargetDeckId - 1, v9 >= max_length) )
    sub_1C2209C(CenterNum, v6);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = supportServantData->m_Items[v9];
  v13 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    v14);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1C22094(CenterNum, v6);
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

  if ( (byte_4BD8E5B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E5B = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1C22094(this, orgData);
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
          sub_1C2209C(this, orgData);
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

  if ( (byte_4BD8E4A & 1) == 0 )
  {
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    byte_4BD8E4A = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close_34352468(cancelConfirmMenu, 0LL, method);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
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
    sub_1C22094(cancelConfirmMenu, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
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

  if ( (byte_4BD8E49 & 1) == 0 )
  {
    sub_1C21E38(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD8E49 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close_34348588(cancelConfirmDeckIdDialog, 0LL, method);
  v6 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22632/*"ok"*/, v8);
      return;
    }
LABEL_10:
    sub_1C22094(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
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
  SupportSelectEditMenu_o *deckNameInputMenu; // x0
  struct SupportDeckNameInputMenu_o *v12; // x20
  System_Action_o *v13; // x21
  System_Action_o *v14; // x1

  if ( (byte_4BD8E58 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__);
    byte_4BD8E58 = 1;
  }
  if ( !isDecide )
  {
    deckNameInputMenu = (SupportSelectEditMenu_o *)this->fields.deckNameInputMenu;
    if ( deckNameInputMenu )
    {
      v14 = 0LL;
      goto LABEL_9;
    }
LABEL_10:
    sub_1C22094(deckNameInputMenu, isDecide);
  }
  this->fields.editDeckName = changeName;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.editDeckName,
    (int64_t)changeName,
    (int64_t)changeName,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  deckNameInputMenu = this->fields.supportEditMenu;
  if ( !deckNameInputMenu )
    goto LABEL_10;
  SupportSelectEditMenu__Close(deckNameInputMenu, (const MethodInfo *)isDecide);
  v12 = this->fields.deckNameInputMenu;
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, 0LL);
  if ( !v12 )
    goto LABEL_10;
  deckNameInputMenu = (SupportSelectEditMenu_o *)v12;
  v14 = v13;
LABEL_9:
  SupportDeckNameInputMenu__Close_34358508(
    (SupportDeckNameInputMenu_o *)deckNameInputMenu,
    v14,
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
    sub_1C22094(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C22094(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD8E41 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD8E41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
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
        sub_1C2209C(CenterNum, isDecide);
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
    sub_1C22094(CenterNum, isDecide);
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
    sub_1C22094(0LL, flag);
  SupportSelectConfirmMenu__Close_34368012(supportSelectConfirmMenu, 0LL, method);
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

  if ( (byte_4BD8E54 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E54 = 1;
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
        sub_1C2209C(confirmDeckMenu, isDecide);
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
    sub_1C22094(confirmDeckMenu, isDecide);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20

  if ( (byte_4BD8E33 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__);
    byte_4BD8E33 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1C22094(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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

  if ( (byte_4BD8E52 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E52 = 1;
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
        sub_1C2209C(confirmDeckMenu, isDecide);
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
    sub_1C22094(confirmDeckMenu, isDecide);
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

  if ( (byte_4BD8E56 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E56 = 1;
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
          sub_1C2209C(confirmDeckMenu, isDecide);
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
    sub_1C22094(confirmDeckMenu, isDecide);
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

  if ( (byte_4BD8E4F & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4BD8E4F = 1;
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
      sub_1C2209C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v10 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v12);
    if ( !supportEditMenu )
LABEL_10:
      sub_1C22094(copyDeckSelectMenu, *(_QWORD *)&deckId);
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

  if ( (byte_4BD8E42 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8E42 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1C22094(supportSelectMenu, isDecide);
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

  if ( (byte_4BD8E3F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8E3F = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C22094(supportSelectMenu, isDecide);
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

  if ( (byte_4BD8E40 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_4BD8E40 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1C22094(v8, v9);
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
    sub_1C22094(CenterNum, v7);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v79; // x22
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v83; // x8
  int64_t v84; // x21
  struct SupportServantData_array *v85; // x8
  SupportServantData_o *v86; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  struct SupportServantData_array *v90; // x8
  SupportServantData_o *v91; // x8
  int32_t kind; // w20
  CommonUI_o *v93; // x22
  ServantLeaderInfo_o *v94; // x21
  ServantStatusDialog_EndDelegate_o *v95; // x23
  struct SupportServantData_array *v96; // x8
  struct SupportServantData_array *v97; // x8
  int64_t v98; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v100; // x8
  System_Reflection_MethodBase_o *v101; // x0
  struct SupportServantData_array *v102; // x8
  SupportServantData_o *v103; // x8
  int32_t v104; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v106; // x21
  ServantStatusDialog_EndDelegate_o *v107; // x23
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  _QWORD *v112; // x0
  System_Reflection_MethodBase_o *v113; // x0
  const MethodInfo *v114; // x2
  int64_t v115; // x21
  ServantStatusDialog_FormationEndDelegate_o *v116; // x23
  Il2CppObject *v117; // x20
  ServantStatusDialog_EndDelegate_o *v118; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v120; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v122; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  int32_t v131; // w0
  SupportSelectRootComponent___c_c *v132; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v134; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v136; // x24
  struct SupportSelectRootComponent___c_StaticFields *v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x0
  struct SupportServantData_array *v145; // x8
  SupportServantData_o *v146; // x0
  _QWORD *v147; // x0
  System_Reflection_MethodBase_o *v148; // x0
  const MethodInfo *v149; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  if ( (byte_4BD8E39 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C21E38(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_1C21E38(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__);
    sub_1C21E38(&SupportSelectRootComponent___c_TypeInfo);
    byte_4BD8E39 = 1;
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
        goto LABEL_134;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_163;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_164;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v17 = supportServantData->m_Items[CenterNum];
      v18 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C22084(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        v19);
      if ( !cancelConfirmMenu )
        goto LABEL_163;
      CancelConfirmMenu__Open(cancelConfirmMenu, (int32_t)v11, v17, v18, v20);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v13);
      if ( (isUpdate & 1) != 0 )
      {
        v22 = this->fields.supportServantData;
        if ( !v22 )
          goto LABEL_163;
        if ( CenterNum < v22->max_length )
        {
          v23 = v22->m_Items[CenterNum];
          if ( v23 && SupportServantData__get_IsNoServant(v23, 0LL) )
          {
LABEL_15:
            v24 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v24 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v25 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v24, v24[4]);
            OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v27 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C22084(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
LABEL_163:
            sub_1C22094(isUpdate, v11);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v21);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v112 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v112 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v113 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v112, v112[4]);
          OverwriteAssetSoundName__PlaySystemSe(v113, 8, 0, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v11, v114);
          goto LABEL_134;
        }
LABEL_164:
        sub_1C2209C(isUpdate, v11);
      }
      if ( this->fields.isEdit )
      {
        v110 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v110 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v111 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v110, v110[4]);
        OverwriteAssetSoundName__PlaySystemSe(v111, 8, 0, 0LL);
LABEL_134:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
        v53 = this;
        v52 = 0;
        this->fields.isDragSwapState = 0;
LABEL_135:
        SupportSelectRootComponent__setEditUI(v53, v52, v51);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v120 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v120 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v120->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v120->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v120);
          v120 = SupportSelectRootComponent___c_TypeInfo;
        }
        v122 = (Il2CppObject *)v120->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v122,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__66_0,
          (int64_t)_9__66_0,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129);
      }
      v130 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
      v131 = System_Linq_Enumerable__Count_int_(
               v130,
               (const MethodInfo_2FCAA40 *)Method_System_Linq_Enumerable_Count_int___);
      v132 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v134 = v131;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v132 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v132->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v132->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v132);
          v132 = SupportSelectRootComponent___c_TypeInfo;
        }
        v136 = (Il2CppObject *)v132->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v136,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v137 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v137->__9__66_1 = _9__66_1;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v137->__9__66_1,
          (int64_t)_9__66_1,
          v138,
          v139,
          v140,
          v141,
          v142,
          v143);
      }
      v144 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v144,
                   (const MethodInfo_2FCAA40 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v134 < 1 || (int)isUpdate <= 0 )
      {
        v145 = this->fields.supportServantData;
        if ( !v145 )
          goto LABEL_163;
        if ( CenterNum >= v145->max_length )
          goto LABEL_164;
        v146 = v145->m_Items[CenterNum];
        if ( v146 && SupportServantData__get_IsNoServant(v146, 0LL) )
          goto LABEL_15;
      }
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_163;
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_163;
      SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
      v147 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v147 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v148 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v147, v147[4]);
      OverwriteAssetSoundName__PlaySystemSe(v148, 8, 0, 0LL);
      SupportSelectRootComponent__RequestApi(this, v149);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v30);
      isUpdate = (int64_t)this->fields.titleInfo;
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      isUpdate = (int64_t)this->fields.backSkinSprite;
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0LL);
      if ( !isUpdate )
        goto LABEL_163;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0LL);
      v31 = this->fields.supportServantData;
      if ( !v31 )
        goto LABEL_163;
      if ( v31->max_length <= deckNum )
        goto LABEL_164;
      v32 = v31->m_Items[deckNum];
      if ( !v32 )
        goto LABEL_163;
      eventSetupInfo2 = v32->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v35 = this->fields.tempFixMainQuestSupportDeckIds;
      v36 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C22084(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_163;
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
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v12);
      SupportSelectRootComponent__setEditUI(this, 1, v38);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v39 = this->fields.supportServantData;
      if ( !v39 )
        goto LABEL_163;
      if ( v39->max_length <= deckNum )
        goto LABEL_164;
      v40 = v39->m_Items[deckNum];
      if ( !v40 )
        goto LABEL_163;
      v41 = v40->fields.eventSetupInfo2;
      v42 = this->fields.tempFixMainQuestSupportDeckIds;
      v43 = this->fields.tempFixEventQuestSupportDeckIds;
      v44 = (CommonUI_o *)isUpdate;
      v45 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C22084(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v44 )
        goto LABEL_163;
      CommonUI__OpenSupportServantEquipListMenu(v44, v39, deckNum, classPos, v41, v14, v42, v43, v45, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !supportSelectMenu )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v47);
      SupportSelectRootComponent__ChangeDeckName(this, v48);
      return;
    case 5:
      v49 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v49 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v49, isUpdate, v50);
      v52 = 1;
      this->fields.isDragSwapState = 1;
      v53 = this;
      goto LABEL_135;
    case 6:
      v54 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v54 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v54, isUpdate, v55);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v56);
      return;
    case 7:
      v57 = this->fields.supportServantData;
      if ( !v57 )
        goto LABEL_163;
      if ( v57->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v57->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_163;
      v58 = *(_QWORD *)(isUpdate + 24);
      if ( !v58 )
        goto LABEL_120;
      v60 = *(_QWORD *)(v58 + 48);
      v59 = *(_QWORD *)(v58 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v150.fields.currentCryptoKey = v60;
      *(_QWORD *)&v150.fields.fakeValue = v59;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v150, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_120;
      v61 = this->fields.supportServantData;
      if ( !v61 )
        goto LABEL_163;
      if ( v61->max_length <= deckNum )
        goto LABEL_164;
      v62 = v61->m_Items[deckNum];
      if ( !v62 )
        goto LABEL_163;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v58,
                   v62->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_120;
      v63 = this->fields.supportServantData;
      if ( !v63 )
        goto LABEL_163;
      if ( v63->max_length <= deckNum )
        goto LABEL_164;
      v64 = v63->m_Items[deckNum];
      if ( !v64 )
        goto LABEL_163;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v58, v64->fields.questRestrictionInfo, 0LL) )
        goto LABEL_120;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      v65 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      if ( v65 < 1 )
        goto LABEL_76;
      v66 = this->fields.supportServantData;
      if ( !v66 )
        goto LABEL_163;
      if ( v66->max_length <= deckNum )
        goto LABEL_164;
      v67 = v66->m_Items[deckNum];
      if ( !v67 )
        goto LABEL_163;
      questRestrictionInfo = v67->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_163;
      v69 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, v69, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v70 = this->fields.supportServantData;
      if ( !v70 )
        goto LABEL_163;
      if ( v70->max_length <= deckNum )
        goto LABEL_164;
      v71 = v70->m_Items[deckNum];
      if ( !v71 )
        goto LABEL_163;
      v72 = v71->fields.questRestrictionInfo;
      v74 = *(_QWORD *)(v58 + 48);
      v73 = *(_QWORD *)(v58 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v151.fields.currentCryptoKey = v74;
      *(_QWORD *)&v151.fields.fakeValue = v73;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v151, 0LL);
      v76 = *(_DWORD *)(v58 + 64);
      v77 = v75;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v58, 0LL);
      if ( !v72 )
        goto LABEL_163;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v72, v77, v76, isUpdate, v69, 1, 0LL) )
        goto LABEL_120;
LABEL_76:
      if ( this->fields.supportInfoJump )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v79 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v79,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__,
          0LL);
        if ( !Instance )
          goto LABEL_163;
        if ( !PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(
                (PartyOrganizationUtility_o *)Instance,
                v79,
                0LL) )
        {
          v80 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v80 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v81 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v80, v80[4]);
          OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0, 0LL);
          isUpdate = (int64_t)this->fields.supportInfoJump;
          if ( !isUpdate )
            goto LABEL_163;
          supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
          *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
          *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v58 + 16);
          if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
          {
            isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !isUpdate )
              goto LABEL_163;
            AvalonSceneManager__popScene(
              (AvalonSceneManager_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0LL);
          }
        }
      }
      else
      {
LABEL_120:
        v108 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v108 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v109 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v108, v108[4]);
        OverwriteAssetSoundName__PlaySystemSe(v109, 2, 0, 0LL);
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_163;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v11);
      }
      return;
    case 8:
      v83 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v83 )
        goto LABEL_163;
      if ( v83->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v83->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_163;
      v84 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_120;
      v85 = this->fields.supportServantData;
      if ( !v85 )
        goto LABEL_163;
      if ( v85->max_length <= deckNum )
        goto LABEL_164;
      v86 = v85->m_Items[deckNum];
      if ( !v86 )
        goto LABEL_163;
      isFriendInfo = v86->fields.isFriendInfo;
      v88 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v88 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v89 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v88, v88[4]);
      OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v90 = this->fields.supportServantData;
      if ( !v90 )
        goto LABEL_163;
      if ( v90->max_length <= deckNum )
        goto LABEL_164;
      v91 = v90->m_Items[deckNum];
      if ( !v91 )
        goto LABEL_163;
      kind = v91->fields.kind;
      v93 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v94 = *(ServantLeaderInfo_o **)(v84 + 24);
        v95 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v95,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v93 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_31140592(v93, kind, v94, v95, 0LL);
      }
      else
      {
        v115 = *(_QWORD *)(v84 + 56);
        v116 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C22084(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v116,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v93 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_31137960(v93, kind, v115, v116, 0LL, 0LL);
      }
      return;
    case 9:
      v96 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v96 )
        goto LABEL_163;
      if ( v96->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v96->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_120;
      v97 = this->fields.supportServantData;
      if ( !v97 )
        goto LABEL_163;
      if ( v97->max_length <= deckNum )
        goto LABEL_164;
      v98 = isUpdate;
      isUpdate = (int64_t)v97->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v100 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v100 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v101 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v100, v100[4]);
      OverwriteAssetSoundName__PlaySystemSe(v101, 0, 0, 0LL);
      v102 = this->fields.supportServantData;
      if ( !v102 )
        goto LABEL_163;
      if ( v102->max_length <= deckNum )
        goto LABEL_164;
      v103 = v102->m_Items[deckNum];
      if ( !v103 )
        goto LABEL_163;
      if ( v103->fields.isFriendInfo )
      {
        if ( v103->fields.kind == 5 )
          v104 = 14;
        else
          v104 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_163;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v106 = (CommonUI_o *)isUpdate;
        v107 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v107,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v106 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog_31143688(v106, v104, equipTarget1, v107, 0LL, 0LL);
      }
      else
      {
        v117 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v118 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v118,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v117 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v117, 11, v98, 1, v118, 0LL, 0LL);
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

  if ( (byte_4BD8E3E & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4BD8E3E = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_42396584(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_42396584(v15->fields.svtId, 0LL);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v33, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v31, 0LL);
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
        sub_1C22094(CenterNum, v26);
      }
    }
    sub_1C2209C(CenterNum, v26);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
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
  Il2CppObject *Entity; // x24
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
  Il2CppObject *Instance; // x22
  System_Action_o *v50; // x23
  Il2CppObject *v51; // x19
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  CommonConfirmDialog_ClickDelegate_o *v55; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4BD8E3C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__);
    sub_1C21E38(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
    sub_1C21E38(&StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C21E38(&StringLiteral_3814/*"COMMON_CONFIRM_NO"*/);
    sub_1C21E38(&StringLiteral_3819/*"COMMON_CONFIRM_YES"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8E3C = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_1C22084(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor((SupportSelectRootComponent___c__DisplayClass71_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = item;
  v18 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)item, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v18 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1C2209C(UserServantLeaderEntity, v11);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
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
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v28->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v30 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v32 = userServantLeaderEntityList->m_Items[6];
          v31 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v32;
          *(_QWORD *)&v59.fields.fakeValue = v31;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                              v59,
                                                              0LL);
          if ( !v28->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v33 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v28->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v18 )
            goto LABEL_42;
          v34 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v18 + 128LL);
          if ( !v34 )
            goto LABEL_42;
          v35 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                              v34[1],
                                                              0LL);
          if ( !v30 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v30,
                 &skillName,
                 &actMaxRarity[1],
                 v33,
                 v35,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v28->fields.isFriendInfo,
                           (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v37 = v28->fields.userServantLeaderEntityList;
                if ( v37 )
                {
                  v38 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v40 = v37->m_Items[8];
                  v39 = v37->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v60.fields.currentCryptoKey = v40;
                  *(_QWORD *)&v60.fields.fakeValue = v39;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                      v60,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0,
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
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(
                                                                              Name,
                                                                              0LL);
                          if ( v38 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v38,
                                                     actMaxRarity,
                                                     v42,
                                                     v44,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v47 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v47, 0LL);
                              if ( v47 )
                              {
                                System_Text_StringBuilder__Append_62276628(v47, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_62276628(v47, v48, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v50 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v50,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v50, 0LL);
                                  v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v52 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                                                             v47,
                                                             v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3814/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v55,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v51 )
                                  {
                                    CommonUI__OpenConfirmDialog_31128528(
                                      (CommonUI_o *)v51,
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
LABEL_42:
            sub_1C22094(UserServantLeaderEntity, v11);
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
    sub_1C2209C(this, result);
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
    sub_1C22094(this, *(_QWORD *)&result);
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
  int64_t Instance; // x0
  int64_t v14; // x1
  Il2CppObject *Master_object; // x23
  BalanceConfig_c *v16; // x8
  __int64 v17; // x10
  unsigned __int64 v18; // x24
  int32_t v19; // w9
  int32_t v20; // w27
  __int64 v21; // x23
  __int64 v22; // x19
  struct SupportServantData_array *supportServantData; // x8
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x29
  struct SupportServantData_array *v31; // x8
  SupportServantData_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v34; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  ServantEntity_o *v36; // x28
  int32_t Rarity; // w0
  int v38; // w19
  int32_t v39; // w29
  System_String_o *v40; // x19
  Il2CppObject *v41; // x25
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x19
  Il2CppObject *Name; // x29
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  __int64 v62; // [xsp+10h] [xbp-A0h]
  __int64 v63; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v64; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *v65; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v68; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4BD8E44 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C21E38(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__);
    sub_1C21E38(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1C21E38(&StringLiteral_12632/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_1C21E38(&StringLiteral_12633/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_4BD8E44 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_73:
    sub_1C22094(Instance, v14);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v64 = (ServantLimitImageMaster_o *)Instance;
  v65 = (UserServantCollectionMaster_o *)Master_object;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = 184LL;
  if ( isMain )
    v17 = 180LL;
  v63 = *(unsigned int *)((char *)&v16->static_fields->CriticalRateToAddByQuickFirstBonus + v17);
  if ( *(int *)((char *)&v16->static_fields->CriticalRateToAddByQuickFirstBonus + v17) >= 1 )
  {
    v18 = 0LL;
    v62 = (unsigned int)idx;
    do
    {
      if ( v18 != v62 )
      {
        if ( !fixDeckIds )
          goto LABEL_73;
        if ( v18 >= fixDeckIds->max_length )
LABEL_74:
          sub_1C2209C(Instance, v14);
        v19 = fixDeckIds->m_Items[v18 + 1];
        if ( v19 )
        {
          v20 = 0;
          v21 = v19 - 1;
          while ( 1 )
          {
            if ( !v16->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v16);
              v16 = BalanceConfig_TypeInfo;
            }
            if ( v20 >= v16->static_fields->SupportDeckMemberMax )
              break;
            v22 = sub_1C22084(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v22,
              0LL);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_73;
            if ( CenterNum >= supportServantData->max_length )
              goto LABEL_74;
            Instance = (int64_t)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_73;
            Instance = (int64_t)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v20,
                                  0LL);
            if ( !v22 )
              goto LABEL_73;
            *(_QWORD *)(v22 + 16) = Instance;
            v30 = v22 + 16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v22 + 16), Instance, v24, v25, v26, v27, v28, v29);
            if ( !*(_QWORD *)(v22 + 16) )
              goto LABEL_73;
            if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 64LL) )
            {
              v31 = this->fields.supportServantData;
              if ( !v31 )
                goto LABEL_73;
              if ( (unsigned int)v21 >= v31->max_length )
                goto LABEL_74;
              v32 = v31->m_Items[v21];
              if ( !v32 )
                goto LABEL_73;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v32->fields.userServantLeaderEntityList;
              v34 = (System_Func_object__bool__o *)sub_1C22084(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v34,
                (Il2CppObject *)v22,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v35 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v34,
                      (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v35,
                           (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v30 )
                  goto LABEL_73;
                Instance = (int64_t)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_73;
                Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v30 + 64LL),
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v30 )
                  goto LABEL_73;
                v36 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
                if ( !Instance )
                  goto LABEL_73;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v38 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4BD6FF5 )
                  {
                    sub_1C21E38(&NetworkManager_TypeInfo);
                    byte_4BD6FF5 = 1;
                  }
                  Instance = (int64_t)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = (int64_t)NetworkManager_TypeInfo;
                  }
                  if ( !*(_QWORD *)v30 || !v65 )
                    goto LABEL_73;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         v65,
                         &entity,
                         *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                         *(_DWORD *)(*(_QWORD *)v30 + 64LL),
                         0LL) )
                  {
                    Instance = (int64_t)v64;
                    if ( !*(_QWORD *)v30 )
                      goto LABEL_73;
                    if ( !entity )
                      goto LABEL_73;
                    if ( !v64 )
                      goto LABEL_73;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v64,
                                 *(_DWORD *)(*(_QWORD *)v30 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_73;
                    v39 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v39 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12632/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v68 = v38;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v68, v50, v51, v52);
                  if ( !v36 )
                    goto LABEL_73;
                  v53 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v36, v39, -1, 0, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v36, 0LL);
                  Instance = (int64_t)System_String__Format_63129916(v49, v53, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12633/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v36 )
                    goto LABEL_73;
                  v40 = (System_String_o *)Instance;
                  v41 = (Il2CppObject *)ServantEntity__getName(v36, -1, -1, 0, 0LL);
                  v42 = (Il2CppObject *)ServantEntity__getClassName(v36, 0LL);
                  Instance = (int64_t)System_String__Format_63129848(v40, v41, v42, 0LL);
                }
                v14 = Instance;
                if ( !v10 )
                  goto LABEL_73;
                items = v10->fields._items;
                v57 = Method_System_Collections_Generic_List_string__Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_73;
                size = v10->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v59[4] = (Il2CppClass *)v14;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), v14, v43, v44, v45, v46, v47, v48);
                }
              }
            }
            v16 = BalanceConfig_TypeInfo;
            ++v20;
          }
        }
      }
      ++v18;
    }
    while ( v18 != v63 );
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

  if ( (byte_4BD8E53 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_4BD8E53 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1C2209C(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C22094(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v7, v8, v10);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportServantData_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4BD8E2B & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SupportServantData___TypeInfo);
    byte_4BD8E2B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportServantData_array *)sub_1C21EE0(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v3->static_fields->SupportDeckMax);
  this->fields.supportServantData = v4;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.supportServantData, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  SupportSelectRootComponent__RefreshSupportServantData(this, v11);
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

  if ( (byte_4BD8E5C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E5C = 1;
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
      sub_1C2209C(Servant, method);
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_1C22094(Servant, method);
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

  if ( (byte_4BD8E2D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    byte_4BD8E2D = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4BD8E2C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    byte_4BD8E2C = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___) >= 0;
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  struct SupportServantData_array *v25; // x8
  SupportServantData_o *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v28; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v32; // [xsp+10h] [xbp-70h]
  bool v33; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4BD8E4D & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C21E38(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__);
    sub_1C21E38(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_4BD8E4D = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1C22094(CenterNum, v7);
  v8 = *(_QWORD *)&fixDeckIds->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = (unsigned int)CenterNum;
    v11 = 0LL;
    v12 = (int)CenterNum;
    v32 = fixDeckIds;
    do
    {
      v33 = v9;
      if ( v11 >= (unsigned __int64)(unsigned int)v8 )
LABEL_29:
        sub_1C2209C(CenterNum, v7);
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
          v16 = sub_1C22084(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
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
          sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)CenterNum, v18, v19, v20, v21, v22, v23);
          v24 = *(_QWORD *)(v16 + 16);
          if ( !v24 )
            goto LABEL_28;
          if ( *(_DWORD *)(v24 + 64) )
          {
            v25 = this->fields.supportServantData;
            if ( !v25 )
              goto LABEL_28;
            if ( v14 >= v25->max_length )
              goto LABEL_29;
            v26 = v25->m_Items[v14];
            if ( !v26 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v26->fields.userServantLeaderEntityList;
            v28 = (System_Func_object__bool__o *)sub_1C22084(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v28,
              (Il2CppObject *)v16,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v29 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v28,
                    (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v29,
                   (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v9 = v33;
              return !v9;
            }
          }
        }
      }
      fixDeckIds = v32;
      ++v11;
      LODWORD(v8) = v32->max_length;
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // w0
  SupportSelectRootComponent___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v32; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v34; // x23
  struct SupportSelectRootComponent___c_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  int32_t v43; // w0
  bool v44; // w8

  if ( (byte_4BD8E3A & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__);
    sub_1C21E38(&SupportSelectRootComponent___c_TypeInfo);
    byte_4BD8E3A = 1;
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
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(v8, int___TypeInfo);
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
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21EE0(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v11->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v6[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1C22094(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21EE0(
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
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(v12, int___TypeInfo);
  if ( !v13 )
  {
LABEL_17:
    sub_1C22354(v9);
    goto LABEL_18;
  }
LABEL_22:
  v15 = System_Linq_Enumerable__SequenceEqual_int_(
          v10,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v16 = v15 & System_Linq_Enumerable__SequenceEqual_int_(
                v13,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    _9__67_0 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v20, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__67_0,
      (int64_t)_9__67_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__Count_int_(v28, (const MethodInfo_2FCAA40 *)Method_System_Linq_Enumerable_Count_int___);
  v30 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v32 = v29;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v30 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v30->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = SupportSelectRootComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v30->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v34, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v35 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v35->__9__67_1 = _9__67_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v35->__9__67_1, (int64_t)_9__67_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
  v43 = System_Linq_Enumerable__Count_int_(v42, (const MethodInfo_2FCAA40 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v32 < 1 || v43 <= 0 )
    v44 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v44 = 0;
  return v44 || (v16 & 1) == 0;
}


bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4BD8E2E & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E2E = 1;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
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
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x20
  __int64 v38; // x23
  __int64 v39; // x24
  Il2CppObject *v40; // x23
  PartyOrganizationUtility_o *v41; // x20
  UserServantEntity_o *v42; // x8
  System_String_o *v43; // x21
  EquipTargetInfo_o *v44; // x8
  int32_t v45; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v47; // x21
  System_String_o *v48; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v50; // x21
  System_String_o *v51; // x22
  System_String_o *v52; // x23
  CommonConfirmDialog_ClickDelegate_o *v53; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4BD8E3B & 1) == 0 )
  {
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__);
    sub_1C21E38(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
    sub_1C21E38(&StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C21E38(&StringLiteral_3814/*"COMMON_CONFIRM_NO"*/);
    sub_1C21E38(&StringLiteral_3819/*"COMMON_CONFIRM_YES"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8E3B = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v9 = sub_1C22084(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor((SupportSelectRootComponent___c__DisplayClass69_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = entity;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)entity, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1C2209C(UserServantLeaderEntity, v11);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v28 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v29 = (UserServantEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_35;
      v30 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v57.fields.currentCryptoKey = v32;
      *(_QWORD *)&v57.fields.fakeValue = v31;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                          v57,
                                                          0LL);
      if ( !*v18 )
        goto LABEL_35;
      v33 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v18, 0LL);
      oldServantIdList = v28->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v35 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v30 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v30,
             &skillName,
             &actMaxRarity[1],
             v33,
             v35,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
          v36 = (UserServantEntity_o *)*v18;
          if ( *v18 )
          {
            v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v58.fields.currentCryptoKey = v39;
            *(_QWORD *)&v58.fields.fakeValue = v38;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                v58,
                                                                0LL);
            if ( v37 )
            {
              v40 = DataMasterBase_object__object__int___GetEntity(
                      v37,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v18 )
              {
                v41 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                    (*v18)[6],
                                                                    0LL);
                if ( v40 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v40,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0,
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
                                                 actMaxRarity,
                                                 v43,
                                                 v45,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v47 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v47, 0LL);
                          if ( v47 )
                          {
                            System_Text_StringBuilder__Append_62276628(v47, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10323/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_62276628(v47, v48, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v50 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v47->klass->vtable._3_ToString.method)(
                                                       v47,
                                                       v47->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3814/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v53 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v53,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_31128528(
                                (CommonUI_o *)Instance,
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
LABEL_35:
        sub_1C22094(UserServantLeaderEntity, v11);
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
  const MethodInfo *v41; // [xsp+0h] [xbp-60h]

  if ( (byte_4BD8E48 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_1C21E38(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_OnClickBack__);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD8E48 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v9 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickBack__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v11);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1C2209C(CenterNum, v6);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v14 = supportServantData->m_Items[(int)CenterNum];
        v15 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C22084(CancelConfirmMenu_CallbackFunc_TypeInfo);
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
        v19 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickBack__);
      v20 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0LL);
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
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22632/*"ok"*/, v28);
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
        v27 = (System_Int32_array *)sub_1C21F74(v25, int___TypeInfo);
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
      v27 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v29->static_fields->FixMainSupportDeckNum);
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
    v32 = (System_Int32_array *)sub_1C21F74(v30, int___TypeInfo);
    if ( v32 )
      goto LABEL_48;
LABEL_43:
    sub_1C22354(v26);
LABEL_44:
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    v32 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v33->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v31);
    v34 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v34 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickBack__);
    v35 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v39 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1C22084(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
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
        v41);
      return;
    }
LABEL_52:
    sub_1C22094(CenterNum, v6);
  }
  v4 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  if ( (byte_4BD8E46 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    byte_4BD8E46 = 1;
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
    sub_1C2209C(FixedErrorList, v10);
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
        v14 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C22084(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1C22094(FixedErrorList, v10);
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
      v20 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4BD8E45 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    byte_4BD8E45 = 1;
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
    sub_1C2209C(FixedErrorList, v10);
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
        v14 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C22084(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1C22094(FixedErrorList, v10);
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
      v20 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4BD8E4C & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4BD8E4C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1C2209C(CenterNum, v4);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v10);
  if ( !supportEditMenu )
LABEL_7:
    sub_1C22094(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v8, isEdit, v9, v11);
}


void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BD8E47 & 1) == 0 )
  {
    sub_1C21E38(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
    byte_4BD8E47 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, !isFixed, 0, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  unsigned __int64 v17; // x8
  SupportServantData_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v26; // x22
  __int64 v27; // x24
  unsigned __int64 v28; // x8
  SupportServantData_o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x0

  v2 = this;
  if ( (byte_4BD8E2A & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&SupportServantData_TypeInfo);
    byte_4BD8E2A = 1;
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
      v7 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C21F74(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v36 = sub_1C220B8();
          sub_1C21F60(v36, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1C2209C(this, method);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)&supportServantData[v5], (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
      v18 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
      SupportServantData___ctor(v18, 0LL);
      if ( v18 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C21F74(v18, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v15 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v15 + 8] = v18;
      sub_1C21DDC((PartyOrganizationUtility_o *)&orgSupportServantData[v16], (int64_t)v18, v19, v20, v21, v22, v23, v24);
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
    sub_1C22094(this, method);
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
      v29 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
      SupportServantData___ctor(v29, 0LL);
      if ( v29 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C21F74(v29, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v26 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v26 + 8] = v29;
      sub_1C21DDC((PartyOrganizationUtility_o *)&tmpSupportServantData[v27], (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_4BD8E51 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_4BD8E51 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1C2209C(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C22094(CenterNum, v4);
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

  if ( (byte_4BD8E55 & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_4BD8E55 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1C2209C(CenterNum, v4);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C22084(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    v9);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C22094(CenterNum, v4);
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

  if ( (byte_4BD8E37 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD8E37 = 1;
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
        sub_1C2209C(Instance, v5);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22632/*"ok"*/, v10);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v11,
                                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1C22094(Instance, v5);
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
      sub_1C2209C(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1C21DDC(
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
      sub_1C22094(IsNullOrEmpty, v5);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4BD8E4B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_ReturnScene__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8E4B = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    v6 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C21E50(Method_SupportSelectRootComponent_ReturnScene__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
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
    sub_1C22094(supportSelectMenu, v8);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C2209C(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1C22094(this, *(_QWORD *)&targetIdx);
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

  if ( (byte_4BD8E4E & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_4BD8E4E = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
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
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
                                                       (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v5)
    || (v29 = (System_Int32_array *)supportEditMenu,
        v30 = System_Collections_Generic_List_int___ToArray(
                v5,
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__),
        v31 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1C22084(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v31,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v32),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1C22094(supportEditMenu, method);
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
    sub_1C22094(supportSelectMenu, method);
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

  if ( (byte_4BD8E36 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD8E36 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (PartyOrganizationUtility_o *)&this->fields.cacheAssetNameList;
  v10 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_39041504(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (PartyOrganizationUtility_c *)list;
  sub_1C21DDC(p_cacheAssetNameList, (int64_t)list, (int64_t)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_39043848(v10, 0LL);
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
  if ( (byte_4BD8E3D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Array_IndexOf_long___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_4BD8E3D = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_42396584(userSvtEntity->fields.svtId, 0LL);
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
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v25, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1C22094(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v18 = supportServantData->m_Items[selectNum];
  if ( !v18 )
    goto LABEL_32;
  v19 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v18->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_30ACDDC *)Method_System_Array_IndexOf_long___);
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
    sub_1C2209C(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v21->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v19, v13, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SupportSelectRootComponent_o *v9; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v12; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v15; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v17; // x22
  __int64 v18; // x25
  int64_t v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x25
  __int64 v27; // x26
  __int64 v28; // x27
  struct System_Int32_array *v29; // x8
  unsigned __int64 v30; // x29
  unsigned int *v31; // x23
  SupportServantData_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  unsigned int *v39; // x8
  struct SupportInfoJump_o *v40; // x10
  struct System_Int32_array *v41; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v43; // x26
  int64_t v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  unsigned __int64 v51; // x28
  unsigned int v52; // w27
  struct System_Int32_array *v53; // x8
  unsigned int *v54; // x23
  SupportServantData_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  unsigned int *v62; // x0
  unsigned int *v63; // x8
  struct SupportInfoJump_o *v64; // x9
  struct System_Int32_array *v65; // x10
  unsigned __int64 v66; // x25
  struct System_Int32_array *v67; // x8
  unsigned int *v68; // x23
  SupportServantData_o *v69; // x22
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  unsigned int *v76; // x0
  unsigned int *v77; // x8
  struct SupportInfoJump_o *v78; // x9
  struct System_Int32_array *v79; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v82; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  __int64 v89; // x0

  v9 = this;
  if ( (byte_4BD8E2F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C21E38(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C21E38(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&SupportServantData_TypeInfo);
    byte_4BD8E2F = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_73;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v12 = 0LL;
  p_supportServantData = (unsigned int **)&v9->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v15 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_73;
    if ( v12 >= v15[6] )
LABEL_74:
      sub_1C2209C(this, deckIndex);
    *(_QWORD *)&v15[i] = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v15[i], 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ++v12;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_73;
  v17 = *(_QWORD *)&mainSupportDeckIds->max_length;
  v18 = (unsigned int)v17;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_73;
    v43 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v44 = sub_1C21EE0(SupportServantData___TypeInfo, (unsigned int)(v43 + v17));
    *p_supportServantData = (unsigned int *)v44;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v44, v45, v46, v47, v48, v49, v50);
    if ( (int)v17 < 1 )
    {
      v52 = 0;
LABEL_52:
      if ( (int)v43 < 1 )
        goto LABEL_69;
      v66 = 0LL;
      while ( 1 )
      {
        v67 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v67 )
          break;
        if ( v66 >= v67->max_length )
          goto LABEL_74;
        if ( v67->m_Items[v66 + 1] >= 1 )
        {
          v68 = *p_supportServantData;
          v69 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
          SupportServantData___ctor(v69, 0LL);
          if ( !v68 )
            break;
          if ( v69 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C21F74(v69, *(_QWORD *)(*(_QWORD *)v68 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v52 >= v68[6] )
            goto LABEL_74;
          v76 = &v68[2 * v52];
          *((_QWORD *)v76 + 4) = v69;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 8), (int64_t)v69, v70, v71, v72, v73, v74, v75);
          v77 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v52 >= v77[6] )
            goto LABEL_74;
          v78 = v9->fields.supportInfoJump;
          if ( !v78 )
            break;
          v79 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v79 )
            break;
          if ( v66 >= v79->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v77[2 * v52 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34456136(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v78->fields.kind,
            v78->fields.isSelect,
            v78->fields.eventSetupInfo,
            1,
            v79->m_Items[v66 + 1],
            0LL);
          ++v52;
        }
        if ( (unsigned int)v43 == ++v66 )
          goto LABEL_69;
      }
    }
    else
    {
      v51 = 0LL;
      v52 = 0;
      while ( 1 )
      {
        v53 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v53 )
          break;
        if ( v51 >= v53->max_length )
          goto LABEL_74;
        if ( v53->m_Items[v51 + 1] >= 1 )
        {
          v54 = *p_supportServantData;
          v55 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
          SupportServantData___ctor(v55, 0LL);
          if ( !v54 )
            break;
          if ( v55 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C21F74(v55, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
            if ( !this )
            {
LABEL_75:
              v89 = sub_1C220B8();
              sub_1C21F60(v89, 0LL);
            }
          }
          if ( v52 >= v54[6] )
            goto LABEL_74;
          v62 = &v54[2 * v52];
          *((_QWORD *)v62 + 4) = v55;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v62 + 8), (int64_t)v55, v56, v57, v58, v59, v60, v61);
          v63 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v52 >= v63[6] )
            goto LABEL_74;
          v64 = v9->fields.supportInfoJump;
          if ( !v64 )
            break;
          v65 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v65 )
            break;
          if ( v51 >= v65->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v63[2 * v52 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34456136(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v64->fields.kind,
            v64->fields.isSelect,
            v64->fields.eventSetupInfo,
            0,
            v65->m_Items[v51 + 1],
            0LL);
          ++v52;
        }
        if ( v18 == ++v51 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1C22094(this, deckIndex);
  }
  v19 = sub_1C21EE0(SupportServantData___TypeInfo, (unsigned int)v17);
  *p_supportServantData = (unsigned int *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v19, v20, v21, v22, v23, v24, v25);
  if ( (int)v17 >= 1 )
  {
    v26 = -(__int64)(unsigned int)v17;
    v27 = 8LL;
    v28 = 8LL;
    do
    {
      v29 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v29 )
        goto LABEL_73;
      v30 = v27 - 8;
      if ( v27 - 8 >= (unsigned __int64)v29->max_length )
        goto LABEL_74;
      if ( *((int *)&v29->obj.klass + v27) >= 1 )
      {
        v31 = *p_supportServantData;
        v32 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
        SupportServantData___ctor(v32, 0LL);
        if ( !v31 )
          goto LABEL_73;
        if ( v32 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C21F74(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v30 >= v31[6] )
          goto LABEL_74;
        *(_QWORD *)&v31[v28] = v32;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v31[v28], (int64_t)v32, v33, v34, v35, v36, v37, v38);
        v39 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v30 >= v39[6] )
          goto LABEL_74;
        v40 = v9->fields.supportInfoJump;
        if ( !v40 )
          goto LABEL_73;
        v41 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v41 )
          goto LABEL_73;
        if ( v30 >= v41->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v39[v28];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_34456136(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v40->fields.kind,
          v40->fields.isSelect,
          v40->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v41->obj.klass + v27),
          0LL);
      }
      ++v27;
      v28 += 2LL;
    }
    while ( v26 + v27 != 8 );
  }
LABEL_69:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v82 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v82, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v82;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v10; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v13; // w21
  unsigned __int64 v14; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x26
  unsigned int *v17; // x8
  struct SupportInfoJump_o *v18; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  SupportSelectRootComponent___c_c *v23; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v25; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  unsigned int v34; // w0
  int64_t v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  void *monitor; // x8
  __int64 v43; // x24
  __int64 v44; // x23
  unsigned __int64 v45; // x25
  unsigned int *v46; // x26
  SupportServantData_o *v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  unsigned int *v54; // x9
  struct SupportInfoJump_o *v55; // x8
  __int64 v56; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct SupportInfoJump_o *v66; // x8
  QuestRestrictionInfo_o *v67; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v69; // x0

  v8 = this;
  if ( (byte_4BD8E30 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C21E38(&SupportServantData___TypeInfo);
    sub_1C21E38(&SupportServantData_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__);
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&SupportSelectRootComponent___c_TypeInfo);
    byte_4BD8E30 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = v8->fields.supportInfoJump;
  if ( !v10 )
    goto LABEL_57;
  questRestrictionInfo = v10->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v13 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
  else
LABEL_11:
    v13 = 1;
  v14 = 0LL;
  p_supportServantData = (unsigned int **)&v8->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v17 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_57;
    if ( v14 >= v17[6] )
      goto LABEL_58;
    *(_QWORD *)&v17[i] = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v17[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v14;
  }
  v18 = v8->fields.supportInfoJump;
  if ( !v18 || (followerInfo = v18->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1C22094(this, method);
  if ( v13 )
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
  v20 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_28;
  v21 = v20;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(v20, int___TypeInfo);
  if ( !v22 )
  {
    sub_1C22354(v21);
LABEL_28:
    v22 = 0LL;
  }
  v23 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v23 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v23->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = SupportSelectRootComponent___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v25,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          v22,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2FEF424 *)Method_System_Linq_Enumerable_Where_int___);
  v34 = System_Linq_Enumerable__Count_int_(v33, (const MethodInfo_2FCAA40 *)Method_System_Linq_Enumerable_Count_int___);
  v35 = sub_1C21EE0(SupportServantData___TypeInfo, v34);
  *p_supportServantData = (unsigned int *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.supportServantData, v35, v36, v37, v38, v39, v40, v41);
  if ( !v22 )
    goto LABEL_57;
  monitor = v22[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v43 = 8LL;
    v44 = 8LL;
    while ( 1 )
    {
      v45 = v43 - 8;
      if ( v43 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v22->klass + v43) >= 1 )
      {
        v46 = *p_supportServantData;
        v47 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
        SupportServantData___ctor(v47, 0LL);
        if ( !v46 )
          goto LABEL_57;
        if ( v47 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C21F74(v47, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
          if ( !this )
          {
            v69 = sub_1C220B8();
            sub_1C21F60(v69, 0LL);
          }
        }
        if ( v45 >= v46[6] )
          break;
        *(_QWORD *)&v46[v44] = v47;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v46[v44], (int64_t)v47, v48, v49, v50, v51, v52, v53);
        v54 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v45 >= v54[6] )
          break;
        v55 = v8->fields.supportInfoJump;
        if ( !v55 )
          goto LABEL_57;
        if ( v45 >= LODWORD(v22[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v54[v44];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_34456976(
          (SupportServantData_o *)this,
          v55->fields.followerInfo,
          v55->fields.kind,
          v55->fields.isSelect,
          v55->fields.eventSetupInfo,
          v55->fields.questRestrictionInfo,
          *((_DWORD *)&v22->klass + v43),
          0LL);
      }
      LODWORD(monitor) = v22[1].monitor;
      v56 = v43 - 7;
      ++v43;
      v44 += 2LL;
      if ( v56 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1C2209C(this, method);
  }
LABEL_51:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v59 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v59;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = v8->fields.supportInfoJump;
  if ( !v66 )
    goto LABEL_57;
  v67 = v66->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v67, this->fields.kind, 0LL, 0LL);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v22; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v26; // x9
  struct System_Int32_array *v27; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 j; // x25
  unsigned __int64 v36; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v38; // x9
  struct System_Int32_array *v39; // x9
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
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v57; // x8
  unsigned __int64 v58; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v60; // x21
  SupportServantData_array *v61; // x22
  SupportSelectMenu_CallbackFunc_o *v62; // x23
  const MethodInfo *v63; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v64; // x24
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x5
  struct SupportSelectMenu_o *v67; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  const MethodInfo *v76; // x1
  struct SupportSelectMenu_o *v77; // x8
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct SupportServantData_array *v84; // x20
  __int64 v85; // x8
  unsigned __int64 v86; // x21
  struct EventUpValSetupInfo_o *v87; // x1
  SupportSelectMenu_o *v88; // x20
  SupportServantData_array *v89; // x21
  int32_t v90; // w22
  SupportSelectMenu_CallbackFunc_o *v91; // x23
  const MethodInfo *v92; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v93; // x24
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x5
  const MethodInfo *v96; // x2
  struct SupportServantData_array *v97; // x8
  bool v98; // w1
  System_Action_o *v99; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BD8E31 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_1C21E38(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C21E38(&StringLiteral_12711/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4BD8E31 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12711/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
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
    v12 = (struct System_Int32_array *)sub_1C21EE0(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v12;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int64_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v22 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v22 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_76;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v22 < (int)max_length )
      {
        if ( v22 >= max_length )
          goto LABEL_77;
        v26 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_76;
        if ( v22 >= v26->max_length )
          goto LABEL_77;
        *((_DWORD *)&v26->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v27 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v27;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int64_t)v27,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v36 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v36 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_76;
      v38 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v36 < (int)v38 )
      {
        if ( v36 >= v38 )
          goto LABEL_77;
        v39 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_76;
        if ( v36 >= v39->max_length )
          goto LABEL_77;
        *((_DWORD *)&v39->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
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
          TitleInfoControl__setTitleInfo_38387048(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            81,
            1,
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
                        eventSetupInfo = this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          (int64_t)eventSetupInfo,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                      }
                      LODWORD(v57) = supportServantData->max_length;
                      if ( (__int64)++v58 >= (int)v57 )
                        goto LABEL_49;
                    }
LABEL_77:
                    sub_1C2209C(followerQuestInfomationDraw, v6);
                  }
LABEL_49:
                  v60 = this->fields.supportSelectMenu;
                  v61 = this->fields.supportServantData;
                  v62 = (SupportSelectMenu_CallbackFunc_o *)sub_1C22084(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v62,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v63);
                  v64 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C22084(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v64,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v65);
                  if ( v60 )
                  {
                    SupportSelectMenu__Open(v60, v61, Int, v62, v64, v66);
                    v67 = this->fields.supportSelectMenu;
                    if ( v67 )
                    {
                      indicator = v67->fields.indicator;
                      v69 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                      System_Action___ctor(
                        v69,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v69;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int64_t)v69,
                          v70,
                          v71,
                          v72,
                          v73,
                          v74,
                          v75);
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
    sub_1C22094(followerQuestInfomationDraw, v6);
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
  TitleInfoControl__setTitleInfo_38387048(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    82,
    1,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v76);
  v77 = this->fields.supportSelectMenu;
  if ( !v77 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v77->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v84 = this->fields.supportServantData;
  if ( !v84 )
    goto LABEL_76;
  v85 = *(_QWORD *)&v84->max_length;
  if ( (int)v85 >= 1 )
  {
    v86 = 0LL;
    while ( v86 < (unsigned int)v85 )
    {
      followerQuestInfomationDraw = v84->m_Items[v86];
      if ( followerQuestInfomationDraw )
      {
        v87 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v87;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int64_t)v87,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
      }
      LODWORD(v85) = v84->max_length;
      if ( (__int64)++v86 >= (int)v85 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v88 = this->fields.supportSelectMenu;
  v89 = this->fields.supportServantData;
  v90 = deckIndex;
  v91 = (SupportSelectMenu_CallbackFunc_o *)sub_1C22084(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v91,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v92);
  v93 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C22084(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v93,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v94);
  if ( !v88 )
    goto LABEL_76;
  SupportSelectMenu__Open(v88, v89, v90, v91, v93, v95);
  v97 = this->fields.supportServantData;
  if ( !v97 )
    goto LABEL_76;
  v98 = (int)v97->max_length >= 2 && v97->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v98, v96);
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
  v99 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v99, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v99, 2, 1, 0LL);
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
  if ( (byte_4BD8E43 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E43 = 1;
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
    sub_1C22094(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1C2209C(this, *(_QWORD *)&idx);
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
    sub_1C22094(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_39920388((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent___EndSupportSelectMenu_b__66_2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C22094(0LL, method);
  SupportSelectMenu__Active(supportSelectMenu, method);
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
  if ( (byte_4BD8E35 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4BD8E35 = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
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
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v8->fields.deckNameInputMenu;
  if ( !this )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)this, method);
  this = (SupportSelectRootComponent_o *)v8->fields.fixErrorDialog;
  if ( !this )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)this, method);
  this = (SupportSelectRootComponent_o *)v8->fields.cancelConfirmDeckIdDialog;
  if ( !this
    || (CancelConfirmDeckIdDialog__Init((CancelConfirmDeckIdDialog_o *)this, method),
        (this = (SupportSelectRootComponent_o *)v8->fields.followerQuestInfomationDraw) == 0LL)
    || (FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0LL, 0, 0LL, 0LL),
        (this = (SupportSelectRootComponent_o *)v8->fields.backSkinSprite) == 0LL)
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1C22094(this, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BalanceConfig_c *v13; // x0
  struct SupportServantData_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BalanceConfig_c *v21; // x0
  struct SupportServantData_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1

  if ( (byte_4BD8E29 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SupportServantData___TypeInfo);
    sub_1C21E38(&StringLiteral_13352/*"SvtEqScrollBarValue"*/);
    byte_4BD8E29 = 1;
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
    v6 = (struct SupportServantData_array *)sub_1C21EE0(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v5->static_fields->SupportDeckMax);
    this->fields.supportServantData = v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.supportServantData, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (struct SupportServantData_array *)sub_1C21EE0(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v13->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v14;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.orgSupportServantData,
      (int64_t)v14,
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v22 = (struct SupportServantData_array *)sub_1C21EE0(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v21->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v22;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.tmpSupportServantData,
      (int64_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13352/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v30);
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
  Il2CppClass *v10; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v12; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  Il2CppObject *v22; // x1
  Il2CppClass *v23; // x8
  __int64 v24; // x9
  Il2CppObject *v25; // x10
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  struct SupportInfoJump_o *v30; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v33; // x20
  EventUpValSetupInfo_o *v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Action_o *v41; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v43; // x20
  EventUpValSetupInfo_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x1

  if ( (byte_4BD8E32 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&EventUpValSetupInfo_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SupportInfoJump_TypeInfo);
    sub_1C21E38(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__);
    byte_4BD8E32 = 1;
  }
  if ( data )
  {
    v10 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
        v12 = data;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v12;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v10 )
        v22 = data;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.supportInfoJump,
      (int64_t)v22,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v23 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v24 = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v24 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v24 - 1] == SceneJumpInfo_TypeInfo )
        v25 = data;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v25;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v24 )
    {
      if ( data->klass->_2.typeHierarchy[v24 - 1] == v23 )
        v20 = data;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.supportInfoJump, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    v20 = 0LL;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)p_sceneJumpInfo, (int64_t)v20, v14, v15, v16, v17, v18, v19);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v26);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v30 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v30->fields.otherUserGameEntity || !v30->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v43 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
        v44 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_40169720(v44, v43, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v44;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
          (int64_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        SupportSelectRootComponent__StartUp(this, v51);
        return;
      }
    }
LABEL_41:
    sub_1C22094(bgTxtSprite, v27);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v33 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  v34 = (EventUpValSetupInfo_o *)sub_1C22084(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40169720(v34, v33, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventSetupInfo, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v41, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C22094(0LL, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0

  v2 = this;
  if ( (byte_4BD8E5A & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C21E38(&SupportServantData_TypeInfo);
    byte_4BD8E5A = 1;
  }
  supportServantData = v2->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1C22094(this, method);
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
      v7 = (SupportServantData_o *)sub_1C22084(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C21F74(v7, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v14 = sub_1C220B8();
          sub_1C21F60(v14, 0LL);
        }
      }
      if ( v4 >= supportServantData->max_length )
LABEL_17:
        sub_1C2209C(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) = (Il2CppClass *)v7;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)((char *)supportServantData + v5),
        (int64_t)v7,
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
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v12; // x8
  SupportServantData_o *v13; // x23
  struct SupportServantData_array *v14; // x8
  struct SupportServantData_array *v15; // x8
  SupportServantData_o *v16; // x23
  char v17; // w20
  struct SupportServantData_array *v18; // x8

  if ( (byte_4BD8E59 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8E59 = 1;
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
    sub_1C2209C(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1C22094(OldServant, v8);
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

  if ( (byte_4BD8E34 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4BD8E34 = 1;
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
              (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
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
          (const MethodInfo_2FE4208 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v19 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2FC7870 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v19,
                            (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                                    (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___)
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
    sub_1C2209C(eventSupportDeckIds, v6);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
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
    sub_1C22094(eventSupportDeckIds, v6);
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
    sub_1C22094(blackMask, editOn);
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
    sub_1C22094(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8E5F & 1) == 0 )
  {
    sub_1C21E38(&SupportSelectRootComponent___c_TypeInfo);
    byte_4BD8E5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BD8E60 & 1) == 0 )
  {
    sub_1C21E38(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_4BD8E60 = 1;
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
      sub_1C2209C(_4__this, isDecide);
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
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C22084(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v12,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1C22094(_4__this, isDecide);
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4BD8E61 & 1) == 0 )
  {
    sub_1C21E38(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_4BD8E61 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = this->fields.__4__this;
    if ( !v6 )
      goto LABEL_15;
    supportServantData = v6->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v6->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1C2209C(_4__this, isDecide);
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
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C22084(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v13,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v18),
          !v12) )
    {
LABEL_15:
      sub_1C22094(_4__this, isDecide);
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C22094(this, x);
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
    sub_1C22094(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}