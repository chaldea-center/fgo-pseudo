void SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C23A1A & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectRootComponent_TypeInfo);
    byte_4C23A1A = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C23A19 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C23A19 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v3->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v4, v5, v6);
  v7 = (struct System_Int32_array *)sub_1C2D538(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v7, v8, v9);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4C239F3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12566/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4C239F3 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12566/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void SupportSelectRootComponent__ChangeDeckName(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v10; // x23

  if ( (byte_4C23A12 & 1) == 0 )
  {
    sub_1C2D490(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_4C23A12 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(CenterNum, v4, v5);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, v4),
        v10 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1C2D6DC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1C2D6EC(CenterNum, v4);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v10, 0);
}


void SupportSelectRootComponent__ChangeTitle(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  int32_t v3; // w2

  if ( !this->fields.isEdit )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 83;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C2D6EC(titleInfo, method);
  }
  if ( this->fields.isDragSwapState )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 72;
LABEL_7:
      TitleInfoControl__changeTitleInfo(titleInfo, 2, v3, 0);
      return;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__ConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        int32_t targetDeckId,
        const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v10; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v12; // x22
  SupportServantData_o *v13; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v14; // x23

  if ( (byte_4C23A0B & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_4C23A0B = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v10 = this->fields.copyTargetDeckId - 1, v10 >= max_length) )
    sub_1C2D6F4(CenterNum, v6, v7);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = supportServantData->m_Items[v10];
  v14 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1C2D6EC(CenterNum, v6);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v12, v13, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__CopySupportData(
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

  if ( (byte_4C23A16 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A16 = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1C2D6EC(this, orgData);
  if ( SLODWORD(orgData->max_length) >= 1 )
  {
    v8 = 0;
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
        if ( v10 >= SHIDWORD(this->fields.applyIconObj[7].monitor) )
          break;
        if ( !toData )
          goto LABEL_18;
        if ( v8 >= LODWORD(toData->max_length) || v8 >= LODWORD(orgData->max_length) )
          sub_1C2D6F4(this, orgData, toData);
        this = *v11;
        if ( !*v11 )
          goto LABEL_18;
        SupportServantData__CopyData((SupportServantData_o *)this, orgData->m_Items[v8], v9, (const MethodInfo *)isInit);
        ++v10;
      }
      ++v8;
    }
    while ( (__int64)v8 < SLODWORD(orgData->max_length) );
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndCancelConfirmMenu(
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

  if ( (byte_4C23A05 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    byte_4C23A05 = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    SupportSelectRootComponent__CopySupportData(
      v8,
      this->fields.tmpSupportServantData,
      this->fields.supportServantData,
      0,
      v9);
    cancelConfirmMenu = (CancelConfirmMenu_o *)this->fields.supportSelectMenu;
    if ( cancelConfirmMenu )
    {
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, -1, 0);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v10);
      return;
    }
LABEL_10:
    sub_1C2D6EC(cancelConfirmMenu, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndChangeDeckIdCancelConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C23A04 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    byte_4C23A04 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0);
  v6 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22362/*"ok"*/, v8);
      return;
    }
LABEL_10:
    sub_1C2D6EC(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C23A13 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__);
    byte_4C23A13 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.editDeckName, (int32_t)changeName, (int32_t)changeName, method);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, 0);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_35469968(deckNameInputMenu, v9, 0);
        return;
      }
    }
LABEL_9:
    sub_1C2D6EC(supportEditMenu, isDecide);
  }
  supportEditMenu = (SupportSelectEditMenu_o *)this->fields.deckNameInputMenu;
  if ( !supportEditMenu )
    goto LABEL_9;
  SupportDeckNameInputMenu__Close((SupportDeckNameInputMenu_o *)supportEditMenu, 0);
}


void SupportSelectRootComponent__EndCloseServantEquipListCancel(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C2D6EC(0, method);
  SupportSelectMenu__Reset(supportSelectMenu, this->fields.classPos, 0);
}


void SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C2D6EC(0, method);
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
}


void SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C239FC & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C239FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_o *CenterNum; // x0
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int32_t v7; // w20
  struct SupportServantData_array *supportServantData; // x9
  unsigned int max_length; // w8
  SupportServantData_o *v10; // x8
  const MethodInfo *v11; // x2

  if ( isDecide )
  {
    CenterNum = (SupportSelectConfirmCopyMenu_o *)SupportSelectRootComponent__getCenterNum(
                                                    this,
                                                    (const MethodInfo *)isDecide);
    v7 = this->fields.copyTargetDeckId - 1;
    if ( (_DWORD)CenterNum != v7 )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
      max_length = supportServantData->max_length;
      if ( v7 >= max_length || (unsigned int)CenterNum >= max_length )
        sub_1C2D6F4(CenterNum, isDecide, v5);
      v10 = supportServantData->m_Items[v7];
      if ( !v10 )
        goto LABEL_15;
      SupportServantData__CopyData(v10, supportServantData->m_Items[(int)CenterNum], 0, v6);
      SupportSelectRootComponent__SaveTemp(this, v7, v11);
    }
    CenterNum = this->fields.copyConfirmMenu;
    if ( CenterNum )
    {
      SupportSelectConfirmCopyMenu__Close(CenterNum, 0);
      CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.copyDeckSelectMenu;
      if ( CenterNum )
      {
        SupportSelectCopyDeckSelectMenu__Close((SupportSelectCopyDeckSelectMenu_o *)CenterNum, 0);
        CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportServantSelectMenu;
        if ( CenterNum )
        {
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)CenterNum, 0);
          CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, -1, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(CenterNum, isDecide);
  }
  CenterNum = this->fields.copyConfirmMenu;
  if ( !CenterNum )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(CenterNum, 0);
}


void SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_1C2D6EC(0, flag);
  SupportSelectConfirmMenu__Close_35479472(supportSelectConfirmMenu, 0, 0);
  this->fields.state = 1;
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndInitAll(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct SupportServantData_array *supportServantData; // x8
  unsigned int v9; // w20
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x21
  System_String_o *DefaultDeckName; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t i; // w21
  struct SupportServantData_array *v16; // x8
  struct SupportServantData_array *v17; // x8
  struct SupportServantData_array *v18; // x8
  struct SupportServantData_array *v19; // x8
  const MethodInfo *v20; // x2

  if ( (byte_4C23A0F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A0F = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_33;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, 0);
  if ( isDecide )
  {
    confirmDeckMenu = SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( supportServantData )
    {
      v9 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= LODWORD(supportServantData->max_length) )
LABEL_34:
        sub_1C2D6F4(confirmDeckMenu, isDecide, v7);
      v10 = &supportServantData->obj.klass + (int)confirmDeckMenu;
      v11 = v10[4];
      if ( v11 )
      {
        DefaultDeckName = SupportServantData__getDefaultDeckName(
                            (SupportServantData_o *)v10[4],
                            (const MethodInfo *)isDecide);
        v11->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_1C2D434((CGThumbnailListItem_o *)&v11->_1.klass, (int32_t)DefaultDeckName, v13, v14);
        for ( i = 0; ; ++i )
        {
          confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(confirmDeckMenu + 184) + 180LL) )
            break;
          v16 = this->fields.supportServantData;
          if ( !v16 )
            goto LABEL_33;
          if ( v9 >= LODWORD(v16->max_length) )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v16->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, v7);
          if ( confirmDeckMenu >= 1 )
          {
            v17 = this->fields.supportServantData;
            if ( !v17 )
              goto LABEL_33;
            if ( v9 >= LODWORD(v17->max_length) )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v17->m_Items[v9];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, v7);
          }
          v18 = this->fields.supportServantData;
          if ( !v18 )
            goto LABEL_33;
          if ( v9 >= LODWORD(v18->max_length) )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v18->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, v7);
          if ( confirmDeckMenu >= 1 )
          {
            v19 = this->fields.supportServantData;
            if ( !v19 )
              goto LABEL_33;
            if ( v9 >= LODWORD(v19->max_length) )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v19->m_Items[v9];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v7);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0);
            SupportSelectRootComponent__setEditUI(this, 1, v20);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1C2D6EC(confirmDeckMenu, isDecide);
  }
}


void SupportSelectRootComponent__EndLoadCommonBg(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20

  if ( (byte_4C239EE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__);
    byte_4C239EE = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
  {
    sub_1C2D6EC(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v4, 1, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndRemoveAll(
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
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  const MethodInfo *v14; // x2

  if ( (byte_4C23A0D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A0D = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_30;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0);
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
      if ( v7 >= *(_DWORD *)(confirmDeckMenu[1].fields.m_CachedPtr + 180) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
        goto LABEL_31;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getServant(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            v8);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= LODWORD(v11->max_length) )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v12->max_length) )
LABEL_31:
        sub_1C2D6F4(confirmDeckMenu, isDecide, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            v8);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v13 = this->fields.supportServantData;
        if ( !v13 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= LODWORD(v13->max_length) )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0);
        SupportSelectRootComponent__setEditUI(this, 1, v14);
        return;
      }
    }
LABEL_30:
    sub_1C2D6EC(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndRemoveAllEquip(
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

  if ( (byte_4C23A11 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A11 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_22;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0);
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
      if ( v7 >= *(_DWORD *)(confirmDeckMenu[1].fields.m_CachedPtr + 180) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_22;
      if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
        goto LABEL_23;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_22;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            v8);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_22;
        if ( (unsigned int)CenterNum >= LODWORD(v11->max_length) )
LABEL_23:
          sub_1C2D6F4(confirmDeckMenu, isDecide, v8);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_22;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0);
        SupportSelectRootComponent__setEditUI(this, 1, v12);
        return;
      }
    }
LABEL_22:
    sub_1C2D6EC(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndSelectCopySupportDeck(
        SupportSelectRootComponent_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v11; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v12; // x22

  if ( (byte_4C23A0A & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4C23A0A = 1;
  }
  if ( deckId == -1 )
  {
    copyDeckSelectMenu = this->fields.copyDeckSelectMenu;
    if ( !copyDeckSelectMenu )
      goto LABEL_10;
    SupportSelectCopyDeckSelectMenu__Close(copyDeckSelectMenu, 0);
    copyDeckSelectMenu = (SupportSelectCopyDeckSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v6);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_10;
    if ( (unsigned int)copyDeckSelectMenu >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(copyDeckSelectMenu, *(_QWORD *)&deckId, v7);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v11 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v12 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0);
    if ( !supportEditMenu )
LABEL_10:
      sub_1C2D6EC(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v11, isEdit, v12, 0);
  }
  else
  {
    SupportSelectRootComponent__ConfirmDeckCopy(this, deckId, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndShowEquip(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  if ( (byte_4C239FD & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C239FD = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0, 0),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0) )
  {
    sub_1C2D6EC(supportSelectMenu, isDecide);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  struct SupportServantData_array *supportServantData; // x9
  __int64 max_length; // x8
  SupportServantData_o **m_Items; // x9
  SupportServantData_o *v8; // x10

  if ( (byte_4C239FA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C239FA = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0, 0);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_15;
  if ( (int)supportServantData->max_length >= 1 )
  {
    max_length = (unsigned int)supportServantData->max_length;
    m_Items = supportServantData->m_Items;
    do
    {
      v8 = *m_Items;
      if ( *m_Items && !v8->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_15;
        v8->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.swapButton;
      }
      --max_length;
      ++m_Items;
    }
    while ( max_length );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_15:
    sub_1C2D6EC(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndShowServantWithQuest(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C239FB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_4C239FB = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C2D6EC(v8, v9);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndSupportEditMenu(
        SupportSelectRootComponent_o *this,
        int32_t resultKind,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x21
  __int64 CenterNum; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_1C2D6EC(CenterNum, v7);
  SupportSelectMenu__moveCenterItem(supportSelectMenu, CenterNum, 0);
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
void SupportSelectRootComponent__EndSupportSelectMenu(
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
  struct SupportServantData_array *v19; // x8
  SupportServantData_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x2
  struct SupportServantData_array *v26; // x22
  SupportServantData_o *v27; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v30; // x24
  System_Int32_array *v31; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v33; // x2
  struct SupportServantData_array *v34; // x22
  SupportServantData_o *v35; // x8
  EventUpValSetupInfo_o *v36; // x27
  System_Int32_array *v37; // x25
  System_Int32_array *v38; // x26
  CommonUI_o *v39; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v40; // x28
  const MethodInfo *v41; // x3
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v43; // x1
  SupportSelectMenu_o *v44; // x20
  const MethodInfo *v45; // x2
  bool v46; // w1
  SupportSelectRootComponent_o *v47; // x0
  SupportSelectMenu_o *v48; // x20
  const MethodInfo *v49; // x1
  __int64 v50; // x22
  struct SupportServantData_array *v51; // x8
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x1
  ServantLeaderInfo_o **v55; // x21
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct FollowerInfo_o *followerInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userSvtGrandHash; // x23
  System_Func_object__bool__o *v59; // x24
  Il2CppObject *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantLeaderInfo_o *v63; // x8
  __int64 v64; // x22
  __int64 v65; // x23
  struct SupportServantData_array *v66; // x8
  SupportServantData_o *v67; // x8
  struct SupportServantData_array *v68; // x8
  SupportServantData_o *v69; // x8
  int v70; // w22
  struct SupportServantData_array *v71; // x8
  SupportServantData_o *v72; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v74; // w22
  struct SupportServantData_array *v75; // x8
  SupportServantData_o *v76; // x8
  ServantLeaderInfo_o *v77; // x9
  QuestRestrictionInfo_o *v78; // x20
  __int64 v79; // x23
  __int64 v80; // x24
  int32_t limitCount; // w24
  int32_t v82; // w23
  Il2CppObject *Instance; // x20
  System_Action_o *v84; // x22
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  ServantLeaderInfo_o *v87; // x8
  struct SupportServantData_array *v88; // x8
  int64_t v89; // x21
  struct SupportServantData_array *v90; // x8
  SupportServantData_o *v91; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x0
  struct SupportServantData_array *v95; // x8
  SupportServantData_o *v96; // x8
  int32_t kind; // w20
  CommonUI_o *v98; // x22
  ServantLeaderInfo_o *v99; // x21
  ServantStatusDialog_EndDelegate_o *v100; // x23
  struct SupportServantData_array *v101; // x8
  struct SupportServantData_array *v102; // x8
  int64_t v103; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v105; // x8
  System_Reflection_MethodBase_o *v106; // x0
  struct SupportServantData_array *v107; // x8
  SupportServantData_o *v108; // x8
  int32_t v109; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v111; // x21
  ServantStatusDialog_EndDelegate_o *v112; // x23
  _QWORD *v113; // x0
  System_Reflection_MethodBase_o *v114; // x0
  _QWORD *v115; // x0
  System_Reflection_MethodBase_o *v116; // x0
  _QWORD *v117; // x0
  System_Reflection_MethodBase_o *v118; // x0
  Il2CppObject *v119; // x20
  ServantStatusDialog_EndDelegate_o *v120; // x22
  int64_t v121; // x21
  ServantStatusDialog_FormationEndDelegate_o *v122; // x23
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v124; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v126; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  int32_t v131; // w0
  SupportSelectRootComponent___c_c *v132; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v134; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v136; // x24
  struct SupportSelectRootComponent___c_StaticFields *v137; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v140; // x0
  struct SupportServantData_array *v141; // x8
  SupportServantData_o *v142; // x0
  _QWORD *v143; // x0
  System_Reflection_MethodBase_o *v144; // x0
  const MethodInfo *v145; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  if ( (byte_4C239F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C2D490(&System_Func_ServantLeaderInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_1C2D490(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_3__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__DisplayClass66_0__EndSupportSelectMenu_b__2__);
    sub_1C2D490(&SupportSelectRootComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C2D490(&SupportSelectRootComponent___c_TypeInfo);
    byte_4C239F4 = 1;
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
        goto LABEL_147;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_176;
      if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
        goto LABEL_177;
      cancelConfirmMenu = this->fields.cancelConfirmMenu;
      v17 = supportServantData->m_Items[CenterNum];
      v18 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C2D6DC(CancelConfirmMenu_CallbackFunc_TypeInfo);
      CancelConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        0);
      if ( !cancelConfirmMenu )
        goto LABEL_176;
      CancelConfirmMenu__Open(cancelConfirmMenu, 0, v17, v18, 0);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v13);
      if ( (isUpdate & 1) != 0 )
      {
        v19 = this->fields.supportServantData;
        if ( !v19 )
          goto LABEL_176;
        if ( (unsigned int)CenterNum < LODWORD(v19->max_length) )
        {
          v20 = v19->m_Items[CenterNum];
          if ( v20 && SupportServantData__get_IsNoServant(v20, v11) )
          {
LABEL_15:
            v21 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v21 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v22 = (System_Reflection_MethodBase_o *)sub_1C2D474(v21, v21[4]);
            OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v24 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C2D6DC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v24,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              0);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v24, 0);
              return;
            }
LABEL_176:
            sub_1C2D6EC(isUpdate, v11);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v12);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0);
          v117 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v117 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v118 = (System_Reflection_MethodBase_o *)sub_1C2D474(v117, v117[4]);
          OverwriteAssetSoundName__PlaySystemSe(v118, 8, 0, 0);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, -1, 0);
          goto LABEL_147;
        }
LABEL_177:
        sub_1C2D6F4(isUpdate, v11, v12);
      }
      if ( this->fields.isEdit )
      {
        v115 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v115 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v116 = (System_Reflection_MethodBase_o *)sub_1C2D474(v115, v115[4]);
        OverwriteAssetSoundName__PlaySystemSe(v116, 8, 0, 0);
LABEL_147:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
        v47 = this;
        v46 = 0;
        this->fields.isDragSwapState = 0;
LABEL_148:
        SupportSelectRootComponent__setEditUI(v47, v46, v45);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v124 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v124 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v124->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v124->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v124);
          v124 = SupportSelectRootComponent___c_TypeInfo;
        }
        v126 = (Il2CppObject *)v124->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v126,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v128, v129);
      }
      v130 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
      v131 = System_Linq_Enumerable__Count_int_(
               v130,
               (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
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
        _9__66_1 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v136,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0);
        v137 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v137->__9__66_1 = _9__66_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v137->__9__66_1, (int32_t)_9__66_1, v138, v139);
      }
      v140 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v140,
                   (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v134 < 1 || (int)isUpdate <= 0 )
      {
        v141 = this->fields.supportServantData;
        if ( !v141 )
          goto LABEL_176;
        if ( (unsigned int)CenterNum >= LODWORD(v141->max_length) )
          goto LABEL_177;
        v142 = v141->m_Items[CenterNum];
        if ( v142 && SupportServantData__get_IsNoServant(v142, v11) )
          goto LABEL_15;
      }
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_176;
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0);
      isUpdate = (int64_t)this->fields.supportServantSelectMenu;
      if ( !isUpdate )
        goto LABEL_176;
      SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0);
      v143 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v143 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v144 = (System_Reflection_MethodBase_o *)sub_1C2D474(v143, v143[4]);
      OverwriteAssetSoundName__PlaySystemSe(v144, 8, 0, 0);
      SupportSelectRootComponent__RequestApi(this, v145);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0);
      SupportSelectRootComponent__setEditUI(this, 1, v25);
      isUpdate = (int64_t)this->fields.titleInfo;
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0);
      if ( !isUpdate )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0);
      isUpdate = (int64_t)this->fields.backSkinSprite;
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0);
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)isUpdate, 0);
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)isUpdate, 0);
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)isUpdate, 0);
      if ( !isUpdate )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)isUpdate, 0, 0);
      v26 = this->fields.supportServantData;
      if ( !v26 )
        goto LABEL_176;
      if ( LODWORD(v26->max_length) <= deckNum )
        goto LABEL_177;
      v27 = v26->m_Items[deckNum];
      if ( !v27 )
        goto LABEL_176;
      eventSetupInfo2 = v27->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v30 = this->fields.tempFixMainQuestSupportDeckIds;
      v31 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C2D6DC(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0);
      if ( !supportServantSelectMenu )
        goto LABEL_176;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v26,
        deckNum,
        classPos,
        eventSetupInfo2,
        v14,
        v30,
        v31,
        callback,
        0);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0);
      SupportSelectRootComponent__setEditUI(this, 1, v33);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v34 = this->fields.supportServantData;
      if ( !v34 )
        goto LABEL_176;
      if ( LODWORD(v34->max_length) <= deckNum )
        goto LABEL_177;
      v35 = v34->m_Items[deckNum];
      if ( !v35 )
        goto LABEL_176;
      v36 = v35->fields.eventSetupInfo2;
      v37 = this->fields.tempFixMainQuestSupportDeckIds;
      v38 = this->fields.tempFixEventQuestSupportDeckIds;
      v39 = (CommonUI_o *)isUpdate;
      v40 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C2D6DC(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        v41);
      if ( !v39 )
        goto LABEL_176;
      CommonUI__OpenSupportServantEquipListMenu(v39, v34, deckNum, classPos, v36, v14, v37, v38, v40, 0);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !supportSelectMenu )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, 0);
      SupportSelectRootComponent__ChangeDeckName(this, v43);
      return;
    case 5:
      v44 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v44 )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(v44, isUpdate, 0);
      v46 = 1;
      this->fields.isDragSwapState = 1;
      v47 = this;
      goto LABEL_148;
    case 6:
      v48 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v48 )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(v48, isUpdate, 0);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v49);
      return;
    case 7:
      v50 = sub_1C2D6DC(SupportSelectRootComponent___c__DisplayClass66_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v50, 0);
      v51 = this->fields.supportServantData;
      if ( !v51 )
        goto LABEL_176;
      if ( LODWORD(v51->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v51->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v12);
      if ( !isUpdate || !v50 )
        goto LABEL_176;
      v54 = *(_QWORD *)(isUpdate + 24);
      *(_QWORD *)(v50 + 16) = v54;
      v55 = (ServantLeaderInfo_o **)(v50 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v50 + 16), v54, v52, v53);
      if ( !*(_QWORD *)(v50 + 16) )
        goto LABEL_132;
      supportInfoJump = this->fields.supportInfoJump;
      if ( !supportInfoJump || !supportInfoJump->fields._IsUseGrandSupport_k__BackingField )
        goto LABEL_56;
      followerInfo = supportInfoJump->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_176;
      userSvtGrandHash = (System_Collections_Generic_IEnumerable_TSource__o *)followerInfo->fields.userSvtGrandHash;
      v59 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_ServantLeaderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v59,
        (Il2CppObject *)v50,
        Method_SupportSelectRootComponent___c__DisplayClass66_0__EndSupportSelectMenu_b__2__,
        0);
      v60 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              userSvtGrandHash,
              (System_Func_TSource__bool__o *)v59,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
      if ( v60 )
      {
        *v55 = (ServantLeaderInfo_o *)v60;
        sub_1C2D434((CGThumbnailListItem_o *)(v50 + 16), (int32_t)v60, v61, v62);
      }
LABEL_56:
      v63 = *v55;
      if ( !*v55 )
        goto LABEL_132;
      v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
      v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v146.fields.currentCryptoKey = v65;
      *(_QWORD *)&v146.fields.fakeValue = v64;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v146, 0);
      if ( !(_DWORD)isUpdate )
        goto LABEL_132;
      v66 = this->fields.supportServantData;
      if ( !v66 )
        goto LABEL_176;
      if ( LODWORD(v66->max_length) <= deckNum )
        goto LABEL_177;
      v67 = v66->m_Items[deckNum];
      if ( !v67 )
        goto LABEL_176;
      isUpdate = (int64_t)*v55;
      if ( !*v55 )
        goto LABEL_176;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)isUpdate,
                   v67->fields.questRestrictionInfo,
                   0);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_132;
      v68 = this->fields.supportServantData;
      if ( !v68 )
        goto LABEL_176;
      if ( LODWORD(v68->max_length) <= deckNum )
        goto LABEL_177;
      v69 = v68->m_Items[deckNum];
      if ( !v69 )
        goto LABEL_176;
      isUpdate = (int64_t)*v55;
      if ( !*v55 )
        goto LABEL_176;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)isUpdate, v69->fields.questRestrictionInfo, 0) )
        goto LABEL_132;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_176;
      v70 = *(_DWORD *)(isUpdate + 56);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_176;
      if ( v70 < 1 )
        goto LABEL_87;
      v71 = this->fields.supportServantData;
      if ( !v71 )
        goto LABEL_176;
      if ( LODWORD(v71->max_length) <= deckNum )
        goto LABEL_177;
      v72 = v71->m_Items[deckNum];
      if ( !v72 )
        goto LABEL_176;
      questRestrictionInfo = v72->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_176;
      v74 = *(_DWORD *)(isUpdate + 60);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, v74, 0);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_87;
      v75 = this->fields.supportServantData;
      if ( !v75 )
        goto LABEL_176;
      if ( LODWORD(v75->max_length) <= deckNum )
        goto LABEL_177;
      v76 = v75->m_Items[deckNum];
      if ( !v76 )
        goto LABEL_176;
      v77 = *v55;
      if ( !*v55 )
        goto LABEL_176;
      v78 = v76->fields.questRestrictionInfo;
      v80 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v79 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v147.fields.currentCryptoKey = v80;
      *(_QWORD *)&v147.fields.fakeValue = v79;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v147, 0);
      if ( !*v55 )
        goto LABEL_176;
      limitCount = (*v55)->fields.limitCount;
      v82 = isUpdate;
      isUpdate = ServantLeaderInfo__getDispLimitCount(*v55, 0);
      if ( !v78 )
        goto LABEL_176;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v78, v82, limitCount, isUpdate, v74, 1, 0) )
        goto LABEL_132;
LABEL_87:
      if ( this->fields.supportInfoJump )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v84 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          v84,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_3__,
          0);
        if ( !Instance )
          goto LABEL_176;
        if ( !PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)Instance, v84, 0) )
        {
          v85 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v85 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v86 = (System_Reflection_MethodBase_o *)sub_1C2D474(v85, v85[4]);
          OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0, 0);
          isUpdate = (int64_t)this->fields.supportInfoJump;
          if ( !isUpdate )
            goto LABEL_176;
          *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
          v87 = *v55;
          if ( !*v55 )
            goto LABEL_176;
          *(_DWORD *)(isUpdate + 72) = v87->fields.grandGraphId;
          *(_DWORD *)(isUpdate + 52) = v87->fields.supportDeckId;
          if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, (Il2CppObject *)isUpdate, 0) )
          {
            isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !isUpdate )
              goto LABEL_176;
            AvalonSceneManager__popScene(
              (AvalonSceneManager_o *)isUpdate,
              1,
              (Il2CppObject *)this->fields.supportInfoJump,
              0);
          }
        }
      }
      else
      {
LABEL_132:
        v113 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v113 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v114 = (System_Reflection_MethodBase_o *)sub_1C2D474(v113, v113[4]);
        OverwriteAssetSoundName__PlaySystemSe(v114, 2, 0, 0);
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_176;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, 0);
      }
      return;
    case 8:
      v88 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v88 )
        goto LABEL_176;
      if ( LODWORD(v88->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v88->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v12);
      if ( !isUpdate )
        goto LABEL_176;
      v89 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_132;
      v90 = this->fields.supportServantData;
      if ( !v90 )
        goto LABEL_176;
      if ( LODWORD(v90->max_length) <= deckNum )
        goto LABEL_177;
      v91 = v90->m_Items[deckNum];
      if ( !v91 )
        goto LABEL_176;
      isFriendInfo = v91->fields.isFriendInfo;
      v93 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v93 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v94 = (System_Reflection_MethodBase_o *)sub_1C2D474(v93, v93[4]);
      OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0, 0);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v95 = this->fields.supportServantData;
      if ( !v95 )
        goto LABEL_176;
      if ( LODWORD(v95->max_length) <= deckNum )
        goto LABEL_177;
      v96 = v95->m_Items[deckNum];
      if ( !v96 )
        goto LABEL_176;
      kind = v96->fields.kind;
      v98 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v99 = *(ServantLeaderInfo_o **)(v89 + 24);
        v100 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v100,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0);
        if ( !v98 )
          goto LABEL_176;
        CommonUI__OpenServantStatusDialog_31180036(v98, kind, v99, v100, 0);
      }
      else
      {
        v121 = *(_QWORD *)(v89 + 56);
        v122 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v122,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0);
        if ( !v98 )
          goto LABEL_176;
        CommonUI__OpenServantStatusDialog_31177344(v98, kind, v121, v122, 0, 0);
      }
      return;
    case 9:
      v101 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v101 )
        goto LABEL_176;
      if ( LODWORD(v101->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v101->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, v12);
      if ( !isUpdate )
        goto LABEL_132;
      v102 = this->fields.supportServantData;
      if ( !v102 )
        goto LABEL_176;
      if ( LODWORD(v102->max_length) <= deckNum )
        goto LABEL_177;
      v103 = isUpdate;
      isUpdate = (int64_t)v102->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  v12);
      v105 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v105 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v106 = (System_Reflection_MethodBase_o *)sub_1C2D474(v105, v105[4]);
      OverwriteAssetSoundName__PlaySystemSe(v106, 0, 0, 0);
      v107 = this->fields.supportServantData;
      if ( !v107 )
        goto LABEL_176;
      if ( LODWORD(v107->max_length) <= deckNum )
        goto LABEL_177;
      v108 = v107->m_Items[deckNum];
      if ( !v108 )
        goto LABEL_176;
      if ( v108->fields.isFriendInfo )
      {
        if ( v108->fields.kind == 5 )
          v109 = 14;
        else
          v109 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_176;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v111 = (CommonUI_o *)isUpdate;
        v112 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v112,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0);
        if ( !v111 )
          goto LABEL_176;
        CommonUI__OpenServantEquipStatusDialog_31183144(v111, v109, equipTarget1, v112, 0, 0);
      }
      else
      {
        v119 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v120 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v120,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0);
        if ( !v119 )
          goto LABEL_176;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v119, 11, v103, 1, v120, 0, 0, 0);
      }
      return;
    case 10:
      SupportSelectRootComponent__OpenGrandListInfo(this, v11);
      return;
    default:
      return;
  }
}


void SupportSelectRootComponent__EndSupportServantDragSwap(
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
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x4
  struct SupportServantData_array *supportServantData; // x8
  int32_t v30; // w24
  const MethodInfo *v31; // x4
  struct SupportServantData_array *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+80h] [xbp-70h]

  if ( (byte_4C239F9 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C239F9 = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0 )
  {
    v14 = BasicHelper__DecryptValue_43904660(equipTarget1->fields.svtId, 0);
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
  v16 = BasicHelper__DecryptValue_43904660(v15->fields.svtId, 0);
LABEL_12:
  if ( leader1 && (v17 = leader1->fields.equipTarget1) != 0 )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v18;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v36, 0, 0);
    v37 = v36;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = v37;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
  if ( leader2 && (v20 = leader2->fields.equipTarget1) != 0 )
  {
    v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v34, 0, 0);
    v36 = v34;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v36;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v33, 0);
  if ( classPos1 != classPos2 )
  {
    v24 = v22;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v23);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v30 = (int)CenterNum;
    if ( (unsigned int)CenterNum < LODWORD(supportServantData->max_length) )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v24, v16, v28);
      v32 = this->fields.supportServantData;
      if ( !v32 )
        goto LABEL_39;
      if ( (unsigned int)v30 < LODWORD(v32->max_length) )
      {
        CenterNum = v32->m_Items[v30];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v19, v14, v31);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v30, 0);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, 0);
              return;
            }
          }
        }
LABEL_39:
        sub_1C2D6EC(CenterNum, v26);
      }
    }
    sub_1C2D6F4(CenterNum, v26, v27);
  }
}


void SupportSelectRootComponent__EndSupportServantEquipListMenu(
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
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v21; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v23; // x23
  UserServantLeaderEntity_o *v24; // x24
  UserServantLeaderEntity_o *v25; // x25
  int32_t v26; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v27; // x8
  int32_t v28; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v30; // x8
  PartyOrganizationUtility_o *v31; // x23
  UserServantLeaderEntity_o *v32; // x25
  UserServantLeaderEntity_o *v33; // x26
  UserServantEntity_o *v34; // x8
  System_String_o *v35; // x22
  __int64 v36; // x8
  int32_t v37; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v40; // x21
  System_String_o *v41; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v43; // x23
  Il2CppObject *v44; // x19
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  System_String_o *v47; // x23
  CommonConfirmDialog_ClickDelegate_o *v48; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4C239F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__);
    sub_1C2D490(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
    sub_1C2D490(&StringLiteral_10095/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_3681/*"COMMON_CONFIRM_NO"*/);
    sub_1C2D490(&StringLiteral_3686/*"COMMON_CONFIRM_YES"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C239F7 = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_1C2D6DC(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = item;
  v14 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)item, v15, v16);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v14 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(UserServantLeaderEntity, v11, v17);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        v17);
    if ( UserServantLeaderEntity )
    {
      v21 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v14 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 136LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v21->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v23 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v25 = userServantLeaderEntityList->m_Items[6];
          v24 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v52.fields.currentCryptoKey = v25;
          *(_QWORD *)&v52.fields.fakeValue = v24;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                              v52,
                                                              0);
          if ( !v21->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v26 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v21->fields.userServantLeaderEntityList,
                                                              0);
          if ( !*(_QWORD *)v14 )
            goto LABEL_42;
          v27 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v14 + 136LL);
          if ( !v27 )
            goto LABEL_42;
          v28 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                              v27[1],
                                                              0);
          if ( !v23 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v23,
                 &skillName,
                 &actMaxRarity[1],
                 v26,
                 v28,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v21->fields.isFriendInfo,
                           (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v30 = v21->fields.userServantLeaderEntityList;
                if ( v30 )
                {
                  v31 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v33 = v30->m_Items[8];
                  v32 = v30->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v53.fields.currentCryptoKey = v33;
                  *(_QWORD *)&v53.fields.fakeValue = v32;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                      v53,
                                                                      0);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0,
                                                                        0);
                    v34 = (UserServantEntity_o *)v21->fields.userServantLeaderEntityList;
                    if ( v34 )
                    {
                      v35 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v34, 0);
                      v36 = *(_QWORD *)v14;
                      if ( *(_QWORD *)v14 )
                      {
                        v37 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v36 + 136);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(
                                                                              Name,
                                                                              0);
                          if ( v31 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v31,
                                                     actMaxRarity,
                                                     v35,
                                                     v37,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0);
                              v40 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v40, 0);
                              if ( v40 )
                              {
                                System_Text_StringBuilder__Append_63542928(v40, RarityInvalidMessage, 0);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10095/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                                System_Text_StringBuilder__Append_63542928(v40, v41, 0);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v43 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v43,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v43, 0);
                                  v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v45 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v40->klass->vtable._3_ToString.methodPtr)(
                                                             v40,
                                                             v40->klass->vtable._3_ToString.method);
                                  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_YES"*/, 0);
                                  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_NO"*/, 0);
                                  v48 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v48,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0);
                                  if ( v44 )
                                  {
                                    CommonUI__OpenConfirmDialog_31167744(
                                      (CommonUI_o *)v44,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v45,
                                      v46,
                                      v47,
                                      v48,
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
                                      0);
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
            sub_1C2D6EC(UserServantLeaderEntity, v11);
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
    v18);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__ExecutionServantSet(
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
  struct SupportServantData_array *v10; // x9
  __int64 max_length; // x8
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
    if ( (unsigned int)selectNum < LODWORD(supportServantData->max_length) )
    {
      this = (SupportSelectRootComponent_o *)supportServantData->m_Items[selectNum];
      if ( !this )
        goto LABEL_31;
      SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, (const MethodInfo *)entity);
      goto LABEL_11;
    }
LABEL_32:
    sub_1C2D6F4(this, *(_QWORD *)&result, *(_QWORD *)&classPos);
  }
  v8 = this->fields.supportServantData;
  if ( !v8 )
    goto LABEL_31;
  if ( (unsigned int)selectNum >= LODWORD(v8->max_length) )
    goto LABEL_32;
  this = (SupportSelectRootComponent_o *)v8->m_Items[selectNum];
  if ( !this )
    goto LABEL_31;
  SupportServantData__removeServantData((SupportServantData_o *)this, classPos, *(const MethodInfo **)&classPos);
LABEL_11:
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v9);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0);
  v10 = v6->fields.supportServantData;
  if ( !v10 )
    goto LABEL_31;
  if ( (int)v10->max_length >= 1 )
  {
    max_length = (unsigned int)v10->max_length;
    m_Items = v10->m_Items;
    do
    {
      if ( *m_Items )
      {
        if ( !this )
          goto LABEL_31;
        (*m_Items)->fields.pushUserServantId = (int64_t)this->fields.titleInfo;
      }
      --max_length;
      ++m_Items;
    }
    while ( max_length );
  }
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, 0);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
  SupportSelectMenu__Redisp((SupportSelectMenu_o *)this, 0);
  this = (SupportSelectRootComponent_o *)v6->fields.titleInfo;
  if ( !this
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
        (this = (SupportSelectRootComponent_o *)v6->fields.backSkinSprite) == 0)
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0
    || (this = (SupportSelectRootComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0)) == 0
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (SupportSelectRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_31:
    sub_1C2D6EC(this, *(_QWORD *)&result);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


int32_t SupportSelectRootComponent__GetCurrentDeckID(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  return SupportSelectRootComponent__getCenterNum(this, method) + 1;
}


System_Collections_Generic_List_string__o *SupportSelectRootComponent__GetFixedErrorList(
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
  Il2CppObject *Master_object; // x19
  const MethodInfo *v16; // x2
  BalanceConfig_c *v17; // x8
  __int64 v18; // x10
  unsigned __int64 v19; // x25
  int32_t v20; // w9
  int32_t v21; // w28
  __int64 v22; // x24
  __int64 v23; // x29
  struct SupportServantData_array *supportServantData; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x19
  struct SupportServantData_array *v28; // x8
  SupportServantData_o *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x26
  System_Func_object__bool__o *v31; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  ServantEntity_o *v33; // x29
  int v34; // w27
  int32_t v35; // w19
  System_String_o *v36; // x19
  Il2CppObject *v37; // x26
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_String_o *v41; // x26
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x27
  Il2CppObject *Name; // x19
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v54; // [xsp+8h] [xbp-A8h]
  __int64 v55; // [xsp+10h] [xbp-A0h]
  ServantLimitImageMaster_o *v56; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v57; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v61; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C239FF & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C2D490(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__);
    sub_1C2D490(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1C2D490(&StringLiteral_12487/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_1C2D490(&StringLiteral_12488/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_4C239FF = 1;
  }
  entity = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_75:
    sub_1C2D6EC(Instance, v14);
  }
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v56 = (ServantLimitImageMaster_o *)Instance;
  v57 = (UserServantCollectionMaster_o *)Master_object;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = 200;
  if ( isMain )
    v18 = 196;
  v55 = *(unsigned int *)((char *)&v17->static_fields->CriticalRateToAddByQuickFirstBonus + v18);
  if ( *(int *)((char *)&v17->static_fields->CriticalRateToAddByQuickFirstBonus + v18) >= 1 )
  {
    v19 = 0;
    v54 = (unsigned int)idx;
    do
    {
      if ( v19 != v54 )
      {
        if ( !fixDeckIds )
          goto LABEL_75;
        if ( v19 >= LODWORD(fixDeckIds->max_length) )
LABEL_76:
          sub_1C2D6F4(Instance, v14, v16);
        v20 = fixDeckIds->m_Items[v19];
        if ( v20 )
        {
          v21 = 0;
          v22 = v20 - 1;
          while ( 1 )
          {
            if ( !v17->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v17);
              v17 = BalanceConfig_TypeInfo;
            }
            if ( v21 >= v17->static_fields->SupportDeckMemberMax )
              break;
            v23 = sub_1C2D6DC(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v23, 0);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_75;
            if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
              goto LABEL_76;
            Instance = (__int64)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_75;
            Instance = (__int64)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v21,
                                  v16);
            if ( !v23 )
              goto LABEL_75;
            *(_QWORD *)(v23 + 16) = Instance;
            v27 = v23 + 16;
            sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), Instance, v25, v26);
            if ( !*(_QWORD *)(v23 + 16) )
              goto LABEL_75;
            if ( *(_DWORD *)(*(_QWORD *)(v23 + 16) + 64LL) )
            {
              v28 = this->fields.supportServantData;
              if ( !v28 )
                goto LABEL_75;
              if ( (unsigned int)v22 >= LODWORD(v28->max_length) )
                goto LABEL_76;
              v29 = v28->m_Items[v22];
              if ( !v29 )
                goto LABEL_75;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v29->fields.userServantLeaderEntityList;
              v31 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v31,
                (Il2CppObject *)v23,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0);
              v32 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v31,
                      (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v32,
                           (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v27 )
                  goto LABEL_75;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v27 + 64LL),
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v27 )
                  goto LABEL_75;
                v33 = (ServantEntity_o *)Instance;
                Instance = (__int64)v58;
                if ( !v58 )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                      v58,
                                      *(_QWORD *)(*(_QWORD *)v27 + 56LL),
                                      (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                if ( !Instance )
                  goto LABEL_75;
                Instance = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Instance, 0, 0);
                if ( !Instance )
                  goto LABEL_75;
                v34 = *(_DWORD *)(Instance + 24);
                if ( v34 )
                {
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4C211E1 )
                  {
                    sub_1C2D490(&NetworkManager_TypeInfo);
                    byte_4C211E1 = 1;
                  }
                  Instance = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( !*(_QWORD *)v27 || !v57 )
                    goto LABEL_75;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               v57,
                               &entity,
                               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                               *(_DWORD *)(*(_QWORD *)v27 + 64LL),
                               0);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v27 )
                      goto LABEL_75;
                    Instance = (__int64)v56;
                    if ( !entity )
                      goto LABEL_75;
                    if ( !v56 )
                      goto LABEL_75;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v56,
                                 *(_DWORD *)(*(_QWORD *)v27 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0);
                    if ( !entity )
                      goto LABEL_75;
                    v35 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v35 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12487/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0);
                  v61 = v34;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v61, v42, v43, v44);
                  if ( !v33 )
                    goto LABEL_75;
                  v45 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v33, v35, -1, 0, 0);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v33, 0);
                  Instance = (__int64)System_String__Format_63499224(v41, v45, Name, ClassName, 0);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12488/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0);
                  if ( !v33 )
                    goto LABEL_75;
                  v36 = (System_String_o *)Instance;
                  v37 = (Il2CppObject *)ServantEntity__getName(v33, -1, -1, 0, 0);
                  v38 = (Il2CppObject *)ServantEntity__getClassName(v33, 0);
                  Instance = (__int64)System_String__Format_63499156(v36, v37, v38, 0);
                }
                v14 = Instance;
                if ( !v10 )
                  goto LABEL_75;
                items = v10->fields._items;
                v49 = Method_System_Collections_Generic_List_string__Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_75;
                size = v10->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                }
                else
                {
                  v51 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v51[4] = (Il2CppClass *)v14;
                  sub_1C2D434((CGThumbnailListItem_o *)(v51 + 4), v14, v39, v40);
                }
              }
            }
            v17 = BalanceConfig_TypeInfo;
            ++v21;
          }
        }
      }
      ++v19;
    }
    while ( v19 != v55 );
  }
  return (System_Collections_Generic_List_string__o *)v10;
}


void SupportSelectRootComponent__Init(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22

  if ( (byte_4C23A0E & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_4C23A0E = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(CenterNum, v4, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C2D6EC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v8, v9, 0);
}


void SupportSelectRootComponent__InitSupportServantData(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportServantData_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C239E6 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SupportServantData___TypeInfo);
    byte_4C239E6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportServantData_array *)sub_1C2D538(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v3->static_fields->SupportDeckMax);
  this->fields.supportServantData = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v4, v5, v6);
  SupportSelectRootComponent__RefreshSupportServantData(this, v7);
}


bool SupportSelectRootComponent__IsFinallyUpdate(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned int i; // w23
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

  if ( (byte_4C23A17 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A17 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Servant = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v6 = *(_DWORD *)(*(_QWORD *)(Servant + 184) + 168LL);
    v7 = (int)i < v6;
    if ( (int)i >= v6 )
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
      if ( i >= LODWORD(supportServantData->max_length) )
        goto LABEL_35;
      v10 = supportServantData->m_Items[i];
      if ( !v10 )
        goto LABEL_34;
      if ( j >= *(_DWORD *)(*(_QWORD *)(Servant + 184) + 180LL) )
        break;
      Servant = SupportServantData__getServant(v10, j, v2);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= LODWORD(orgSupportServantData->max_length) )
        goto LABEL_35;
      v12 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, v2);
      if ( v12 != Servant )
        return 1;
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_34;
      if ( i >= LODWORD(v13->max_length) )
        goto LABEL_35;
      Servant = (int64_t)v13->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, v2);
      v14 = this->fields.orgSupportServantData;
      if ( !v14 )
        goto LABEL_34;
      if ( i >= LODWORD(v14->max_length) )
        goto LABEL_35;
      v15 = Servant;
      Servant = (int64_t)v14->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v15 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, v2) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v16 = this->fields.orgSupportServantData;
    if ( !v16 )
      goto LABEL_34;
    if ( i >= LODWORD(v16->max_length) )
LABEL_35:
      sub_1C2D6F4(Servant, method, v2);
    v17 = v16->m_Items[i];
    if ( !v17 )
LABEL_34:
      sub_1C2D6EC(Servant, method);
    if ( System_String__op_Inequality(v10->fields._deckName_k__BackingField, v17->fields._deckName_k__BackingField, 0) )
      return v7;
  }
  return 0;
}


bool SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x0

  if ( (byte_4C239E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    byte_4C239E8 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4C239E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    byte_4C239E7 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixMainQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool SupportSelectRootComponent__IsPossibleCopy(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        System_Int32_array *fixDeckIds,
        const MethodInfo *method)
{
  SupportServantData_o *CenterNum; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  il2cpp_array_size_t max_length; // x8
  bool v10; // w9
  unsigned int v11; // w22
  signed __int64 v12; // x28
  __int64 v13; // x19
  int v14; // w8
  unsigned int v15; // w27
  int32_t i; // w23
  __int64 v17; // x24
  struct SupportServantData_array *supportServantData; // x8
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  struct SupportServantData_array *v22; // x8
  SupportServantData_o *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v25; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v29; // [xsp+10h] [xbp-70h]
  bool v30; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4C23A08 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C2D490(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__);
    sub_1C2D490(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_4C23A08 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1C2D6EC(CenterNum, v7);
  max_length = fixDeckIds->max_length;
  v10 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v11 = (unsigned int)CenterNum;
    v12 = 0;
    v13 = (int)CenterNum;
    v29 = fixDeckIds;
    do
    {
      v30 = v10;
      if ( v12 >= (unsigned __int64)(unsigned int)max_length )
LABEL_29:
        sub_1C2D6F4(CenterNum, v7, v8);
      v14 = fixDeckIds->m_Items[v12];
      v15 = v14 - 1;
      if ( v14 >= 1 && v15 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[18]) )
            break;
          v17 = sub_1C2D6DC(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v17, 0);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v11 >= LODWORD(supportServantData->max_length) )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v13];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, v8);
          if ( !v17 )
            goto LABEL_28;
          *(_QWORD *)(v17 + 16) = CenterNum;
          sub_1C2D434((CGThumbnailListItem_o *)(v17 + 16), (int32_t)CenterNum, v19, v20);
          v21 = *(_QWORD *)(v17 + 16);
          if ( !v21 )
            goto LABEL_28;
          if ( *(_DWORD *)(v21 + 64) )
          {
            v22 = this->fields.supportServantData;
            if ( !v22 )
              goto LABEL_28;
            if ( v15 >= LODWORD(v22->max_length) )
              goto LABEL_29;
            v23 = v22->m_Items[v15];
            if ( !v23 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v23->fields.userServantLeaderEntityList;
            v25 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v25,
              (Il2CppObject *)v17,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0);
            v26 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v25,
                    (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v26,
                   (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v10 = v30;
              return !v10;
            }
          }
        }
      }
      fixDeckIds = v29;
      ++v12;
      LODWORD(max_length) = v29->max_length;
      v10 = v12 < (int)max_length;
    }
    while ( v12 < (int)max_length );
  }
  return !v10;
}


bool SupportSelectRootComponent__IsUpdateDeckId(SupportSelectRootComponent_o *this, const MethodInfo *method)
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
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v20; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  int32_t v25; // w0
  SupportSelectRootComponent___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v28; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v30; // x23
  struct SupportSelectRootComponent___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int32_t v35; // w0
  bool v36; // w8

  if ( (byte_4C239F5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__);
    sub_1C2D490(&SupportSelectRootComponent___c_TypeInfo);
    byte_4C239F5 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_40;
  v6 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].monitor;
  if ( !SelfUserGame )
    goto LABEL_40;
  klass = (int)v6[13].klass;
  if ( SelfUserGame[1].monitor )
  {
    v8 = System_Array__Clone(SelfUserGame, 0);
    if ( v8 )
    {
      v9 = v8;
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(v8, int___TypeInfo);
      if ( !v10 )
        goto LABEL_17;
    }
    else
    {
      v10 = 0;
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
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D538(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v11->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v6[14].klass;
  if ( !SelfUserGame )
LABEL_40:
    sub_1C2D6EC(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D538(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v14->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v12 = System_Array__Clone(SelfUserGame, 0);
  if ( !v12 )
  {
    v13 = 0;
    goto LABEL_22;
  }
  v9 = v12;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(v12, int___TypeInfo);
  if ( !v13 )
  {
LABEL_17:
    sub_1C2D9AC(v9);
    goto LABEL_18;
  }
LABEL_22:
  v15 = System_Linq_Enumerable__SequenceEqual_int_(
          v10,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v16 = v15
      & System_Linq_Enumerable__SequenceEqual_int_(
          v13,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
          (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    _9__67_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v20, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  v25 = System_Linq_Enumerable__Count_int_(v24, (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
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
    _9__67_1 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v30, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0);
    v31 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v31->__9__67_1 = _9__67_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v31->__9__67_1, (int32_t)_9__67_1, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  v35 = System_Linq_Enumerable__Count_int_(v34, (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v28 < 1 || v35 <= 0 )
    v36 = CenterNum + 1 != klass;
  else
LABEL_37:
    v36 = 0;
  return v36 || (v16 & 1) == 0;
}


bool SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4C239E9 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C239E9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->SupportDeckMax > index;
}


void SupportSelectRootComponent__OnBackSelect(
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
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v21; // x22
  UserServantEntity_o *v22; // x8
  PartyOrganizationUtility_o *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v28; // w25
  UserServantEntity_o *v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  __int64 v31; // x23
  __int64 v32; // x24
  Il2CppObject *v33; // x23
  PartyOrganizationUtility_o *v34; // x20
  UserServantEntity_o *v35; // x8
  System_String_o *v36; // x21
  EquipTargetInfo_o *v37; // x8
  int32_t v38; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v40; // x21
  System_String_o *v41; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v43; // x21
  System_String_o *v44; // x22
  System_String_o *v45; // x23
  CommonConfirmDialog_ClickDelegate_o *v46; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C239F6 & 1) == 0 )
  {
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__);
    sub_1C2D490(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
    sub_1C2D490(&StringLiteral_10095/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C2D490(&StringLiteral_3681/*"COMMON_CONFIRM_NO"*/);
    sub_1C2D490(&StringLiteral_3686/*"COMMON_CONFIRM_YES"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C239F6 = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_1C2D6DC(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = entity;
  v14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)entity, v15, v16);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(UserServantLeaderEntity, v11, v17);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        v17);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v21 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v22 = (UserServantEntity_o *)*v14;
      if ( !*v14 )
        goto LABEL_35;
      v23 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v25 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = v25;
      *(_QWORD *)&v50.fields.fakeValue = v24;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                          v50,
                                                          0);
      if ( !*v14 )
        goto LABEL_35;
      v26 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v14, 0);
      oldServantIdList = v21->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v28 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0);
      if ( !v23 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v23,
             &skillName,
             &actMaxRarity[1],
             v26,
             v28,
             (int32_t)UserServantLeaderEntity,
             -1,
             0) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
          v29 = (UserServantEntity_o *)*v14;
          if ( *v14 )
          {
            v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v32 = *(_QWORD *)&v29->fields.svtId.fields.currentCryptoKey;
            v31 = *(_QWORD *)&v29->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v51.fields.currentCryptoKey = v32;
            *(_QWORD *)&v51.fields.fakeValue = v31;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                v51,
                                                                0);
            if ( v30 )
            {
              v33 = DataMasterBase_object__object__int___GetEntity(
                      v30,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v14 )
              {
                v34 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                    (*v14)[6],
                                                                    0);
                if ( v33 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v33,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0,
                                                                      0);
                  v35 = (UserServantEntity_o *)*v14;
                  if ( *v14 )
                  {
                    v36 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v35, 0);
                    v37 = (EquipTargetInfo_o *)v21->fields.oldServantIdList;
                    if ( v37 )
                    {
                      v38 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v37, 0);
                      if ( v34 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v34,
                                                 actMaxRarity,
                                                 v36,
                                                 v38,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0);
                          v40 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v40, 0);
                          if ( v40 )
                          {
                            System_Text_StringBuilder__Append_63542928(v40, RarityInvalidMessage, 0);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10095/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                            System_Text_StringBuilder__Append_63542928(v40, v41, 0);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v43 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v40->klass->vtable._3_ToString.methodPtr)(
                                                       v40,
                                                       v40->klass->vtable._3_ToString.method);
                            v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_YES"*/, 0);
                            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_NO"*/, 0);
                            v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v46,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_31167744(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v43,
                                v44,
                                v45,
                                v46,
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
                                0);
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
        sub_1C2D6EC(UserServantLeaderEntity, v11);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v9 + 24),
    *(_DWORD *)(v9 + 28),
    *(UserServantEntity_o **)(v9 + 32),
    v18);
}


void SupportSelectRootComponent__OnClickBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x2
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v15; // x21
  CancelConfirmMenu_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  SupportServantSelectMenu_o *v22; // x23
  int32_t state; // w21
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x24
  System_Int32_array *v26; // x22
  const MethodInfo *v27; // x2
  BalanceConfig_c *v28; // x0
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x1
  System_Int32_array *v31; // x23
  BalanceConfig_c *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v38; // x27

  if ( (byte_4C23A03 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_1C2D490(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OnClickBack__);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    byte_4C23A03 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v9 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickBack__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v11);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
          sub_1C2D6F4(CenterNum, v6, v12);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v15 = supportServantData->m_Items[(int)CenterNum];
        v16 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C2D6DC(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v15, v16, 0);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v17)
      || this->fields.isEdit )
    {
      v18 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickBack__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0, 0);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v6);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v20);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22362/*"ok"*/, v27);
        return;
      }
      goto LABEL_52;
    }
    v21 = SupportSelectRootComponent__getCenterNum(this, v17);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0);
    if ( !CenterNum )
      goto LABEL_52;
    v22 = CenterNum;
    CenterNum = (SupportServantSelectMenu_o *)CenterNum->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    state = v22->fields.state;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v24 = System_Array__Clone((System_Array_o *)CenterNum, 0);
      if ( v24 )
      {
        v25 = v24;
        v26 = (System_Int32_array *)sub_1C2D5CC(v24, int___TypeInfo);
        if ( !v26 )
          goto LABEL_43;
      }
      else
      {
        v26 = 0;
      }
    }
    else
    {
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      v26 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v28->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v22->fields.requestCallback;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v29 = System_Array__Clone((System_Array_o *)CenterNum, 0);
    if ( !v29 )
    {
      v31 = 0;
      goto LABEL_48;
    }
    v25 = v29;
    v31 = (System_Int32_array *)sub_1C2D5CC(v29, int___TypeInfo);
    if ( v31 )
      goto LABEL_48;
LABEL_43:
    sub_1C2D9AC(v25);
LABEL_44:
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    v31 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)v32->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v30);
    v33 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickBack__);
    v34 = (System_Reflection_MethodBase_o *)sub_1C2D474(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0, 0);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v38 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1C2D6DC(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v38,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      0);
    if ( cancelConfirmDeckIdDialog )
    {
      CancelConfirmDeckIdDialog__Open(
        cancelConfirmDeckIdDialog,
        v21 + 1,
        state,
        tempFixMainQuestSupportDeckIds,
        tempFixEventQuestSupportDeckIds,
        v26,
        v31,
        v38,
        0);
      return;
    }
LABEL_52:
    sub_1C2D6EC(CenterNum, v6);
  }
  v4 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  CenterNum = this->fields.supportServantSelectMenu;
  if ( !CenterNum )
    goto LABEL_52;
  SupportServantSelectMenu__ClearScrollValue(CenterNum, 0);
  CenterNum = (SupportServantSelectMenu_o *)this->fields.supportInfoJump;
  if ( !CenterNum )
    goto LABEL_52;
  supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
  LODWORD(CenterNum->fields.closeTransform) = -1;
  if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)CenterNum, 1, supportInfoJump, 0) )
  {
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( CenterNum )
    {
      AvalonSceneManager__popScene(
        (AvalonSceneManager_o *)CenterNum,
        1,
        (Il2CppObject *)this->fields.supportInfoJump,
        0);
      return;
    }
    goto LABEL_52;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__OnClickFixEventDeckButton(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t CenterNum; // w23
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v14; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v22; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1

  if ( (byte_4C23A01 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    byte_4C23A01 = 1;
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
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(FixedErrorList, v10, v11);
  v14 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v10);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v15 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v18 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C2D6DC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v18, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(FixedErrorList, v10);
    }
  }
  if ( !v14 )
    goto LABEL_19;
  if ( v14->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 1, v12);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      0);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v7, v22);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v24);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v25);
  }
  else
  {
    v19 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v14,
                                                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, 0);
  }
}


void SupportSelectRootComponent__OnClickFixEventQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 0, v2);
}


void SupportSelectRootComponent__OnClickFixEventQuestSupportDeck2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 1, v2);
}


void SupportSelectRootComponent__OnClickFixEventQuestSupportDeck3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixEventDeckButton(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__OnClickFixMainDeckButton(
        SupportSelectRootComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  int32_t CenterNum; // w23
  const MethodInfo *v6; // x1
  int32_t v7; // w21
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v14; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v22; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1

  if ( (byte_4C23A00 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    byte_4C23A00 = 1;
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
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(FixedErrorList, v10, v11);
  v14 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v10);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v15 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v18 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C2D6DC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v18, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(FixedErrorList, v10);
    }
  }
  if ( !v14 )
    goto LABEL_19;
  if ( v14->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7, 0, v12);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      0);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v7, v22);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v24);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v25);
  }
  else
  {
    v19 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v14,
                                                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, 0);
  }
}


void SupportSelectRootComponent__OnClickFixMainQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 0, v2);
}


void SupportSelectRootComponent__OnClickFixMainQuestSupportDeck2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 1, v2);
}


void SupportSelectRootComponent__OnClickFixMainQuestSupportDeck3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectRootComponent__OnClickFixMainDeckButton(this, 2, v2);
}


void SupportSelectRootComponent__OpenGrandListInfo(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C23A18 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OpenGrandListInfo__);
    byte_4C23A18 = 1;
  }
  v3 = Method_SupportSelectRootComponent_OpenGrandListInfo__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OpenGrandListInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_OpenGrandListInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.supportInfoJump )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v6);
    AvalonSceneManager__changeScene(
      (AvalonSceneManager_o *)Instance,
      43,
      1,
      (Il2CppObject *)this->fields.supportInfoJump,
      0);
  }
}


void SupportSelectRootComponent__OpenSupportEditMenu(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v9; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v10; // x22

  if ( (byte_4C23A07 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4C23A07 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(CenterNum, v4, v5);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0);
  if ( !supportEditMenu )
LABEL_7:
    sub_1C2D6EC(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v9, isEdit, v10, 0);
}


void SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C23A02 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
    byte_4C23A02 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, !isFixed, 0, 0);
}


void SupportSelectRootComponent__Quit(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void SupportSelectRootComponent__RefreshInfo(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void SupportSelectRootComponent__RefreshSupportServantData(
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
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v12; // x22
  __int64 v13; // x24
  unsigned __int64 v14; // x8
  SupportServantData_o *v15; // x20
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v19; // x22
  __int64 v20; // x24
  unsigned __int64 v21; // x8
  SupportServantData_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x0

  v3 = this;
  if ( (byte_4C239E5 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&SupportServantData_TypeInfo);
    byte_4C239E5 = 1;
  }
  supportServantData = (unsigned int *)v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v5 = 0;
  v6 = 8;
  while ( 1 )
  {
    v7 = supportServantData[6];
    if ( (__int64)v5 >= (int)v7 )
      break;
    if ( v5 >= v7 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v5 + 8] )
    {
      v8 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v8, v9);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v8, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v25 = sub_1C2D710();
          sub_1C2D5B8(v25, 0);
        }
      }
      if ( v5 >= supportServantData[6] )
LABEL_37:
        sub_1C2D6F4(this, method, v2);
      *(_QWORD *)&supportServantData[2 * v5 + 8] = v8;
      sub_1C2D434((CGThumbnailListItem_o *)&supportServantData[v6], (int32_t)v8, v2, v10);
      supportServantData = (unsigned int *)v3->fields.supportServantData;
    }
    ++v5;
    v6 += 2;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v12 = 0;
  v13 = 8;
  while ( 1 )
  {
    v14 = orgSupportServantData[6];
    if ( (__int64)v12 >= (int)v14 )
      break;
    if ( v12 >= v14 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v12 + 8] )
    {
      v15 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v15, v16);
      if ( v15 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v15, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v12 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v12 + 8] = v15;
      sub_1C2D434((CGThumbnailListItem_o *)&orgSupportServantData[v13], (int32_t)v15, v2, v17);
      orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
    }
    ++v12;
    v13 += 2;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_1C2D6EC(this, method);
  v19 = 0;
  v20 = 8;
  while ( 1 )
  {
    v21 = tmpSupportServantData[6];
    if ( (__int64)v19 >= (int)v21 )
      break;
    if ( v19 >= v21 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v19 + 8] )
    {
      v22 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v22, v23);
      if ( v22 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v22, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v19 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v19 + 8] = v22;
      sub_1C2D434((CGThumbnailListItem_o *)&tmpSupportServantData[v20], (int32_t)v22, v2, v24);
      tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
    }
    ++v19;
    v20 += 2;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22

  if ( (byte_4C23A0C & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_4C23A0C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(CenterNum, v4, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C2D6EC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v8, v9, 0);
}


void SupportSelectRootComponent__RemoveAllEquip(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v8; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v9; // x22

  if ( (byte_4C23A10 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_4C23A10 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(CenterNum, v4, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C2D6DC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C2D6EC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v8, v9, 0);
}


void SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  unsigned int i; // w21
  SupportServantData_o *Instance; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  const MethodInfo *v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x21

  if ( (byte_4C239F2 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_1C2D490(&StringLiteral_22362/*"ok"*/);
    byte_4C239F2 = 1;
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
      if ( (signed int)i >= SLODWORD(Instance[1].fields.oldEquipIdList->m_Items[17]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_21;
      if ( i >= LODWORD(supportServantData->max_length) )
        goto LABEL_22;
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_21;
      if ( i >= LODWORD(orgSupportServantData->max_length) )
LABEL_22:
        sub_1C2D6F4(Instance, v5, v6);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], v6);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22362/*"ok"*/, v11);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v12,
                                       (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1C2D6EC(Instance, v5);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          v3,
          this->fields.tempFixMainQuestSupportDeckIds,
          this->fields.tempFixEventQuestSupportDeckIds,
          0) )
    goto LABEL_20;
}


void SupportSelectRootComponent__RequestDeckName(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t CenterNum; // w20
  SupportSelectMenu_o *IsNullOrEmpty; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v10; // x2
  SupportSelectListViewIndicator_o *indicator; // x19

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(IsNullOrEmpty, v5, v6);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1C2D434((CGThumbnailListItem_o *)&IsNullOrEmpty->fields.decideButton, (int32_t)editDeckName, v6, v7),
          SupportSelectRootComponent__SaveTemp(this, -1, v10),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, 0),
          !indicator) )
    {
LABEL_8:
      sub_1C2D6EC(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, 0);
  }
}


void SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4C23A06 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_ReturnScene__);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C23A06 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    v6 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectRootComponent_ReturnScene__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v10);
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
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
      goto LABEL_11;
    }
LABEL_20:
    sub_1C2D6EC(supportSelectMenu, v8);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0, 0);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !supportSelectMenu )
        goto LABEL_20;
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)supportSelectMenu, 39, 1, 0, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__SaveTemp(
        SupportSelectRootComponent_o *this,
        int32_t targetIdx,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectRootComponent_o *v5; // x0
  const MethodInfo *v6; // x4

  v3 = this;
  if ( targetIdx < 0 )
  {
    this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                             this,
                                             *(const MethodInfo **)&targetIdx);
    *(_QWORD *)&targetIdx = (unsigned int)this;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)targetIdx >= LODWORD(supportServantData->max_length) )
    sub_1C2D6F4(this, *(_QWORD *)&targetIdx, method);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1C2D6EC(this, *(_QWORD *)&targetIdx);
  SupportServantData__ResetOld((SupportServantData_o *)this, *(const MethodInfo **)&targetIdx);
  SupportSelectRootComponent__CopySupportData(
    v5,
    v3->fields.supportServantData,
    v3->fields.tmpSupportServantData,
    0,
    v6);
}


void SupportSelectRootComponent__SelectCopySupportDeck(SupportSelectRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C23A09 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_4C23A09 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
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
    if ( i >= SLODWORD(supportEditMenu->fields.onClickButton[1].fields.method) )
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
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          i,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = i;
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
    if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        i,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = v26 + 1;
      v24->m_Items[v26] = i;
    }
  }
  if ( !v4
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v4,
                                                       (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v5)
    || (v29 = (System_Int32_array *)supportEditMenu,
        v30 = System_Collections_Generic_List_int___ToArray(
                v5,
                (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        v31 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1C2D6DC(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v31,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          0),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1C2D6EC(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v29, v30, v31, 0);
}


void SupportSelectRootComponent__SetActiveApplyIcon(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  if ( this->fields.supportInfoJump || this->fields.isEdit )
  {
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__HideActiveSupportApplyIcon(supportSelectMenu, 0);
      return;
    }
LABEL_7:
    sub_1C2D6EC(supportSelectMenu, method);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, method);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_7;
  SupportSelectMenu__SetActiveSupportApplyIcon(
    this->fields.supportSelectMenu,
    (_DWORD)supportSelectMenu + 1,
    this->fields.tempFixMainQuestSupportDeckIds,
    this->fields.tempFixEventQuestSupportDeckIds,
    0);
}


void SupportSelectRootComponent__SetCacheAssetNameList(
        SupportSelectRootComponent_o *this,
        System_String_array *list,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_array *v6; // x19
  CGThumbnailListItem_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1

  if ( (byte_4C239F1 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C239F1 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (CGThumbnailListItem_o *)&this->fields.cacheAssetNameList;
  v6 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_40319912(list, 0, 1, 0);
  }
  p_cacheAssetNameList->klass = (CGThumbnailListItem_c *)list;
  sub_1C2D434(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3);
  if ( v6 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_40322260(v6, 0);
  }
}


void SupportSelectRootComponent__SetCurrentSupportDeckIds(
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
void SupportSelectRootComponent__SetEquip(
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
  intptr_t *v16; // x8
  const MethodInfo *v17; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v19; // x8
  SupportSelectRootComponent_o *v20; // x23
  const MethodInfo *v21; // x4
  struct SupportServantData_array *v22; // x8
  struct SupportServantData_array *v23; // x8
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+40h] [xbp-50h]

  v7 = result;
  v8 = this;
  if ( (byte_4C239F8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Array_IndexOf_long___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_4C239F8 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_43904660(userSvtEntity->fields.svtId, 0);
    v11 = item->fields.userSvtEntity;
    if ( !v11 )
      goto LABEL_32;
    v12 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
    v13 = (int)this;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v12;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v28, 0, 0);
    v13 = 0;
    v29 = v28;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v27 = v29;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1C2D6EC(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
    goto LABEL_33;
  v19 = supportServantData->m_Items[selectNum];
  if ( !v19 )
    goto LABEL_32;
  v20 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v19->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_31D5AE0 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v22 = v8->fields.supportServantData;
    if ( !v22 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= LODWORD(v22->max_length) )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v22->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, v17);
  }
  v23 = v8->fields.supportServantData;
  if ( !v23 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= LODWORD(v23->max_length) )
LABEL_33:
    sub_1C2D6F4(this, *(_QWORD *)&result, v17);
  this = (SupportSelectRootComponent_o *)v23->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v20, v13, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v24 = v15;
  System_Action___ctor(v15, (Il2CppObject *)v8, *v16, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v24, 0);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v25) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v26);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, 0);
}


void SupportSelectRootComponent__SetFriendInfo(
        SupportSelectRootComponent_o *this,
        int32_t *deckIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SupportSelectRootComponent_o *v5; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v8; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v11; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  il2cpp_array_size_t max_length; // x22
  __int64 v14; // x25
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x25
  __int64 v19; // x26
  __int64 v20; // x27
  struct System_Int32_array *v21; // x8
  unsigned __int64 v22; // x29
  unsigned int *v23; // x23
  SupportServantData_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x7
  unsigned int *v28; // x8
  struct SupportInfoJump_o *v29; // x10
  struct System_Int32_array *v30; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  il2cpp_array_size_t v32; // x26
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  unsigned __int64 v36; // x28
  unsigned int v37; // w27
  struct System_Int32_array *v38; // x8
  unsigned int *v39; // x23
  SupportServantData_o *v40; // x22
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3
  unsigned int *v43; // x0
  const MethodInfo *v44; // x7
  unsigned int *v45; // x8
  struct SupportInfoJump_o *v46; // x9
  struct System_Int32_array *v47; // x10
  unsigned __int64 v48; // x25
  struct System_Int32_array *v49; // x8
  unsigned int *v50; // x23
  SupportServantData_o *v51; // x22
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x3
  unsigned int *v54; // x0
  const MethodInfo *v55; // x7
  unsigned int *v56; // x8
  struct SupportInfoJump_o *v57; // x9
  struct System_Int32_array *v58; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x21
  System_Action_o *v61; // x22
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x0

  v5 = this;
  if ( (byte_4C239EA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C2D490(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C2D490(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&SupportServantData_TypeInfo);
    byte_4C239EA = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v5->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_75;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v8 = 0;
  p_supportServantData = (unsigned int **)&v5->fields.supportServantData;
  for ( i = 8; ; i += 2 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    v11 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_75;
    if ( v8 >= v11[6] )
LABEL_76:
      sub_1C2D6F4(this, deckIndex, method);
    *(_QWORD *)&v11[i] = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v11[i], 0, (int32_t)method, v3);
    ++v8;
  }
  if ( !otherUserGameEntity )
    goto LABEL_75;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_75;
  max_length = mainSupportDeckIds->max_length;
  v14 = (unsigned int)max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_75;
    v32 = eventSupportDeckIds->max_length;
    v33 = sub_1C2D538(SupportServantData___TypeInfo, (unsigned int)(v32 + max_length));
    *p_supportServantData = (unsigned int *)v33;
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.supportServantData, v33, v34, v35);
    if ( (int)max_length < 1 )
    {
      v37 = 0;
LABEL_52:
      if ( (int)v32 < 1 )
        goto LABEL_69;
      v48 = 0;
      while ( 1 )
      {
        v49 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v49 )
          break;
        if ( v48 >= LODWORD(v49->max_length) )
          goto LABEL_76;
        if ( v49->m_Items[v48] >= 1 )
        {
          v50 = *p_supportServantData;
          v51 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v51, v52);
          if ( !v50 )
            break;
          if ( v51 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v51, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
            if ( !this )
              goto LABEL_77;
          }
          if ( v37 >= v50[6] )
            goto LABEL_76;
          v54 = &v50[2 * v37];
          *((_QWORD *)v54 + 4) = v51;
          sub_1C2D434((CGThumbnailListItem_o *)(v54 + 8), (int32_t)v51, (int32_t)method, v53);
          v56 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v37 >= v56[6] )
            goto LABEL_76;
          v57 = v5->fields.supportInfoJump;
          if ( !v57 )
            break;
          v58 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v58 )
            break;
          if ( v48 >= LODWORD(v58->max_length) )
            goto LABEL_76;
          this = *(SupportSelectRootComponent_o **)&v56[2 * v37 + 8];
          if ( !this )
            break;
          SupportServantData__Init_35539884(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v57->fields.kind,
            v57->fields.isSelect,
            v57->fields.eventSetupInfo,
            1,
            v58->m_Items[v48],
            v55);
          ++v37;
        }
        if ( (unsigned int)v32 == ++v48 )
          goto LABEL_69;
      }
    }
    else
    {
      v36 = 0;
      v37 = 0;
      while ( 1 )
      {
        v38 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v38 )
          break;
        if ( v36 >= LODWORD(v38->max_length) )
          goto LABEL_76;
        if ( v38->m_Items[v36] >= 1 )
        {
          v39 = *p_supportServantData;
          v40 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v40, v41);
          if ( !v39 )
            break;
          if ( v40 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v40, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
            if ( !this )
            {
LABEL_77:
              v64 = sub_1C2D710();
              sub_1C2D5B8(v64, 0);
            }
          }
          if ( v37 >= v39[6] )
            goto LABEL_76;
          v43 = &v39[2 * v37];
          *((_QWORD *)v43 + 4) = v40;
          sub_1C2D434((CGThumbnailListItem_o *)(v43 + 8), (int32_t)v40, (int32_t)method, v42);
          v45 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v37 >= v45[6] )
            goto LABEL_76;
          v46 = v5->fields.supportInfoJump;
          if ( !v46 )
            break;
          v47 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v47 )
            break;
          if ( v36 >= LODWORD(v47->max_length) )
            goto LABEL_76;
          this = *(SupportSelectRootComponent_o **)&v45[2 * v37 + 8];
          if ( !this )
            break;
          SupportServantData__Init_35539884(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v46->fields.kind,
            v46->fields.isSelect,
            v46->fields.eventSetupInfo,
            0,
            v47->m_Items[v36],
            v44);
          ++v37;
        }
        if ( v14 == ++v36 )
          goto LABEL_52;
      }
    }
LABEL_75:
    sub_1C2D6EC(this, deckIndex);
  }
  v15 = sub_1C2D538(SupportServantData___TypeInfo, (unsigned int)max_length);
  *p_supportServantData = (unsigned int *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.supportServantData, v15, v16, v17);
  if ( (int)max_length >= 1 )
  {
    v18 = -(__int64)(unsigned int)max_length;
    v19 = 8;
    v20 = 8;
    do
    {
      v21 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v21 )
        goto LABEL_75;
      v22 = v19 - 8;
      if ( v19 - 8 >= (unsigned __int64)LODWORD(v21->max_length) )
        goto LABEL_76;
      if ( *((int *)&v21->obj.klass + v19) >= 1 )
      {
        v23 = *p_supportServantData;
        v24 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v24, v25);
        if ( !v23 )
          goto LABEL_75;
        if ( v24 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v24, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
          if ( !this )
            goto LABEL_77;
        }
        if ( v22 >= v23[6] )
          goto LABEL_76;
        *(_QWORD *)&v23[v20] = v24;
        sub_1C2D434((CGThumbnailListItem_o *)&v23[v20], (int32_t)v24, (int32_t)method, v26);
        v28 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_75;
        if ( v22 >= v28[6] )
          goto LABEL_76;
        v29 = v5->fields.supportInfoJump;
        if ( !v29 )
          goto LABEL_75;
        v30 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v30 )
          goto LABEL_75;
        if ( v22 >= LODWORD(v30->max_length) )
          goto LABEL_76;
        this = *(SupportSelectRootComponent_o **)&v28[v20];
        if ( !this )
          goto LABEL_75;
        SupportServantData__Init_35539884(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v29->fields.kind,
          v29->fields.isSelect,
          v29->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v30->obj.klass + v19),
          v27);
      }
      ++v19;
      v20 += 2;
    }
    while ( v18 + v19 != 8 );
  }
LABEL_69:
  supportSelectMenu = v5->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  indicator = supportSelectMenu->fields.indicator;
  v61 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)v5, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_75;
  indicator->fields.modifyCenterItemCallBack = v61;
  sub_1C2D434((CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v61, v62, v63);
  this = (SupportSelectRootComponent_o *)v5->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_75;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0, 0, 0, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)otherUserGameEntity->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v5->fields.supportSelectMenu;
    if ( !this )
      goto LABEL_75;
    SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)this, 1, 0);
  }
}


void SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v6; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v9; // w21
  unsigned __int64 v10; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x28
  unsigned int *v13; // x8
  struct SupportInfoJump_o *v14; // x8
  struct FollowerInfo_o *followerInfo; // x28
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  SupportSelectRootComponent___c_c *v19; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v21; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  unsigned int v26; // w0
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  void *monitor; // x8
  __int64 v31; // x24
  __int64 v32; // x23
  unsigned __int64 v33; // x25
  unsigned int *v34; // x26
  SupportServantData_o *v35; // x22
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x7
  unsigned int *v39; // x9
  struct SupportInfoJump_o *v40; // x8
  __int64 v41; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct SupportInfoJump_o *v47; // x8
  QuestRestrictionInfo_o *v48; // x21
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  __int64 v50; // x0

  v4 = this;
  if ( (byte_4C239EB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C2D490(&SupportServantData___TypeInfo);
    sub_1C2D490(&SupportServantData_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__);
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&SupportSelectRootComponent___c_TypeInfo);
    byte_4C239EB = 1;
  }
  supportInfoJump = v4->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_59;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  v6 = v4->fields.supportInfoJump;
  if ( !v6 )
    goto LABEL_59;
  questRestrictionInfo = v6->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v9 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0);
  else
LABEL_11:
    v9 = 1;
  v10 = 0;
  p_supportServantData = (unsigned int **)&v4->fields.supportServantData;
  for ( i = 8; ; i += 2 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v10 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    v13 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_59;
    if ( v10 >= v13[6] )
      goto LABEL_60;
    *(_QWORD *)&v13[i] = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v13[i], 0, v2, v3);
    ++v10;
  }
  v14 = v4->fields.supportInfoJump;
  if ( !v14 || (followerInfo = v14->fields.followerInfo) == 0 )
LABEL_59:
    sub_1C2D6EC(this, method);
  if ( v9 )
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.mainSupportDeckIds;
    if ( !this )
      goto LABEL_59;
  }
  else
  {
    this = (SupportSelectRootComponent_o *)followerInfo->fields.eventSupportDeckIds;
    if ( !this )
      goto LABEL_59;
  }
  v16 = System_Array__Clone((System_Array_o *)this, 0);
  if ( !v16 )
    goto LABEL_28;
  v17 = v16;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(v16, int___TypeInfo);
  if ( !v18 )
  {
    sub_1C2D9AC(v17);
LABEL_28:
    v18 = 0;
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
    _9__49_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v21,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__Where_int_(
          v18,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  v26 = System_Linq_Enumerable__Count_int_(v25, (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  v27 = sub_1C2D538(SupportServantData___TypeInfo, v26);
  *p_supportServantData = (unsigned int *)v27;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.supportServantData, v27, v28, v29);
  if ( !v18 )
    goto LABEL_59;
  monitor = v18[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v31 = 8;
    v32 = 8;
    while ( 1 )
    {
      v33 = v31 - 8;
      if ( v31 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v18->klass + v31) >= 1 )
      {
        v34 = *p_supportServantData;
        v35 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v35, v36);
        if ( !v34 )
          goto LABEL_59;
        if ( v35 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v35, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !this )
          {
            v50 = sub_1C2D710();
            sub_1C2D5B8(v50, 0);
          }
        }
        if ( v33 >= v34[6] )
          break;
        *(_QWORD *)&v34[v32] = v35;
        sub_1C2D434((CGThumbnailListItem_o *)&v34[v32], (int32_t)v35, v2, v37);
        v39 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_59;
        if ( v33 >= v39[6] )
          break;
        v40 = v4->fields.supportInfoJump;
        if ( !v40 )
          goto LABEL_59;
        if ( v33 >= LODWORD(v18[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v39[v32];
        if ( !this )
          goto LABEL_59;
        SupportServantData__Init_35541992(
          (SupportServantData_o *)this,
          v40->fields.followerInfo,
          v40->fields.kind,
          v40->fields.isSelect,
          v40->fields.eventSetupInfo,
          v40->fields.questRestrictionInfo,
          *((_DWORD *)&v18->klass + v31),
          v38);
      }
      LODWORD(monitor) = v18[1].monitor;
      v41 = v31 - 7;
      ++v31;
      v32 += 2;
      if ( v41 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_60:
    sub_1C2D6F4(this, method, v2);
  }
LABEL_51:
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_59;
  indicator = supportSelectMenu->fields.indicator;
  v44 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)v4, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_59;
  indicator->fields.modifyCenterItemCallBack = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v44, v45, v46);
  v47 = v4->fields.supportInfoJump;
  if ( !v47 )
    goto LABEL_59;
  v48 = v47->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v4->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_59;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v48,
    (int32_t)this->fields.backSkinSprite,
    0,
    0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)followerInfo->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v4->fields.supportSelectMenu;
    if ( !this )
      goto LABEL_59;
    SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)this, 1, 0);
  }
}


void SupportSelectRootComponent__StartUp(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SupportServantData_o *supportSelectMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  int32_t Int; // w20
  BalanceConfig_c *v9; // x8
  int v10; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v12; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x2
  __int64 i; // x25
  unsigned __int64 v18; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v22; // x9
  struct System_Int32_array *v23; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
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
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x3
  struct SupportServantData_array *supportServantData; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v42; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v44; // x21
  SupportServantData_array *v45; // x22
  SupportSelectMenu_CallbackFunc_o *v46; // x23
  const MethodInfo *v47; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v48; // x24
  const MethodInfo *v49; // x3
  struct SupportSelectMenu_o *v50; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x3
  struct SupportServantData_array *v57; // x20
  il2cpp_array_size_t v58; // x8
  unsigned __int64 v59; // x21
  struct EventUpValSetupInfo_o *v60; // x1
  SupportSelectMenu_o *v61; // x20
  SupportServantData_array *v62; // x21
  int32_t v63; // w22
  SupportSelectMenu_CallbackFunc_o *v64; // x23
  const MethodInfo *v65; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v66; // x24
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x2
  struct SupportServantData_array *v69; // x8
  bool v70; // w1
  System_Action_o *v71; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C239EC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_1C2D490(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C2D490(&StringLiteral_12566/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4C239EC = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0, 0, 0, 0, 0, 0);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12566/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0);
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
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    v12 = (struct System_Int32_array *)sub_1C2D538(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v12;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v12, v14, v15);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8; ; ++i )
    {
      v18 = i - 8;
      if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)supportSelectMenu[1].fields.oldEquipIdList;
      if ( (__int64)v18 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_75;
      max_length_low = LODWORD(fixMainSupportDeckIds->max_length);
      if ( (__int64)v18 < (int)max_length_low )
      {
        if ( v18 >= max_length_low )
          goto LABEL_76;
        v22 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_75;
        if ( v18 >= LODWORD(v22->max_length) )
          goto LABEL_76;
        *((_DWORD *)&v22->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(supportSelectMenu);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v23 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v23;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v23, v25, v26);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8; ; ++j )
    {
      v28 = j - 8;
      if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v28 >= SLODWORD(supportSelectMenu[1].fields.oldEquipIdList->m_Items[21]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_75;
      v30 = LODWORD(fixEventSupportDeckIds->max_length);
      if ( (__int64)v28 < (int)v30 )
      {
        if ( v28 >= v30 )
          goto LABEL_76;
        v31 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_75;
        if ( v28 >= LODWORD(v31->max_length) )
          goto LABEL_76;
        *((_DWORD *)&v31->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v3);
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
    supportSelectMenu = (SupportServantData_o *)this->fields.followerQuestInfomationDraw;
    if ( supportSelectMenu )
    {
      FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)supportSelectMenu, 0, 0, 0, 0);
      supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)supportSelectMenu, 1, 0);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v36);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v37);
        supportSelectMenu = (SupportServantData_o *)this->fields.titleInfo;
        if ( supportSelectMenu )
        {
          TitleInfoControl__setTitleInfo_39624304(
            (TitleInfoControl_o *)supportSelectMenu,
            this->fields.myFSM,
            2,
            83,
            1,
            0);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v38);
          supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( supportSelectMenu )
          {
            SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)supportSelectMenu, 1, 0);
            supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( supportSelectMenu )
            {
              SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)supportSelectMenu, 0, 0, 0, 0, 0);
              supportServantData = this->fields.supportServantData;
              if ( supportServantData )
              {
                max_length = supportServantData->max_length;
                if ( (int)max_length >= 1 )
                {
                  v42 = 0;
                  while ( v42 < (unsigned int)max_length )
                  {
                    supportSelectMenu = supportServantData->m_Items[v42];
                    if ( supportSelectMenu )
                    {
                      eventSetupInfo = this->fields.eventSetupInfo;
                      supportSelectMenu->fields.eventSetupInfo = eventSetupInfo;
                      sub_1C2D434(
                        (CGThumbnailListItem_o *)&supportSelectMenu->fields.eventSetupInfo,
                        (int32_t)eventSetupInfo,
                        v16,
                        v39);
                    }
                    LODWORD(max_length) = supportServantData->max_length;
                    if ( (__int64)++v42 >= (int)max_length )
                      goto LABEL_49;
                  }
LABEL_76:
                  sub_1C2D6F4(supportSelectMenu, v3, v16);
                }
LABEL_49:
                v44 = this->fields.supportSelectMenu;
                v45 = this->fields.supportServantData;
                v46 = (SupportSelectMenu_CallbackFunc_o *)sub_1C2D6DC(SupportSelectMenu_CallbackFunc_TypeInfo);
                SupportSelectMenu_CallbackFunc___ctor(
                  v46,
                  (Il2CppObject *)this,
                  (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                  v47);
                v48 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C2D6DC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                SupportSelectMenu_DragSwapCallbackFunc___ctor(
                  v48,
                  (Il2CppObject *)this,
                  Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                  v49);
                if ( v44 )
                {
                  SupportSelectMenu__Open(v44, v45, Int, v46, v48, 0);
                  v50 = this->fields.supportSelectMenu;
                  if ( v50 )
                  {
                    indicator = v50->fields.indicator;
                    v52 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v52,
                      (Il2CppObject *)this,
                      Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                      0);
                    if ( indicator )
                    {
                      indicator->fields.modifyCenterItemCallBack = v52;
                      sub_1C2D434(
                        (CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack,
                        (int32_t)v52,
                        v53,
                        v54);
                      goto LABEL_70;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_75:
    sub_1C2D6EC(supportSelectMenu, v3);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v6);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v5);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  supportSelectMenu = (SupportServantData_o *)this->fields.titleInfo;
  if ( !supportSelectMenu )
    goto LABEL_75;
  TitleInfoControl__setTitleInfo_39624304((TitleInfoControl_o *)supportSelectMenu, this->fields.myFSM, 2, 84, 1, 0);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v55);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  v57 = this->fields.supportServantData;
  if ( !v57 )
    goto LABEL_75;
  v58 = v57->max_length;
  if ( (int)v58 >= 1 )
  {
    v59 = 0;
    while ( v59 < (unsigned int)v58 )
    {
      supportSelectMenu = v57->m_Items[v59];
      if ( supportSelectMenu )
      {
        v60 = this->fields.eventSetupInfo;
        supportSelectMenu->fields.eventSetupInfo = v60;
        sub_1C2D434((CGThumbnailListItem_o *)&supportSelectMenu->fields.eventSetupInfo, (int32_t)v60, v16, v56);
      }
      LODWORD(v58) = v57->max_length;
      if ( (__int64)++v59 >= (int)v58 )
        goto LABEL_64;
    }
    goto LABEL_76;
  }
LABEL_64:
  v61 = this->fields.supportSelectMenu;
  v62 = this->fields.supportServantData;
  v63 = deckIndex;
  v64 = (SupportSelectMenu_CallbackFunc_o *)sub_1C2D6DC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v64,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v65);
  v66 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C2D6DC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v66,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v67);
  if ( !v61 )
    goto LABEL_75;
  SupportSelectMenu__Open(v61, v62, v63, v64, v66, 0);
  v69 = this->fields.supportServantData;
  if ( !v69 )
    goto LABEL_75;
  v70 = SLODWORD(v69->max_length) >= 2 && v69->m_Items[1] != 0;
  SupportSelectRootComponent__setInfoUIDisp(this, v70, v68);
LABEL_70:
  supportSelectMenu = (SupportServantData_o *)this->fields.backSkinSprite;
  if ( !supportSelectMenu )
    goto LABEL_75;
  supportSelectMenu = (SupportServantData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)supportSelectMenu,
                                                0);
  if ( !supportSelectMenu )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0);
  v71 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v71, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v71, 2, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__UpdateTempFixDeckId(
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
  if ( (byte_4C239FE & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C239FE = 1;
  }
  if ( isEvent )
  {
    tempFixEventQuestSupportDeckIds = v8->fields.tempFixEventQuestSupportDeckIds;
    if ( !tempFixEventQuestSupportDeckIds )
      goto LABEL_38;
    if ( LODWORD(tempFixEventQuestSupportDeckIds->max_length) <= idx )
      goto LABEL_39;
    v10 = tempFixEventQuestSupportDeckIds->m_Items[idx];
    v11 = 0;
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    v12 = idx;
    while ( 1 )
    {
      if ( !LODWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v11 >= SLODWORD(this->fields.applyIconObj[8].monitor) )
        break;
      if ( v10 != deckId && idx != v11 )
      {
        v13 = v8->fields.tempFixEventQuestSupportDeckIds;
        if ( !v13 )
          goto LABEL_38;
        if ( v11 >= LODWORD(v13->max_length) )
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
    if ( LODWORD(tempFixMainQuestSupportDeckIds->max_length) <= idx )
      goto LABEL_39;
    v10 = tempFixMainQuestSupportDeckIds->m_Items[idx];
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    v16 = 0;
    v12 = idx;
    while ( 1 )
    {
      if ( !LODWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v16 >= SHIDWORD(this->fields.applyIconObj[8].klass) )
        break;
      if ( v10 != deckId && idx != v16 )
      {
        v17 = v8->fields.tempFixMainQuestSupportDeckIds;
        if ( !v17 )
          goto LABEL_38;
        if ( v16 >= LODWORD(v17->max_length) )
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
    sub_1C2D6EC(this, *(_QWORD *)&idx);
  if ( LODWORD(v19->max_length) <= idx )
LABEL_39:
    sub_1C2D6F4(this, *(_QWORD *)&idx, *(_QWORD *)&deckId);
  v19->m_Items[v12] = v20;
}


void SupportSelectRootComponent___EndLoadCommonBg_b__52_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
    sub_1C2D6EC(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent___EndSupportSelectMenu_b__66_3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C2D6EC(0, method);
  SupportSelectMenu__Active(supportSelectMenu, 0);
}


void SupportSelectRootComponent___beginStartUp_b__51_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C23A1B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_StartUp__);
    byte_4C23A1B = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C239F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C239F0 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__Init(supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportServantSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportSelectConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.cancelConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.deckNameInputMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.fixErrorDialog;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.cancelConfirmDeckIdDialog;
  if ( !supportSelectMenu
    || (CancelConfirmDeckIdDialog__Init((CancelConfirmDeckIdDialog_o *)supportSelectMenu, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)this->fields.followerQuestInfomationDraw) == 0)
    || (FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)supportSelectMenu, 0, 0, 0, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)this->fields.backSkinSprite) == 0)
    || (supportSelectMenu = (SupportSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)supportSelectMenu,
                                                     0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_15:
    sub_1C2D6EC(supportSelectMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)supportSelectMenu, 2, 0, 0);
  this->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(this, 0, v4);
}


void SupportSelectRootComponent__beginInitialize(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v5; // x0
  struct SupportServantData_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BalanceConfig_c *v9; // x0
  struct SupportServantData_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BalanceConfig_c *v13; // x0
  struct SupportServantData_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_4C239E4 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&SupportServantData___TypeInfo);
    sub_1C2D490(&StringLiteral_13189/*"SvtEqScrollBarValue"*/);
    byte_4C239E4 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
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
    v6 = (struct SupportServantData_array *)sub_1C2D538(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v5->static_fields->SupportDeckMax);
    this->fields.supportServantData = v6;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v6, v7, v8);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = (struct SupportServantData_array *)sub_1C2D538(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v9->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v10;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.orgSupportServantData, (int32_t)v10, v11, v12);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (struct SupportServantData_array *)sub_1C2D538(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v13->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v14;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tmpSupportServantData, (int32_t)v14, v15, v16);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13189/*"SvtEqScrollBarValue"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v18);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
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
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v31; // x20
  EventUpValSetupInfo_o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4C239ED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&SceneJumpInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SupportInfoJump_TypeInfo);
    sub_1C2D490(&Method_SupportSelectRootComponent_StartUp__);
    sub_1C2D490(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__);
    byte_4C239ED = 1;
  }
  if ( data )
  {
    v6 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
        v8 = data;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v8;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
        v14 = (int)data;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportInfoJump, v14, (int32_t)method, v3);
    v15 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v16 = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v16 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v16 - 1] == SceneJumpInfo_TypeInfo )
        v17 = data;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v17;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v16 )
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
    this->fields.supportInfoJump = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3);
    v12 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_sceneJumpInfo, v12, v10, v11);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v18);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v22 = *p_supportInfoJump;
  if ( *p_supportInfoJump && v22->fields.otherUserGameEntity && v22->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___);
    if ( *p_supportInfoJump )
    {
      questRestrictionInfo = (*p_supportInfoJump)->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
      {
        if ( bgTxtSprite )
        {
          OngoingQuestTargetEventIds = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetOngoingQuestTargetEventIds(
                                                                                              (EventQuestMaster_o *)bgTxtSprite,
                                                                                              questRestrictionInfo->fields.questId,
                                                                                              questRestrictionInfo->fields.questPhase,
                                                                                              0,
                                                                                              0);
          v25 = System_Linq_Enumerable__ToArray_int_(
                  OngoingQuestTargetEventIds,
                  (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          v26 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
          EventUpValSetupInfo___ctor_41515380(v26, v25, 0, 0, 0, 0);
          this->fields.eventSetupInfo = v26;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)v26, v27, v28);
          v29 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v29, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadOutGameAtlas(v29, 0);
          return;
        }
      }
    }
LABEL_43:
    sub_1C2D6EC(bgTxtSprite, v19);
  }
  bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_43;
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)bgTxtSprite,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !bgTxtSprite )
    goto LABEL_43;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0, 0);
  v31 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v32 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(v32, v31, 0, 0, 0, 0);
  this->fields.eventSetupInfo = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)v32, v33, v34);
  v35 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v35, 1, 0);
}


int32_t SupportSelectRootComponent__getCenterNum(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C2D6EC(0, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, 0);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void SupportSelectRootComponent__initSupportServantDatas(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportServantData_array *supportServantData; // x24
  unsigned int v6; // w20
  __int64 v7; // x23
  unsigned int max_length; // w8
  SupportServantData_o *v9; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4C23A15 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C2D490(&SupportServantData_TypeInfo);
    byte_4C23A15 = 1;
  }
  supportServantData = v4->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1C2D6EC(this, method);
  v6 = 0;
  v7 = 32;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v7) )
    {
      v9 = (SupportServantData_o *)sub_1C2D6DC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v9, v10);
      if ( v9 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C2D5CC(v9, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v12 = sub_1C2D710();
          sub_1C2D5B8(v12, 0);
        }
      }
      if ( v6 >= LODWORD(supportServantData->max_length) )
LABEL_17:
        sub_1C2D6F4(this, method, v2);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v7) = (Il2CppClass *)v9;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)supportServantData + v7), (int32_t)v9, v2, v11);
      supportServantData = v4->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v6 >= LODWORD(supportServantData->max_length) )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v7);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v6, v4->fields.eventSetupInfo, v3);
      supportServantData = v4->fields.supportServantData;
      v7 += 8;
      if ( supportServantData )
        continue;
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
bool SupportSelectRootComponent__isUpdate(
        SupportSelectRootComponent_o *this,
        bool servant,
        bool equip,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 CenterNum; // x24
  SupportServantData_o *OldServant; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v13; // x8
  SupportServantData_o *v14; // x23
  struct SupportServantData_array *v15; // x8
  struct SupportServantData_array *v16; // x8
  SupportServantData_o *v17; // x23
  char v18; // w20
  struct SupportServantData_array *v19; // x8
  SupportServantData_o *v20; // x8

  if ( (byte_4C23A14 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C23A14 = 1;
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
    if ( v7 >= SHIDWORD(OldServant[1].fields.oldEquipIdList->m_Items[18]) )
    {
      v18 = 0;
      goto LABEL_26;
    }
    if ( servant )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
        goto LABEL_31;
      OldServant = supportServantData->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, v7, v9);
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v13->max_length) )
        goto LABEL_31;
      v14 = OldServant;
      OldServant = v13->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, v9);
      if ( v14 != OldServant )
        break;
    }
    if ( equip )
    {
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v15->max_length) )
        goto LABEL_31;
      OldServant = v15->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, v9);
      v16 = this->fields.supportServantData;
      if ( !v16 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v16->max_length) )
        goto LABEL_31;
      v17 = OldServant;
      OldServant = v16->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, v9);
      if ( v17 != OldServant )
        break;
    }
    ++v7;
  }
  v18 = 1;
LABEL_26:
  v19 = this->fields.supportServantData;
  if ( !v19 )
    goto LABEL_30;
  if ( (unsigned int)CenterNum >= LODWORD(v19->max_length) )
LABEL_31:
    sub_1C2D6F4(OldServant, v8, v9);
  v20 = v19->m_Items[CenterNum];
  if ( !v20 )
LABEL_30:
    sub_1C2D6EC(OldServant, v8);
  return (v18
        | System_String__op_Inequality(
            v20->fields._oldDeckName_k__BackingField,
            v20->fields._deckName_k__BackingField,
            0))
       & 1;
}


void SupportSelectRootComponent__modifyCenterItemCallBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t CenterNum; // w20
  const MethodInfo *v4; // x1
  void *eventSupportDeckIds; // x0
  __int64 v6; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  __int64 v9; // x2
  int32_t v10; // w3
  char v11; // w1
  char v12; // w2
  int32_t v13; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v17; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  _DWORD *v21; // x22
  int32_t v22; // w21
  int32_t v23; // w0
  int32_t v24; // w20

  if ( (byte_4C239EF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C239EF = 1;
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
    ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
    if ( ReturnTypeByQuestId )
    {
      eventSupportDeckIds = followerInfo->fields.eventSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
        goto LABEL_40;
      v17 = System_Array__IndexOf_int_(
              (System_Int32_array *)eventSupportDeckIds,
              *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
              (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
      v10 = 0;
      v13 = v17 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
        goto LABEL_40;
      v23 = System_Array__IndexOf_int_(
              (System_Int32_array *)eventSupportDeckIds,
              *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
              (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
      v13 = 0;
      v10 = v23 + 1;
    }
    eventSupportDeckIds = this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v11 = ReturnTypeByQuestId == 0;
    v12 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_3108548 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v18 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_30EB278 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v18,
                            (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
    v21 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v22 = 0;
    }
    else
    {
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
        goto LABEL_40;
      eventSupportDeckIds = (void *)System_Array__IndexOf_int_(
                                      otherUserGameEntity->fields.mainSupportDeckIds,
                                      *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
                                      (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
      v22 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v13 = 0;
      goto LABEL_27;
    }
    if ( !v21 )
      goto LABEL_39;
    if ( (unsigned int)CenterNum < v21[6] )
    {
      v13 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v21[CenterNum + 8],
              (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v12 = CenterNum >= max_length;
      v11 = CenterNum < max_length;
      v10 = v22;
      goto LABEL_34;
    }
LABEL_40:
    sub_1C2D6F4(eventSupportDeckIds, v6, v9);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
    goto LABEL_40;
  eventSupportDeckIds = (void *)System_Array__IndexOf_int_(
                                  (System_Int32_array *)eventSupportDeckIds,
                                  *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
                                  (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v10 = (_DWORD)eventSupportDeckIds + 1;
  v11 = 1;
  v12 = 1;
  eventSupportDeckIds = this->fields.supportSelectMenu;
  v13 = v10;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v11, v12, v10, v13, 0);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v24 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v24,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          0),
        (eventSupportDeckIds = this->fields.supportSelectMenu) == 0) )
  {
LABEL_39:
    sub_1C2D6EC(eventSupportDeckIds, v6);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v24,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__setEditUI(SupportSelectRootComponent_o *this, bool editOn, const MethodInfo *method)
{
  UnityEngine_Component_o *blackMask; // x0
  bool v6; // w22
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v8; // x1
  bool v9; // w20
  const MethodInfo *v10; // x1

  blackMask = (UnityEngine_Component_o *)this->fields.blackMask;
  this->fields.isEdit = editOn;
  if ( !blackMask )
    goto LABEL_11;
  blackMask = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blackMask, 0);
  if ( !blackMask )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blackMask, editOn, 0);
  blackMask = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !blackMask )
    goto LABEL_11;
  v6 = !editOn;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)blackMask, !editOn, 0);
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_11;
  blackMask = (UnityEngine_Component_o *)supportSelectMenu->fields.indicator;
  if ( !blackMask )
    goto LABEL_11;
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)blackMask, v6, 0);
  blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu;
  if ( !blackMask )
    goto LABEL_11;
  SupportSelectMenu__setActiveDeckNameChangeButton((SupportSelectMenu_o *)blackMask, v6, 0);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v8);
  blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu;
  if ( !blackMask
    || (SupportSelectMenu__SetActiveFixDeckButton((SupportSelectMenu_o *)blackMask, v6, 0),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0)
    || (v9 = editOn,
        SupportSelectMenu__SetAbleToSwapDrag((SupportSelectMenu_o *)blackMask, v9, 0),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(blackMask, editOn);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, v9, 0);
  SupportSelectRootComponent__ChangeTitle(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__setInfoUIDisp(SupportSelectRootComponent_o *this, bool disp, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct SupportSelectMenu_o *supportSelectMenu; // x8

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, disp, 0),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0)
    || (scrollView = (UnityEngine_Behaviour_o *)supportSelectMenu->fields.indicator) == 0 )
  {
    sub_1C2D6EC(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, 0);
}


void SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C23A1C & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectRootComponent___c_TypeInfo);
    byte_4C23A1C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SupportSelectRootComponent___c___ctor(SupportSelectRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c___EndSupportSelectMenu_b__66_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___EndSupportSelectMenu_b__66_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___IsUpdateDeckId_b__67_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___IsUpdateDeckId_b__67_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___SetFriendInfoPrepareBattle_b__49_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


void SupportSelectRootComponent___c__DisplayClass66_0___ctor(
        SupportSelectRootComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass66_0___EndSupportSelectMenu_b__2(
        SupportSelectRootComponent___c__DisplayClass66_0_o *this,
        ServantLeaderInfo_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *info; // x8

  if ( !x || (info = this->fields.info) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.userSvtId == info->fields.userSvtId;
}


void SupportSelectRootComponent___c__DisplayClass69_0___ctor(
        SupportSelectRootComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent___c__DisplayClass69_0___OnBackSelect_b__0(
        SupportSelectRootComponent___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v9; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  Il2CppObject *v13; // x28
  System_Int32_array *monitor; // x21
  System_Int32_array *klass; // x25
  int v16; // w26
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_4C23A1D & 1) == 0 )
  {
    sub_1C2D490(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_4C23A1D = 1;
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
      v3);
  }
  else
  {
    if ( !_4__this )
      goto LABEL_15;
    supportServantData = _4__this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = _4__this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(_4__this, isDecide, method);
    v9 = supportServantData->m_Items[selectNum];
    if ( !v9 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v9->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 _4__this,
                                                 (const MethodInfo *)isDecide);
    v13 = (Il2CppObject *)this->fields.__4__this;
    if ( !v13
      || (monitor = (System_Int32_array *)v13[18].monitor,
          klass = (System_Int32_array *)v13[19].klass,
          v16 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C2D6DC(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v13,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1C2D6EC(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v16 + 1,
      monitor,
      klass,
      callback,
      0);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void SupportSelectRootComponent___c__DisplayClass71_0___ctor(
        SupportSelectRootComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent___c__DisplayClass71_0___EndSupportServantEquipListMenu_b__0(
        SupportSelectRootComponent___c__DisplayClass71_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SupportSelectRootComponent_o *_4__this; // x0
  __int64 v7; // x2
  struct SupportSelectRootComponent_o *v8; // x8
  struct SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v11; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v14; // x20
  Il2CppObject *v15; // x28
  System_Int32_array *monitor; // x19
  System_Int32_array *klass; // x25
  int v18; // w26
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v20; // x3

  if ( (byte_4C23A1E & 1) == 0 )
  {
    sub_1C2D490(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_4C23A1E = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
    SupportSelectRootComponent__SetEquip(_4__this, this->fields.result, this->fields.classPos, this->fields.item, v3);
  }
  else
  {
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = this->fields.__4__this;
    if ( !v8 )
      goto LABEL_15;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v8->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C2D6F4(_4__this, isDecide, v7);
    v11 = supportServantData->m_Items[selectNum];
    if ( !v11 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v11->fields.eventSetupInfo2;
    v14 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 this->fields.__4__this,
                                                 (const MethodInfo *)isDecide);
    v15 = (Il2CppObject *)this->fields.__4__this;
    if ( !v15
      || (monitor = (System_Int32_array *)v15[18].monitor,
          klass = (System_Int32_array *)v15[19].klass,
          v18 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C2D6DC(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v15,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v20),
          !v14) )
    {
LABEL_15:
      sub_1C2D6EC(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v14,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v18 + 1,
      monitor,
      klass,
      callback,
      0);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void SupportSelectRootComponent___c__DisplayClass81_0___ctor(
        SupportSelectRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass81_0___GetFixedErrorList_b__0(
        SupportSelectRootComponent___c__DisplayClass81_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}


void SupportSelectRootComponent___c__DisplayClass98_0___ctor(
        SupportSelectRootComponent___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass98_0___IsPossibleCopy_b__0(
        SupportSelectRootComponent___c__DisplayClass98_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0 )
    sub_1C2D6EC(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}