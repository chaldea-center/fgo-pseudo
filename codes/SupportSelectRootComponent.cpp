void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FAFA5 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectRootComponent_TypeInfo, v1);
    byte_49FAFA5 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FAFA4 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&int___TypeInfo, v3);
    byte_49FAFA4 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v5, v6, v7);
  v8 = (struct System_Int32_array *)sub_1B64918(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v8;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v8, v9, v10);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_49FAF7F & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_12415/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_49FAF7F = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12415/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
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
  const MethodInfo *v12; // x4

  if ( (byte_49FAF9E & 1) == 0 )
  {
    sub_1B64870(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_49FAF9E = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B64AD4(CenterNum, v5);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v10 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1B64ABC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          v11),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1B64ACC(CenterNum, v5);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v10, v12);
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
    sub_1B64ACC(titleInfo, method);
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
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_49FAF97 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_1B64870(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_49FAF97 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v10 = this->fields.copyTargetDeckId - 1, v10 >= max_length) )
    sub_1B64AD4(CenterNum, v7);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = supportServantData->m_Items[v10];
  v14 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    v15);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1B64ACC(CenterNum, v7);
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

  if ( (byte_49FAFA2 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B64870(&BalanceConfig_TypeInfo, orgData);
    byte_49FAFA2 = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1B64ACC(this, orgData);
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
          sub_1B64AD4(this, orgData);
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

  if ( (byte_49FAF91 & 1) == 0 )
  {
    sub_1B64870(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, isDecide);
    byte_49FAF91 = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close_32947156(cancelConfirmMenu, 0LL, method);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
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
    sub_1B64ACC(cancelConfirmMenu, isDecide);
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

  if ( (byte_49FAF90 & 1) == 0 )
  {
    sub_1B64870(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, isDecide);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v5);
    byte_49FAF90 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v7 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22140/*"ok"*/, v9);
      return;
    }
LABEL_10:
    sub_1B64ACC(cancelConfirmDeckIdDialog, isDecide);
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
  __int64 v7; // x1
  SupportSelectEditMenu_o *deckNameInputMenu; // x0
  struct SupportDeckNameInputMenu_o *v9; // x20
  System_Action_o *v10; // x21
  System_Action_o *v11; // x1

  if ( (byte_49FAF9F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v7);
    byte_49FAF9F = 1;
  }
  if ( !isDecide )
  {
    deckNameInputMenu = (SupportSelectEditMenu_o *)this->fields.deckNameInputMenu;
    if ( deckNameInputMenu )
    {
      v11 = 0LL;
      goto LABEL_9;
    }
LABEL_10:
    sub_1B64ACC(deckNameInputMenu, isDecide);
  }
  this->fields.editDeckName = changeName;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.editDeckName,
    (int32_t)changeName,
    (int32_t)changeName,
    (int32_t)method);
  deckNameInputMenu = this->fields.supportEditMenu;
  if ( !deckNameInputMenu )
    goto LABEL_10;
  SupportSelectEditMenu__Close(deckNameInputMenu, (const MethodInfo *)isDecide);
  v9 = this->fields.deckNameInputMenu;
  v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, 0LL);
  if ( !v9 )
    goto LABEL_10;
  deckNameInputMenu = (SupportSelectEditMenu_o *)v9;
  v11 = v10;
LABEL_9:
  SupportDeckNameInputMenu__Close_32953192(
    (SupportDeckNameInputMenu_o *)deckNameInputMenu,
    v11,
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
    sub_1B64ACC(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B64ACC(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49FAF88 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49FAF88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v3);
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
        sub_1B64AD4(CenterNum, isDecide);
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
    sub_1B64ACC(CenterNum, isDecide);
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
    sub_1B64ACC(0LL, flag);
  SupportSelectConfirmMenu__Close_32962664(supportSelectConfirmMenu, 0LL, method);
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

  if ( (byte_49FAF9B & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, isDecide);
    byte_49FAF9B = 1;
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
        sub_1B64AD4(confirmDeckMenu, isDecide);
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
    sub_1B64ACC(confirmDeckMenu, isDecide);
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

  if ( (byte_49FAF7A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AtlasManager_TypeInfo, v3);
    sub_1B64870(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_49FAF7A = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1B64ACC(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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

  if ( (byte_49FAF99 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, isDecide);
    byte_49FAF99 = 1;
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
        sub_1B64AD4(confirmDeckMenu, isDecide);
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
    sub_1B64ACC(confirmDeckMenu, isDecide);
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

  if ( (byte_49FAF9D & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, isDecide);
    byte_49FAF9D = 1;
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
          sub_1B64AD4(confirmDeckMenu, isDecide);
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
    sub_1B64ACC(confirmDeckMenu, isDecide);
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

  if ( (byte_49FAF96 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_49FAF96 = 1;
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
      sub_1B64AD4(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v11 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v12 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v13);
    if ( !supportEditMenu )
LABEL_10:
      sub_1B64ACC(copyDeckSelectMenu, *(_QWORD *)&deckId);
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

  if ( (byte_49FAF89 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FAF89 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1B64ACC(supportSelectMenu, isDecide);
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

  if ( (byte_49FAF86 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FAF86 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64ACC(supportSelectMenu, isDecide);
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

  if ( (byte_49FAF87 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_49FAF87 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1B64ACC(v10, v11);
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
    sub_1B64ACC(CenterNum, v7);
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
  int32_t CenterNum; // w22
  const MethodInfo *v39; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  int32_t v44; // w23
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v47; // x21
  CancelConfirmMenu_CallbackFunc_o *v48; // x22
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x4
  const MethodInfo *v51; // x2
  struct SupportServantData_array *v52; // x8
  SupportServantData_o *v53; // x0
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v57; // x21
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  struct SupportServantData_array *v61; // x22
  SupportServantData_o *v62; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v65; // x24
  System_Int32_array *v66; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v68; // x2
  struct SupportServantData_array *v69; // x22
  SupportServantData_o *v70; // x8
  EventUpValSetupInfo_o *v71; // x27
  System_Int32_array *v72; // x25
  System_Int32_array *v73; // x26
  CommonUI_o *v74; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v75; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  SupportSelectMenu_o *v79; // x20
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  bool v82; // w1
  SupportSelectRootComponent_o *v83; // x0
  SupportSelectMenu_o *v84; // x20
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x1
  struct SupportServantData_array *v87; // x8
  __int64 v88; // x21
  __int64 v89; // x22
  __int64 v90; // x23
  struct SupportServantData_array *v91; // x8
  SupportServantData_o *v92; // x8
  struct SupportServantData_array *v93; // x8
  SupportServantData_o *v94; // x8
  int v95; // w22
  struct SupportServantData_array *v96; // x8
  SupportServantData_o *v97; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v99; // w22
  struct SupportServantData_array *v100; // x8
  SupportServantData_o *v101; // x8
  QuestRestrictionInfo_o *v102; // x20
  __int64 v103; // x23
  __int64 v104; // x24
  int32_t v105; // w0
  int32_t v106; // w23
  int32_t v107; // w24
  PartyOrganizationUtility_c *v108; // x0
  _QWORD *v109; // x0
  System_Reflection_MethodBase_o *v110; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v112; // x8
  int64_t v113; // x21
  struct SupportServantData_array *v114; // x8
  SupportServantData_o *v115; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v117; // x0
  System_Reflection_MethodBase_o *v118; // x0
  struct SupportServantData_array *v119; // x8
  SupportServantData_o *v120; // x8
  int32_t kind; // w20
  CommonUI_o *v122; // x22
  ServantLeaderInfo_o *v123; // x21
  ServantStatusDialog_EndDelegate_o *v124; // x23
  struct SupportServantData_array *v125; // x8
  struct SupportServantData_array *v126; // x8
  int64_t v127; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v129; // x8
  System_Reflection_MethodBase_o *v130; // x0
  struct SupportServantData_array *v131; // x8
  SupportServantData_o *v132; // x8
  int32_t v133; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v135; // x21
  ServantStatusDialog_EndDelegate_o *v136; // x23
  _QWORD *v137; // x0
  System_Reflection_MethodBase_o *v138; // x0
  _QWORD *v139; // x0
  System_Reflection_MethodBase_o *v140; // x0
  _QWORD *v141; // x0
  System_Reflection_MethodBase_o *v142; // x0
  const MethodInfo *v143; // x2
  int64_t v144; // x21
  ServantStatusDialog_FormationEndDelegate_o *v145; // x23
  Il2CppObject *v146; // x20
  ServantStatusDialog_EndDelegate_o *v147; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v149; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v151; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  int32_t v156; // w0
  SupportSelectRootComponent___c_c *v157; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v159; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v161; // x24
  struct SupportSelectRootComponent___c_StaticFields *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v165; // x0
  struct SupportServantData_array *v166; // x8
  SupportServantData_o *v167; // x0
  _QWORD *v168; // x0
  System_Reflection_MethodBase_o *v169; // x0
  const MethodInfo *v170; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v172; // x21
  SupportSelectRootComponent___c_c *v173; // x8
  System_Action_o *_9__66_2; // x23
  System_String_o *v175; // x22
  Il2CppObject *v176; // x24
  struct SupportSelectRootComponent___c_StaticFields *v177; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v180; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v181; // 0:x0.16

  if ( (byte_49FAF80 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v8);
    sub_1B64870(&CancelConfirmMenu_CallbackFunc_TypeInfo, v9);
    sub_1B64870(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1B64870(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v11);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_1B64870(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v16);
    sub_1B64870(&LocalizationManager_TypeInfo, v17);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B64870(&PartyOrganizationUtility_TypeInfo, v19);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v21);
    sub_1B64870(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1B64870(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v24);
    sub_1B64870(&Method_SupportSelectRootComponent_EndConfirmMenu__, v25);
    sub_1B64870(&Method_SupportSelectRootComponent_EndShowEquip__, v26);
    sub_1B64870(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v27);
    sub_1B64870(&Method_SupportSelectRootComponent_EndShowServant__, v28);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v29);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v30);
    sub_1B64870(&Method_SupportSelectRootComponent_OnBackSelect__, v31);
    sub_1B64870(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v32);
    sub_1B64870(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v33);
    sub_1B64870(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v34);
    sub_1B64870(&SupportSelectRootComponent___c_TypeInfo, v35);
    sub_1B64870(&StringLiteral_10219/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v36);
    sub_1B64870(&StringLiteral_1/*""*/, v37);
    byte_49FAF80 = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  isUpdate = SupportSelectRootComponent__getCenterNum(this, v39);
  v44 = isUpdate + 1;
  switch ( (int)isUpdate )
  {
    case -1:
      if ( !this->fields.isEdit )
        return;
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v43);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_140;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_179;
      if ( CenterNum >= supportServantData->max_length )
        goto LABEL_180;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v47 = supportServantData->m_Items[CenterNum];
      v48 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B64ABC(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v48,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        v49);
      if ( !cancelConfirmMenu )
        goto LABEL_179;
      CancelConfirmMenu__Open(cancelConfirmMenu, (int32_t)v41, v47, v48, v50);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v43);
      if ( (isUpdate & 1) != 0 )
      {
        v52 = this->fields.supportServantData;
        if ( !v52 )
          goto LABEL_179;
        if ( CenterNum < v52->max_length )
        {
          v53 = v52->m_Items[CenterNum];
          if ( v53 && SupportServantData__get_IsNoServant(v53, 0LL) )
          {
LABEL_15:
            v54 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v54 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v55 = (System_Reflection_MethodBase_o *)sub_1B64854(v54, v54[4]);
            OverwriteAssetSoundName__PlaySystemSe(v55, 2, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v57 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64ABC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v57,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              v58);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v57, v59);
              return;
            }
LABEL_179:
            sub_1B64ACC(isUpdate, v41);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v51);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v141 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v141 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v142 = (System_Reflection_MethodBase_o *)sub_1B64854(v141, v141[4]);
          OverwriteAssetSoundName__PlaySystemSe(v142, 8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, (int32_t)v41, v143);
          goto LABEL_140;
        }
LABEL_180:
        sub_1B64AD4(isUpdate, v41);
      }
      if ( this->fields.isEdit )
      {
        v139 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v139 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v140 = (System_Reflection_MethodBase_o *)sub_1B64854(v139, v139[4]);
        OverwriteAssetSoundName__PlaySystemSe(v140, 8, 0LL);
LABEL_140:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v41);
        v83 = this;
        v82 = 0;
        this->fields.isDragSwapState = 0;
LABEL_141:
        SupportSelectRootComponent__setEditUI(v83, v82, v81);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v149 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v149 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v149->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v149->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v149);
          v149 = SupportSelectRootComponent___c_TypeInfo;
        }
        v151 = (Il2CppObject *)v149->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v151,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v153, v154);
      }
      v155 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
      v156 = System_Linq_Enumerable__Count_int_(
               v155,
               (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
      v157 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v159 = v156;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v157 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v157->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v157->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v157);
          v157 = SupportSelectRootComponent___c_TypeInfo;
        }
        v161 = (Il2CppObject *)v157->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v161,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v162 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v162->__9__66_1 = _9__66_1;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v162->__9__66_1, (int32_t)_9__66_1, v163, v164);
      }
      v165 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v165,
                   (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v159 < 1 || (int)isUpdate <= 0 )
      {
        v166 = this->fields.supportServantData;
        if ( !v166 )
          goto LABEL_179;
        if ( CenterNum >= v166->max_length )
          goto LABEL_180;
        v167 = v166->m_Items[CenterNum];
        if ( v167 && SupportServantData__get_IsNoServant(v167, 0LL) )
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
      v168 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v168 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v169 = (System_Reflection_MethodBase_o *)sub_1B64854(v168, v168[4]);
      OverwriteAssetSoundName__PlaySystemSe(v169, 8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v170);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v42);
      SupportSelectRootComponent__setEditUI(this, 1, v60);
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
      v61 = this->fields.supportServantData;
      if ( !v61 )
        goto LABEL_179;
      if ( v61->max_length <= deckNum )
        goto LABEL_180;
      v62 = v61->m_Items[deckNum];
      if ( !v62 )
        goto LABEL_179;
      eventSetupInfo2 = v62->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v65 = this->fields.tempFixMainQuestSupportDeckIds;
      v66 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B64ABC(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_179;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v61,
        deckNum,
        classPos,
        eventSetupInfo2,
        v44,
        v65,
        v66,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v42);
      SupportSelectRootComponent__setEditUI(this, 1, v68);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v69 = this->fields.supportServantData;
      if ( !v69 )
        goto LABEL_179;
      if ( v69->max_length <= deckNum )
        goto LABEL_180;
      v70 = v69->m_Items[deckNum];
      if ( !v70 )
        goto LABEL_179;
      v71 = v70->fields.eventSetupInfo2;
      v72 = this->fields.tempFixMainQuestSupportDeckIds;
      v73 = this->fields.tempFixEventQuestSupportDeckIds;
      v74 = (CommonUI_o *)isUpdate;
      v75 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B64ABC(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v75,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v74 )
        goto LABEL_179;
      CommonUI__OpenSupportServantEquipListMenu(v74, v69, deckNum, classPos, v71, v44, v72, v73, v75, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !supportSelectMenu )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v77);
      SupportSelectRootComponent__ChangeDeckName(this, v78);
      return;
    case 5:
      v79 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !v79 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v79, isUpdate, v80);
      v82 = 1;
      this->fields.isDragSwapState = 1;
      v83 = this;
      goto LABEL_141;
    case 6:
      v84 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !v84 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v84, isUpdate, v85);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v86);
      return;
    case 7:
      v87 = this->fields.supportServantData;
      if ( !v87 )
        goto LABEL_179;
      if ( v87->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v87->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v88 = *(_QWORD *)(isUpdate + 24);
      if ( !v88 )
        goto LABEL_125;
      v90 = *(_QWORD *)(v88 + 48);
      v89 = *(_QWORD *)(v88 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v180.fields.currentCryptoKey = v90;
      *(_QWORD *)&v180.fields.fakeValue = v89;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v180, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_125;
      v91 = this->fields.supportServantData;
      if ( !v91 )
        goto LABEL_179;
      if ( v91->max_length <= deckNum )
        goto LABEL_180;
      v92 = v91->m_Items[deckNum];
      if ( !v92 )
        goto LABEL_179;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v88,
                   v92->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_125;
      v93 = this->fields.supportServantData;
      if ( !v93 )
        goto LABEL_179;
      if ( v93->max_length <= deckNum )
        goto LABEL_180;
      v94 = v93->m_Items[deckNum];
      if ( !v94 )
        goto LABEL_179;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v88, v94->fields.questRestrictionInfo, 0LL) )
        goto LABEL_125;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      v95 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( v95 < 1 )
        goto LABEL_76;
      v96 = this->fields.supportServantData;
      if ( !v96 )
        goto LABEL_179;
      if ( v96->max_length <= deckNum )
        goto LABEL_180;
      v97 = v96->m_Items[deckNum];
      if ( !v97 )
        goto LABEL_179;
      questRestrictionInfo = v97->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_179;
      v99 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40123220(questRestrictionInfo, v99, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v100 = this->fields.supportServantData;
      if ( !v100 )
        goto LABEL_179;
      if ( v100->max_length <= deckNum )
        goto LABEL_180;
      v101 = v100->m_Items[deckNum];
      if ( !v101 )
        goto LABEL_179;
      v102 = v101->fields.questRestrictionInfo;
      v104 = *(_QWORD *)(v88 + 48);
      v103 = *(_QWORD *)(v88 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v181.fields.currentCryptoKey = v104;
      *(_QWORD *)&v181.fields.fakeValue = v103;
      v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v181, 0LL);
      v106 = *(_DWORD *)(v88 + 64);
      v107 = v105;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v88, 0LL);
      if ( !v102 )
        goto LABEL_179;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v102, v107, v106, isUpdate, v99, 1, 0LL) )
        goto LABEL_125;
LABEL_76:
      if ( !this->fields.supportInfoJump )
      {
LABEL_125:
        v137 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v137 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v138 = (System_Reflection_MethodBase_o *)sub_1B64854(v137, v137[4]);
        OverwriteAssetSoundName__PlaySystemSe(v138, 2, 0LL);
LABEL_128:
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_179;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v41);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( *(_BYTE *)(isUpdate + 148) )
      {
        v108 = PartyOrganizationUtility_TypeInfo;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v108 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v108->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_179;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10219/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v172 = (System_String_o *)isUpdate;
            v173 = SupportSelectRootComponent___c_TypeInfo;
            if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v173 = SupportSelectRootComponent___c_TypeInfo;
            }
            _9__66_2 = v173->static_fields->__9__66_2;
            v175 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( !v173->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v173);
                v173 = SupportSelectRootComponent___c_TypeInfo;
              }
              v176 = (Il2CppObject *)v173->static_fields->__9;
              _9__66_2 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
              System_Action___ctor(
                _9__66_2,
                v176,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v177 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v177->__9__66_2 = _9__66_2;
              sub_1B64814((ServantStatusBattleListViewItem_o *)&v177->__9__66_2, (int32_t)_9__66_2, v178, v179);
            }
            if ( !Instance )
              goto LABEL_179;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v175,
              v172,
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
      v109 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v109 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v110 = (System_Reflection_MethodBase_o *)sub_1B64854(v109, v109[4]);
      OverwriteAssetSoundName__PlaySystemSe(v110, 0, 0LL);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_179;
      supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
      *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
      *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v88 + 16);
      if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v112 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v112 )
        goto LABEL_179;
      if ( v112->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v112->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v113 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_125;
      v114 = this->fields.supportServantData;
      if ( !v114 )
        goto LABEL_179;
      if ( v114->max_length <= deckNum )
        goto LABEL_180;
      v115 = v114->m_Items[deckNum];
      if ( !v115 )
        goto LABEL_179;
      isFriendInfo = v115->fields.isFriendInfo;
      v117 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v117 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v118 = (System_Reflection_MethodBase_o *)sub_1B64854(v117, v117[4]);
      OverwriteAssetSoundName__PlaySystemSe(v118, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v119 = this->fields.supportServantData;
      if ( !v119 )
        goto LABEL_179;
      if ( v119->max_length <= deckNum )
        goto LABEL_180;
      v120 = v119->m_Items[deckNum];
      if ( !v120 )
        goto LABEL_179;
      kind = v120->fields.kind;
      v122 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v123 = *(ServantLeaderInfo_o **)(v113 + 24);
        v124 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v124,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v122 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30359436(v122, kind, v123, v124, 0LL);
      }
      else
      {
        v144 = *(_QWORD *)(v113 + 56);
        v145 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B64ABC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v145,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v122 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30356804(v122, kind, v144, v145, 0LL, 0LL);
      }
      return;
    case 9:
      v125 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v125 )
        goto LABEL_179;
      if ( v125->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v125->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_125;
      v126 = this->fields.supportServantData;
      if ( !v126 )
        goto LABEL_179;
      if ( v126->max_length <= deckNum )
        goto LABEL_180;
      v127 = isUpdate;
      isUpdate = (int64_t)v126->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v129 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v129 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v130 = (System_Reflection_MethodBase_o *)sub_1B64854(v129, v129[4]);
      OverwriteAssetSoundName__PlaySystemSe(v130, 0, 0LL);
      v131 = this->fields.supportServantData;
      if ( !v131 )
        goto LABEL_179;
      if ( v131->max_length <= deckNum )
        goto LABEL_180;
      v132 = v131->m_Items[deckNum];
      if ( !v132 )
        goto LABEL_179;
      if ( v132->fields.isFriendInfo )
      {
        if ( v132->fields.kind == 5 )
          v133 = 14;
        else
          v133 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_179;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v135 = (CommonUI_o *)isUpdate;
        v136 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v136,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v135 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog_30362532(v135, v133, equipTarget1, v136, 0LL, 0LL);
      }
      else
      {
        v146 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v147 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v147,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v146 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v146, 11, v127, 1, v147, 0LL, 0LL);
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

  if ( (byte_49FAF85 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_49FAF85 = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_40703828(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_40703828(v15->fields.svtId, 0LL);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v33, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v31, 0LL);
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
        sub_1B64ACC(CenterNum, v26);
      }
    }
    sub_1B64AD4(CenterNum, v26);
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
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v37; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v39; // x23
  UserServantLeaderEntity_o *v40; // x24
  UserServantLeaderEntity_o *v41; // x25
  int32_t v42; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v43; // x8
  int32_t v44; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v46; // x8
  PartyOrganizationUtility_o *v47; // x23
  UserServantLeaderEntity_o *v48; // x25
  UserServantLeaderEntity_o *v49; // x26
  UserServantEntity_o *v50; // x8
  System_String_o *v51; // x22
  __int64 v52; // x8
  int32_t v53; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v56; // x21
  System_String_o *v57; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v59; // x23
  Il2CppObject *v60; // x19
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  System_String_o *v63; // x23
  CommonConfirmDialog_ClickDelegate_o *v64; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_49FAF83 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64870(&LocalizationManager_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v18);
    sub_1B64870(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v19);
    sub_1B64870(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v20);
    sub_1B64870(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v21);
    sub_1B64870(&StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v22);
    sub_1B64870(&StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, v23);
    sub_1B64870(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v24);
    sub_1B64870(&StringLiteral_1/*""*/, v25);
    byte_49FAF83 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v26 = sub_1B64ABC(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_42;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v29, v30);
  *(_QWORD *)(v26 + 32) = item;
  v31 = v26 + 32;
  *(_DWORD *)(v26 + 24) = result;
  *(_DWORD *)(v26 + 28) = classPos;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)item, v32, v33);
  if ( *(_DWORD *)(v26 + 24) == 1 && *(_QWORD *)v31 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B64AD4(UserServantLeaderEntity, v28);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v26 + 28),
                                                        0LL);
    if ( UserServantLeaderEntity )
    {
      v37 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v31 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v31 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v37->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v39 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v41 = userServantLeaderEntityList->m_Items[6];
          v40 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v68.fields.currentCryptoKey = v41;
          *(_QWORD *)&v68.fields.fakeValue = v40;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                              v68,
                                                              0LL);
          if ( !v37->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v42 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v37->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v31 )
            goto LABEL_42;
          v43 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v31 + 128LL);
          if ( !v43 )
            goto LABEL_42;
          v44 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                              v43[1],
                                                              0LL);
          if ( !v39 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v39,
                 &skillName,
                 &actMaxRarity[1],
                 v42,
                 v44,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v37->fields.isFriendInfo,
                           (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v46 = v37->fields.userServantLeaderEntityList;
                if ( v46 )
                {
                  v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v49 = v46->m_Items[8];
                  v48 = v46->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v69.fields.currentCryptoKey = v49;
                  *(_QWORD *)&v69.fields.fakeValue = v48;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                      v69,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0LL);
                    v50 = (UserServantEntity_o *)v37->fields.userServantLeaderEntityList;
                    if ( v50 )
                    {
                      v51 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v50, 0LL);
                      v52 = *(_QWORD *)v31;
                      if ( *(_QWORD *)v31 )
                      {
                        v53 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v52 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46216376(
                                                                              Name,
                                                                              0LL);
                          if ( v47 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v47,
                                                     actMaxRarity,
                                                     v51,
                                                     v53,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v56 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v56, 0LL);
                              if ( v56 )
                              {
                                System_Text_StringBuilder__Append_60545472(v56, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v57 = LocalizationManager__Get((System_String_o *)StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_60545472(v56, v57, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v59 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v59,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v59, 0LL);
                                  v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v61 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v56->klass->vtable._3_ToString.method)(
                                                             v56,
                                                             v56->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v64,
                                    (Il2CppObject *)v26,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v60 )
                                  {
                                    CommonUI__OpenConfirmDialog_30347368(
                                      (CommonUI_o *)v60,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v61,
                                      v62,
                                      v63,
                                      v64,
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
            sub_1B64ACC(UserServantLeaderEntity, v28);
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
    v34);
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
    sub_1B64AD4(this, *(_QWORD *)&result);
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
    sub_1B64ACC(this, *(_QWORD *)&result);
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
  __int64 Instance; // x0
  __int64 v34; // x1
  BalanceConfig_c *v35; // x8
  __int64 v36; // x10
  unsigned __int64 v37; // x24
  int32_t v38; // w9
  int32_t v39; // w26
  __int64 v40; // x23
  __int64 v41; // x27
  struct SupportServantData_array *supportServantData; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x28
  struct SupportServantData_array *v46; // x8
  SupportServantData_o *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x19
  System_Func_object__bool__o *v49; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  ServantEntity_o *v51; // x27
  int32_t Rarity; // w0
  int v53; // w29
  int64_t v54; // x2
  int32_t v55; // w28
  System_String_o *v56; // x19
  Il2CppObject *v57; // x28
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x19
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x29
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  __int64 v74; // [xsp+10h] [xbp-A0h]
  __int64 v75; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v76; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *Master_object; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v80; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49FAF8B & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_1B64870(&DataManager_TypeInfo, v14);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_1B64870(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v18);
    sub_1B64870(&int_TypeInfo, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_string__Add__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_string___ctor__, v21);
    sub_1B64870(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1B64870(&LocalizationManager_TypeInfo, v23);
    sub_1B64870(&NetworkManager_TypeInfo, v24);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B64870(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v26);
    sub_1B64870(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v27);
    sub_1B64870(&StringLiteral_12336/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v28);
    sub_1B64870(&StringLiteral_12337/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v29);
    byte_49FAF8B = 1;
  }
  entity = 0LL;
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_69:
    sub_1B64ACC(Instance, v34);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v76 = (ServantLimitImageMaster_o *)Instance;
  v35 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  v36 = 184LL;
  if ( isMain )
    v36 = 180LL;
  v75 = *(unsigned int *)((char *)&v35->static_fields->CriticalRateToAddByQuickFirstBonus + v36);
  if ( *(int *)((char *)&v35->static_fields->CriticalRateToAddByQuickFirstBonus + v36) >= 1 )
  {
    v37 = 0LL;
    v74 = (unsigned int)idx;
    do
    {
      if ( v37 != v74 )
      {
        if ( !fixDeckIds )
          goto LABEL_69;
        if ( v37 >= fixDeckIds->max_length )
LABEL_70:
          sub_1B64AD4(Instance, v34);
        v38 = fixDeckIds->m_Items[v37 + 1];
        if ( v38 )
        {
          v39 = 0;
          v40 = v38 - 1;
          while ( 1 )
          {
            if ( !v35->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v35);
              v35 = BalanceConfig_TypeInfo;
            }
            if ( v39 >= v35->static_fields->SupportDeckMemberMax )
              break;
            v41 = sub_1B64ABC(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v41,
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
                                  v39,
                                  0LL);
            if ( !v41 )
              goto LABEL_69;
            *(_QWORD *)(v41 + 16) = Instance;
            v45 = v41 + 16;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 16), Instance, v43, v44);
            if ( !*(_QWORD *)(v41 + 16) )
              goto LABEL_69;
            if ( *(_DWORD *)(*(_QWORD *)(v41 + 16) + 64LL) )
            {
              v46 = this->fields.supportServantData;
              if ( !v46 )
                goto LABEL_69;
              if ( (unsigned int)v40 >= v46->max_length )
                goto LABEL_70;
              v47 = v46->m_Items[v40];
              if ( !v47 )
                goto LABEL_69;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v47->fields.userServantLeaderEntityList;
              v49 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v49,
                (Il2CppObject *)v41,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v50 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v49,
                      (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v50,
                           (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v45 )
                  goto LABEL_69;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_69;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v45 + 64LL),
                                      (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v45 )
                  goto LABEL_69;
                v51 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v45 + 16LL);
                if ( !Instance )
                  goto LABEL_69;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v53 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v45 )
                    goto LABEL_69;
                  v54 = Instance;
                  Instance = (__int64)Master_object;
                  if ( !Master_object )
                    goto LABEL_69;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         v54,
                         *(_DWORD *)(*(_QWORD *)v45 + 64LL),
                         0LL) )
                  {
                    Instance = (__int64)v76;
                    if ( !*(_QWORD *)v45 )
                      goto LABEL_69;
                    if ( !entity )
                      goto LABEL_69;
                    if ( !v76 )
                      goto LABEL_69;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v76,
                                 *(_DWORD *)(*(_QWORD *)v45 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_69;
                    v55 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v55 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12336/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v80 = v53;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v80, v62, v63, v64);
                  if ( !v51 )
                    goto LABEL_69;
                  v65 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v51, v55, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v51, 0LL);
                  Instance = (__int64)System_String__Format_61398016(v61, v65, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v51 )
                    goto LABEL_69;
                  v56 = (System_String_o *)Instance;
                  v57 = (Il2CppObject *)ServantEntity__getName(v51, -1, -1, 0LL);
                  v58 = (Il2CppObject *)ServantEntity__getClassName(v51, 0LL);
                  Instance = (__int64)System_String__Format_61397948(v56, v57, v58, 0LL);
                }
                v34 = Instance;
                if ( !v30 )
                  goto LABEL_69;
                items = v30->fields._items;
                v69 = Method_System_Collections_Generic_List_string__Add__;
                ++v30->fields._version;
                if ( !items )
                  goto LABEL_69;
                size = v30->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                }
                else
                {
                  v71 = &items->obj.klass + size;
                  v30->fields._size = size + 1;
                  v71[4] = (Il2CppClass *)v34;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v71 + 4), v34, v59, v60);
                }
              }
            }
            v35 = BalanceConfig_TypeInfo;
            ++v39;
          }
        }
      }
      ++v37;
    }
    while ( v37 != v75 );
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

  if ( (byte_49FAF9A & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_49FAF9A = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B64AD4(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64ACC(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v8, v9, v11);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportServantData_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_49FAF72 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&SupportServantData___TypeInfo, v3);
    byte_49FAF72 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_1B64918(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v5, v6, v7);
  SupportSelectRootComponent__RefreshSupportServantData(this, v8);
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

  if ( (byte_49FAFA3 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    byte_49FAFA3 = 1;
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
      sub_1B64AD4(Servant, method);
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_1B64ACC(Servant, method);
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

  if ( (byte_49FAF74 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_49FAF74 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_49FAF73 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_49FAF73 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___) >= 0;
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
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  struct SupportServantData_array *v26; // x8
  SupportServantData_o *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v29; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v33; // [xsp+10h] [xbp-70h]
  bool v34; // [xsp+1Ch] [xbp-64h]

  if ( (byte_49FAF94 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_1B64870(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v8);
    sub_1B64870(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v9);
    sub_1B64870(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v10);
    byte_49FAF94 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1B64ACC(CenterNum, v12);
  v13 = *(_QWORD *)&fixDeckIds->max_length;
  v14 = (int)v13 > 0;
  if ( (int)v13 >= 1 )
  {
    v15 = (unsigned int)CenterNum;
    v16 = 0LL;
    v17 = (int)CenterNum;
    v33 = fixDeckIds;
    do
    {
      v34 = v14;
      if ( v16 >= (unsigned __int64)(unsigned int)v13 )
LABEL_29:
        sub_1B64AD4(CenterNum, v12);
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
          v21 = sub_1B64ABC(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
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
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)CenterNum, v23, v24);
          v25 = *(_QWORD *)(v21 + 16);
          if ( !v25 )
            goto LABEL_28;
          if ( *(_DWORD *)(v25 + 64) )
          {
            v26 = this->fields.supportServantData;
            if ( !v26 )
              goto LABEL_28;
            if ( v19 >= v26->max_length )
              goto LABEL_29;
            v27 = v26->m_Items[v19];
            if ( !v27 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.userServantLeaderEntityList;
            v29 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v29,
              (Il2CppObject *)v21,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v30 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v29,
                    (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v30,
                   (const MethodInfo_2E57F90 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v14 = v34;
              return !v14;
            }
          }
        }
      }
      fixDeckIds = v33;
      ++v16;
      LODWORD(v13) = v33->max_length;
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w0
  SupportSelectRootComponent___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v36; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v38; // x23
  struct SupportSelectRootComponent___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  int32_t v43; // w0
  bool v44; // w8

  if ( (byte_49FAF81 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v6);
    sub_1B64870(&int___TypeInfo, v7);
    sub_1B64870(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v8);
    sub_1B64870(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v9);
    sub_1B64870(&SupportSelectRootComponent___c_TypeInfo, v10);
    byte_49FAF81 = 1;
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
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B649AC(v16, int___TypeInfo);
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
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64918(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v19->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v14[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1B64ACC(SelfUserGame, v13);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64918(
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
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B649AC(v20, int___TypeInfo);
  if ( !v21 )
  {
LABEL_17:
    sub_1B64D8C(v17);
    goto LABEL_18;
  }
LABEL_22:
  v23 = System_Linq_Enumerable__SequenceEqual_int_(
          v18,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2E6E044 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v24 = v23 & System_Linq_Enumerable__SequenceEqual_int_(
                v21,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2E6E044 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    _9__67_0 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v28, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
  v33 = System_Linq_Enumerable__Count_int_(v32, (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
  v34 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v36 = v33;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v34 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v34->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = SupportSelectRootComponent___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v34->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v38, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v39 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v39->__9__67_1 = _9__67_1;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v39->__9__67_1, (int32_t)_9__67_1, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
  v43 = System_Linq_Enumerable__Count_int_(v42, (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v36 < 1 || v43 <= 0 )
    v44 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v44 = 0;
  return v44 || (v24 & 1) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_49FAF75 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_49FAF75 = 1;
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
  int32_t v26; // w2
  int32_t v27; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v34; // x22
  UserServantEntity_o *v35; // x8
  PartyOrganizationUtility_o *v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t v39; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v41; // w25
  UserServantEntity_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x20
  __int64 v44; // x23
  __int64 v45; // x24
  Il2CppObject *v46; // x23
  PartyOrganizationUtility_o *v47; // x20
  UserServantEntity_o *v48; // x8
  System_String_o *v49; // x21
  EquipTargetInfo_o *v50; // x8
  int32_t v51; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v53; // x21
  System_String_o *v54; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  System_String_o *v58; // x23
  CommonConfirmDialog_ClickDelegate_o *v59; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_49FAF82 & 1) == 0 )
  {
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B64870(&LocalizationManager_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1B64870(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v17);
    sub_1B64870(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v18);
    sub_1B64870(&StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v19);
    sub_1B64870(&StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, v20);
    sub_1B64870(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v21);
    sub_1B64870(&StringLiteral_1/*""*/, v22);
    byte_49FAF82 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v23 = sub_1B64ABC(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_35;
  *(_QWORD *)(v23 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)this, v26, v27);
  *(_QWORD *)(v23 + 32) = entity;
  v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v23 + 32);
  *(_DWORD *)(v23 + 24) = result;
  *(_DWORD *)(v23 + 28) = classPos;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)entity, v29, v30);
  if ( *(_DWORD *)(v23 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B64AD4(UserServantLeaderEntity, v25);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v23 + 28),
                                                        0LL);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v34 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v35 = (UserServantEntity_o *)*v28;
      if ( !*v28 )
        goto LABEL_35;
      v36 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v63.fields.currentCryptoKey = v38;
      *(_QWORD *)&v63.fields.fakeValue = v37;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                          v63,
                                                          0LL);
      if ( !*v28 )
        goto LABEL_35;
      v39 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v28, 0LL);
      oldServantIdList = v34->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v41 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v36 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v36,
             &skillName,
             &actMaxRarity[1],
             v39,
             v41,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v42 = (UserServantEntity_o *)*v28;
          if ( *v28 )
          {
            v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
            v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = v45;
            *(_QWORD *)&v64.fields.fakeValue = v44;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                v64,
                                                                0LL);
            if ( v43 )
            {
              v46 = DataMasterBase_object__object__int___GetEntity(
                      v43,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v28 )
              {
                v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                    (*v28)[6],
                                                                    0LL);
                if ( v46 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v46,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v48 = (UserServantEntity_o *)*v28;
                  if ( *v28 )
                  {
                    v49 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v48, 0LL);
                    v50 = (EquipTargetInfo_o *)v34->fields.oldServantIdList;
                    if ( v50 )
                    {
                      v51 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v50, 0LL);
                      if ( v47 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v47,
                                                 actMaxRarity,
                                                 v49,
                                                 v51,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v53 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v53, 0LL);
                          if ( v53 )
                          {
                            System_Text_StringBuilder__Append_60545472(v53, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_10077/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_60545472(v53, v54, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v56 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v53->klass->vtable._3_ToString.method)(
                                                       v53,
                                                       v53->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v59 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v59,
                              (Il2CppObject *)v23,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30347368(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v56,
                                v57,
                                v58,
                                v59,
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
        sub_1B64ACC(UserServantLeaderEntity, v25);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v23 + 24),
    *(_DWORD *)(v23 + 28),
    *(UserServantEntity_o **)(v23 + 32),
    v31);
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
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w20
  SupportServantSelectMenu_o *v31; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x24
  System_Int32_array *v35; // x22
  const MethodInfo *v36; // x2
  BalanceConfig_c *v37; // x0
  Il2CppObject *v38; // x0
  const MethodInfo *v39; // x1
  System_Int32_array *v40; // x23
  BalanceConfig_c *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v47; // x27
  const MethodInfo *v48; // x3

  if ( (byte_49FAF8F & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_1B64870(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_1B64870(&int___TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v8);
    sub_1B64870(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v9);
    sub_1B64870(&Method_SupportSelectRootComponent_OnClickBack__, v10);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v11);
    byte_49FAF8F = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v17 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickBack__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B64854(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v19);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1B64AD4(CenterNum, v14);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v22 = supportServantData->m_Items[(int)CenterNum];
        v23 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B64ABC(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          v24);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, (int32_t)v14, v22, v23, v25);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v26)
      || this->fields.isEdit )
    {
      v27 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickBack__);
      v28 = (System_Reflection_MethodBase_o *)sub_1B64854(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v14);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v29);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22140/*"ok"*/, v36);
        return;
      }
      goto LABEL_52;
    }
    v30 = SupportSelectRootComponent__getCenterNum(this, v26);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_52;
    v31 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_52;
    pushTabButton = (int32_t)v31->fields.pushTabButton;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v33 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v33 )
      {
        v34 = v33;
        v35 = (System_Int32_array *)sub_1B649AC(v33, int___TypeInfo);
        if ( !v35 )
          goto LABEL_43;
      }
      else
      {
        v35 = 0LL;
      }
    }
    else
    {
      v37 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v37 = BalanceConfig_TypeInfo;
      }
      v35 = (System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)v37->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v31->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v38 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v38 )
    {
      v40 = 0LL;
      goto LABEL_48;
    }
    v34 = v38;
    v40 = (System_Int32_array *)sub_1B649AC(v38, int___TypeInfo);
    if ( v40 )
      goto LABEL_48;
LABEL_43:
    sub_1B64D8C(v34);
LABEL_44:
    v41 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v41 = BalanceConfig_TypeInfo;
    }
    v40 = (System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)v41->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v39);
    v42 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v42 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickBack__);
    v43 = (System_Reflection_MethodBase_o *)sub_1B64854(v42, v42[4]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 2, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v47 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1B64ABC(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v47,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      v48);
    if ( cancelConfirmDeckIdDialog )
    {
      CancelConfirmDeckIdDialog__Open(
        cancelConfirmDeckIdDialog,
        v30 + 1,
        pushTabButton,
        tempFixMainQuestSupportDeckIds,
        tempFixEventQuestSupportDeckIds,
        v35,
        v40,
        v47,
        0LL);
      return;
    }
LABEL_52:
    sub_1B64ACC(CenterNum, v14);
  }
  v12 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickBack__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B64854(v12, v12[4]);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1

  if ( (byte_49FAF8D & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B64870(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B64870(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__, v8);
    byte_49FAF8D = 1;
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
    sub_1B64AD4(FixedErrorList, v14);
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
        v18 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B64854(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64ABC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1B64ACC(FixedErrorList, v14);
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
      v28);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v29);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v31);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v32);
  }
  else
  {
    v24 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_1B64854(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v27);
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
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1

  if ( (byte_49FAF8C & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B64870(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B64870(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__, v8);
    byte_49FAF8C = 1;
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
    sub_1B64AD4(FixedErrorList, v14);
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
        v18 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B64854(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64ABC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1B64ACC(FixedErrorList, v14);
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
      v28);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v29);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v31);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v32);
  }
  else
  {
    v24 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_1B64854(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v27);
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

  if ( (byte_49FAF93 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_49FAF93 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B64AD4(CenterNum, v5);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v11);
  if ( !supportEditMenu )
LABEL_7:
    sub_1B64ACC(CenterNum, v5);
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

  if ( (byte_49FAF8E & 1) == 0 )
  {
    sub_1B64870(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__, isFixed);
    byte_49FAF8E = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
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
  if ( (byte_49FAF71 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B64870(&SupportServantData_TypeInfo, method);
    byte_49FAF71 = 1;
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
      v7 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B649AC(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v24 = sub_1B64AF0();
          sub_1B64998(v24, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1B64AD4(this, method);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&supportServantData[v5], (int32_t)v7, v8, v9);
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
      v14 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v14, 0LL);
      if ( v14 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B649AC(v14, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v11 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v11 + 8] = v14;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&orgSupportServantData[v12], (int32_t)v14, v15, v16);
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
    sub_1B64ACC(this, method);
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
      v21 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v21, 0LL);
      if ( v21 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B649AC(v21, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v18 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v18 + 8] = v21;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&tmpSupportServantData[v19], (int32_t)v21, v22, v23);
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
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_49FAF98 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_49FAF98 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B64AD4(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64ACC(CenterNum, v5);
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

  if ( (byte_49FAF9C & 1) == 0 )
  {
    sub_1B64870(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_49FAF9C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B64AD4(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64ABC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    v10);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64ACC(CenterNum, v5);
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

  if ( (byte_49FAF7E & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_1B64870(&NetworkManager_TypeInfo, v4);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64870(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_1B64870(&StringLiteral_22140/*"ok"*/, v8);
    byte_49FAF7E = 1;
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
        sub_1B64AD4(Instance, v11);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22140/*"ok"*/, v16);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v17,
                                       (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1B64ACC(Instance, v11);
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
      sub_1B64AD4(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1B64814(
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
      sub_1B64ACC(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v12);
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

  if ( (byte_49FAF92 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_1B64870(&Method_SupportSelectRootComponent_ReturnScene__, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FAF92 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    v8 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B64888(Method_SupportSelectRootComponent_ReturnScene__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B64854(v8, v8[4]);
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
    sub_1B64ACC(supportSelectMenu, v10);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B64AD4(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1B64ACC(this, *(_QWORD *)&targetIdx);
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

  if ( (byte_49FAF95 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B64870(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_49FAF95 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
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
          *(const MethodInfo_34921B8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
        *(const MethodInfo_34921B8 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
                                                       (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v35 = (System_Int32_array *)supportEditMenu,
        v36 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__),
        v37 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1B64ABC(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v37,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v38),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1B64ACC(supportEditMenu, method);
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
    sub_1B64ACC(supportSelectMenu, method);
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

  if ( (byte_49FAF7D & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, list);
    byte_49FAF7D = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (ServantStatusBattleListViewItem_o *)&this->fields.cacheAssetNameList;
  v6 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37488476(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (ServantStatusBattleListViewItem_c *)list;
  sub_1B64814(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3);
  if ( v6 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37490820(v6, 0LL);
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
  if ( (byte_49FAF84 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64870(&Method_System_Array_IndexOf_long___, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64870(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_1B64870(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_49FAF84 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    v21 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_40703828(userSvtEntity->fields.svtId, 0LL);
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
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v30, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1B64ACC(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v23 = supportServantData->m_Items[selectNum];
  if ( !v23 )
    goto LABEL_32;
  v24 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v23->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_2F34254 *)Method_System_Array_IndexOf_long___);
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
    sub_1B64AD4(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v26->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v24, v18, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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
  SupportSelectRootComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v13; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v16; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v18; // x22
  __int64 v19; // x25
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 v25; // x27
  struct System_Int32_array *v26; // x8
  unsigned __int64 v27; // x29
  unsigned int *v28; // x23
  SupportServantData_o *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  unsigned int *v32; // x8
  struct SupportInfoJump_o *v33; // x10
  struct System_Int32_array *v34; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v36; // x26
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  unsigned __int64 v40; // x28
  unsigned int v41; // w27
  struct System_Int32_array *v42; // x8
  unsigned int *v43; // x23
  SupportServantData_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  unsigned int *v47; // x0
  unsigned int *v48; // x8
  struct SupportInfoJump_o *v49; // x9
  struct System_Int32_array *v50; // x10
  unsigned __int64 v51; // x25
  struct System_Int32_array *v52; // x8
  unsigned int *v53; // x23
  SupportServantData_o *v54; // x22
  int32_t v55; // w2
  int32_t v56; // w3
  unsigned int *v57; // x0
  unsigned int *v58; // x8
  struct SupportInfoJump_o *v59; // x9
  struct System_Int32_array *v60; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x0

  v5 = this;
  if ( (byte_49FAF76 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, deckIndex);
    sub_1B64870(&BalanceConfig_TypeInfo, v6);
    sub_1B64870(&Method_System_Linq_Enumerable_SequenceEqual_int___, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v8);
    sub_1B64870(&SupportServantData___TypeInfo, v9);
    this = (SupportSelectRootComponent_o *)sub_1B64870(&SupportServantData_TypeInfo, v10);
    byte_49FAF76 = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v5->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_73;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v13 = 0LL;
  p_supportServantData = (unsigned int **)&v5->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v16 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_73;
    if ( v13 >= v16[6] )
LABEL_74:
      sub_1B64AD4(this, deckIndex);
    *(_QWORD *)&v16[i] = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v16[i], 0, (int32_t)method, v3);
    ++v13;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2E6E044 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_73;
  v18 = *(_QWORD *)&mainSupportDeckIds->max_length;
  v19 = (unsigned int)v18;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_73;
    v36 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v37 = sub_1B64918(SupportServantData___TypeInfo, (unsigned int)(v36 + v18));
    *p_supportServantData = (unsigned int *)v37;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v37, v38, v39);
    if ( (int)v18 < 1 )
    {
      v41 = 0;
LABEL_52:
      if ( (int)v36 < 1 )
        goto LABEL_69;
      v51 = 0LL;
      while ( 1 )
      {
        v52 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v52 )
          break;
        if ( v51 >= v52->max_length )
          goto LABEL_74;
        if ( v52->m_Items[v51 + 1] >= 1 )
        {
          v53 = *p_supportServantData;
          v54 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v54, 0LL);
          if ( !v53 )
            break;
          if ( v54 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B649AC(v54, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v41 >= v53[6] )
            goto LABEL_74;
          v57 = &v53[2 * v41];
          *((_QWORD *)v57 + 4) = v54;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v57 + 8), (int32_t)v54, v55, v56);
          v58 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v41 >= v58[6] )
            goto LABEL_74;
          v59 = v5->fields.supportInfoJump;
          if ( !v59 )
            break;
          v60 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v60 )
            break;
          if ( v51 >= v60->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v58[2 * v41 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33050996(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v59->fields.kind,
            v59->fields.isSelect,
            v59->fields.eventSetupInfo,
            1,
            v60->m_Items[v51 + 1],
            0LL);
          ++v41;
        }
        if ( (unsigned int)v36 == ++v51 )
          goto LABEL_69;
      }
    }
    else
    {
      v40 = 0LL;
      v41 = 0;
      while ( 1 )
      {
        v42 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v42 )
          break;
        if ( v40 >= v42->max_length )
          goto LABEL_74;
        if ( v42->m_Items[v40 + 1] >= 1 )
        {
          v43 = *p_supportServantData;
          v44 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v44, 0LL);
          if ( !v43 )
            break;
          if ( v44 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B649AC(v44, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
            if ( !this )
            {
LABEL_75:
              v66 = sub_1B64AF0();
              sub_1B64998(v66, 0LL);
            }
          }
          if ( v41 >= v43[6] )
            goto LABEL_74;
          v47 = &v43[2 * v41];
          *((_QWORD *)v47 + 4) = v44;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v47 + 8), (int32_t)v44, v45, v46);
          v48 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v41 >= v48[6] )
            goto LABEL_74;
          v49 = v5->fields.supportInfoJump;
          if ( !v49 )
            break;
          v50 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v50 )
            break;
          if ( v40 >= v50->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v48[2 * v41 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33050996(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v49->fields.kind,
            v49->fields.isSelect,
            v49->fields.eventSetupInfo,
            0,
            v50->m_Items[v40 + 1],
            0LL);
          ++v41;
        }
        if ( v19 == ++v40 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1B64ACC(this, deckIndex);
  }
  v20 = sub_1B64918(SupportServantData___TypeInfo, (unsigned int)v18);
  *p_supportServantData = (unsigned int *)v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v20, v21, v22);
  if ( (int)v18 >= 1 )
  {
    v23 = -(__int64)(unsigned int)v18;
    v24 = 8LL;
    v25 = 8LL;
    do
    {
      v26 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v26 )
        goto LABEL_73;
      v27 = v24 - 8;
      if ( v24 - 8 >= (unsigned __int64)v26->max_length )
        goto LABEL_74;
      if ( *((int *)&v26->obj.klass + v24) >= 1 )
      {
        v28 = *p_supportServantData;
        v29 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v29, 0LL);
        if ( !v28 )
          goto LABEL_73;
        if ( v29 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B649AC(v29, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v27 >= v28[6] )
          goto LABEL_74;
        *(_QWORD *)&v28[v25] = v29;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v28[v25], (int32_t)v29, v30, v31);
        v32 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v27 >= v32[6] )
          goto LABEL_74;
        v33 = v5->fields.supportInfoJump;
        if ( !v33 )
          goto LABEL_73;
        v34 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v34 )
          goto LABEL_73;
        if ( v27 >= v34->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v32[v25];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_33050996(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v33->fields.kind,
          v33->fields.isSelect,
          v33->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v34->obj.klass + v24),
          0LL);
      }
      ++v24;
      v25 += 2LL;
    }
    while ( v23 + v24 != 8 );
  }
LABEL_69:
  supportSelectMenu = v5->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v63 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v63, (Il2CppObject *)v5, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v63;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v63, v64, v65);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v20; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v23; // w21
  unsigned __int64 v24; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x26
  unsigned int *v27; // x8
  struct SupportInfoJump_o *v28; // x8
  struct FollowerInfo_o *followerInfo; // x8
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  SupportSelectRootComponent___c_c *v33; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v35; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  unsigned int v40; // w0
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  void *monitor; // x8
  __int64 v45; // x24
  __int64 v46; // x23
  unsigned __int64 v47; // x25
  unsigned int *v48; // x26
  SupportServantData_o *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  unsigned int *v52; // x9
  struct SupportInfoJump_o *v53; // x8
  __int64 v54; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  struct SupportInfoJump_o *v60; // x8
  QuestRestrictionInfo_o *v61; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v63; // x0

  v4 = this;
  if ( (byte_49FAF77 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&BalanceConfig_TypeInfo, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B64870(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v10);
    sub_1B64870(&int___TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B64870(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v14);
    sub_1B64870(&SupportServantData___TypeInfo, v15);
    sub_1B64870(&SupportServantData_TypeInfo, v16);
    sub_1B64870(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v17);
    this = (SupportSelectRootComponent_o *)sub_1B64870(&SupportSelectRootComponent___c_TypeInfo, v18);
    byte_49FAF77 = 1;
  }
  supportInfoJump = v4->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v20 = v4->fields.supportInfoJump;
  if ( !v20 )
    goto LABEL_57;
  questRestrictionInfo = v20->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v23 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0LL);
  else
LABEL_11:
    v23 = 1;
  v24 = 0LL;
  p_supportServantData = (unsigned int **)&v4->fields.supportServantData;
  for ( i = 8LL; ; i += 2LL )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v24 >= SLODWORD(this->fields.applyIconObj[6].monitor) )
      break;
    v27 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_57;
    if ( v24 >= v27[6] )
      goto LABEL_58;
    *(_QWORD *)&v27[i] = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v27[i], 0, v2, v3);
    ++v24;
  }
  v28 = v4->fields.supportInfoJump;
  if ( !v28 || (followerInfo = v28->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1B64ACC(this, method);
  if ( v23 )
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
  v30 = System_Array__Clone((System_Array_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_28;
  v31 = v30;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B649AC(v30, int___TypeInfo);
  if ( !v32 )
  {
    sub_1B64D8C(v31);
LABEL_28:
    v32 = 0LL;
  }
  v33 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v33 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v33->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = SupportSelectRootComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v35,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_int_(
          v32,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
  v40 = System_Linq_Enumerable__Count_int_(v39, (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
  v41 = sub_1B64918(SupportServantData___TypeInfo, v40);
  *p_supportServantData = (unsigned int *)v41;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v4->fields.supportServantData, v41, v42, v43);
  if ( !v32 )
    goto LABEL_57;
  monitor = v32[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v45 = 8LL;
    v46 = 8LL;
    while ( 1 )
    {
      v47 = v45 - 8;
      if ( v45 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v32->klass + v45) >= 1 )
      {
        v48 = *p_supportServantData;
        v49 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v49, 0LL);
        if ( !v48 )
          goto LABEL_57;
        if ( v49 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B649AC(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( !this )
          {
            v63 = sub_1B64AF0();
            sub_1B64998(v63, 0LL);
          }
        }
        if ( v47 >= v48[6] )
          break;
        *(_QWORD *)&v48[v46] = v49;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v48[v46], (int32_t)v49, v50, v51);
        v52 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v47 >= v52[6] )
          break;
        v53 = v4->fields.supportInfoJump;
        if ( !v53 )
          goto LABEL_57;
        if ( v47 >= LODWORD(v32[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v52[v46];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_33051836(
          (SupportServantData_o *)this,
          v53->fields.followerInfo,
          v53->fields.kind,
          v53->fields.isSelect,
          v53->fields.eventSetupInfo,
          v53->fields.questRestrictionInfo,
          *((_DWORD *)&v32->klass + v45),
          0LL);
      }
      LODWORD(monitor) = v32[1].monitor;
      v54 = v45 - 7;
      ++v45;
      v46 += 2LL;
      if ( v54 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1B64AD4(this, method);
  }
LABEL_51:
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v57 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v4, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v57;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v57, v58, v59);
  v60 = v4->fields.supportInfoJump;
  if ( !v60 )
    goto LABEL_57;
  v61 = v60->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v4->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v61, this->fields.kind, 0LL, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v28; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v32; // x9
  struct System_Int32_array *v33; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 j; // x25
  unsigned __int64 v38; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v40; // x9
  struct System_Int32_array *v41; // x9
  SupportSelectRootComponent_o *v42; // x0
  const MethodInfo *v43; // x4
  SupportSelectRootComponent_o *v44; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v51; // x5
  int32_t v52; // w2
  int32_t v53; // w3
  struct SupportServantData_array *supportServantData; // x21
  __int64 v55; // x8
  unsigned __int64 v56; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v58; // x21
  SupportServantData_array *v59; // x22
  SupportSelectMenu_CallbackFunc_o *v60; // x23
  const MethodInfo *v61; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v62; // x24
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x5
  struct SupportSelectMenu_o *v65; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x1
  struct SupportSelectMenu_o *v71; // x8
  int32_t v72; // w2
  int32_t v73; // w3
  struct SupportServantData_array *v74; // x20
  __int64 v75; // x8
  unsigned __int64 v76; // x21
  struct EventUpValSetupInfo_o *v77; // x1
  SupportSelectMenu_o *v78; // x20
  SupportServantData_array *v79; // x21
  int32_t v80; // w22
  SupportSelectMenu_CallbackFunc_o *v81; // x23
  const MethodInfo *v82; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v83; // x24
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x5
  const MethodInfo *v86; // x2
  struct SupportServantData_array *v87; // x8
  bool v88; // w1
  System_Action_o *v89; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FAF78 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&AtlasManager_TypeInfo, v3);
    sub_1B64870(&BalanceConfig_TypeInfo, v4);
    sub_1B64870(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_1B64870(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_1B64870(&int___TypeInfo, v7);
    sub_1B64870(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_1B64870(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_1B64870(&StringLiteral_12415/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_49FAF78 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12415/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
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
    v22 = (struct System_Int32_array *)sub_1B64918(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v22;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int32_t)v22,
      v24,
      v25);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v28 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v28 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_76;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v28 < (int)max_length )
      {
        if ( v28 >= max_length )
          goto LABEL_77;
        v32 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_76;
        if ( v28 >= v32->max_length )
          goto LABEL_77;
        *((_DWORD *)&v32->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v33 = (struct System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v33;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int32_t)v33,
      v35,
      v36);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v38 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v38 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_76;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_76;
      v40 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v38 < (int)v40 )
      {
        if ( v38 >= v40 )
          goto LABEL_77;
        v41 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_76;
        if ( v38 >= v41->max_length )
          goto LABEL_77;
        *((_DWORD *)&v41->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v16);
    SupportSelectRootComponent__CopySupportData(
      v42,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v43);
    SupportSelectRootComponent__CopySupportData(
      v44,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v45);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, v46);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v47);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v48);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_36882976(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            80,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v49);
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
                  v51);
                supportServantData = this->fields.supportServantData;
                if ( supportServantData )
                {
                  v55 = *(_QWORD *)&supportServantData->max_length;
                  if ( (int)v55 >= 1 )
                  {
                    v56 = 0LL;
                    while ( v56 < (unsigned int)v55 )
                    {
                      followerQuestInfomationDraw = supportServantData->m_Items[v56];
                      if ( followerQuestInfomationDraw )
                      {
                        eventSetupInfo = this->fields.eventSetupInfo;
                        followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                        sub_1B64814(
                          (ServantStatusBattleListViewItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                          (int32_t)eventSetupInfo,
                          v52,
                          v53);
                      }
                      LODWORD(v55) = supportServantData->max_length;
                      if ( (__int64)++v56 >= (int)v55 )
                        goto LABEL_49;
                    }
LABEL_77:
                    sub_1B64AD4(followerQuestInfomationDraw, v16);
                  }
LABEL_49:
                  v58 = this->fields.supportSelectMenu;
                  v59 = this->fields.supportServantData;
                  v60 = (SupportSelectMenu_CallbackFunc_o *)sub_1B64ABC(SupportSelectMenu_CallbackFunc_TypeInfo);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v60,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v61);
                  v62 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B64ABC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v62,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v63);
                  if ( v58 )
                  {
                    SupportSelectMenu__Open(v58, v59, Int, v60, v62, v64);
                    v65 = this->fields.supportSelectMenu;
                    if ( v65 )
                    {
                      indicator = v65->fields.indicator;
                      v67 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v67,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v67;
                        sub_1B64814(
                          (ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int32_t)v67,
                          v68,
                          v69);
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
    sub_1B64ACC(followerQuestInfomationDraw, v16);
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
  TitleInfoControl__setTitleInfo_36882976(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v70);
  v71 = this->fields.supportSelectMenu;
  if ( !v71 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v71->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v74 = this->fields.supportServantData;
  if ( !v74 )
    goto LABEL_76;
  v75 = *(_QWORD *)&v74->max_length;
  if ( (int)v75 >= 1 )
  {
    v76 = 0LL;
    while ( v76 < (unsigned int)v75 )
    {
      followerQuestInfomationDraw = v74->m_Items[v76];
      if ( followerQuestInfomationDraw )
      {
        v77 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v77;
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int32_t)v77,
          v72,
          v73);
      }
      LODWORD(v75) = v74->max_length;
      if ( (__int64)++v76 >= (int)v75 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v78 = this->fields.supportSelectMenu;
  v79 = this->fields.supportServantData;
  v80 = deckIndex;
  v81 = (SupportSelectMenu_CallbackFunc_o *)sub_1B64ABC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v81,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v82);
  v83 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B64ABC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v83,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v84);
  if ( !v78 )
    goto LABEL_76;
  SupportSelectMenu__Open(v78, v79, v80, v81, v83, v85);
  v87 = this->fields.supportServantData;
  if ( !v87 )
    goto LABEL_76;
  v88 = (int)v87->max_length >= 2 && v87->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v88, v86);
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
  v89 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v89, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v89, 2, 1, 0LL);
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
  if ( (byte_49FAF8A & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_49FAF8A = 1;
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
    sub_1B64ACC(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1B64AD4(this, *(_QWORD *)&idx);
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
    sub_1B64ACC(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_38281152((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_49FAF7C & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B64870(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method);
    byte_49FAF7C = 1;
  }
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&supportSelectMenu->fields.supportServantData, 0, v2, v3);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1B64ACC(this, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v4->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v4, 0LL, v6);
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
  int32_t v10; // w2
  int32_t v11; // w3
  BalanceConfig_c *v12; // x0
  struct SupportServantData_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  BalanceConfig_c *v16; // x0
  struct SupportServantData_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_49FAF70 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64870(&SupportServantData___TypeInfo, v4);
    sub_1B64870(&StringLiteral_13037/*"SvtEqScrollBarValue"*/, v5);
    byte_49FAF70 = 1;
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
    v9 = (struct SupportServantData_array *)sub_1B64918(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v9, v10, v11);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (struct SupportServantData_array *)sub_1B64918(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v12->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.orgSupportServantData, (int32_t)v13, v14, v15);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_1B64918(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v17;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.tmpSupportServantData, (int32_t)v17, v18, v19);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13037/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v21);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppClass *v16; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v18; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  int32_t v24; // w1
  Il2CppClass *v25; // x8
  __int64 v26; // x9
  Il2CppObject *v27; // x10
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  struct SupportInfoJump_o *v32; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v35; // x20
  EventUpValSetupInfo_o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_Action_o *v39; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v41; // x20
  EventUpValSetupInfo_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x1

  if ( (byte_49FAF79 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, data);
    sub_1B64870(&AtlasManager_TypeInfo, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMaster_EventQuestMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B64870(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B64870(&SceneJumpInfo_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&SupportInfoJump_TypeInfo, v14);
    sub_1B64870(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v15);
    byte_49FAF79 = 1;
  }
  if ( data )
  {
    v16 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
        v18 = data;
      else
        v18 = 0LL;
    }
    else
    {
      v18 = 0LL;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v18;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v16 )
        v24 = (int)data;
      else
        v24 = 0;
    }
    else
    {
      v24 = 0;
    }
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, v24, (int32_t)method, v3);
    v25 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v26 = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v26 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v26 - 1] == SceneJumpInfo_TypeInfo )
        v27 = data;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v27;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v26 )
    {
      if ( data->klass->_2.typeHierarchy[v26 - 1] == v25 )
        v22 = (int)data;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3);
    v22 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_sceneJumpInfo, v22, v20, v21);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v28);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  v32 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v32->fields.otherUserGameEntity || !v32->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v41 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
        v42 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_38597124(v42, v41, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v42;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v42, v43, v44);
        SupportSelectRootComponent__StartUp(this, v45);
        return;
      }
    }
LABEL_41:
    sub_1B64ACC(bgTxtSprite, v29);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v35 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
  v36 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38597124(v36, v35, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v36;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v36, v37, v38);
  v39 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v39, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B64ACC(0LL, method);
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
  if ( (byte_49FAFA1 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B64870(&SupportServantData_TypeInfo, method);
    byte_49FAFA1 = 1;
  }
  supportServantData = v2->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1B64ACC(this, method);
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
      v7 = (SupportServantData_o *)sub_1B64ABC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, 0LL);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B649AC(v7, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v10 = sub_1B64AF0();
          sub_1B64998(v10, 0LL);
        }
      }
      if ( v4 >= supportServantData->max_length )
LABEL_17:
        sub_1B64AD4(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v5) = (Il2CppClass *)v7;
      sub_1B64814((ServantStatusBattleListViewItem_o *)((char *)supportServantData + v5), (int32_t)v7, v8, v9);
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

  if ( (byte_49FAFA0 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, servant);
    byte_49FAFA0 = 1;
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
    sub_1B64AD4(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1B64ACC(OldServant, v8);
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

  if ( (byte_49FAF7B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_IndexOf_int___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_49FAF7B = 1;
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
              (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
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
          (const MethodInfo_2E6E044 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v22 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2E549F4 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v22,
                            (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                                    (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___)
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
    sub_1B64AD4(eventSupportDeckIds, v9);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_2F34144 *)Method_System_Array_IndexOf_int___);
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
    sub_1B64ACC(eventSupportDeckIds, v9);
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
    sub_1B64ACC(blackMask, editOn);
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
    sub_1B64ACC(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAFA6 & 1) == 0 )
  {
    sub_1B64870(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_49FAFA6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FAFA7 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49FAFA7 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
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

  if ( (byte_49FAFA8 & 1) == 0 )
  {
    sub_1B64870(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_49FAFA8 = 1;
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
      sub_1B64AD4(_4__this, isDecide);
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
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B64ABC(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v14,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1B64ACC(_4__this, isDecide);
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_49FAFA9 & 1) == 0 )
  {
    sub_1B64870(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64870(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_49FAFA9 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_15;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v8->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B64AD4(_4__this, isDecide);
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
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B64ABC(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v15,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v20),
          !v14) )
    {
LABEL_15:
      sub_1B64ACC(_4__this, isDecide);
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64ACC(this, x);
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
    sub_1B64ACC(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}