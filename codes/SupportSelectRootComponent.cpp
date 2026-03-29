void SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2CF5F & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectRootComponent_TypeInfo);
    byte_4D2CF5F = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Int32_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2CF5E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2CF5E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)v3->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v4;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct System_Int32_array *)sub_1C93B7C(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v11;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4D2CF38 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12665/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4D2CF38 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12665/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0);
  SupportSelectRootComponent__ReturnScene(this, result, v6);
}


void SupportSelectRootComponent__ChangeDeckName(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportServantData_o *CenterNum; // x0
  const MethodInfo *v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_String_o *deckName_k__BackingField; // x21
  System_String_o *DefaultDeckName; // x22
  SupportDeckNameInputMenu_CallbackFunc_o *v9; // x23

  if ( (byte_4D2CF57 & 1) == 0 )
  {
    sub_1C93AD4(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_4D2CF57 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C93D34(CenterNum);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, v4),
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1C93D20(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1C93D2C(CenterNum, v4);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v9, 0);
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
      v3 = 84;
      goto LABEL_7;
    }
LABEL_9:
    sub_1C93D2C(titleInfo, method);
  }
  if ( this->fields.isDragSwapState )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      v3 = 73;
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
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v9; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v11; // x22
  SupportServantData_o *v12; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v13; // x23

  if ( (byte_4D2CF50 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_4D2CF50 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v9 = this->fields.copyTargetDeckId - 1, v9 >= max_length) )
    sub_1C93D34(CenterNum);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = supportServantData->m_Items[v9];
  v13 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1C93D2C(CenterNum, v6);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v11, v12, v13, 0);
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

  if ( (byte_4D2CF5B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF5B = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1C93D2C(this, orgData);
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
          sub_1C93D34(this);
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

  if ( (byte_4D2CF4A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    byte_4D2CF4A = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
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
    sub_1C93D2C(cancelConfirmMenu, isDecide);
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

  if ( (byte_4D2CF49 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2CF49 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0);
  v6 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22655/*"ok"*/, v8);
      return;
    }
LABEL_10:
    sub_1C93D2C(cancelConfirmDeckIdDialog, isDecide);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v13; // x21

  if ( (byte_4D2CF58 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__);
    byte_4D2CF58 = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.editDeckName,
      (int32_t)changeName,
      (int32_t)changeName,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_36188032(deckNameInputMenu, v13, 0);
        return;
      }
    }
LABEL_9:
    sub_1C93D2C(supportEditMenu, isDecide);
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
    sub_1C93D2C(0, method);
  SupportSelectMenu__Reset(supportSelectMenu, this->fields.classPos, 0);
}


void SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C93D2C(0, method);
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
}


void SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2CF41 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2CF41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndConfirmDeckCopy(
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
        sub_1C93D34(CenterNum);
      v9 = supportServantData->m_Items[v6];
      if ( !v9 )
        goto LABEL_15;
      SupportServantData__CopyData(v9, supportServantData->m_Items[(int)CenterNum], 0, v5);
      SupportSelectRootComponent__SaveTemp(this, v6, v10);
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
    sub_1C93D2C(CenterNum, isDecide);
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
    sub_1C93D2C(0, flag);
  SupportSelectConfirmMenu__Close_36197548(supportSelectConfirmMenu, 0, 0);
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
  struct SupportServantData_array *supportServantData; // x8
  unsigned int v8; // w20
  Il2CppClass **v9; // x8
  Il2CppClass *v10; // x21
  System_String_o *DefaultDeckName; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  int32_t i; // w21
  struct SupportServantData_array *v20; // x8
  const MethodInfo *v21; // x2
  struct SupportServantData_array *v22; // x8
  struct SupportServantData_array *v23; // x8
  struct SupportServantData_array *v24; // x8
  const MethodInfo *v25; // x2

  if ( (byte_4D2CF54 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF54 = 1;
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
      v8 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= LODWORD(supportServantData->max_length) )
LABEL_34:
        sub_1C93D34(confirmDeckMenu);
      v9 = &supportServantData->obj.klass + (int)confirmDeckMenu;
      v10 = v9[4];
      if ( v10 )
      {
        DefaultDeckName = SupportServantData__getDefaultDeckName(
                            (SupportServantData_o *)v9[4],
                            (const MethodInfo *)isDecide);
        v10->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v10->_1.klass,
          (int32_t)DefaultDeckName,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
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
          v20 = this->fields.supportServantData;
          if ( !v20 )
            goto LABEL_33;
          if ( v8 >= LODWORD(v20->max_length) )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v20->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, v18);
          if ( confirmDeckMenu >= 1 )
          {
            v22 = this->fields.supportServantData;
            if ( !v22 )
              goto LABEL_33;
            if ( v8 >= LODWORD(v22->max_length) )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v22->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, v21);
          }
          v23 = this->fields.supportServantData;
          if ( !v23 )
            goto LABEL_33;
          if ( v8 >= LODWORD(v23->max_length) )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v23->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, v21);
          if ( confirmDeckMenu >= 1 )
          {
            v24 = this->fields.supportServantData;
            if ( !v24 )
              goto LABEL_33;
            if ( v8 >= LODWORD(v24->max_length) )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v24->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v18);
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
            SupportSelectRootComponent__setEditUI(this, 1, v25);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1C93D2C(confirmDeckMenu, isDecide);
  }
}


void SupportSelectRootComponent__EndLoadCommonBg(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20

  if ( (byte_4D2CF33 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__);
    byte_4D2CF33 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
  {
    sub_1C93D2C(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  const MethodInfo *v11; // x2
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4D2CF52 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF52 = 1;
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
        v12 = this->fields.supportServantData;
        if ( !v12 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= LODWORD(v12->max_length) )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, v11);
      }
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v13->max_length) )
LABEL_31:
        sub_1C93D34(confirmDeckMenu);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            v11);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v14 = this->fields.supportServantData;
        if ( !v14 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= LODWORD(v14->max_length) )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v14->m_Items[CenterNum];
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
        SupportSelectRootComponent__setEditUI(this, 1, v15);
        return;
      }
    }
LABEL_30:
    sub_1C93D2C(confirmDeckMenu, isDecide);
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

  if ( (byte_4D2CF56 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF56 = 1;
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
          sub_1C93D34(confirmDeckMenu);
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
    sub_1C93D2C(confirmDeckMenu, isDecide);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v10; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v11; // x22

  if ( (byte_4D2CF4F & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4D2CF4F = 1;
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
      sub_1C93D34(copyDeckSelectMenu);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v10 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0);
    if ( !supportEditMenu )
LABEL_10:
      sub_1C93D2C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    SupportSelectEditMenu__Open(supportEditMenu, v10, isEdit, v11, 0);
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

  if ( (byte_4D2CF42 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CF42 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0, 0),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0) )
  {
    sub_1C93D2C(supportSelectMenu, isDecide);
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

  if ( (byte_4D2CF3F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CF3F = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C93D2C(supportSelectMenu, isDecide);
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

  if ( (byte_4D2CF40 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_4D2CF40 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_1C93D2C(v8, v9);
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
    sub_1C93D2C(CenterNum, v7);
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
  const MethodInfo *v19; // x2
  struct SupportServantData_array *v20; // x8
  SupportServantData_o *v21; // x0
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x2
  struct SupportServantData_array *v27; // x22
  SupportServantData_o *v28; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v31; // x24
  System_Int32_array *v32; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v34; // x2
  struct SupportServantData_array *v35; // x22
  SupportServantData_o *v36; // x8
  EventUpValSetupInfo_o *v37; // x27
  System_Int32_array *v38; // x25
  System_Int32_array *v39; // x26
  CommonUI_o *v40; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v41; // x28
  const MethodInfo *v42; // x3
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v44; // x1
  SupportSelectMenu_o *v45; // x20
  const MethodInfo *v46; // x2
  bool v47; // w1
  SupportSelectRootComponent_o *v48; // x0
  SupportSelectMenu_o *v49; // x20
  const MethodInfo *v50; // x1
  __int64 v51; // x22
  const MethodInfo *v52; // x2
  struct SupportServantData_array *v53; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 v60; // x1
  ServantLeaderInfo_o **v61; // x21
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct FollowerInfo_o *followerInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userSvtGrandHash; // x23
  System_Func_object__bool__o *v65; // x24
  Il2CppObject *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  ServantLeaderInfo_o *v73; // x8
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
  ServantLeaderInfo_o *v87; // x9
  QuestRestrictionInfo_o *v88; // x20
  __int64 v89; // x23
  __int64 v90; // x24
  int32_t limitCount; // w24
  int32_t v92; // w23
  Il2CppObject *Instance; // x20
  System_Action_o *v94; // x22
  _QWORD *v95; // x0
  System_Reflection_MethodBase_o *v96; // x0
  ServantLeaderInfo_o *v97; // x8
  struct SupportServantData_array *v98; // x8
  int64_t v99; // x21
  struct SupportServantData_array *v100; // x8
  SupportServantData_o *v101; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v103; // x0
  System_Reflection_MethodBase_o *v104; // x0
  struct SupportServantData_array *v105; // x8
  SupportServantData_o *v106; // x8
  int32_t kind; // w20
  CommonUI_o *v108; // x22
  ServantLeaderInfo_o *v109; // x21
  ServantStatusDialog_EndDelegate_o *v110; // x23
  struct SupportServantData_array *v111; // x8
  const MethodInfo *v112; // x2
  struct SupportServantData_array *v113; // x8
  int64_t v114; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v116; // x8
  System_Reflection_MethodBase_o *v117; // x0
  struct SupportServantData_array *v118; // x8
  SupportServantData_o *v119; // x8
  int32_t v120; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v122; // x21
  ServantStatusDialog_EndDelegate_o *v123; // x23
  _QWORD *v124; // x0
  System_Reflection_MethodBase_o *v125; // x0
  _QWORD *v126; // x0
  System_Reflection_MethodBase_o *v127; // x0
  _QWORD *v128; // x0
  System_Reflection_MethodBase_o *v129; // x0
  Il2CppObject *v130; // x20
  ServantStatusDialog_EndDelegate_o *v131; // x22
  int64_t v132; // x21
  ServantStatusDialog_FormationEndDelegate_o *v133; // x23
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v135; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v137; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  int32_t v146; // w0
  SupportSelectRootComponent___c_c *v147; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v149; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v151; // x24
  struct SupportSelectRootComponent___c_StaticFields *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x0
  struct SupportServantData_array *v160; // x8
  SupportServantData_o *v161; // x0
  _QWORD *v162; // x0
  System_Reflection_MethodBase_o *v163; // x0
  const MethodInfo *v164; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  if ( (byte_4D2CF39 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C93AD4(&System_Func_ServantLeaderInfo__bool__TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_1C93AD4(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_3__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__DisplayClass66_0__EndSupportSelectMenu_b__2__);
    sub_1C93AD4(&SupportSelectRootComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C93AD4(&SupportSelectRootComponent___c_TypeInfo);
    byte_4D2CF39 = 1;
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
      v18 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C93D20(CancelConfirmMenu_CallbackFunc_TypeInfo);
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
        v20 = this->fields.supportServantData;
        if ( !v20 )
          goto LABEL_176;
        if ( (unsigned int)CenterNum < LODWORD(v20->max_length) )
        {
          v21 = v20->m_Items[CenterNum];
          if ( v21 && SupportServantData__get_IsNoServant(v21, v11) )
          {
LABEL_15:
            v22 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v22 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v23 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v22, v22[4]);
            OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v25 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C93D20(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v25,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              0);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v25, 0);
              return;
            }
LABEL_176:
            sub_1C93D2C(isUpdate, v11);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v19);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0);
          v128 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v128 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v129 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v128, v128[4]);
          OverwriteAssetSoundName__PlaySystemSe(v129, 8, 0, 0);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_176;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, -1, 0);
          goto LABEL_147;
        }
LABEL_177:
        sub_1C93D34(isUpdate);
      }
      if ( this->fields.isEdit )
      {
        v126 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v126 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v127 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v126, v126[4]);
        OverwriteAssetSoundName__PlaySystemSe(v127, 8, 0, 0);
LABEL_147:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v11);
        v48 = this;
        v47 = 0;
        this->fields.isDragSwapState = 0;
LABEL_148:
        SupportSelectRootComponent__setEditUI(v48, v47, v46);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v135 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v135 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v135->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v135->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v135);
          v135 = SupportSelectRootComponent___c_TypeInfo;
        }
        v137 = (Il2CppObject *)v135->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v137,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__66_0,
          (int32_t)_9__66_0,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
      }
      v145 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
      v146 = System_Linq_Enumerable__Count_int_(
               v145,
               (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      v147 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v149 = v146;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v147 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v147->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v147->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v147);
          v147 = SupportSelectRootComponent___c_TypeInfo;
        }
        v151 = (Il2CppObject *)v147->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v151,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0);
        v152 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v152->__9__66_1 = _9__66_1;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v152->__9__66_1,
          (int32_t)_9__66_1,
          v153,
          v154,
          v155,
          v156,
          v157,
          v158);
      }
      v159 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v159,
                   (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
      if ( v149 < 1 || (int)isUpdate <= 0 )
      {
        v160 = this->fields.supportServantData;
        if ( !v160 )
          goto LABEL_176;
        if ( (unsigned int)CenterNum >= LODWORD(v160->max_length) )
          goto LABEL_177;
        v161 = v160->m_Items[CenterNum];
        if ( v161 && SupportServantData__get_IsNoServant(v161, v11) )
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
      v162 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v162 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v163 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v162, v162[4]);
      OverwriteAssetSoundName__PlaySystemSe(v163, 8, 0, 0);
      SupportSelectRootComponent__RequestApi(this, v164);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0);
      SupportSelectRootComponent__setEditUI(this, 1, v26);
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
      v27 = this->fields.supportServantData;
      if ( !v27 )
        goto LABEL_176;
      if ( LODWORD(v27->max_length) <= deckNum )
        goto LABEL_177;
      v28 = v27->m_Items[deckNum];
      if ( !v28 )
        goto LABEL_176;
      eventSetupInfo2 = v28->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v31 = this->fields.tempFixMainQuestSupportDeckIds;
      v32 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C93D20(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0);
      if ( !supportServantSelectMenu )
        goto LABEL_176;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v27,
        deckNum,
        classPos,
        eventSetupInfo2,
        v14,
        v31,
        v32,
        callback,
        0);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0);
      SupportSelectRootComponent__setEditUI(this, 1, v34);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = this->fields.supportServantData;
      if ( !v35 )
        goto LABEL_176;
      if ( LODWORD(v35->max_length) <= deckNum )
        goto LABEL_177;
      v36 = v35->m_Items[deckNum];
      if ( !v36 )
        goto LABEL_176;
      v37 = v36->fields.eventSetupInfo2;
      v38 = this->fields.tempFixMainQuestSupportDeckIds;
      v39 = this->fields.tempFixEventQuestSupportDeckIds;
      v40 = (CommonUI_o *)isUpdate;
      v41 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C93D20(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        v42);
      if ( !v40 )
        goto LABEL_176;
      CommonUI__OpenSupportServantEquipListMenu(v40, v35, deckNum, classPos, v37, v14, v38, v39, v41, 0);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !supportSelectMenu )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, 0);
      SupportSelectRootComponent__ChangeDeckName(this, v44);
      return;
    case 5:
      v45 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v45 )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(v45, isUpdate, 0);
      v47 = 1;
      this->fields.isDragSwapState = 1;
      v48 = this;
      goto LABEL_148;
    case 6:
      v49 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v11);
      if ( !v49 )
        goto LABEL_176;
      SupportSelectMenu__moveCenterItem(v49, isUpdate, 0);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v50);
      return;
    case 7:
      v51 = sub_1C93D20(SupportSelectRootComponent___c__DisplayClass66_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v51, 0);
      v53 = this->fields.supportServantData;
      if ( !v53 )
        goto LABEL_176;
      if ( LODWORD(v53->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v53->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v52);
      if ( !isUpdate || !v51 )
        goto LABEL_176;
      v60 = *(_QWORD *)(isUpdate + 24);
      *(_QWORD *)(v51 + 16) = v60;
      v61 = (ServantLeaderInfo_o **)(v51 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v51 + 16), v60, v54, v55, v56, v57, v58, v59);
      if ( !*(_QWORD *)(v51 + 16) )
        goto LABEL_132;
      supportInfoJump = this->fields.supportInfoJump;
      if ( !supportInfoJump || !supportInfoJump->fields._IsUseGrandSupport_k__BackingField )
        goto LABEL_56;
      followerInfo = supportInfoJump->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_176;
      userSvtGrandHash = (System_Collections_Generic_IEnumerable_TSource__o *)followerInfo->fields.userSvtGrandHash;
      v65 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantLeaderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v65,
        (Il2CppObject *)v51,
        Method_SupportSelectRootComponent___c__DisplayClass66_0__EndSupportSelectMenu_b__2__,
        0);
      v66 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
              userSvtGrandHash,
              (System_Func_TSource__bool__o *)v65,
              (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
      if ( v66 )
      {
        *v61 = (ServantLeaderInfo_o *)v66;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v51 + 16), (int32_t)v66, v67, v68, v69, v70, v71, v72);
      }
LABEL_56:
      v73 = *v61;
      if ( !*v61 )
        goto LABEL_132;
      v75 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
      v74 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v165.fields.currentCryptoKey = v75;
      *(_QWORD *)&v165.fields.fakeValue = v74;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v165, 0);
      if ( !(_DWORD)isUpdate )
        goto LABEL_132;
      v76 = this->fields.supportServantData;
      if ( !v76 )
        goto LABEL_176;
      if ( LODWORD(v76->max_length) <= deckNum )
        goto LABEL_177;
      v77 = v76->m_Items[deckNum];
      if ( !v77 )
        goto LABEL_176;
      isUpdate = (int64_t)*v61;
      if ( !*v61 )
        goto LABEL_176;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)isUpdate,
                   v77->fields.questRestrictionInfo,
                   0);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_132;
      v78 = this->fields.supportServantData;
      if ( !v78 )
        goto LABEL_176;
      if ( LODWORD(v78->max_length) <= deckNum )
        goto LABEL_177;
      v79 = v78->m_Items[deckNum];
      if ( !v79 )
        goto LABEL_176;
      isUpdate = (int64_t)*v61;
      if ( !*v61 )
        goto LABEL_176;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)isUpdate, v79->fields.questRestrictionInfo, 0) )
        goto LABEL_132;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_176;
      v80 = *(_DWORD *)(isUpdate + 80);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_176;
      if ( v80 < 1 )
        goto LABEL_87;
      v81 = this->fields.supportServantData;
      if ( !v81 )
        goto LABEL_176;
      if ( LODWORD(v81->max_length) <= deckNum )
        goto LABEL_177;
      v82 = v81->m_Items[deckNum];
      if ( !v82 )
        goto LABEL_176;
      questRestrictionInfo = v82->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_176;
      v84 = *(_DWORD *)(isUpdate + 84);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(questRestrictionInfo, v84, 0);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_87;
      v85 = this->fields.supportServantData;
      if ( !v85 )
        goto LABEL_176;
      if ( LODWORD(v85->max_length) <= deckNum )
        goto LABEL_177;
      v86 = v85->m_Items[deckNum];
      if ( !v86 )
        goto LABEL_176;
      v87 = *v61;
      if ( !*v61 )
        goto LABEL_176;
      v88 = v86->fields.questRestrictionInfo;
      v90 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
      v89 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v166.fields.currentCryptoKey = v90;
      *(_QWORD *)&v166.fields.fakeValue = v89;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v166, 0);
      if ( !*v61 )
        goto LABEL_176;
      limitCount = (*v61)->fields.limitCount;
      v92 = isUpdate;
      isUpdate = ServantLeaderInfo__getDispLimitCount(*v61, 0);
      if ( !v88 )
        goto LABEL_176;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v88, v92, limitCount, isUpdate, v84, 1, 0) )
        goto LABEL_132;
LABEL_87:
      if ( this->fields.supportInfoJump )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v94 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v94,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_3__,
          0);
        if ( !Instance )
          goto LABEL_176;
        if ( !PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)Instance, v94, 0) )
        {
          v95 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v95 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v96 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v95, v95[4]);
          OverwriteAssetSoundName__PlaySystemSe(v96, 0, 0, 0);
          isUpdate = (int64_t)this->fields.supportInfoJump;
          if ( !isUpdate )
            goto LABEL_176;
          *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
          v97 = *v61;
          if ( !*v61 )
            goto LABEL_176;
          *(_DWORD *)(isUpdate + 72) = v97->fields.grandGraphId;
          *(_DWORD *)(isUpdate + 52) = v97->fields.supportDeckId;
          if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, (Il2CppObject *)isUpdate, 0) )
          {
            isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v124 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v124 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v125 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v124, v124[4]);
        OverwriteAssetSoundName__PlaySystemSe(v125, 2, 0, 0);
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_176;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, 0);
      }
      return;
    case 8:
      v98 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v98 )
        goto LABEL_176;
      if ( LODWORD(v98->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v98->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v12);
      if ( !isUpdate )
        goto LABEL_176;
      v99 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_132;
      v100 = this->fields.supportServantData;
      if ( !v100 )
        goto LABEL_176;
      if ( LODWORD(v100->max_length) <= deckNum )
        goto LABEL_177;
      v101 = v100->m_Items[deckNum];
      if ( !v101 )
        goto LABEL_176;
      isFriendInfo = v101->fields.isFriendInfo;
      v103 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v103 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v104 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v103, v103[4]);
      OverwriteAssetSoundName__PlaySystemSe(v104, 0, 0, 0);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v105 = this->fields.supportServantData;
      if ( !v105 )
        goto LABEL_176;
      if ( LODWORD(v105->max_length) <= deckNum )
        goto LABEL_177;
      v106 = v105->m_Items[deckNum];
      if ( !v106 )
        goto LABEL_176;
      kind = v106->fields.kind;
      v108 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v109 = *(ServantLeaderInfo_o **)(v99 + 24);
        v110 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v110,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0);
        if ( !v108 )
          goto LABEL_176;
        CommonUI__OpenServantStatusDialog_31592948(v108, kind, v109, v110, 0);
      }
      else
      {
        v132 = *(_QWORD *)(v99 + 56);
        v133 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C93D20(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v133,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0);
        if ( !v108 )
          goto LABEL_176;
        CommonUI__OpenServantStatusDialog_31590468(v108, kind, v132, v133, 0, 0);
      }
      return;
    case 9:
      v111 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v111 )
        goto LABEL_176;
      if ( LODWORD(v111->max_length) <= deckNum )
        goto LABEL_177;
      isUpdate = (int64_t)v111->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, v12);
      if ( !isUpdate )
        goto LABEL_132;
      v113 = this->fields.supportServantData;
      if ( !v113 )
        goto LABEL_176;
      if ( LODWORD(v113->max_length) <= deckNum )
        goto LABEL_177;
      v114 = isUpdate;
      isUpdate = (int64_t)v113->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_176;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  v112);
      v116 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v116 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v117 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v116, v116[4]);
      OverwriteAssetSoundName__PlaySystemSe(v117, 0, 0, 0);
      v118 = this->fields.supportServantData;
      if ( !v118 )
        goto LABEL_176;
      if ( LODWORD(v118->max_length) <= deckNum )
        goto LABEL_177;
      v119 = v118->m_Items[deckNum];
      if ( !v119 )
        goto LABEL_176;
      if ( v119->fields.isFriendInfo )
      {
        if ( v119->fields.kind == 5 )
          v120 = 14;
        else
          v120 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_176;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v122 = (CommonUI_o *)isUpdate;
        v123 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v123,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0);
        if ( !v122 )
          goto LABEL_176;
        CommonUI__OpenServantEquipStatusDialog_31596056(v122, v120, equipTarget1, v123, 0, 0);
      }
      else
      {
        v130 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v131 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v131,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0);
        if ( !v130 )
          goto LABEL_176;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v130, 11, v114, 1, v131, 0, 0, 0);
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
  const MethodInfo *v27; // x4
  struct SupportServantData_array *supportServantData; // x8
  int32_t v29; // w24
  const MethodInfo *v30; // x4
  struct SupportServantData_array *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+80h] [xbp-70h]

  if ( (byte_4D2CF3E & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2CF3E = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0 )
  {
    v14 = BasicHelper__DecryptValue_44831460(equipTarget1->fields.svtId, 0);
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
  v16 = BasicHelper__DecryptValue_44831460(v15->fields.svtId, 0);
LABEL_12:
  if ( leader1 && (v17 = leader1->fields.equipTarget1) != 0 )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v18;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v35, 0, 0);
    v36 = v35;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v36;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v34, 0);
  if ( leader2 && (v20 = leader2->fields.equipTarget1) != 0 )
  {
    v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0, 0);
    v35 = v33;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v35;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v32, 0);
  if ( classPos1 != classPos2 )
  {
    v24 = v22;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v23);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v29 = (int)CenterNum;
    if ( (unsigned int)CenterNum < LODWORD(supportServantData->max_length) )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v24, v16, v27);
      v31 = this->fields.supportServantData;
      if ( !v31 )
        goto LABEL_39;
      if ( (unsigned int)v29 < LODWORD(v31->max_length) )
      {
        CenterNum = v31->m_Items[v29];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v19, v14, v30);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v29, 0);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, 0);
              return;
            }
          }
        }
LABEL_39:
        sub_1C93D2C(CenterNum, v26);
      }
    }
    sub_1C93D34(CenterNum);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v29; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v31; // x23
  UserServantLeaderEntity_o *v32; // x24
  UserServantLeaderEntity_o *v33; // x25
  int32_t v34; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v35; // x8
  int32_t v36; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v38; // x8
  PartyOrganizationUtility_o *v39; // x23
  UserServantLeaderEntity_o *v40; // x25
  UserServantLeaderEntity_o *v41; // x26
  UserServantEntity_o *v42; // x8
  System_String_o *v43; // x22
  __int64 v44; // x8
  int32_t v45; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v48; // x21
  System_String_o *v49; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v51; // x23
  Il2CppObject *v52; // x19
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  System_String_o *v55; // x23
  CommonConfirmDialog_ClickDelegate_o *v56; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4D2CF3C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__);
    sub_1C93AD4(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_10162/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C93AD4(&StringLiteral_3710/*"COMMON_CONFIRM_NO"*/);
    sub_1C93AD4(&StringLiteral_3715/*"COMMON_CONFIRM_YES"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CF3C = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_1C93D20(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = item;
  v18 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)item, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v18 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C93D34(UserServantLeaderEntity);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        v25);
    if ( UserServantLeaderEntity )
    {
      v29 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v18 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 136LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v29->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v31 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v33 = userServantLeaderEntityList->m_Items[6];
          v32 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = v33;
          *(_QWORD *)&v60.fields.fakeValue = v32;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                              v60,
                                                              0);
          if ( !v29->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v34 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v29->fields.userServantLeaderEntityList,
                                                              0);
          if ( !*(_QWORD *)v18 )
            goto LABEL_42;
          v35 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v18 + 136LL);
          if ( !v35 )
            goto LABEL_42;
          v36 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                              v35[1],
                                                              0);
          if ( !v31 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v31,
                 &skillName,
                 &actMaxRarity[1],
                 v34,
                 v36,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v29->fields.isFriendInfo,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v38 = v29->fields.userServantLeaderEntityList;
                if ( v38 )
                {
                  v39 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v41 = v38->m_Items[8];
                  v40 = v38->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v61.fields.currentCryptoKey = v41;
                  *(_QWORD *)&v61.fields.fakeValue = v40;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                      v61,
                                                                      0);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0,
                                                                        0);
                    v42 = (UserServantEntity_o *)v29->fields.userServantLeaderEntityList;
                    if ( v42 )
                    {
                      v43 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v42, 0);
                      v44 = *(_QWORD *)v18;
                      if ( *(_QWORD *)v18 )
                      {
                        v45 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v44 + 136);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(
                                                                              Name,
                                                                              0);
                          if ( v39 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v39,
                                                     actMaxRarity,
                                                     v43,
                                                     v45,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0);
                              v48 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v48, 0);
                              if ( v48 )
                              {
                                System_Text_StringBuilder__Append_64509684(v48, RarityInvalidMessage, 0);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10162/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                                System_Text_StringBuilder__Append_64509684(v48, v49, 0);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v51,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v51, 0);
                                  v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v53 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v48->klass->vtable._3_ToString.methodPtr)(
                                                             v48,
                                                             v48->klass->vtable._3_ToString.method);
                                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_YES"*/, 0);
                                  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMON_CONFIRM_NO"*/, 0);
                                  v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v56,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0);
                                  if ( v52 )
                                  {
                                    CommonUI__OpenConfirmDialog_31581040(
                                      (CommonUI_o *)v52,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v53,
                                      v54,
                                      v55,
                                      v56,
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
            sub_1C93D2C(UserServantLeaderEntity, v11);
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
    v26);
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
    sub_1C93D34(this);
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
    sub_1C93D2C(this, *(_QWORD *)&result);
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
  BalanceConfig_c *v16; // x8
  __int64 v17; // x10
  unsigned __int64 v18; // x25
  int32_t v19; // w9
  int32_t v20; // w28
  __int64 v21; // x24
  __int64 v22; // x29
  const MethodInfo *v23; // x2
  struct SupportServantData_array *supportServantData; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x19
  struct SupportServantData_array *v32; // x8
  SupportServantData_o *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x26
  System_Func_object__bool__o *v35; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  ServantEntity_o *v37; // x29
  int v38; // w27
  int32_t v39; // w19
  System_String_o *v40; // x19
  Il2CppObject *v41; // x26
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_String_o *v49; // x26
  Il2CppObject *v50; // x27
  Il2CppObject *Name; // x19
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  __int64 v59; // [xsp+8h] [xbp-A8h]
  __int64 v60; // [xsp+10h] [xbp-A0h]
  ServantLimitImageMaster_o *v61; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v62; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v66; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4D2CF44 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C93AD4(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__);
    sub_1C93AD4(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12586/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_12587/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_4D2CF44 = 1;
  }
  entity = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_75:
    sub_1C93D2C(Instance, v14);
  }
  v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v61 = (ServantLimitImageMaster_o *)Instance;
  v62 = (UserServantCollectionMaster_o *)Master_object;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = 200;
  if ( isMain )
    v17 = 196;
  v60 = *(unsigned int *)((char *)&v16->static_fields->CriticalRateToAddByQuickFirstBonus + v17);
  if ( *(int *)((char *)&v16->static_fields->CriticalRateToAddByQuickFirstBonus + v17) >= 1 )
  {
    v18 = 0;
    v59 = (unsigned int)idx;
    do
    {
      if ( v18 != v59 )
      {
        if ( !fixDeckIds )
          goto LABEL_75;
        if ( v18 >= LODWORD(fixDeckIds->max_length) )
LABEL_76:
          sub_1C93D34(Instance);
        v19 = fixDeckIds->m_Items[v18];
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
            v22 = sub_1C93D20(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v22, 0);
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
                                  v20,
                                  v23);
            if ( !v22 )
              goto LABEL_75;
            *(_QWORD *)(v22 + 16) = Instance;
            v31 = v22 + 16;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 16), Instance, v25, v26, v27, v28, v29, v30);
            if ( !*(_QWORD *)(v22 + 16) )
              goto LABEL_75;
            if ( *(_DWORD *)(*(_QWORD *)(v22 + 16) + 64LL) )
            {
              v32 = this->fields.supportServantData;
              if ( !v32 )
                goto LABEL_75;
              if ( (unsigned int)v21 >= LODWORD(v32->max_length) )
                goto LABEL_76;
              v33 = v32->m_Items[v21];
              if ( !v33 )
                goto LABEL_75;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v33->fields.userServantLeaderEntityList;
              v35 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v35,
                (Il2CppObject *)v22,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0);
              v36 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v35,
                      (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v36,
                           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v31 )
                  goto LABEL_75;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v31 + 64LL),
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v31 )
                  goto LABEL_75;
                v37 = (ServantEntity_o *)Instance;
                Instance = (__int64)v63;
                if ( !v63 )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                      v63,
                                      *(_QWORD *)(*(_QWORD *)v31 + 56LL),
                                      (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                if ( !Instance )
                  goto LABEL_75;
                Instance = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Instance, 0, 0);
                if ( !Instance )
                  goto LABEL_75;
                v38 = *(_DWORD *)(Instance + 24);
                if ( v38 )
                {
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4D2A55B )
                  {
                    sub_1C93AD4(&NetworkManager_TypeInfo);
                    byte_4D2A55B = 1;
                  }
                  Instance = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( !*(_QWORD *)v31 || !v62 )
                    goto LABEL_75;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               v62,
                               &entity,
                               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                               *(_DWORD *)(*(_QWORD *)v31 + 64LL),
                               0);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v31 )
                      goto LABEL_75;
                    Instance = (__int64)v61;
                    if ( !entity )
                      goto LABEL_75;
                    if ( !v61 )
                      goto LABEL_75;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v61,
                                 *(_DWORD *)(*(_QWORD *)v31 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0);
                    if ( !entity )
                      goto LABEL_75;
                    v39 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v39 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0);
                  v66 = v38;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v66);
                  if ( !v37 )
                    goto LABEL_75;
                  v50 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v37, v39, -1, 0, 0);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v37, 0);
                  Instance = (__int64)System_String__Format_64467100(v49, v50, Name, ClassName, 0);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12587/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0);
                  if ( !v37 )
                    goto LABEL_75;
                  v40 = (System_String_o *)Instance;
                  v41 = (Il2CppObject *)ServantEntity__getName(v37, -1, -1, 0, 0);
                  v42 = (Il2CppObject *)ServantEntity__getClassName(v37, 0);
                  Instance = (__int64)System_String__Format_64467032(v40, v41, v42, 0);
                }
                v14 = Instance;
                if ( !v10 )
                  goto LABEL_75;
                items = v10->fields._items;
                v54 = Method_System_Collections_Generic_List_string__Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_75;
                size = v10->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v56[4] = (Il2CppClass *)v14;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v56 + 4), v14, v43, v44, v45, v46, v47, v48);
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
    while ( v18 != v60 );
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_4D2CF53 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_4D2CF53 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C93D34(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C93D2C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v7, v8, 0);
}


void SupportSelectRootComponent__InitSupportServantData(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SupportServantData_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4D2CF2B & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&SupportServantData___TypeInfo);
    byte_4D2CF2B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SupportServantData_array *)sub_1C93B7C(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v3->static_fields->SupportDeckMax);
  this->fields.supportServantData = v4;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.supportServantData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  SupportSelectRootComponent__RefreshSupportServantData(this, v11);
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
  const MethodInfo *v11; // x2
  struct SupportServantData_array *orgSupportServantData; // x8
  int64_t v13; // x22
  const MethodInfo *v14; // x2
  struct SupportServantData_array *v15; // x8
  const MethodInfo *v16; // x2
  struct SupportServantData_array *v17; // x8
  int64_t v18; // x22
  struct SupportServantData_array *v19; // x9
  SupportServantData_o *v20; // x9

  if ( (byte_4D2CF5C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF5C = 1;
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
      v13 = Servant;
      Servant = (int64_t)orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getServant((SupportServantData_o *)Servant, j, v11);
      if ( v13 != Servant )
        return 1;
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_34;
      if ( i >= LODWORD(v15->max_length) )
        goto LABEL_35;
      Servant = (int64_t)v15->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, v14);
      v17 = this->fields.orgSupportServantData;
      if ( !v17 )
        goto LABEL_34;
      if ( i >= LODWORD(v17->max_length) )
        goto LABEL_35;
      v18 = Servant;
      Servant = (int64_t)v17->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      if ( v18 != SupportServantData__getEquip((SupportServantData_o *)Servant, j, v16) )
        return 1;
      Servant = (int64_t)BalanceConfig_TypeInfo;
    }
    v19 = this->fields.orgSupportServantData;
    if ( !v19 )
      goto LABEL_34;
    if ( i >= LODWORD(v19->max_length) )
LABEL_35:
      sub_1C93D34(Servant);
    v20 = v19->m_Items[i];
    if ( !v20 )
LABEL_34:
      sub_1C93D2C(Servant, method);
    if ( System_String__op_Inequality(v10->fields._deckName_k__BackingField, v20->fields._deckName_k__BackingField, 0) )
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

  if ( (byte_4D2CF2D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    byte_4D2CF2D = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4D2CF2C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    byte_4D2CF2C = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___) >= 0;
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
  il2cpp_array_size_t max_length; // x8
  bool v9; // w9
  unsigned int v10; // w22
  signed __int64 v11; // x28
  __int64 v12; // x19
  int v13; // w8
  unsigned int v14; // w27
  int32_t i; // w23
  __int64 v16; // x24
  const MethodInfo *v17; // x2
  struct SupportServantData_array *supportServantData; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x8
  struct SupportServantData_array *v26; // x8
  SupportServantData_o *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v29; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Int32_array *v33; // [xsp+10h] [xbp-70h]
  bool v34; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4D2CF4D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_1C93AD4(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__);
    sub_1C93AD4(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_4D2CF4D = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1C93D2C(CenterNum, v7);
  max_length = fixDeckIds->max_length;
  v9 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v10 = (unsigned int)CenterNum;
    v11 = 0;
    v12 = (int)CenterNum;
    v33 = fixDeckIds;
    do
    {
      v34 = v9;
      if ( v11 >= (unsigned __int64)(unsigned int)max_length )
LABEL_29:
        sub_1C93D34(CenterNum);
      v13 = fixDeckIds->m_Items[v11];
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
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[18]) )
            break;
          v16 = sub_1C93D20(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v16, 0);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v10 >= LODWORD(supportServantData->max_length) )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v12];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, v17);
          if ( !v16 )
            goto LABEL_28;
          *(_QWORD *)(v16 + 16) = CenterNum;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 16), (int32_t)CenterNum, v19, v20, v21, v22, v23, v24);
          v25 = *(_QWORD *)(v16 + 16);
          if ( !v25 )
            goto LABEL_28;
          if ( *(_DWORD *)(v25 + 64) )
          {
            v26 = this->fields.supportServantData;
            if ( !v26 )
              goto LABEL_28;
            if ( v14 >= LODWORD(v26->max_length) )
              goto LABEL_29;
            v27 = v26->m_Items[v14];
            if ( !v27 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v27->fields.userServantLeaderEntityList;
            v29 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v29,
              (Il2CppObject *)v16,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0);
            v30 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v29,
                    (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v30,
                   (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v9 = v34;
              return !v9;
            }
          }
        }
      }
      fixDeckIds = v33;
      ++v11;
      LODWORD(max_length) = v33->max_length;
      v9 = v11 < (int)max_length;
    }
    while ( v11 < (int)max_length );
  }
  return !v9;
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // w0
  SupportSelectRootComponent___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v32; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v34; // x23
  struct SupportSelectRootComponent___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  int32_t v43; // w0
  bool v44; // w8

  if ( (byte_4D2CF3A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__);
    sub_1C93AD4(&SupportSelectRootComponent___c_TypeInfo);
    byte_4D2CF3A = 1;
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
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93C10(v8, int___TypeInfo);
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
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v11->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v6[14].klass;
  if ( !SelfUserGame )
LABEL_40:
    sub_1C93D2C(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93B7C(
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
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93C10(v12, int___TypeInfo);
  if ( !v13 )
  {
LABEL_17:
    sub_1C940C8(v9);
    goto LABEL_18;
  }
LABEL_22:
  v15 = System_Linq_Enumerable__SequenceEqual_int_(
          v10,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_31DDB0C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v16 = v15
      & System_Linq_Enumerable__SequenceEqual_int_(
          v13,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
          (const MethodInfo_31DDB0C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    _9__67_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v20, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__67_0,
      (int32_t)_9__67_0,
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
          (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__Count_int_(v28, (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
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
    _9__67_1 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v34, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0);
    v35 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v35->__9__67_1 = _9__67_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v35->__9__67_1, (int32_t)_9__67_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  v43 = System_Linq_Enumerable__Count_int_(v42, (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v32 < 1 || v43 <= 0 )
    v44 = CenterNum + 1 != klass;
  else
LABEL_37:
    v44 = 0;
  return v44 || (v16 & 1) == 0;
}


bool SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4D2CF2E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF2E = 1;
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v29; // x22
  UserServantEntity_o *v30; // x8
  PartyOrganizationUtility_o *v31; // x23
  __int64 v32; // x24
  __int64 v33; // x25
  int32_t v34; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v36; // w25
  UserServantEntity_o *v37; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // x20
  __int64 v39; // x23
  __int64 v40; // x24
  Il2CppObject *v41; // x23
  PartyOrganizationUtility_o *v42; // x20
  UserServantEntity_o *v43; // x8
  System_String_o *v44; // x21
  EquipTargetInfo_o *v45; // x8
  int32_t v46; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v48; // x21
  System_String_o *v49; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  CommonConfirmDialog_ClickDelegate_o *v54; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4D2CF3B & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__);
    sub_1C93AD4(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_10162/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_1C93AD4(&StringLiteral_3710/*"COMMON_CONFIRM_NO"*/);
    sub_1C93AD4(&StringLiteral_3715/*"COMMON_CONFIRM_YES"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CF3B = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_1C93D20(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = entity;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)entity, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C93D34(UserServantLeaderEntity);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v9 + 28),
                                                        v25);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v29 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v30 = (UserServantEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_35;
      v31 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v33 = *(_QWORD *)&v30->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v30->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v58.fields.currentCryptoKey = v33;
      *(_QWORD *)&v58.fields.fakeValue = v32;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                          v58,
                                                          0);
      if ( !*v18 )
        goto LABEL_35;
      v34 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v18, 0);
      oldServantIdList = v29->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v36 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0);
      if ( !v31 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v31,
             &skillName,
             &actMaxRarity[1],
             v34,
             v36,
             (int32_t)UserServantLeaderEntity,
             -1,
             0) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
          v37 = (UserServantEntity_o *)*v18;
          if ( *v18 )
          {
            v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v40 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
            v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v59.fields.currentCryptoKey = v40;
            *(_QWORD *)&v59.fields.fakeValue = v39;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                v59,
                                                                0);
            if ( v38 )
            {
              v41 = DataMasterBase_object__object__int___GetEntity(
                      v38,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v18 )
              {
                v42 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                    (*v18)[6],
                                                                    0);
                if ( v41 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v41,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0,
                                                                      0);
                  v43 = (UserServantEntity_o *)*v18;
                  if ( *v18 )
                  {
                    v44 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v43, 0);
                    v45 = (EquipTargetInfo_o *)v29->fields.oldServantIdList;
                    if ( v45 )
                    {
                      v46 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v45, 0);
                      if ( v42 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v42,
                                                 actMaxRarity,
                                                 v44,
                                                 v46,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0);
                          v48 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v48, 0);
                          if ( v48 )
                          {
                            System_Text_StringBuilder__Append_64509684(v48, RarityInvalidMessage, 0);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10162/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                            System_Text_StringBuilder__Append_64509684(v48, v49, 0);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v51 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v48->klass->vtable._3_ToString.methodPtr)(
                                                       v48,
                                                       v48->klass->vtable._3_ToString.method);
                            v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_YES"*/, 0);
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMON_CONFIRM_NO"*/, 0);
                            v54 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v54,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_31581040(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v51,
                                v52,
                                v53,
                                v54,
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
        sub_1C93D2C(UserServantLeaderEntity, v11);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v9 + 24),
    *(_DWORD *)(v9 + 28),
    *(UserServantEntity_o **)(v9 + 32),
    v26);
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
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v14; // x21
  CancelConfirmMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  SupportServantSelectMenu_o *v21; // x23
  int32_t state; // w21
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x24
  System_Int32_array *v25; // x22
  const MethodInfo *v26; // x2
  BalanceConfig_c *v27; // x0
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x1
  System_Int32_array *v30; // x23
  BalanceConfig_c *v31; // x0
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_CallbackFunc_o *v37; // x27

  if ( (byte_4D2CF48 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OnClickBack__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2CF48 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v9 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickBack__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v11);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
          sub_1C93D34(CenterNum);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v14 = supportServantData->m_Items[(int)CenterNum];
        v15 = (CancelConfirmMenu_CallbackFunc_o *)sub_1C93D20(CancelConfirmMenu_CallbackFunc_TypeInfo);
        CancelConfirmMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          0);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v14, v15, 0);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v16)
      || this->fields.isEdit )
    {
      v17 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickBack__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v6);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v19);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22655/*"ok"*/, v26);
        return;
      }
      goto LABEL_52;
    }
    v20 = SupportSelectRootComponent__getCenterNum(this, v16);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0);
    if ( !CenterNum )
      goto LABEL_52;
    v21 = CenterNum;
    CenterNum = (SupportServantSelectMenu_o *)CenterNum->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    state = v21->fields.state;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v23 = System_Array__Clone((System_Array_o *)CenterNum, 0);
      if ( v23 )
      {
        v24 = v23;
        v25 = (System_Int32_array *)sub_1C93C10(v23, int___TypeInfo);
        if ( !v25 )
          goto LABEL_43;
      }
      else
      {
        v25 = 0;
      }
    }
    else
    {
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      v25 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)v27->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v21->fields.requestCallback;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v28 = System_Array__Clone((System_Array_o *)CenterNum, 0);
    if ( !v28 )
    {
      v30 = 0;
      goto LABEL_48;
    }
    v24 = v28;
    v30 = (System_Int32_array *)sub_1C93C10(v28, int___TypeInfo);
    if ( v30 )
      goto LABEL_48;
LABEL_43:
    sub_1C940C8(v24);
LABEL_44:
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    v30 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)v31->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v29);
    v32 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickBack__);
    v33 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v37 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1C93D20(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v37,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      0);
    if ( cancelConfirmDeckIdDialog )
    {
      CancelConfirmDeckIdDialog__Open(
        cancelConfirmDeckIdDialog,
        v20 + 1,
        state,
        tempFixMainQuestSupportDeckIds,
        tempFixEventQuestSupportDeckIds,
        v25,
        v30,
        v37,
        0);
      return;
    }
LABEL_52:
    sub_1C93D2C(CenterNum, v6);
  }
  v4 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v21; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1

  if ( (byte_4D2CF46 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    byte_4D2CF46 = 1;
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
    sub_1C93D34(FixedErrorList);
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v10);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v14 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C93D20(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v17, 0);
        return;
      }
LABEL_19:
      sub_1C93D2C(FixedErrorList, v10);
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
      0);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v7, v21);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v23);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v24);
  }
  else
  {
    v18 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  const MethodInfo *v11; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v21; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1

  if ( (byte_4D2CF45 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    byte_4D2CF45 = 1;
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
    sub_1C93D34(FixedErrorList);
  v13 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v10);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v14 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1C93D20(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v17, 0);
        return;
      }
LABEL_19:
      sub_1C93D2C(FixedErrorList, v10);
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
      0);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v7, v21);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v23);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v24);
  }
  else
  {
    v18 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4D2CF5D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OpenGrandListInfo__);
    byte_4D2CF5D = 1;
  }
  v3 = Method_SupportSelectRootComponent_OpenGrandListInfo__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OpenGrandListInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_OpenGrandListInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.supportInfoJump )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C93D2C(0, v6);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v8; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v9; // x22

  if ( (byte_4D2CF4C & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_4D2CF4C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C93D34(CenterNum);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0);
  if ( !supportEditMenu )
LABEL_7:
    sub_1C93D2C(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v8, isEdit, v9, 0);
}


void SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4D2CF47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
    byte_4D2CF47 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
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
  SupportSelectRootComponent_o *v2; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v4; // x22
  __int64 v5; // x24
  unsigned __int64 v6; // x8
  SupportServantData_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v16; // x22
  __int64 v17; // x24
  unsigned __int64 v18; // x8
  SupportServantData_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v28; // x22
  __int64 v29; // x24
  unsigned __int64 v30; // x8
  SupportServantData_o *v31; // x20
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x0

  v2 = this;
  if ( (byte_4D2CF2A & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&SupportServantData_TypeInfo);
    byte_4D2CF2A = 1;
  }
  supportServantData = (unsigned int *)v2->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v4 = 0;
  v5 = 8;
  while ( 1 )
  {
    v6 = supportServantData[6];
    if ( (__int64)v4 >= (int)v6 )
      break;
    if ( v4 >= v6 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v4 + 8] )
    {
      v7 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, v8);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C93C10(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v39 = sub_1C93D50();
          sub_1C93BFC(v39, 0);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1C93D34(this);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&supportServantData[v5], (int32_t)v7, v9, v10, v11, v12, v13, v14);
      supportServantData = (unsigned int *)v2->fields.supportServantData;
    }
    ++v4;
    v5 += 2;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v16 = 0;
  v17 = 8;
  while ( 1 )
  {
    v18 = orgSupportServantData[6];
    if ( (__int64)v16 >= (int)v18 )
      break;
    if ( v16 >= v18 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v16 + 8] )
    {
      v19 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
      SupportServantData___ctor(v19, v20);
      if ( v19 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C93C10(v19, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v16 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v16 + 8] = v19;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&orgSupportServantData[v17],
        (int32_t)v19,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v16;
    v17 += 2;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_1C93D2C(this, method);
  v28 = 0;
  v29 = 8;
  while ( 1 )
  {
    v30 = tmpSupportServantData[6];
    if ( (__int64)v28 >= (int)v30 )
      break;
    if ( v28 >= v30 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v28 + 8] )
    {
      v31 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
      SupportServantData___ctor(v31, v32);
      if ( v31 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C93C10(v31, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v28 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v28 + 8] = v31;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&tmpSupportServantData[v29],
        (int32_t)v31,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v28;
    v29 += 2;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_4D2CF51 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_4D2CF51 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C93D34(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C93D2C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v7, v8, 0);
}


void SupportSelectRootComponent__RemoveAllEquip(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v7; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_4D2CF55 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_4D2CF55 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_1C93D34(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1C93D20(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1C93D2C(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v7, v8, 0);
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

  if ( (byte_4D2CF37 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2CF37 = 1;
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
        sub_1C93D34(Instance);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], v6);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22655/*"ok"*/, v11);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v12,
                                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1C93D2C(Instance, v5);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v14; // x2
  SupportSelectListViewIndicator_o *indicator; // x19

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
      sub_1C93D34(IsNullOrEmpty);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&IsNullOrEmpty->fields.decideButton,
            (int32_t)editDeckName,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          SupportSelectRootComponent__SaveTemp(this, -1, v14),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, 0),
          !indicator) )
    {
LABEL_8:
      sub_1C93D2C(IsNullOrEmpty, v5);
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

  if ( (byte_4D2CF4B & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_ReturnScene__);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2CF4B = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    v6 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C93AEC(Method_SupportSelectRootComponent_ReturnScene__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
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
    sub_1C93D2C(supportSelectMenu, v8);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0, 0);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1C93D34(this);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1C93D2C(this, *(_QWORD *)&targetIdx);
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

  if ( (byte_4D2CF4E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_4D2CF4E = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
                                                       (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v5)
    || (v29 = (System_Int32_array *)supportEditMenu,
        v30 = System_Collections_Generic_List_int___ToArray(
                v5,
                (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
        v31 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1C93D20(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v31,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          0),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1C93D2C(supportEditMenu, method);
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
    sub_1C93D2C(supportSelectMenu, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_array *v10; // x19
  GrandQuestFolderBoardItem_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1

  if ( (byte_4D2CF36 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2CF36 = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (GrandQuestFolderBoardItem_o *)&this->fields.cacheAssetNameList;
  v10 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_41254760(list, 0, 1, 0);
  }
  p_cacheAssetNameList->klass = (GrandQuestFolderBoardItem_c *)list;
  sub_1C93A78(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3, v4, v5, v6, v7);
  if ( v10 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_41257108(v10, 0);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v18; // x8
  SupportSelectRootComponent_o *v19; // x23
  const MethodInfo *v20; // x2
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
  if ( (byte_4D2CF3D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Array_IndexOf_long___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_4D2CF3D = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    v16 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_44831460(userSvtEntity->fields.svtId, 0);
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
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v27, 0);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1C93D2C(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
    goto LABEL_33;
  v18 = supportServantData->m_Items[selectNum];
  if ( !v18 )
    goto LABEL_32;
  v19 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v18->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_32AB264 *)Method_System_Array_IndexOf_long___);
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
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, v20);
  }
  v23 = v8->fields.supportServantData;
  if ( !v23 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= LODWORD(v23->max_length) )
LABEL_33:
    sub_1C93D34(this);
  this = (SupportSelectRootComponent_o *)v23->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v19, v13, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportSelectRootComponent_o *v9; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v12; // x25
  unsigned int **p_supportServantData; // x21
  __int64 i; // x27
  unsigned int *v15; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  il2cpp_array_size_t max_length; // x22
  __int64 v18; // x25
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x25
  __int64 v27; // x26
  __int64 v28; // x27
  struct System_Int32_array *v29; // x8
  unsigned __int64 v30; // x29
  unsigned int *v31; // x23
  SupportServantData_o *v32; // x22
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // x7
  unsigned int *v41; // x8
  struct SupportInfoJump_o *v42; // x10
  struct System_Int32_array *v43; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  il2cpp_array_size_t v45; // x26
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  unsigned __int64 v53; // x28
  unsigned int v54; // w27
  struct System_Int32_array *v55; // x8
  unsigned int *v56; // x23
  SupportServantData_o *v57; // x22
  const MethodInfo *v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  unsigned int *v65; // x0
  const MethodInfo *v66; // x7
  unsigned int *v67; // x8
  struct SupportInfoJump_o *v68; // x9
  struct System_Int32_array *v69; // x10
  unsigned __int64 v70; // x25
  struct System_Int32_array *v71; // x8
  unsigned int *v72; // x23
  SupportServantData_o *v73; // x22
  const MethodInfo *v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  unsigned int *v81; // x0
  const MethodInfo *v82; // x7
  unsigned int *v83; // x8
  struct SupportInfoJump_o *v84; // x9
  struct System_Int32_array *v85; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x21
  System_Action_o *v88; // x22
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x0

  v9 = this;
  if ( (byte_4D2CF2F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C93AD4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C93AD4(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&SupportServantData_TypeInfo);
    byte_4D2CF2F = 1;
  }
  *deckIndex = 0;
  supportInfoJump = v9->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_75;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v12 = 0;
  p_supportServantData = (unsigned int **)&v9->fields.supportServantData;
  for ( i = 8; ; i += 2 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    v15 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_75;
    if ( v12 >= v15[6] )
LABEL_76:
      sub_1C93D34(this);
    *(_QWORD *)&v15[i] = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v15[i], 0, (int32_t)method, v3, v4, v5, v6, v7);
    ++v12;
  }
  if ( !otherUserGameEntity )
    goto LABEL_75;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_31DDB0C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !mainSupportDeckIds )
    goto LABEL_75;
  max_length = mainSupportDeckIds->max_length;
  v18 = (unsigned int)max_length;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_75;
    v45 = eventSupportDeckIds->max_length;
    v46 = sub_1C93B7C(SupportServantData___TypeInfo, (unsigned int)(v45 + max_length));
    *p_supportServantData = (unsigned int *)v46;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->fields.supportServantData, v46, v47, v48, v49, v50, v51, v52);
    if ( (int)max_length < 1 )
    {
      v54 = 0;
LABEL_52:
      if ( (int)v45 < 1 )
        goto LABEL_69;
      v70 = 0;
      while ( 1 )
      {
        v71 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v71 )
          break;
        if ( v70 >= LODWORD(v71->max_length) )
          goto LABEL_76;
        if ( v71->m_Items[v70] >= 1 )
        {
          v72 = *p_supportServantData;
          v73 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
          SupportServantData___ctor(v73, v74);
          if ( !v72 )
            break;
          if ( v73 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C93C10(v73, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
            if ( !this )
              goto LABEL_77;
          }
          if ( v54 >= v72[6] )
            goto LABEL_76;
          v81 = &v72[2 * v54];
          *((_QWORD *)v81 + 4) = v73;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 8), (int32_t)v73, v75, v76, v77, v78, v79, v80);
          v83 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v54 >= v83[6] )
            goto LABEL_76;
          v84 = v9->fields.supportInfoJump;
          if ( !v84 )
            break;
          v85 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v85 )
            break;
          if ( v70 >= LODWORD(v85->max_length) )
            goto LABEL_76;
          this = *(SupportSelectRootComponent_o **)&v83[2 * v54 + 8];
          if ( !this )
            break;
          SupportServantData__Init_36258068(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v84->fields.kind,
            v84->fields.isSelect,
            v84->fields.eventSetupInfo,
            1,
            v85->m_Items[v70],
            v82);
          ++v54;
        }
        if ( (unsigned int)v45 == ++v70 )
          goto LABEL_69;
      }
    }
    else
    {
      v53 = 0;
      v54 = 0;
      while ( 1 )
      {
        v55 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v55 )
          break;
        if ( v53 >= LODWORD(v55->max_length) )
          goto LABEL_76;
        if ( v55->m_Items[v53] >= 1 )
        {
          v56 = *p_supportServantData;
          v57 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
          SupportServantData___ctor(v57, v58);
          if ( !v56 )
            break;
          if ( v57 )
          {
            this = (SupportSelectRootComponent_o *)sub_1C93C10(v57, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
            if ( !this )
            {
LABEL_77:
              v95 = sub_1C93D50();
              sub_1C93BFC(v95, 0);
            }
          }
          if ( v54 >= v56[6] )
            goto LABEL_76;
          v65 = &v56[2 * v54];
          *((_QWORD *)v65 + 4) = v57;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 8), (int32_t)v57, v59, v60, v61, v62, v63, v64);
          v67 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v54 >= v67[6] )
            goto LABEL_76;
          v68 = v9->fields.supportInfoJump;
          if ( !v68 )
            break;
          v69 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v69 )
            break;
          if ( v53 >= LODWORD(v69->max_length) )
            goto LABEL_76;
          this = *(SupportSelectRootComponent_o **)&v67[2 * v54 + 8];
          if ( !this )
            break;
          SupportServantData__Init_36258068(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v68->fields.kind,
            v68->fields.isSelect,
            v68->fields.eventSetupInfo,
            0,
            v69->m_Items[v53],
            v66);
          ++v54;
        }
        if ( v18 == ++v53 )
          goto LABEL_52;
      }
    }
LABEL_75:
    sub_1C93D2C(this, deckIndex);
  }
  v19 = sub_1C93B7C(SupportServantData___TypeInfo, (unsigned int)max_length);
  *p_supportServantData = (unsigned int *)v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->fields.supportServantData, v19, v20, v21, v22, v23, v24, v25);
  if ( (int)max_length >= 1 )
  {
    v26 = -(__int64)(unsigned int)max_length;
    v27 = 8;
    v28 = 8;
    do
    {
      v29 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v29 )
        goto LABEL_75;
      v30 = v27 - 8;
      if ( v27 - 8 >= (unsigned __int64)LODWORD(v29->max_length) )
        goto LABEL_76;
      if ( *((int *)&v29->obj.klass + v27) >= 1 )
      {
        v31 = *p_supportServantData;
        v32 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
        SupportServantData___ctor(v32, v33);
        if ( !v31 )
          goto LABEL_75;
        if ( v32 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C93C10(v32, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
          if ( !this )
            goto LABEL_77;
        }
        if ( v30 >= v31[6] )
          goto LABEL_76;
        *(_QWORD *)&v31[v28] = v32;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31[v28], (int32_t)v32, v34, v35, v36, v37, v38, v39);
        v41 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_75;
        if ( v30 >= v41[6] )
          goto LABEL_76;
        v42 = v9->fields.supportInfoJump;
        if ( !v42 )
          goto LABEL_75;
        v43 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v43 )
          goto LABEL_75;
        if ( v30 >= LODWORD(v43->max_length) )
          goto LABEL_76;
        this = *(SupportSelectRootComponent_o **)&v41[v28];
        if ( !this )
          goto LABEL_75;
        SupportServantData__Init_36258068(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v42->fields.kind,
          v42->fields.isSelect,
          v42->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v43->obj.klass + v27),
          v40);
      }
      ++v27;
      v28 += 2;
    }
    while ( v26 + v27 != 8 );
  }
LABEL_69:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  indicator = supportSelectMenu->fields.indicator;
  v88 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_75;
  indicator->fields.modifyCenterItemCallBack = v88;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
    (int32_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this = (SupportSelectRootComponent_o *)v9->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_75;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0, 0, 0, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)otherUserGameEntity->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v9->fields.supportSelectMenu;
    if ( !this )
      goto LABEL_75;
    SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)this, 1, 0);
  }
}


void SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SupportSelectRootComponent_o *v8; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v10; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v13; // w21
  unsigned __int64 v14; // x22
  unsigned int **p_supportServantData; // x20
  __int64 i; // x28
  unsigned int *v17; // x8
  struct SupportInfoJump_o *v18; // x8
  struct FollowerInfo_o *followerInfo; // x28
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  SupportSelectRootComponent___c_c *v23; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v25; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  unsigned int v34; // w0
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  void *monitor; // x8
  __int64 v43; // x24
  __int64 v44; // x23
  unsigned __int64 v45; // x25
  unsigned int *v46; // x26
  SupportServantData_o *v47; // x22
  const MethodInfo *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  const MethodInfo *v55; // x7
  unsigned int *v56; // x9
  struct SupportInfoJump_o *v57; // x8
  __int64 v58; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct SupportInfoJump_o *v68; // x8
  QuestRestrictionInfo_o *v69; // x21
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  __int64 v71; // x0

  v8 = this;
  if ( (byte_4D2CF30 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C93AD4(&SupportServantData___TypeInfo);
    sub_1C93AD4(&SupportServantData_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__);
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&SupportSelectRootComponent___c_TypeInfo);
    byte_4D2CF30 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_59;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_59;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = v8->fields.supportInfoJump;
  if ( !v10 )
    goto LABEL_59;
  questRestrictionInfo = v10->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_59;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v13 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0);
  else
LABEL_11:
    v13 = 1;
  v14 = 0;
  p_supportServantData = (unsigned int **)&v8->fields.supportServantData;
  for ( i = 8; ; i += 2 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    v17 = *p_supportServantData;
    if ( !*p_supportServantData )
      goto LABEL_59;
    if ( v14 >= v17[6] )
      goto LABEL_60;
    *(_QWORD *)&v17[i] = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17[i], 0, v2, v3, v4, v5, v6, v7);
    ++v14;
  }
  v18 = v8->fields.supportInfoJump;
  if ( !v18 || (followerInfo = v18->fields.followerInfo) == 0 )
LABEL_59:
    sub_1C93D2C(this, method);
  if ( v13 )
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
  v20 = System_Array__Clone((System_Array_o *)this, 0);
  if ( !v20 )
    goto LABEL_28;
  v21 = v20;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C93C10(v20, int___TypeInfo);
  if ( !v22 )
  {
    sub_1C940C8(v21);
LABEL_28:
    v22 = 0;
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
    _9__49_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v25,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__49_0,
      (int32_t)_9__49_0,
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
          (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  v34 = System_Linq_Enumerable__Count_int_(v33, (const MethodInfo_31C3CAC *)Method_System_Linq_Enumerable_Count_int___);
  v35 = sub_1C93B7C(SupportServantData___TypeInfo, v34);
  *p_supportServantData = (unsigned int *)v35;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.supportServantData, v35, v36, v37, v38, v39, v40, v41);
  if ( !v22 )
    goto LABEL_59;
  monitor = v22[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v43 = 8;
    v44 = 8;
    while ( 1 )
    {
      v45 = v43 - 8;
      if ( v43 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v22->klass + v43) >= 1 )
      {
        v46 = *p_supportServantData;
        v47 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
        SupportServantData___ctor(v47, v48);
        if ( !v46 )
          goto LABEL_59;
        if ( v47 )
        {
          this = (SupportSelectRootComponent_o *)sub_1C93C10(v47, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
          if ( !this )
          {
            v71 = sub_1C93D50();
            sub_1C93BFC(v71, 0);
          }
        }
        if ( v45 >= v46[6] )
          break;
        *(_QWORD *)&v46[v44] = v47;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46[v44], (int32_t)v47, v49, v50, v51, v52, v53, v54);
        v56 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_59;
        if ( v45 >= v56[6] )
          break;
        v57 = v8->fields.supportInfoJump;
        if ( !v57 )
          goto LABEL_59;
        if ( v45 >= LODWORD(v22[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v56[v44];
        if ( !this )
          goto LABEL_59;
        SupportServantData__Init_36260176(
          (SupportServantData_o *)this,
          v57->fields.followerInfo,
          v57->fields.kind,
          v57->fields.isSelect,
          v57->fields.eventSetupInfo,
          v57->fields.questRestrictionInfo,
          *((_DWORD *)&v22->klass + v43),
          v55);
      }
      LODWORD(monitor) = v22[1].monitor;
      v58 = v43 - 7;
      ++v43;
      v44 += 2;
      if ( v58 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_60:
    sub_1C93D34(this);
  }
LABEL_51:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_59;
  indicator = supportSelectMenu->fields.indicator;
  v61 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_59;
  indicator->fields.modifyCenterItemCallBack = v61;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = v8->fields.supportInfoJump;
  if ( !v68 )
    goto LABEL_59;
  v69 = v68->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_59;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v69,
    (int32_t)this->fields.supportSelectConfirmMenu,
    0,
    0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)followerInfo->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 i; // x25
  unsigned __int64 v21; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length_low; // x9
  struct System_Int32_array *v25; // x9
  struct System_Int32_array *v26; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 j; // x25
  unsigned __int64 v35; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v37; // x9
  struct System_Int32_array *v38; // x9
  SupportSelectRootComponent_o *v39; // x0
  const MethodInfo *v40; // x4
  SupportSelectRootComponent_o *v41; // x0
  const MethodInfo *v42; // x4
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct SupportServantData_array *supportServantData; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v54; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v56; // x21
  SupportServantData_array *v57; // x22
  SupportSelectMenu_CallbackFunc_o *v58; // x23
  const MethodInfo *v59; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v60; // x24
  const MethodInfo *v61; // x3
  struct SupportSelectMenu_o *v62; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  const MethodInfo *v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct SupportServantData_array *v78; // x20
  il2cpp_array_size_t v79; // x8
  unsigned __int64 v80; // x21
  struct EventUpValSetupInfo_o *v81; // x1
  SupportSelectMenu_o *v82; // x20
  SupportServantData_array *v83; // x21
  int32_t v84; // w22
  SupportSelectMenu_CallbackFunc_o *v85; // x23
  const MethodInfo *v86; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v87; // x24
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x2
  struct SupportServantData_array *v90; // x8
  bool v91; // w1
  System_Action_o *v92; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2CF31 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_1C93AD4(&StringLiteral_12665/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_4D2CF31 = 1;
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
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12665/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0);
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
    v12 = (struct System_Int32_array *)sub_1C93B7C(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v12;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int32_t)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8; ; ++i )
    {
      v21 = i - 8;
      if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)supportSelectMenu[1].fields.oldEquipIdList;
      if ( (__int64)v21 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_75;
      max_length_low = LODWORD(fixMainSupportDeckIds->max_length);
      if ( (__int64)v21 < (int)max_length_low )
      {
        if ( v21 >= max_length_low )
          goto LABEL_76;
        v25 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_75;
        if ( v21 >= LODWORD(v25->max_length) )
          goto LABEL_76;
        *((_DWORD *)&v25->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(supportSelectMenu);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v26 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v26;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int32_t)v26,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8; ; ++j )
    {
      v35 = j - 8;
      if ( !LODWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v35 >= SLODWORD(supportSelectMenu[1].fields.oldEquipIdList->m_Items[21]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_75;
      v37 = LODWORD(fixEventSupportDeckIds->max_length);
      if ( (__int64)v35 < (int)v37 )
      {
        if ( v35 >= v37 )
          goto LABEL_76;
        v38 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_75;
        if ( v35 >= LODWORD(v38->max_length) )
          goto LABEL_76;
        *((_DWORD *)&v38->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v3);
    SupportSelectRootComponent__CopySupportData(
      v39,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v40);
    SupportSelectRootComponent__CopySupportData(
      v41,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v42);
    supportSelectMenu = (SupportServantData_o *)this->fields.followerQuestInfomationDraw;
    if ( supportSelectMenu )
    {
      FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)supportSelectMenu, 0, 0, 0, 0);
      supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)supportSelectMenu, 1, 0);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v43);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v44);
        supportSelectMenu = (SupportServantData_o *)this->fields.titleInfo;
        if ( supportSelectMenu )
        {
          TitleInfoControl__setTitleInfo_40624012(
            (TitleInfoControl_o *)supportSelectMenu,
            this->fields.myFSM,
            2,
            84,
            1,
            0);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v45);
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
                  v54 = 0;
                  while ( v54 < (unsigned int)max_length )
                  {
                    supportSelectMenu = supportServantData->m_Items[v54];
                    if ( supportSelectMenu )
                    {
                      eventSetupInfo = this->fields.eventSetupInfo;
                      supportSelectMenu->fields.eventSetupInfo = eventSetupInfo;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&supportSelectMenu->fields.eventSetupInfo,
                        (int32_t)eventSetupInfo,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51);
                    }
                    LODWORD(max_length) = supportServantData->max_length;
                    if ( (__int64)++v54 >= (int)max_length )
                      goto LABEL_49;
                  }
LABEL_76:
                  sub_1C93D34(supportSelectMenu);
                }
LABEL_49:
                v56 = this->fields.supportSelectMenu;
                v57 = this->fields.supportServantData;
                v58 = (SupportSelectMenu_CallbackFunc_o *)sub_1C93D20(SupportSelectMenu_CallbackFunc_TypeInfo);
                SupportSelectMenu_CallbackFunc___ctor(
                  v58,
                  (Il2CppObject *)this,
                  (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                  v59);
                v60 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C93D20(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                SupportSelectMenu_DragSwapCallbackFunc___ctor(
                  v60,
                  (Il2CppObject *)this,
                  Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                  v61);
                if ( v56 )
                {
                  SupportSelectMenu__Open(v56, v57, Int, v58, v60, 0);
                  v62 = this->fields.supportSelectMenu;
                  if ( v62 )
                  {
                    indicator = v62->fields.indicator;
                    v64 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                    System_Action___ctor(
                      v64,
                      (Il2CppObject *)this,
                      Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                      0);
                    if ( indicator )
                    {
                      indicator->fields.modifyCenterItemCallBack = v64;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
                        (int32_t)v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70);
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
    sub_1C93D2C(supportSelectMenu, v3);
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
  TitleInfoControl__setTitleInfo_40624012((TitleInfoControl_o *)supportSelectMenu, this->fields.myFSM, 2, 85, 1, 0);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v71);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  v78 = this->fields.supportServantData;
  if ( !v78 )
    goto LABEL_75;
  v79 = v78->max_length;
  if ( (int)v79 >= 1 )
  {
    v80 = 0;
    while ( v80 < (unsigned int)v79 )
    {
      supportSelectMenu = v78->m_Items[v80];
      if ( supportSelectMenu )
      {
        v81 = this->fields.eventSetupInfo;
        supportSelectMenu->fields.eventSetupInfo = v81;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&supportSelectMenu->fields.eventSetupInfo,
          (int32_t)v81,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
      }
      LODWORD(v79) = v78->max_length;
      if ( (__int64)++v80 >= (int)v79 )
        goto LABEL_64;
    }
    goto LABEL_76;
  }
LABEL_64:
  v82 = this->fields.supportSelectMenu;
  v83 = this->fields.supportServantData;
  v84 = deckIndex;
  v85 = (SupportSelectMenu_CallbackFunc_o *)sub_1C93D20(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v85,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v86);
  v87 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1C93D20(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v87,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v88);
  if ( !v82 )
    goto LABEL_75;
  SupportSelectMenu__Open(v82, v83, v84, v85, v87, 0);
  v90 = this->fields.supportServantData;
  if ( !v90 )
    goto LABEL_75;
  v91 = SLODWORD(v90->max_length) >= 2 && v90->m_Items[1] != 0;
  SupportSelectRootComponent__setInfoUIDisp(this, v91, v89);
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
  v92 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v92, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v92, 2, 1, 0);
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
  if ( (byte_4D2CF43 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF43 = 1;
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
    sub_1C93D2C(this, *(_QWORD *)&idx);
  if ( LODWORD(v19->max_length) <= idx )
LABEL_39:
    sub_1C93D34(this);
  v19->m_Items[v12] = v20;
}


void SupportSelectRootComponent___EndLoadCommonBg_b__52_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
    sub_1C93D2C(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent___EndSupportSelectMenu_b__66_3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C93D2C(0, method);
  SupportSelectMenu__Active(supportSelectMenu, 0);
}


void SupportSelectRootComponent___beginStartUp_b__51_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2CF60 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_StartUp__);
    byte_4D2CF60 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4D2CF35 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D2CF35 = 1;
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
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_15:
    sub_1C93D2C(supportSelectMenu, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  BalanceConfig_c *v13; // x0
  struct SupportServantData_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BalanceConfig_c *v21; // x0
  struct SupportServantData_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1

  if ( (byte_4D2CF29 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&SupportServantData___TypeInfo);
    sub_1C93AD4(&StringLiteral_13288/*"SvtEqScrollBarValue"*/);
    byte_4D2CF29 = 1;
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
    v6 = (struct SupportServantData_array *)sub_1C93B7C(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v5->static_fields->SupportDeckMax);
    this->fields.supportServantData = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.supportServantData, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    v14 = (struct SupportServantData_array *)sub_1C93B7C(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v13->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v14;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.orgSupportServantData,
      (int32_t)v14,
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
    v22 = (struct SupportServantData_array *)sub_1C93B7C(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v21->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v22;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.tmpSupportServantData,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13288/*"SvtEqScrollBarValue"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v30);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v12; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w1
  struct SceneJumpInfo_o **p_sceneJumpInfo; // x0
  int32_t v22; // w1
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
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Action_o *v41; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v43; // x20
  EventUpValSetupInfo_o *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Action_o *v51; // x20

  if ( (byte_4D2CF32 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SupportInfoJump_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectRootComponent_StartUp__);
    sub_1C93AD4(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__);
    byte_4D2CF32 = 1;
  }
  if ( data )
  {
    v10 = (Il2CppClass *)SupportInfoJump_TypeInfo;
    naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
        v12 = data;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    this->fields.supportInfoJump = (struct SupportInfoJump_o *)v12;
    p_supportInfoJump = &this->fields.supportInfoJump;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
        v22 = (int)data;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
    }
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.supportInfoJump, v22, (int32_t)method, v3, v4, v5, v6, v7);
    v23 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    v24 = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v24 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v24 - 1] == SceneJumpInfo_TypeInfo )
        v25 = data;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
    }
    this->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v25;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v24 )
    {
      if ( data->klass->_2.typeHierarchy[v24 - 1] == v23 )
        v20 = (int)data;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
    }
  }
  else
  {
    p_supportInfoJump = &this->fields.supportInfoJump;
    this->fields.supportInfoJump = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3, v4, v5, v6, v7);
    v20 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_sceneJumpInfo, v20, v14, v15, v16, v17, v18, v19);
  *(_WORD *)&this->fields.isEdit = 0;
  SupportSelectRootComponent__RefreshSupportServantData(this, v26);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0);
  v30 = *p_supportInfoJump;
  if ( *p_supportInfoJump && v30->fields.otherUserGameEntity && v30->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
          v33 = System_Linq_Enumerable__ToArray_int_(
                  OngoingQuestTargetEventIds,
                  (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
          v34 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
          EventUpValSetupInfo___ctor_42466312(v34, v33, 0, 0, 0, 0);
          this->fields.eventSetupInfo = v34;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo,
            (int32_t)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadOutGameAtlas(v41, 0);
          return;
        }
      }
    }
LABEL_43:
    sub_1C93D2C(bgTxtSprite, v27);
  }
  bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_43;
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)bgTxtSprite,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !bgTxtSprite )
    goto LABEL_43;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0, 0);
  v43 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  v44 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(v44, v43, 0, 0, 0, 0);
  this->fields.eventSetupInfo = v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventSetupInfo, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v51, 1, 0);
}


int32_t SupportSelectRootComponent__getCenterNum(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1C93D2C(0, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, 0);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void SupportSelectRootComponent__initSupportServantDatas(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x24
  unsigned int v5; // w20
  __int64 v6; // x23
  unsigned int max_length; // w8
  SupportServantData_o *v8; // x21
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0

  v3 = this;
  if ( (byte_4D2CF5A & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1C93AD4(&SupportServantData_TypeInfo);
    byte_4D2CF5A = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1C93D2C(this, method);
  v5 = 0;
  v6 = 32;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      goto LABEL_17;
    if ( !*(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) )
    {
      v8 = (SupportServantData_o *)sub_1C93D20(SupportServantData_TypeInfo);
      SupportServantData___ctor(v8, v9);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_1C93C10(v8, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v16 = sub_1C93D50();
          sub_1C93BFC(v16, 0);
        }
      }
      if ( v5 >= LODWORD(supportServantData->max_length) )
LABEL_17:
        sub_1C93D34(this);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) = (Il2CppClass *)v8;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)((char *)supportServantData + v6),
        (int32_t)v8,
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
    if ( v5 >= LODWORD(supportServantData->max_length) )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v6);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v5, v3->fields.eventSetupInfo, v2);
      supportServantData = v3->fields.supportServantData;
      v6 += 8;
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

  if ( (byte_4D2CF59 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2CF59 = 1;
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
      v20 = 0;
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
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v14->max_length) )
        goto LABEL_31;
      v15 = OldServant;
      OldServant = v14->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, v7, v13);
      if ( v15 != OldServant )
        break;
    }
    if ( equip )
    {
      v16 = this->fields.supportServantData;
      if ( !v16 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v16->max_length) )
        goto LABEL_31;
      OldServant = v16->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, v9);
      v18 = this->fields.supportServantData;
      if ( !v18 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v18->max_length) )
        goto LABEL_31;
      v19 = OldServant;
      OldServant = v18->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, v7, v17);
      if ( v19 != OldServant )
        break;
    }
    ++v7;
  }
  v20 = 1;
LABEL_26:
  v21 = this->fields.supportServantData;
  if ( !v21 )
    goto LABEL_30;
  if ( (unsigned int)CenterNum >= LODWORD(v21->max_length) )
LABEL_31:
    sub_1C93D34(OldServant);
  v22 = v21->m_Items[CenterNum];
  if ( !v22 )
LABEL_30:
    sub_1C93D2C(OldServant, v8);
  return (v20
        | System_String__op_Inequality(
            v22->fields._oldDeckName_k__BackingField,
            v22->fields._deckName_k__BackingField,
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
  int32_t v9; // w3
  char v10; // w1
  char v11; // w2
  int32_t v12; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v16; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  _DWORD *v20; // x22
  int32_t v21; // w21
  int32_t v22; // w0
  int32_t v23; // w20

  if ( (byte_4D2CF34 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4D2CF34 = 1;
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
      v16 = System_Array__IndexOf_int_(
              (System_Int32_array *)eventSupportDeckIds,
              *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
              (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
      v9 = 0;
      v12 = v16 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
        goto LABEL_40;
      v22 = System_Array__IndexOf_int_(
              (System_Int32_array *)eventSupportDeckIds,
              *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
              (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
      v12 = 0;
      v9 = v22 + 1;
    }
    eventSupportDeckIds = this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v10 = ReturnTypeByQuestId == 0;
    v11 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_31DDB0C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v17 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v17,
                            (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
    v20 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v21 = 0;
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
                                      (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
      v21 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v12 = 0;
      goto LABEL_27;
    }
    if ( !v20 )
      goto LABEL_39;
    if ( (unsigned int)CenterNum < v20[6] )
    {
      v12 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v20[CenterNum + 8],
              (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v11 = CenterNum >= max_length;
      v10 = CenterNum < max_length;
      v9 = v21;
      goto LABEL_34;
    }
LABEL_40:
    sub_1C93D34(eventSupportDeckIds);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
    goto LABEL_40;
  eventSupportDeckIds = (void *)System_Array__IndexOf_int_(
                                  (System_Int32_array *)eventSupportDeckIds,
                                  *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
                                  (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v9 = (_DWORD)eventSupportDeckIds + 1;
  v10 = 1;
  v11 = 1;
  eventSupportDeckIds = this->fields.supportSelectMenu;
  v12 = v9;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v10, v11, v9, v12, 0);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v23 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v23,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          0),
        (eventSupportDeckIds = this->fields.supportSelectMenu) == 0) )
  {
LABEL_39:
    sub_1C93D2C(eventSupportDeckIds, v6);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v23,
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
    sub_1C93D2C(blackMask, editOn);
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
    sub_1C93D2C(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, 0);
}


void SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CF61 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectRootComponent___c_TypeInfo);
    byte_4D2CF61 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, x);
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

  if ( (byte_4D2CF62 & 1) == 0 )
  {
    sub_1C93AD4(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_4D2CF62 = 1;
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
      sub_1C93D34(_4__this);
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
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1C93D20(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v13,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1C93D2C(_4__this, isDecide);
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  struct SupportSelectRootComponent_o *v7; // x8
  struct SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v10; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v13; // x20
  Il2CppObject *v14; // x28
  System_Int32_array *monitor; // x19
  System_Int32_array *klass; // x25
  int v17; // w26
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v19; // x3

  if ( (byte_4D2CF63 & 1) == 0 )
  {
    sub_1C93AD4(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_4D2CF63 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_15;
    supportServantData = v7->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v7->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_1C93D34(_4__this);
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    v13 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 this->fields.__4__this,
                                                 (const MethodInfo *)isDecide);
    v14 = (Il2CppObject *)this->fields.__4__this;
    if ( !v14
      || (monitor = (System_Int32_array *)v14[18].monitor,
          klass = (System_Int32_array *)v14[19].klass,
          v17 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1C93D20(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v14,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v19),
          !v13) )
    {
LABEL_15:
      sub_1C93D2C(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v13,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v17 + 1,
      monitor,
      klass,
      callback,
      0);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C93D2C(this, x);
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
    sub_1C93D2C(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}