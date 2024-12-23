void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B634FF & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectRootComponent_TypeInfo, v1);
    byte_4B634FF = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Int32_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B634FE & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    byte_4B634FE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct System_Int32_array *)sub_1BE4B74(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v12;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (int64_t)v12,
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

  if ( (byte_4B634D9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12659/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_4B634D9 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12659/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void __fastcall SupportSelectRootComponent__ChangeDeckName(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportServantData_o *CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v10; // x23
  const MethodInfo *v11; // x3

  if ( (byte_4B634F8 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_4B634F8 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BE4D30(CenterNum, v5);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v10 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1BE4D18(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          v11),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1BE4D28(CenterNum, v5);
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
      v3 = 81;
      goto LABEL_7;
    }
LABEL_9:
    sub_1BE4D28(titleInfo, method);
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
  __int64 CenterNum; // x0
  __int64 v7; // x1
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v10; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v12; // x22
  SupportServantData_o *v13; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x23
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_4B634F1 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_4B634F1 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v10 = this->fields.copyTargetDeckId - 1, v10 >= max_length) )
    sub_1BE4D30(CenterNum, v7);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = supportServantData->m_Items[v10];
  v14 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    v15);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1BE4D28(CenterNum, v7);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v12, v13, v14, v16);
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

  if ( (byte_4B634FC & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&BalanceConfig_TypeInfo, orgData);
    byte_4B634FC = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1BE4D28(this, orgData);
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
          sub_1BE4D30(this, orgData);
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

  if ( (byte_4B634EB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, isDecide);
    byte_4B634EB = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0LL);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
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
    sub_1BE4D28(cancelConfirmMenu, isDecide);
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
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B634EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, isDecide);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v5);
    byte_4B634EA = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v7 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22543/*"ok"*/, v9);
      return;
    }
LABEL_10:
    sub_1BE4D28(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
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
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v14; // x21

  if ( (byte_4B634F9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v11);
    byte_4B634F9 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_1BE4A70(
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
      v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_33982860(deckNameInputMenu, v14, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BE4D28(supportEditMenu, isDecide);
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
    sub_1BE4D28(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1BE4D28(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B634E2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B634E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
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
        sub_1BE4D30(CenterNum, isDecide);
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
    sub_1BE4D28(CenterNum, isDecide);
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
    sub_1BE4D28(0LL, flag);
  SupportSelectConfirmMenu__Close_34058304(supportSelectConfirmMenu, 0LL, method);
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

  if ( (byte_4B634F5 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, isDecide);
    byte_4B634F5 = 1;
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
        sub_1BE4D30(confirmDeckMenu, isDecide);
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
    sub_1BE4D28(confirmDeckMenu, isDecide);
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

  if ( (byte_4B634D4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_4B634D4 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1BE4D28(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v10; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_4B634F3 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, isDecide);
    byte_4B634F3 = 1;
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
        sub_1BE4D30(confirmDeckMenu, isDecide);
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
    sub_1BE4D28(confirmDeckMenu, isDecide);
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

  if ( (byte_4B634F7 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, isDecide);
    byte_4B634F7 = 1;
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
          sub_1BE4D30(confirmDeckMenu, isDecide);
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
    sub_1BE4D28(confirmDeckMenu, isDecide);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_4B634F0 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_4B634F0 = 1;
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
      sub_1BE4D30(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v11 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v12 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v13);
    if ( !supportEditMenu )
LABEL_10:
      sub_1BE4D28(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v11, isEdit, v12, v14);
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

  if ( (byte_4B634E3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B634E3 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1BE4D28(supportSelectMenu, isDecide);
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

  if ( (byte_4B634E0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B634E0 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BE4D28(supportSelectMenu, isDecide);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B634E1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_4B634E1 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1BE4D28(v10, v11);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
    sub_1BE4D28(CenterNum, v7);
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
  int32_t CenterNum; // w22
  const MethodInfo *v34; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  int32_t v39; // w23
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v42; // x21
  CancelConfirmMenu_CallbackFunc_o *v43; // x22
  const MethodInfo *v44; // x2
  struct SupportServantData_array *v45; // x8
  SupportServantData_o *v46; // x0
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v50; // x21
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  struct SupportServantData_array *v54; // x22
  SupportServantData_o *v55; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v58; // x24
  System_Int32_array *v59; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v61; // x2
  struct SupportServantData_array *v62; // x22
  SupportServantData_o *v63; // x8
  EventUpValSetupInfo_o *v64; // x27
  System_Int32_array *v65; // x25
  System_Int32_array *v66; // x26
  CommonUI_o *v67; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v68; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  SupportSelectMenu_o *v72; // x20
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  bool v75; // w1
  SupportSelectRootComponent_o *v76; // x0
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
  Il2CppObject *Instance; // x20
  System_Action_o *v102; // x22
  _QWORD *v103; // x0
  System_Reflection_MethodBase_o *v104; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v106; // x8
  int64_t v107; // x21
  struct SupportServantData_array *v108; // x8
  SupportServantData_o *v109; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  struct SupportServantData_array *v113; // x8
  SupportServantData_o *v114; // x8
  int32_t kind; // w20
  CommonUI_o *v116; // x22
  ServantLeaderInfo_o *v117; // x21
  ServantStatusDialog_EndDelegate_o *v118; // x23
  struct SupportServantData_array *v119; // x8
  struct SupportServantData_array *v120; // x8
  int64_t v121; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v123; // x8
  System_Reflection_MethodBase_o *v124; // x0
  struct SupportServantData_array *v125; // x8
  SupportServantData_o *v126; // x8
  int32_t v127; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v129; // x21
  ServantStatusDialog_EndDelegate_o *v130; // x23
  _QWORD *v131; // x0
  System_Reflection_MethodBase_o *v132; // x0
  _QWORD *v133; // x0
  System_Reflection_MethodBase_o *v134; // x0
  _QWORD *v135; // x0
  System_Reflection_MethodBase_o *v136; // x0
  const MethodInfo *v137; // x2
  int64_t v138; // x21
  ServantStatusDialog_FormationEndDelegate_o *v139; // x23
  Il2CppObject *v140; // x20
  ServantStatusDialog_EndDelegate_o *v141; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v143; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v145; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x0
  int32_t v154; // w0
  SupportSelectRootComponent___c_c *v155; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v157; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v159; // x24
  struct SupportSelectRootComponent___c_StaticFields *v160; // x0
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v167; // x0
  struct SupportServantData_array *v168; // x8
  SupportServantData_o *v169; // x0
  _QWORD *v170; // x0
  System_Reflection_MethodBase_o *v171; // x0
  const MethodInfo *v172; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v174; // 0:x0.16

  if ( (byte_4B634DA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v8);
    sub_1BE4ACC(&CancelConfirmMenu_CallbackFunc_TypeInfo, v9);
    sub_1BE4ACC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1BE4ACC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v11);
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_1BE4ACC(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v19);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v21);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v22);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndShowEquip__, v23);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v24);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndShowServant__, v25);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v26);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v27);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_OnBackSelect__, v28);
    sub_1BE4ACC(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__, v29);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v30);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v31);
    sub_1BE4ACC(&SupportSelectRootComponent___c_TypeInfo, v32);
    byte_4B634DA = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v34);
  v39 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v38);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_134;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_163;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_164;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v42 = supportServantData->m_Items[CenterNum];
      v43 = (CancelConfirmMenu_CallbackFunc_o *)sub_1BE4D18(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0LL);
      if ( !cancelConfirmMenu )
        goto LABEL_163;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v42, v43, 0LL);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v38);
      if ( (isUpdate & 1) != 0 )
      {
        v45 = this->fields.supportServantData;
        if ( !v45 )
          goto LABEL_163;
        if ( CenterNum < v45->max_length )
        {
          v46 = v45->m_Items[CenterNum];
          if ( v46 && SupportServantData__get_IsNoServant(v46, 0LL) )
          {
LABEL_15:
            v47 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v47 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v48 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v47, v47[4]);
            OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v50 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BE4D18(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v50,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              v51);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v50, v52);
              return;
            }
LABEL_163:
            sub_1BE4D28(isUpdate, v36);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v44);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v135 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v135 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v136 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v135, v135[4]);
          OverwriteAssetSoundName__PlaySystemSe(v136, 8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v36, v137);
          goto LABEL_134;
        }
LABEL_164:
        sub_1BE4D30(isUpdate, v36);
      }
      if ( this->fields.isEdit )
      {
        v133 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v133 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v134 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v133, v133[4]);
        OverwriteAssetSoundName__PlaySystemSe(v134, 8, 0LL);
LABEL_134:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v36);
        v76 = this;
        v75 = 0;
        this->fields.isDragSwapState = 0;
LABEL_135:
        SupportSelectRootComponent__setEditUI(v76, v75, v74);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v143 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v143 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v143->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v143->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v143);
          v143 = SupportSelectRootComponent___c_TypeInfo;
        }
        v145 = (Il2CppObject *)v143->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v145,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__66_0,
          (int64_t)_9__66_0,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152);
      }
      v153 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
      v154 = System_Linq_Enumerable__Count_int_(
               v153,
               (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
      v155 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v157 = v154;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v155 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v155->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v155->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v155);
          v155 = SupportSelectRootComponent___c_TypeInfo;
        }
        v159 = (Il2CppObject *)v155->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v159,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v160 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v160->__9__66_1 = _9__66_1;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v160->__9__66_1,
          (int64_t)_9__66_1,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
      }
      v167 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v167,
                   (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
      if ( v157 < 1 || (int)isUpdate <= 0 )
      {
        v168 = this->fields.supportServantData;
        if ( !v168 )
          goto LABEL_163;
        if ( CenterNum >= v168->max_length )
          goto LABEL_164;
        v169 = v168->m_Items[CenterNum];
        if ( v169 && SupportServantData__get_IsNoServant(v169, 0LL) )
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
      v170 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v170 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v171 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v170, v170[4]);
      OverwriteAssetSoundName__PlaySystemSe(v171, 8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v172);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v37);
      SupportSelectRootComponent__setEditUI(this, 1, v53);
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
      v54 = this->fields.supportServantData;
      if ( !v54 )
        goto LABEL_163;
      if ( v54->max_length <= deckNum )
        goto LABEL_164;
      v55 = v54->m_Items[deckNum];
      if ( !v55 )
        goto LABEL_163;
      eventSetupInfo2 = v55->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v58 = this->fields.tempFixMainQuestSupportDeckIds;
      v59 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1BE4D18(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_163;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v54,
        deckNum,
        classPos,
        eventSetupInfo2,
        v39,
        v58,
        v59,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v37);
      SupportSelectRootComponent__setEditUI(this, 1, v61);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v62 = this->fields.supportServantData;
      if ( !v62 )
        goto LABEL_163;
      if ( v62->max_length <= deckNum )
        goto LABEL_164;
      v63 = v62->m_Items[deckNum];
      if ( !v63 )
        goto LABEL_163;
      v64 = v63->fields.eventSetupInfo2;
      v65 = this->fields.tempFixMainQuestSupportDeckIds;
      v66 = this->fields.tempFixEventQuestSupportDeckIds;
      v67 = (CommonUI_o *)isUpdate;
      v68 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1BE4D18(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v68,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v67 )
        goto LABEL_163;
      CommonUI__OpenSupportServantEquipListMenu(v67, v62, deckNum, classPos, v64, v39, v65, v66, v68, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !supportSelectMenu )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v70);
      SupportSelectRootComponent__ChangeDeckName(this, v71);
      return;
    case 5:
      v72 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !v72 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v72, isUpdate, v73);
      v75 = 1;
      this->fields.isDragSwapState = 1;
      v76 = this;
      goto LABEL_135;
    case 6:
      v77 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !v77 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v77, isUpdate, v78);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v79);
      return;
    case 7:
      v80 = this->fields.supportServantData;
      if ( !v80 )
        goto LABEL_163;
      if ( v80->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v80->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_163;
      v81 = *(_QWORD *)(isUpdate + 24);
      if ( !v81 )
        goto LABEL_120;
      v83 = *(_QWORD *)(v81 + 48);
      v82 = *(_QWORD *)(v81 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v173.fields.currentCryptoKey = v83;
      *(_QWORD *)&v173.fields.fakeValue = v82;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v173, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_120;
      v84 = this->fields.supportServantData;
      if ( !v84 )
        goto LABEL_163;
      if ( v84->max_length <= deckNum )
        goto LABEL_164;
      v85 = v84->m_Items[deckNum];
      if ( !v85 )
        goto LABEL_163;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v81,
                   v85->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_120;
      v86 = this->fields.supportServantData;
      if ( !v86 )
        goto LABEL_163;
      if ( v86->max_length <= deckNum )
        goto LABEL_164;
      v87 = v86->m_Items[deckNum];
      if ( !v87 )
        goto LABEL_163;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v81, v87->fields.questRestrictionInfo, 0LL) )
        goto LABEL_120;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      v88 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      if ( v88 < 1 )
        goto LABEL_76;
      v89 = this->fields.supportServantData;
      if ( !v89 )
        goto LABEL_163;
      if ( v89->max_length <= deckNum )
        goto LABEL_164;
      v90 = v89->m_Items[deckNum];
      if ( !v90 )
        goto LABEL_163;
      questRestrictionInfo = v90->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_163;
      v92 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41431712(questRestrictionInfo, v92, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v93 = this->fields.supportServantData;
      if ( !v93 )
        goto LABEL_163;
      if ( v93->max_length <= deckNum )
        goto LABEL_164;
      v94 = v93->m_Items[deckNum];
      if ( !v94 )
        goto LABEL_163;
      v95 = v94->fields.questRestrictionInfo;
      v97 = *(_QWORD *)(v81 + 48);
      v96 = *(_QWORD *)(v81 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v174.fields.currentCryptoKey = v97;
      *(_QWORD *)&v174.fields.fakeValue = v96;
      v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v174, 0LL);
      v99 = *(_DWORD *)(v81 + 64);
      v100 = v98;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v81, 0LL);
      if ( !v95 )
        goto LABEL_163;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v95, v100, v99, isUpdate, v92, 1, 0LL) )
        goto LABEL_120;
LABEL_76:
      if ( this->fields.supportInfoJump )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v102 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(
          v102,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__,
          0LL);
        if ( !Instance )
          goto LABEL_163;
        if ( !PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(
                (PartyOrganizationUtility_o *)Instance,
                v102,
                0LL) )
        {
          v103 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v103 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v104 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v103, v103[4]);
          OverwriteAssetSoundName__PlaySystemSe(v104, 0, 0LL);
          isUpdate = (int64_t)this->fields.supportInfoJump;
          if ( !isUpdate )
            goto LABEL_163;
          supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
          *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
          *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v81 + 16);
          if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
          {
            isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v131 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v131 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v132 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v131, v131[4]);
        OverwriteAssetSoundName__PlaySystemSe(v132, 2, 0LL);
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_163;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v36);
      }
      return;
    case 8:
      v106 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v106 )
        goto LABEL_163;
      if ( v106->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v106->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_163;
      v107 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_120;
      v108 = this->fields.supportServantData;
      if ( !v108 )
        goto LABEL_163;
      if ( v108->max_length <= deckNum )
        goto LABEL_164;
      v109 = v108->m_Items[deckNum];
      if ( !v109 )
        goto LABEL_163;
      isFriendInfo = v109->fields.isFriendInfo;
      v111 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v111 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v112 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v111, v111[4]);
      OverwriteAssetSoundName__PlaySystemSe(v112, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v113 = this->fields.supportServantData;
      if ( !v113 )
        goto LABEL_163;
      if ( v113->max_length <= deckNum )
        goto LABEL_164;
      v114 = v113->m_Items[deckNum];
      if ( !v114 )
        goto LABEL_163;
      kind = v114->fields.kind;
      v116 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v117 = *(ServantLeaderInfo_o **)(v107 + 24);
        v118 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v118,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v116 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_30886140(v116, kind, v117, v118, 0LL);
      }
      else
      {
        v138 = *(_QWORD *)(v107 + 56);
        v139 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BE4D18(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v139,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v116 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_30883508(v116, kind, v138, v139, 0LL, 0LL);
      }
      return;
    case 9:
      v119 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v119 )
        goto LABEL_163;
      if ( v119->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v119->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_120;
      v120 = this->fields.supportServantData;
      if ( !v120 )
        goto LABEL_163;
      if ( v120->max_length <= deckNum )
        goto LABEL_164;
      v121 = isUpdate;
      isUpdate = (int64_t)v120->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v123 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v123 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v124 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v123, v123[4]);
      OverwriteAssetSoundName__PlaySystemSe(v124, 0, 0LL);
      v125 = this->fields.supportServantData;
      if ( !v125 )
        goto LABEL_163;
      if ( v125->max_length <= deckNum )
        goto LABEL_164;
      v126 = v125->m_Items[deckNum];
      if ( !v126 )
        goto LABEL_163;
      if ( v126->fields.isFriendInfo )
      {
        if ( v126->fields.kind == 5 )
          v127 = 14;
        else
          v127 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_163;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v129 = (CommonUI_o *)isUpdate;
        v130 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v130,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v129 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog_30889236(v129, v127, equipTarget1, v130, 0LL, 0LL);
      }
      else
      {
        v140 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v141 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v141,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v140 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v140, 11, v121, 1, v141, 0LL, 0LL);
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

  if ( (byte_4B634DF & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_4B634DF = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_42087228(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_42087228(v15->fields.svtId, 0LL);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v33, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v31, 0LL);
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
        sub_1BE4D28(CenterNum, v26);
      }
    }
    sub_1BE4D30(CenterNum, v26);
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
  __int64 v26; // x20
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
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
  Il2CppObject *Entity; // x24
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
  System_Text_StringBuilder_o *v64; // x21
  System_String_o *v65; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v67; // x23
  Il2CppObject *v68; // x19
  System_String_o *v69; // x21
  System_String_o *v70; // x22
  System_String_o *v71; // x23
  CommonConfirmDialog_ClickDelegate_o *v72; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4B634DD & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v18);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v19);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v20);
    sub_1BE4ACC(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_10282/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v22);
    sub_1BE4ACC(&StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, v23);
    sub_1BE4ACC(&StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, v24);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v25);
    byte_4B634DD = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v26 = sub_1BE4D18(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_42;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)(v26 + 32) = item;
  v35 = v26 + 32;
  *(_DWORD *)(v26 + 24) = result;
  *(_DWORD *)(v26 + 28) = classPos;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)item, v36, v37, v38, v39, v40, v41);
  if ( *(_DWORD *)(v26 + 24) == 1 && *(_QWORD *)v35 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BE4D30(UserServantLeaderEntity, v28);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v26 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v45 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v35 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v35 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v45->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v49 = userServantLeaderEntityList->m_Items[6];
          v48 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v76.fields.currentCryptoKey = v49;
          *(_QWORD *)&v76.fields.fakeValue = v48;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                              v76,
                                                              0LL);
          if ( !v45->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v50 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v45->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v35 )
            goto LABEL_42;
          v51 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v35 + 128LL);
          if ( !v51 )
            goto LABEL_42;
          v52 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                              v51[1],
                                                              0LL);
          if ( !v47 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v47,
                 &skillName,
                 &actMaxRarity[1],
                 v50,
                 v52,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v45->fields.isFriendInfo,
                           (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v54 = v45->fields.userServantLeaderEntityList;
                if ( v54 )
                {
                  v55 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v57 = v54->m_Items[8];
                  v56 = v54->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v77.fields.currentCryptoKey = v57;
                  *(_QWORD *)&v77.fields.fakeValue = v56;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                      v77,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
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
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(
                                                                              Name,
                                                                              0LL);
                          if ( v55 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v55,
                                                     actMaxRarity,
                                                     v59,
                                                     v61,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v64 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v64, 0LL);
                              if ( v64 )
                              {
                                System_Text_StringBuilder__Append_61859960(v64, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_61859960(v64, v65, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v67 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v67,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v67, 0LL);
                                  v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v69 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v64->klass->vtable._3_ToString.method)(
                                                             v64,
                                                             v64->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v72 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v72,
                                    (Il2CppObject *)v26,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v68 )
                                  {
                                    CommonUI__OpenConfirmDialog_30874076(
                                      (CommonUI_o *)v68,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v69,
                                      v70,
                                      v71,
                                      v72,
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
            sub_1BE4D28(UserServantLeaderEntity, v28);
          }
        }
      }
    }
  }
  SupportSelectRootComponent__SetEquip(
    this,
    *(_DWORD *)(v26 + 24),
    *(_DWORD *)(v26 + 28),
    *(SupportServantEquipListViewItem_o **)(v26 + 32),
    v42);
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
    sub_1BE4D30(this, *(_QWORD *)&result);
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
    sub_1BE4D28(this, *(_QWORD *)&result);
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
  System_Collections_Generic_List_object__o *v30; // x21
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  int64_t Instance; // x0
  int64_t v34; // x1
  Il2CppObject *Master_object; // x23
  BalanceConfig_c *v36; // x8
  __int64 v37; // x10
  unsigned __int64 v38; // x24
  int32_t v39; // w9
  int32_t v40; // w27
  __int64 v41; // x23
  __int64 v42; // x19
  struct SupportServantData_array *supportServantData; // x8
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x29
  struct SupportServantData_array *v51; // x8
  SupportServantData_o *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v54; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  ServantEntity_o *v56; // x28
  int32_t Rarity; // w0
  int v58; // w19
  int32_t v59; // w29
  System_String_o *v60; // x19
  Il2CppObject *v61; // x25
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_o *v69; // x25
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x19
  Il2CppObject *Name; // x29
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  __int64 v82; // [xsp+10h] [xbp-A0h]
  __int64 v83; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v84; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *v85; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v88; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B634E5 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_1BE4ACC(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v18);
    sub_1BE4ACC(&int_TypeInfo, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v21);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v23);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v26);
    sub_1BE4ACC(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v27);
    sub_1BE4ACC(&StringLiteral_12580/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v28);
    sub_1BE4ACC(&StringLiteral_12581/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v29);
    byte_4B634E5 = 1;
  }
  entity = 0LL;
  v30 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v31) )
      return (System_Collections_Generic_List_string__o *)v30;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v31) )
  {
    return (System_Collections_Generic_List_string__o *)v30;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v32);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_73:
    sub_1BE4D28(Instance, v34);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v84 = (ServantLimitImageMaster_o *)Instance;
  v85 = (UserServantCollectionMaster_o *)Master_object;
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  v37 = 184LL;
  if ( isMain )
    v37 = 180LL;
  v83 = *(unsigned int *)((char *)&v36->static_fields->CriticalRateToAddByQuickFirstBonus + v37);
  if ( *(int *)((char *)&v36->static_fields->CriticalRateToAddByQuickFirstBonus + v37) >= 1 )
  {
    v38 = 0LL;
    v82 = (unsigned int)idx;
    do
    {
      if ( v38 != v82 )
      {
        if ( !fixDeckIds )
          goto LABEL_73;
        if ( v38 >= fixDeckIds->max_length )
LABEL_74:
          sub_1BE4D30(Instance, v34);
        v39 = fixDeckIds->m_Items[v38 + 1];
        if ( v39 )
        {
          v40 = 0;
          v41 = v39 - 1;
          while ( 1 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = BalanceConfig_TypeInfo;
            }
            if ( v40 >= v36->static_fields->SupportDeckMemberMax )
              break;
            v42 = sub_1BE4D18(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v42,
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
                                  v40,
                                  0LL);
            if ( !v42 )
              goto LABEL_73;
            *(_QWORD *)(v42 + 16) = Instance;
            v50 = v42 + 16;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v42 + 16), Instance, v44, v45, v46, v47, v48, v49);
            if ( !*(_QWORD *)(v42 + 16) )
              goto LABEL_73;
            if ( *(_DWORD *)(*(_QWORD *)(v42 + 16) + 64LL) )
            {
              v51 = this->fields.supportServantData;
              if ( !v51 )
                goto LABEL_73;
              if ( (unsigned int)v41 >= v51->max_length )
                goto LABEL_74;
              v52 = v51->m_Items[v41];
              if ( !v52 )
                goto LABEL_73;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v52->fields.userServantLeaderEntityList;
              v54 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v54,
                (Il2CppObject *)v42,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v55 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v54,
                      (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v55,
                           (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v50 )
                  goto LABEL_73;
                Instance = (int64_t)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_73;
                Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v50 + 64LL),
                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v50 )
                  goto LABEL_73;
                v56 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v50 + 16LL);
                if ( !Instance )
                  goto LABEL_73;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v58 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4B61717 )
                  {
                    sub_1BE4ACC(&NetworkManager_TypeInfo, v34);
                    byte_4B61717 = 1;
                  }
                  Instance = (int64_t)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = (int64_t)NetworkManager_TypeInfo;
                  }
                  if ( !*(_QWORD *)v50 || !v85 )
                    goto LABEL_73;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         v85,
                         &entity,
                         *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                         *(_DWORD *)(*(_QWORD *)v50 + 64LL),
                         0LL) )
                  {
                    Instance = (int64_t)v84;
                    if ( !*(_QWORD *)v50 )
                      goto LABEL_73;
                    if ( !entity )
                      goto LABEL_73;
                    if ( !v84 )
                      goto LABEL_73;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v84,
                                 *(_DWORD *)(*(_QWORD *)v50 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_73;
                    v59 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v59 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v88 = v58;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v88, v70, v71, v72);
                  if ( !v56 )
                    goto LABEL_73;
                  v73 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v56, v59, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v56, 0LL);
                  Instance = (int64_t)System_String__Format_62713248(v69, v73, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12581/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v56 )
                    goto LABEL_73;
                  v60 = (System_String_o *)Instance;
                  v61 = (Il2CppObject *)ServantEntity__getName(v56, -1, -1, 0LL);
                  v62 = (Il2CppObject *)ServantEntity__getClassName(v56, 0LL);
                  Instance = (int64_t)System_String__Format_62713180(v60, v61, v62, 0LL);
                }
                v34 = Instance;
                if ( !v30 )
                  goto LABEL_73;
                items = v30->fields._items;
                v77 = Method_System_Collections_Generic_List_string__Add__;
                ++v30->fields._version;
                if ( !items )
                  goto LABEL_73;
                size = v30->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                }
                else
                {
                  v79 = &items->obj.klass + size;
                  v30->fields._size = size + 1;
                  v79[4] = (Il2CppClass *)v34;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v79 + 4), v34, v63, v64, v65, v66, v67, v68);
                }
              }
            }
            v36 = BalanceConfig_TypeInfo;
            ++v40;
          }
        }
      }
      ++v38;
    }
    while ( v38 != v83 );
  }
  return (System_Collections_Generic_List_string__o *)v30;
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4B634F4 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_4B634F4 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BE4D30(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BE4D28(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v8, v9, v11);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportServantData_array *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4B634CC & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&SupportServantData___TypeInfo, v3);
    byte_4B634CC = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_1BE4B74(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.supportServantData, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  SupportSelectRootComponent__RefreshSupportServantData(this, v12);
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

  if ( (byte_4B634FD & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    byte_4B634FD = 1;
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
      sub_1BE4D30(Servant, method);
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_1BE4D28(Servant, method);
    if ( System_String__op_Inequality(v9->fields._deckName_k__BackingField, v16->fields._deckName_k__BackingField, 0LL) )
      return v6;
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

  if ( (byte_4B634CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_4B634CE = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4B634CD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_4B634CD = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___) >= 0;
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
  SupportServantData_o *CenterNum; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  bool v14; // w9
  il2cpp_array_size_t v15; // w22
  signed __int64 v16; // x28
  __int64 v17; // x19
  int v18; // w8
  il2cpp_array_size_t v19; // w27
  int32_t i; // w23
  __int64 v21; // x24
  struct SupportServantData_array *supportServantData; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x8
  struct SupportServantData_array *v30; // x8
  SupportServantData_o *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v33; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int32_array *v37; // [xsp+10h] [xbp-70h]
  bool v38; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4B634EE & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_1BE4ACC(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v9);
    sub_1BE4ACC(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v10);
    byte_4B634EE = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1BE4D28(CenterNum, v12);
  v13 = *(_QWORD *)&fixDeckIds->max_length;
  v14 = (int)v13 > 0;
  if ( (int)v13 >= 1 )
  {
    v15 = (unsigned int)CenterNum;
    v16 = 0LL;
    v17 = (int)CenterNum;
    v37 = fixDeckIds;
    do
    {
      v38 = v14;
      if ( v16 >= (unsigned __int64)(unsigned int)v13 )
LABEL_29:
        sub_1BE4D30(CenterNum, v12);
      v18 = fixDeckIds->m_Items[v16 + 1];
      v19 = v18 - 1;
      if ( v18 >= 1 && v19 != idx )
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
          v21 = sub_1BE4D18(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
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
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v21 )
            goto LABEL_28;
          *(_QWORD *)(v21 + 16) = CenterNum;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)CenterNum, v23, v24, v25, v26, v27, v28);
          v29 = *(_QWORD *)(v21 + 16);
          if ( !v29 )
            goto LABEL_28;
          if ( *(_DWORD *)(v29 + 64) )
          {
            v30 = this->fields.supportServantData;
            if ( !v30 )
              goto LABEL_28;
            if ( v19 >= v30->max_length )
              goto LABEL_29;
            v31 = v30->m_Items[v19];
            if ( !v31 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v31->fields.userServantLeaderEntityList;
            v33 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v33,
              (Il2CppObject *)v21,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v34 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v33,
                    (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v34,
                   (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v14 = v38;
              return !v14;
            }
          }
        }
      }
      fixDeckIds = v37;
      ++v16;
      LODWORD(v13) = v37->max_length;
      v14 = v16 < (int)v13;
    }
    while ( v16 < (int)v13 );
  }
  return !v14;
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
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v13; // x1
  System_Array_o *v14; // x22
  int monitor; // w25
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  BalanceConfig_c *v19; // x0
  Il2CppObject *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x22
  BalanceConfig_c *v22; // x0
  bool v23; // w21
  char v24; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v26; // x0
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v28; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  int32_t v37; // w0
  SupportSelectRootComponent___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v40; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v42; // x23
  struct SupportSelectRootComponent___c_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  int32_t v51; // w0
  bool v52; // w8

  if ( (byte_4B634DB & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v8);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v9);
    sub_1BE4ACC(&SupportSelectRootComponent___c_TypeInfo, v10);
    byte_4B634DB = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v14 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].klass;
  if ( !SelfUserGame )
    goto LABEL_40;
  monitor = (int)v14[12].monitor;
  if ( SelfUserGame[1].monitor )
  {
    v16 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v16 )
    {
      v17 = v16;
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BE4C08(v16, int___TypeInfo);
      if ( !v18 )
        goto LABEL_17;
    }
    else
    {
      v18 = 0LL;
    }
  }
  else
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BE4B74(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v19->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v14[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1BE4D28(SelfUserGame, v13);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BE4B74(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v22->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v20 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v20 )
  {
    v21 = 0LL;
    goto LABEL_22;
  }
  v17 = v20;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BE4C08(v20, int___TypeInfo);
  if ( !v21 )
  {
LABEL_17:
    sub_1BE4FE8(v17);
    goto LABEL_18;
  }
LABEL_22:
  v23 = System_Linq_Enumerable__SequenceEqual_int_(
          v18,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v24 = v23 & System_Linq_Enumerable__SequenceEqual_int_(
                v21,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( (v24 & 1) == 0 )
    goto LABEL_37;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v26 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v26 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_0 = v26->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = SupportSelectRootComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v28, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__67_0,
      (int64_t)_9__67_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
  v37 = System_Linq_Enumerable__Count_int_(v36, (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
  v38 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v40 = v37;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v38 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v38->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = SupportSelectRootComponent___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v38->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v42, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v43 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v43->__9__67_1 = _9__67_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v43->__9__67_1, (int64_t)_9__67_1, v44, v45, v46, v47, v48, v49);
  }
  v50 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
  v51 = System_Linq_Enumerable__Count_int_(v50, (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
  if ( v40 < 1 || v51 <= 0 )
    v52 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v52 = 0;
  return v52 || (v24 & 1) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4B634CF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4B634CF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v23; // x19
  SupportServantData_o *UserServantLeaderEntity; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
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
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x20
  __int64 v52; // x23
  __int64 v53; // x24
  Il2CppObject *v54; // x23
  PartyOrganizationUtility_o *v55; // x20
  UserServantEntity_o *v56; // x8
  System_String_o *v57; // x21
  EquipTargetInfo_o *v58; // x8
  int32_t v59; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v61; // x21
  System_String_o *v62; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v64; // x21
  System_String_o *v65; // x22
  System_String_o *v66; // x23
  CommonConfirmDialog_ClickDelegate_o *v67; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4B634DC & 1) == 0 )
  {
    sub_1BE4ACC(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_1BE4ACC(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v17);
    sub_1BE4ACC(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_10282/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v19);
    sub_1BE4ACC(&StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, v20);
    sub_1BE4ACC(&StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, v21);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v22);
    byte_4B634DC = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v23 = sub_1BE4D18(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_35;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 32) = entity;
  v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v23 + 32);
  *(_DWORD *)(v23 + 24) = result;
  *(_DWORD *)(v23 + 28) = classPos;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)entity, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v23 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BE4D30(UserServantLeaderEntity, v25);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v23 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v42 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v43 = (UserServantEntity_o *)*v32;
      if ( !*v32 )
        goto LABEL_35;
      v44 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v71.fields.currentCryptoKey = v46;
      *(_QWORD *)&v71.fields.fakeValue = v45;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                          v71,
                                                          0LL);
      if ( !*v32 )
        goto LABEL_35;
      v47 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v32, 0LL);
      oldServantIdList = v42->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v49 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v44 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v44,
             &skillName,
             &actMaxRarity[1],
             v47,
             v49,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
          v50 = (UserServantEntity_o *)*v32;
          if ( *v32 )
          {
            v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
            v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v72.fields.currentCryptoKey = v53;
            *(_QWORD *)&v72.fields.fakeValue = v52;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                v72,
                                                                0LL);
            if ( v51 )
            {
              v54 = DataMasterBase_object__object__int___GetEntity(
                      v51,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v32 )
              {
                v55 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                                    (*v32)[6],
                                                                    0LL);
                if ( v54 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v54,
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
                                                 actMaxRarity,
                                                 v57,
                                                 v59,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v61 = (System_Text_StringBuilder_o *)sub_1BE4D18(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v61, 0LL);
                          if ( v61 )
                          {
                            System_Text_StringBuilder__Append_61859960(v61, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_61859960(v61, v62, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v64 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v61->klass->vtable._3_ToString.method)(
                                                       v61,
                                                       v61->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v67 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BE4D18(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v67,
                              (Il2CppObject *)v23,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30874076(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v64,
                                v65,
                                v66,
                                v67,
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
        sub_1BE4D28(UserServantLeaderEntity, v25);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v23 + 24),
    *(_DWORD *)(v23 + 28),
    *(UserServantEntity_o **)(v23 + 32),
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  SupportServantSelectMenu_o *CenterNum; // x0
  Il2CppObject *supportInfoJump; // x2
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v22; // x21
  CancelConfirmMenu_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x2
  int32_t v28; // w20
  SupportServantSelectMenu_o *v29; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x24
  System_Int32_array *v33; // x22
  const MethodInfo *v34; // x2
  BalanceConfig_c *v35; // x0
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x1
  System_Int32_array *v38; // x23
  BalanceConfig_c *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v45; // x27

  if ( (byte_4B634E9 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_1BE4ACC(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&int___TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v8);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v9);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_OnClickBack__, v10);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v11);
    byte_4B634E9 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v17 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickBack__);
      v18 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v19);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1BE4D30(CenterNum, v14);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v22 = supportServantData->m_Items[(int)CenterNum];
        v23 = (CancelConfirmMenu_CallbackFunc_o *)sub_1BE4D18(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0LL);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v22, v23, 0LL);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v24)
      || this->fields.isEdit )
    {
      v25 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickBack__);
      v26 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v14);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v27);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22543/*"ok"*/, v34);
        return;
      }
      goto LABEL_52;
    }
    v28 = SupportSelectRootComponent__getCenterNum(this, v24);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_52;
    v29 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_52;
    pushTabButton = (int32_t)v29->fields.pushTabButton;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v31 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v31 )
      {
        v32 = v31;
        v33 = (System_Int32_array *)sub_1BE4C08(v31, int___TypeInfo);
        if ( !v33 )
          goto LABEL_43;
      }
      else
      {
        v33 = 0LL;
      }
    }
    else
    {
      v35 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      v33 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v35->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v29->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v36 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v36 )
    {
      v38 = 0LL;
      goto LABEL_48;
    }
    v32 = v36;
    v38 = (System_Int32_array *)sub_1BE4C08(v36, int___TypeInfo);
    if ( v38 )
      goto LABEL_48;
LABEL_43:
    sub_1BE4FE8(v32);
LABEL_44:
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    v38 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v39->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v37);
    v40 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickBack__);
    v41 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v40, v40[4]);
    OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v45 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1BE4D18(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      0LL);
    if ( cancelConfirmDeckIdDialog )
    {
      CancelConfirmDeckIdDialog__Open(
        cancelConfirmDeckIdDialog,
        v28 + 1,
        pushTabButton,
        tempFixMainQuestSupportDeckIds,
        tempFixEventQuestSupportDeckIds,
        v33,
        v38,
        v45,
        0LL);
      return;
    }
LABEL_52:
    sub_1BE4D28(CenterNum, v14);
  }
  v12 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickBack__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t CenterNum; // w23
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4B634E7 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__, v8);
    byte_4B634E7 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v11,
                                                                  this->fields.tempFixEventQuestSupportDeckIds,
                                                                  0,
                                                                  v12);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1BE4D30(FixedErrorList, v14);
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v18 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BE4D18(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v22);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v21, v23);
        return;
      }
LABEL_19:
      sub_1BE4D28(FixedErrorList, v14);
    }
  }
  if ( !v17 )
    goto LABEL_19;
  if ( v17->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 1, v15);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      v27);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v28);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v30);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v31);
  }
  else
  {
    v24 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t CenterNum; // w23
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1

  if ( (byte_4B634E6 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__, v8);
    byte_4B634E6 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v11 = SupportSelectRootComponent__getCenterNum(this, v10) + 1;
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v11,
                                                                  this->fields.tempFixMainQuestSupportDeckIds,
                                                                  1,
                                                                  v12);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( CenterNum >= supportServantData->max_length )
    sub_1BE4D30(FixedErrorList, v14);
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    0LL);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v18 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1BE4D18(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v22);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v21, v23);
        return;
      }
LABEL_19:
      sub_1BE4D28(FixedErrorList, v14);
    }
  }
  if ( !v17 )
    goto LABEL_19;
  if ( v17->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v11, 0, v15);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v11,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      v27);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v28);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v30);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v31);
  }
  else
  {
    v24 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v9; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_4B634ED & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_4B634ED = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BE4D30(CenterNum, v5);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v11);
  if ( !supportEditMenu )
LABEL_7:
    sub_1BE4D28(CenterNum, v5);
  SupportSelectEditMenu__Open(supportEditMenu, v9, isEdit, v10, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B634E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__, isFixed);
    byte_4B634E8 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
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
  if ( (byte_4B634CB & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&SupportServantData_TypeInfo, method);
    byte_4B634CB = 1;
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
      v7 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BE4C08(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v36 = sub_1BE4D4C();
          sub_1BE4BF4(v36, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1BE4D30(this, method);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1BE4A70((PartyOrganizationUtility_o *)&supportServantData[v5], (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
      v18 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
      SupportServantData___ctor(v18, 0LL);
      if ( v18 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BE4C08(v18, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v15 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v15 + 8] = v18;
      sub_1BE4A70((PartyOrganizationUtility_o *)&orgSupportServantData[v16], (int64_t)v18, v19, v20, v21, v22, v23, v24);
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
    sub_1BE4D28(this, method);
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
      v29 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
      SupportServantData___ctor(v29, 0LL);
      if ( v29 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BE4C08(v29, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v26 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v26 + 8] = v29;
      sub_1BE4A70((PartyOrganizationUtility_o *)&tmpSupportServantData[v27], (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4B634F2 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_4B634F2 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BE4D30(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BE4D28(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v8, v9, v11);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_4B634F6 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_4B634F6 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1BE4D30(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1BE4D18(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1BE4D28(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v8, v9, v11);
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
  SupportServantData_o *Instance; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  const MethodInfo *v16; // x2
  NetworkManager_ResultCallbackFunc_o *v17; // x21

  if ( (byte_4B634D8 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_1BE4ACC(&StringLiteral_22543/*"ok"*/, v8);
    byte_4B634D8 = 1;
  }
  v9 = SupportSelectRootComponent__getCenterNum(this, method) + 1;
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v10) )
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
        sub_1BE4D30(Instance, v11);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22543/*"ok"*/, v16);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BE4D18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v17,
                                       (const MethodInfo_2FDD714 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1BE4D28(Instance, v11);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v9,
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
      sub_1BE4D30(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1BE4A70(
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
      sub_1BE4D28(IsNullOrEmpty, v5);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4B634EC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_ReturnScene__, v5);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v6);
    byte_4B634EC = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22370/*"ng"*/, 0LL) )
  {
    v8 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BE4AE4(Method_SupportSelectRootComponent_ReturnScene__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v10, v11);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v13);
      return;
    }
    goto LABEL_20;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v7);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, v10, v14);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v15);
      goto LABEL_11;
    }
LABEL_20:
    sub_1BE4D28(supportSelectMenu, v10);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1BE4D30(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1BE4D28(this, *(_QWORD *)&targetIdx);
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
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v35; // x20
  System_Int32_array *v36; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v37; // x24
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x5

  if ( (byte_4B634EF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1BE4ACC(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_4B634EF = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v10 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      supportEditMenu = (SupportSelectEditMenu_o *)BalanceConfig_TypeInfo;
    }
    if ( i >= SLODWORD(supportEditMenu[1].klass->_1.methods) )
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
        goto LABEL_33;
      items = v10->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_33;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v10,
          i,
          *(const MethodInfo_35CF200 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v10->fields._size = size + 1;
        items->m_Items[size + 1] = i;
      }
    }
    else if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v24, v21)
           || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                              this,
                                                              i,
                                                              this->fields.tempFixMainQuestSupportDeckIds,
                                                              v28),
               ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v24, v21) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v29);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v11 )
      goto LABEL_33;
    v30 = v11->fields._items;
    v31 = Method_System_Collections_Generic_List_int__Add__;
    ++v11->fields._version;
    if ( !v30 )
      goto LABEL_33;
    v32 = v11->fields._size;
    if ( (unsigned int)v32 >= v30->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v11,
        i,
        *(const MethodInfo_35CF200 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v11->fields._size = v32 + 1;
      v30->m_Items[v32 + 1] = i;
    }
  }
  if ( !v10
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v10,
                                                       (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v35 = (System_Int32_array *)supportEditMenu,
        v36 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        v37 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1BE4D18(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v37,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v38),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1BE4D28(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v35, v36, v37, v39);
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
    sub_1BE4D28(supportSelectMenu, method);
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

  if ( (byte_4B634D7 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, list);
    byte_4B634D7 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (PartyOrganizationUtility_o *)&this->fields.cacheAssetNameList;
  v10 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38704408(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (PartyOrganizationUtility_c *)list;
  sub_1BE4A70(p_cacheAssetNameList, (int64_t)list, (int64_t)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38706752(v10, 0LL);
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
  int32_t v18; // w22
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x0
  __int64 *v21; // x8
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v23; // x8
  SupportSelectRootComponent_o *v24; // x23
  struct SupportServantData_array *v25; // x8
  struct SupportServantData_array *v26; // x8
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-50h]

  v7 = result;
  v8 = this;
  if ( (byte_4B634DE & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_System_Array_IndexOf_long___, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_4B634DE = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    v21 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_42087228(userSvtEntity->fields.svtId, 0LL);
    v16 = item->fields.userSvtEntity;
    if ( !v16 )
      goto LABEL_32;
    v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v18 = (int)this;
    *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v32.fields.fakeValue = v17;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v31, 0LL, 0LL);
    v18 = 0;
    v32 = v31;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v32;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47302584(&v30, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1BE4D28(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v23 = supportServantData->m_Items[selectNum];
  if ( !v23 )
    goto LABEL_32;
  v24 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v23->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_3055EA8 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v25 = v8->fields.supportServantData;
    if ( !v25 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v25->max_length )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v25->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, 0LL);
  }
  v26 = v8->fields.supportServantData;
  if ( !v26 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= v26->max_length )
LABEL_33:
    sub_1BE4D30(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v26->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v24, v18, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  v21 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v27 = v20;
  System_Action___ctor(v20, (Il2CppObject *)v8, *v21, 0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v27, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v28) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v29);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v29);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v17; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v20; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v22; // x22
  __int64 v23; // x25
  int64_t v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x25
  __int64 v32; // x26
  __int64 v33; // x27
  struct System_Int32_array *v34; // x8
  unsigned __int64 v35; // x29
  unsigned int *v36; // x23
  SupportServantData_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  unsigned int *v44; // x8
  struct SupportInfoJump_o *v45; // x10
  struct System_Int32_array *v46; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v48; // x26
  int64_t v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  unsigned __int64 v56; // x28
  unsigned int v57; // w27
  struct System_Int32_array *v58; // x8
  unsigned int *v59; // x23
  SupportServantData_o *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  unsigned int *v67; // x0
  unsigned int *v68; // x8
  struct SupportInfoJump_o *v69; // x9
  struct System_Int32_array *v70; // x10
  unsigned __int64 v71; // x25
  struct System_Int32_array *v72; // x8
  unsigned int *v73; // x23
  SupportServantData_o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  unsigned int *v81; // x0
  unsigned int *v82; // x8
  struct SupportInfoJump_o *v83; // x9
  struct System_Int32_array *v84; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x0

  v9 = this;
  if ( (byte_4B634D0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, deckIndex);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v11);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v12);
    sub_1BE4ACC(&SupportServantData___TypeInfo, v13);
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&SupportServantData_TypeInfo, v14);
    byte_4B634D0 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_73;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v17 = 0LL;
  p_supportServantData = (unsigned int **)&v9->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v17 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v20 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_73;
    if ( v17 >= v20[6] )
LABEL_74:
      sub_1BE4D30(this, deckIndex);
    *(_QWORD *)&v20[i] = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v20[i], 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ++v17;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_73;
  v22 = *(_QWORD *)&mainSupportDeckIds->max_length;
  v23 = (unsigned int)v22;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_73;
    v48 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v49 = sub_1BE4B74(SupportServantData___TypeInfo, (unsigned int)(v48 + v22));
    *p_supportServantData = (unsigned int *)v49;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v49, v50, v51, v52, v53, v54, v55);
    if ( (int)v22 < 1 )
    {
      v57 = 0;
LABEL_52:
      if ( (int)v48 < 1 )
        goto LABEL_69;
      v71 = 0LL;
      while ( 1 )
      {
        v72 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v72 )
          break;
        if ( v71 >= v72->max_length )
          goto LABEL_74;
        if ( v72->m_Items[v71 + 1] >= 1 )
        {
          v73 = *p_supportServantData;
          v74 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
          SupportServantData___ctor(v74, 0LL);
          if ( !v73 )
            break;
          if ( v74 )
          {
            this = (SupportSelectRootComponent_o *)sub_1BE4C08(v74, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v57 >= v73[6] )
            goto LABEL_74;
          v81 = &v73[2 * v57];
          *((_QWORD *)v81 + 4) = v74;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v81 + 8), (int64_t)v74, v75, v76, v77, v78, v79, v80);
          v82 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v82[6] )
            goto LABEL_74;
          v83 = v9->fields.supportInfoJump;
          if ( !v83 )
            break;
          v84 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v84 )
            break;
          if ( v71 >= v84->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v82[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34146312(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v83->fields.kind,
            v83->fields.isSelect,
            v83->fields.eventSetupInfo,
            1,
            v84->m_Items[v71 + 1],
            0LL);
          ++v57;
        }
        if ( (unsigned int)v48 == ++v71 )
          goto LABEL_69;
      }
    }
    else
    {
      v56 = 0LL;
      v57 = 0;
      while ( 1 )
      {
        v58 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v58 )
          break;
        if ( v56 >= v58->max_length )
          goto LABEL_74;
        if ( v58->m_Items[v56 + 1] >= 1 )
        {
          v59 = *p_supportServantData;
          v60 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
          SupportServantData___ctor(v60, 0LL);
          if ( !v59 )
            break;
          if ( v60 )
          {
            this = (SupportSelectRootComponent_o *)sub_1BE4C08(v60, *(_QWORD *)(*(_QWORD *)v59 + 64LL));
            if ( !this )
            {
LABEL_75:
              v94 = sub_1BE4D4C();
              sub_1BE4BF4(v94, 0LL);
            }
          }
          if ( v57 >= v59[6] )
            goto LABEL_74;
          v67 = &v59[2 * v57];
          *((_QWORD *)v67 + 4) = v60;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v67 + 8), (int64_t)v60, v61, v62, v63, v64, v65, v66);
          v68 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v57 >= v68[6] )
            goto LABEL_74;
          v69 = v9->fields.supportInfoJump;
          if ( !v69 )
            break;
          v70 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v70 )
            break;
          if ( v56 >= v70->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v68[2 * v57 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34146312(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v69->fields.kind,
            v69->fields.isSelect,
            v69->fields.eventSetupInfo,
            0,
            v70->m_Items[v56 + 1],
            0LL);
          ++v57;
        }
        if ( v23 == ++v56 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1BE4D28(this, deckIndex);
  }
  v24 = sub_1BE4B74(SupportServantData___TypeInfo, (unsigned int)v22);
  *p_supportServantData = (unsigned int *)v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.supportServantData, v24, v25, v26, v27, v28, v29, v30);
  if ( (int)v22 >= 1 )
  {
    v31 = -(__int64)(unsigned int)v22;
    v32 = 8LL;
    v33 = 8LL;
    do
    {
      v34 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v34 )
        goto LABEL_73;
      v35 = v32 - 8;
      if ( v32 - 8 >= (unsigned __int64)v34->max_length )
        goto LABEL_74;
      if ( *((int *)&v34->obj.klass + v32) >= 1 )
      {
        v36 = *p_supportServantData;
        v37 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
        SupportServantData___ctor(v37, 0LL);
        if ( !v36 )
          goto LABEL_73;
        if ( v37 )
        {
          this = (SupportSelectRootComponent_o *)sub_1BE4C08(v37, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v35 >= v36[6] )
          goto LABEL_74;
        *(_QWORD *)&v36[v33] = v37;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v36[v33], (int64_t)v37, v38, v39, v40, v41, v42, v43);
        v44 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v35 >= v44[6] )
          goto LABEL_74;
        v45 = v9->fields.supportInfoJump;
        if ( !v45 )
          goto LABEL_73;
        v46 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v46 )
          goto LABEL_73;
        if ( v35 >= v46->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v44[v33];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_34146312(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v45->fields.kind,
          v45->fields.isSelect,
          v45->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v46->obj.klass + v32),
          0LL);
      }
      ++v32;
      v33 += 2LL;
    }
    while ( v31 + v32 != 8 );
  }
LABEL_69:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v87 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v87;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v24; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v27; // w21
  unsigned __int64 v28; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x26
  unsigned int *v31; // x8
  struct SupportInfoJump_o *v32; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  SupportSelectRootComponent___c_c *v37; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v39; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  unsigned int v48; // w0
  int64_t v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  void *monitor; // x8
  __int64 v57; // x24
  __int64 v58; // x23
  unsigned __int64 v59; // x25
  unsigned int *v60; // x26
  SupportServantData_o *v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  unsigned int *v68; // x9
  struct SupportInfoJump_o *v69; // x8
  __int64 v70; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct SupportInfoJump_o *v80; // x8
  QuestRestrictionInfo_o *v81; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v83; // x0

  v8 = this;
  if ( (byte_4B634D1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_int___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_int___, v13);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v14);
    sub_1BE4ACC(&int___TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v18);
    sub_1BE4ACC(&SupportServantData___TypeInfo, v19);
    sub_1BE4ACC(&SupportServantData_TypeInfo, v20);
    sub_1BE4ACC(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v21);
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&SupportSelectRootComponent___c_TypeInfo, v22);
    byte_4B634D1 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
  v24 = v8->fields.supportInfoJump;
  if ( !v24 )
    goto LABEL_57;
  questRestrictionInfo = v24->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v27 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
  else
LABEL_11:
    v27 = 1;
  v28 = 0LL;
  p_supportServantData = (unsigned int **)&v8->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v28 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v31 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_57;
    if ( v28 >= v31[6] )
      goto LABEL_58;
    *(_QWORD *)&v31[i] = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v31[i], 0LL, v2, v3, v4, v5, v6, v7);
    ++v28;
  }
  v32 = v8->fields.supportInfoJump;
  if ( !v32 || (followerInfo = v32->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1BE4D28(this, method);
  if ( v27 )
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
  v34 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( !v34 )
    goto LABEL_28;
  v35 = v34;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BE4C08(v34, int___TypeInfo);
  if ( !v36 )
  {
    sub_1BE4FE8(v35);
LABEL_28:
    v36 = 0LL;
  }
  v37 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v37 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v37->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = SupportSelectRootComponent___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v39,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_int_(
          v36,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2F9868C *)Method_System_Linq_Enumerable_Where_int___);
  v48 = System_Linq_Enumerable__Count_int_(v47, (const MethodInfo_2F7403C *)Method_System_Linq_Enumerable_Count_int___);
  v49 = sub_1BE4B74(SupportServantData___TypeInfo, v48);
  *p_supportServantData = (unsigned int *)v49;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.supportServantData, v49, v50, v51, v52, v53, v54, v55);
  if ( !v36 )
    goto LABEL_57;
  monitor = v36[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v57 = 8LL;
    v58 = 8LL;
    while ( 1 )
    {
      v59 = v57 - 8;
      if ( v57 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v36->klass + v57) >= 1 )
      {
        v60 = *p_supportServantData;
        v61 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
        SupportServantData___ctor(v61, 0LL);
        if ( !v60 )
          goto LABEL_57;
        if ( v61 )
        {
          this = (SupportSelectRootComponent_o *)sub_1BE4C08(v61, *(_QWORD *)(*(_QWORD *)v60 + 64LL));
          if ( !this )
          {
            v83 = sub_1BE4D4C();
            sub_1BE4BF4(v83, 0LL);
          }
        }
        if ( v59 >= v60[6] )
          break;
        *(_QWORD *)&v60[v58] = v61;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v60[v58], (int64_t)v61, v62, v63, v64, v65, v66, v67);
        v68 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v59 >= v68[6] )
          break;
        v69 = v8->fields.supportInfoJump;
        if ( !v69 )
          goto LABEL_57;
        if ( v59 >= LODWORD(v36[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v68[v58];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_34147152(
          (SupportServantData_o *)this,
          v69->fields.followerInfo,
          v69->fields.kind,
          v69->fields.isSelect,
          v69->fields.eventSetupInfo,
          v69->fields.questRestrictionInfo,
          *((_DWORD *)&v36->klass + v57),
          0LL);
      }
      LODWORD(monitor) = v36[1].monitor;
      v70 = v57 - 7;
      ++v57;
      v58 += 2LL;
      if ( v70 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1BE4D30(this, method);
  }
LABEL_51:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v73 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v73;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
    (int64_t)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = v8->fields.supportInfoJump;
  if ( !v80 )
    goto LABEL_57;
  v81 = v80->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v81, this->fields.kind, 0LL, 0LL);
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
  int v20; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v32; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v36; // x9
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 j; // x25
  unsigned __int64 v46; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v48; // x9
  struct System_Int32_array *v49; // x9
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
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct SupportServantData_array *supportServantData; // x21
  __int64 v67; // x8
  unsigned __int64 v68; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v70; // x21
  SupportServantData_array *v71; // x22
  SupportSelectMenu_CallbackFunc_o *v72; // x23
  const MethodInfo *v73; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v74; // x24
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x5
  struct SupportSelectMenu_o *v77; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  const MethodInfo *v86; // x1
  struct SupportSelectMenu_o *v87; // x8
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct SupportServantData_array *v94; // x20
  __int64 v95; // x8
  unsigned __int64 v96; // x21
  struct EventUpValSetupInfo_o *v97; // x1
  SupportSelectMenu_o *v98; // x20
  SupportServantData_array *v99; // x21
  int32_t v100; // w22
  SupportSelectMenu_CallbackFunc_o *v101; // x23
  const MethodInfo *v102; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v103; // x24
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x5
  const MethodInfo *v106; // x2
  struct SupportServantData_array *v107; // x8
  bool v108; // w1
  System_Action_o *v109; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B634D2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v3);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v4);
    sub_1BE4ACC(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_1BE4ACC(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_1BE4ACC(&int___TypeInfo, v7);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_1BE4ACC(&StringLiteral_12659/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_4B634D2 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12659/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    v20 = v19->static_fields->SupportDeckMax - 1;
    if ( Int >= v20 )
      Int = v20;
    deckIndex = Int;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v22 = (struct System_Int32_array *)sub_1BE4B74(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v22;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int64_t)v22,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v32 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v32 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_76;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v32 < (int)max_length )
      {
        if ( v32 >= max_length )
          goto LABEL_77;
        v36 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_76;
        if ( v32 >= v36->max_length )
          goto LABEL_77;
        *((_DWORD *)&v36->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v37 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v37;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int64_t)v37,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v46 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v46 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_76;
      v48 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v46 < (int)v48 )
      {
        if ( v46 >= v48 )
          goto LABEL_77;
        v49 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_76;
        if ( v46 >= v49->max_length )
          goto LABEL_77;
        *((_DWORD *)&v49->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
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
          TitleInfoControl__setTitleInfo_38073752(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            81,
            1,
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
                        eventSetupInfo = this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                        sub_1BE4A70(
                          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          (int64_t)eventSetupInfo,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65);
                      }
                      LODWORD(v67) = supportServantData->max_length;
                      if ( (__int64)++v68 >= (int)v67 )
                        goto LABEL_49;
                    }
LABEL_77:
                    sub_1BE4D30(followerQuestInfomationDraw, v16);
                  }
LABEL_49:
                  v70 = this->fields.supportSelectMenu;
                  v71 = this->fields.supportServantData;
                  v72 = (SupportSelectMenu_CallbackFunc_o *)sub_1BE4D18(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v72,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v73);
                  v74 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1BE4D18(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v74,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v75);
                  if ( v70 )
                  {
                    SupportSelectMenu__Open(v70, v71, Int, v72, v74, v76);
                    v77 = this->fields.supportSelectMenu;
                    if ( v77 )
                    {
                      indicator = v77->fields.indicator;
                      v79 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(
                        v79,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v79;
                        sub_1BE4A70(
                          (PartyOrganizationUtility_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int64_t)v79,
                          v80,
                          v81,
                          v82,
                          v83,
                          v84,
                          v85);
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
    sub_1BE4D28(followerQuestInfomationDraw, v16);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v17);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  TitleInfoControl__setTitleInfo_38073752(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    82,
    1,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v86);
  v87 = this->fields.supportSelectMenu;
  if ( !v87 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v87->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v94 = this->fields.supportServantData;
  if ( !v94 )
    goto LABEL_76;
  v95 = *(_QWORD *)&v94->max_length;
  if ( (int)v95 >= 1 )
  {
    v96 = 0LL;
    while ( v96 < (unsigned int)v95 )
    {
      followerQuestInfomationDraw = v94->m_Items[v96];
      if ( followerQuestInfomationDraw )
      {
        v97 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v97;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int64_t)v97,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
      }
      LODWORD(v95) = v94->max_length;
      if ( (__int64)++v96 >= (int)v95 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v98 = this->fields.supportSelectMenu;
  v99 = this->fields.supportServantData;
  v100 = deckIndex;
  v101 = (SupportSelectMenu_CallbackFunc_o *)sub_1BE4D18(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v101,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v102);
  v103 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1BE4D18(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v103,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v104);
  if ( !v98 )
    goto LABEL_76;
  SupportSelectMenu__Open(v98, v99, v100, v101, v103, v105);
  v107 = this->fields.supportServantData;
  if ( !v107 )
    goto LABEL_76;
  v108 = (int)v107->max_length >= 2 && v107->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v108, v106);
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
  v109 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v109, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v109, 2, 1, 0LL);
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
  if ( (byte_4B634E4 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_4B634E4 = 1;
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
    sub_1BE4D28(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1BE4D30(this, *(_QWORD *)&idx);
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
    sub_1BE4D28(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_39578900((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent___EndSupportSelectMenu_b__66_2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1BE4D28(0LL, method);
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
  if ( (byte_4B634D6 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method);
    byte_4B634D6 = 1;
  }
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&supportSelectMenu->fields.supportServantData, 0LL, v2, v3, v4, v5, v6, v7);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1BE4D28(this, method);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  BalanceConfig_c *v16; // x0
  struct SupportServantData_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  BalanceConfig_c *v24; // x0
  struct SupportServantData_array *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Instance; // x0
  __int64 v33; // x1

  if ( (byte_4B634CA & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BE4ACC(&SupportServantData___TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_13296/*"SvtEqScrollBarValue"*/, v5);
    byte_4B634CA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (struct SupportServantData_array *)sub_1BE4B74(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.supportServantData,
      (int64_t)v9,
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_1BE4B74(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v17;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.orgSupportServantData,
      (int64_t)v17,
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
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = (struct SupportServantData_array *)sub_1BE4B74(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v24->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v25;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.tmpSupportServantData,
      (int64_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13296/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v33);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppClass *v20; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v22; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  Il2CppObject *v32; // x1
  Il2CppClass *v33; // x8
  __int64 v34; // x9
  Il2CppObject *v35; // x10
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  struct SupportInfoJump_o *v40; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v43; // x20
  EventUpValSetupInfo_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Action_o *v51; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v53; // x20
  EventUpValSetupInfo_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  const MethodInfo *v61; // x1

  if ( (byte_4B634D3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, data);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventQuestMaster___, v12);
    sub_1BE4ACC(&DataManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v15);
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&SupportInfoJump_TypeInfo, v18);
    sub_1BE4ACC(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v19);
    byte_4B634D3 = 1;
  }
  if ( data )
  {
    v20 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
        v22 = data;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v22;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v20 )
        v32 = data;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = 0LL;
    }
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.supportInfoJump,
      (int64_t)v32,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v33 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v34 = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v34 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v34 - 1] == SceneJumpInfo_TypeInfo )
        v35 = data;
      else
        v35 = 0LL;
    }
    else
    {
      v35 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v35;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v34 )
    {
      if ( data->klass->_2.typeHierarchy[v34 - 1] == v33 )
        v30 = data;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.supportInfoJump, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    v30 = 0LL;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)p_sceneJumpInfo, (int64_t)v30, v24, v25, v26, v27, v28, v29);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v36);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v40 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v40->fields.otherUserGameEntity || !v40->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v53 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
        v54 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_39826336(v54, v53, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v54;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.eventSetupInfo,
          (int64_t)v54,
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
LABEL_41:
    sub_1BE4D28(bgTxtSprite, v37);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v43 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  v44 = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(v44, v43, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventSetupInfo, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v51, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1BE4D28(0LL, method);
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
  if ( (byte_4B634FB & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1BE4ACC(&SupportServantData_TypeInfo, method);
    byte_4B634FB = 1;
  }
  supportServantData = v2->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1BE4D28(this, method);
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
      v7 = (SupportServantData_o *)sub_1BE4D18(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1BE4C08(v7, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v14 = sub_1BE4D4C();
          sub_1BE4BF4(v14, 0LL);
        }
      }
      if ( v4 >= supportServantData->max_length )
LABEL_17:
        sub_1BE4D30(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) = (Il2CppClass *)v7;
      sub_1BE4A70(
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

  if ( (byte_4B634FA & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, servant);
    byte_4B634FA = 1;
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
    sub_1BE4D30(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1BE4D28(OldServant, v8);
  return (v17 | SupportServantData__IsChangeDeckName(OldServant, 0LL)) & 1;
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
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  System_Int32_array *v25; // x22
  int32_t v26; // w21
  int32_t v27; // w0
  int32_t v28; // w20
  const MethodInfo *v29; // x4

  if ( (byte_4B634D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_4B634D5 = 1;
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
              (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
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
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_2F8D4F8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v22 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2F70E6C *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v22,
                            (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
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
                                                    (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___)
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
    sub_1BE4D30(eventSupportDeckIds, v9);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
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
          v10),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_1BE4D28(eventSupportDeckIds, v9);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v28,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v29);
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
    sub_1BE4D28(blackMask, editOn);
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
    sub_1BE4D28(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B63500 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_4B63500 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v10; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  Il2CppObject *v14; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v17; // w21
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_4B63501 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_4B63501 = 1;
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
      sub_1BE4D30(_4__this, isDecide);
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v14 = (Il2CppObject *)this->fields.__4__this;
    if ( !v14
      || (monitor = (System_Int32_array *)v14[18].monitor,
          klass = (System_Int32_array *)v14[19].klass,
          v17 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1BE4D18(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v14,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1BE4D28(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v17,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  CommonUI_o *v14; // x20
  Il2CppObject *v15; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v18; // w19
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v20; // x3

  if ( (byte_4B63502 & 1) == 0 )
  {
    sub_1BE4ACC(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BE4ACC(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_4B63502 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_15;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v8->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1BE4D30(_4__this, isDecide);
    v11 = supportServantData->m_Items[selectNum];
    if ( !v11 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v11->fields.eventSetupInfo2;
    v14 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v15 = (Il2CppObject *)this->fields.__4__this;
    if ( !v15
      || (monitor = (System_Int32_array *)v15[18].monitor,
          klass = (System_Int32_array *)v15[19].klass,
          v18 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1BE4D18(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v15,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v20),
          !v14) )
    {
LABEL_15:
      sub_1BE4D28(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v14,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v18,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}