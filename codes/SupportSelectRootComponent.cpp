void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8EB6 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectRootComponent_TypeInfo, v1);
    byte_49F8EB6 = 1;
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

  if ( (byte_49F8EB5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int___TypeInfo, v3);
    byte_49F8EB5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v5, v6, v7);
  v8 = (struct System_Int32_array *)sub_1B64170(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v8, v9, v10);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_49F8E90 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12412/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_49F8E90 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12412/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  SupportDeckNameInputMenu_CallbackFunc_o *v12; // x23
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4

  if ( (byte_49F8EAF & 1) == 0 )
  {
    sub_1B640C8(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_49F8EAF = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B6432C(CenterNum, v5);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, 0LL),
        v12 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1B64314(
                                                           SupportDeckNameInputMenu_CallbackFunc_TypeInfo,
                                                           v10,
                                                           v11),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          v13),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1B64324(CenterNum);
  }
  SupportDeckNameInputMenu__Open(deckNameInputMenu, deckName_k__BackingField, DefaultDeckName, v12, v14);
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
    sub_1B64324(titleInfo);
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
  struct SupportServantData_array *supportServantData; // x8
  unsigned int max_length; // w10
  int v11; // w9
  SupportSelectConfirmCopyMenu_o *copyConfirmMenu; // x20
  SupportServantData_o *v13; // x22
  SupportServantData_o *v14; // x21
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v15; // x23
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4

  if ( (byte_49F8EA8 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_49F8EA8 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v11 = this->fields.copyTargetDeckId - 1, v11 >= max_length) )
    sub_1B6432C(CenterNum, v7);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v13 = supportServantData->m_Items[(int)CenterNum];
  v14 = supportServantData->m_Items[v11];
  v15 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                               SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo,
                                                               v7,
                                                               v8);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v15,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    v16);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1B64324(CenterNum);
  SupportSelectConfirmCopyMenu__Open(copyConfirmMenu, v13, v14, v15, v17);
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

  if ( (byte_49F8EB3 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&BalanceConfig_TypeInfo, orgData);
    byte_49F8EB3 = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1B64324(this);
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
          sub_1B6432C(this, orgData);
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
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_49F8EA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, isDecide);
    byte_49F8EA2 = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close_32946120(cancelConfirmMenu, 0LL, method);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
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
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, v10, v11);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v12);
      return;
    }
LABEL_10:
    sub_1B64324(cancelConfirmMenu);
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

  if ( (byte_49F8EA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, isDecide);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    byte_49F8EA1 = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v7 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22137/*"ok"*/, v9);
      return;
    }
LABEL_10:
    sub_1B64324(cancelConfirmDeckIdDialog);
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
  const MethodInfo *v8; // x1
  SupportSelectEditMenu_o *deckNameInputMenu; // x0
  struct SupportDeckNameInputMenu_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x21
  System_Action_o *v14; // x1

  if ( (byte_49F8EB0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v7);
    byte_49F8EB0 = 1;
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
    sub_1B64324(deckNameInputMenu);
  }
  this->fields.editDeckName = changeName;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.editDeckName,
    (int32_t)changeName,
    (int32_t)changeName,
    (int32_t)method);
  deckNameInputMenu = this->fields.supportEditMenu;
  if ( !deckNameInputMenu )
    goto LABEL_10;
  SupportSelectEditMenu__Close(deckNameInputMenu, v8);
  v10 = this->fields.deckNameInputMenu;
  v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, 0LL);
  if ( !v10 )
    goto LABEL_10;
  deckNameInputMenu = (SupportSelectEditMenu_o *)v10;
  v14 = v13;
LABEL_9:
  SupportDeckNameInputMenu__Close_32952156(
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
    sub_1B64324(0LL);
  SupportSelectMenu__Reset(supportSelectMenu, (int32_t)method, v2);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B64324(0LL);
  SupportSelectMenu__Redisp(supportSelectMenu, method);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8E99 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F8E99 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndConfirmDeckCopy(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectConfirmCopyMenu_o *CenterNum; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w20
  struct SupportServantData_array *supportServantData; // x9
  unsigned int max_length; // w8
  SupportServantData_o *v9; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  int32_t v12; // w1
  const MethodInfo *v13; // x2

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
        sub_1B6432C(CenterNum, v5);
      v9 = supportServantData->m_Items[v6];
      if ( !v9 )
        goto LABEL_15;
      SupportServantData__CopyData(v9, supportServantData->m_Items[(int)CenterNum], 0, 0LL);
      SupportSelectRootComponent__SaveTemp(this, v6, v10);
    }
    CenterNum = this->fields.copyConfirmMenu;
    if ( CenterNum )
    {
      SupportSelectConfirmCopyMenu__Close(CenterNum, v5);
      CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.copyDeckSelectMenu;
      if ( CenterNum )
      {
        SupportSelectCopyDeckSelectMenu__Close((SupportSelectCopyDeckSelectMenu_o *)CenterNum, v11);
        CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportServantSelectMenu;
        if ( CenterNum )
        {
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)CenterNum, 0LL);
          CenterNum = (SupportSelectConfirmCopyMenu_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, v12, v13);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B64324(CenterNum);
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
    sub_1B64324(0LL);
  SupportSelectConfirmMenu__Close_32961628(supportSelectConfirmMenu, 0LL, method);
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
  const MethodInfo *v7; // x1
  struct SupportServantData_array *supportServantData; // x8
  il2cpp_array_size_t v9; // w20
  int32_t i; // w21
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  if ( (byte_49F8EAC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isDecide);
    byte_49F8EAC = 1;
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
      v9 = confirmDeckMenu;
      if ( (unsigned int)confirmDeckMenu >= supportServantData->max_length )
LABEL_34:
        sub_1B6432C(confirmDeckMenu, v7);
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
          v11 = this->fields.supportServantData;
          if ( !v11 )
            goto LABEL_33;
          if ( v9 >= v11->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v11->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v12 = this->fields.supportServantData;
            if ( !v12 )
              goto LABEL_33;
            if ( v9 >= v12->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v12->m_Items[v9];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
          v13 = this->fields.supportServantData;
          if ( !v13 )
            goto LABEL_33;
          if ( v9 >= v13->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v13->m_Items[v9];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          if ( confirmDeckMenu >= 1 )
          {
            v14 = this->fields.supportServantData;
            if ( !v14 )
              goto LABEL_33;
            if ( v9 >= v14->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v14->m_Items[v9];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, 0LL);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v7);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v15, v16);
            SupportSelectRootComponent__setEditUI(this, 1, v17);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1B64324(confirmDeckMenu);
  }
}


void __fastcall SupportSelectRootComponent__EndLoadCommonBg(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *titleInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_49F8E8B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_49F8E8B = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v8, 1, 1, 0LL);
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
  const MethodInfo *v8; // x1
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  if ( (byte_49F8EAA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isDecide);
    byte_49F8EAA = 1;
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
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v11->max_length )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      v12 = this->fields.supportServantData;
      if ( !v12 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v12->max_length )
LABEL_31:
        sub_1B6432C(confirmDeckMenu, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v12->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            v7,
                                                            0LL);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v13 = this->fields.supportServantData;
        if ( !v13 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v13->max_length )
          goto LABEL_31;
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v14, v15);
        SupportSelectRootComponent__setEditUI(this, 1, v16);
        return;
      }
    }
LABEL_30:
    sub_1B64324(confirmDeckMenu);
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
  const MethodInfo *v8; // x1
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2

  if ( (byte_49F8EAE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isDecide);
    byte_49F8EAE = 1;
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
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_22;
        if ( (unsigned int)CenterNum >= v11->max_length )
LABEL_23:
          sub_1B6432C(confirmDeckMenu, v8);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_22;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, 0LL);
      }
      ++v7;
    }
    confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, v8);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, v12, v13);
        SupportSelectRootComponent__setEditUI(this, 1, v14);
        return;
      }
    }
LABEL_22:
    sub_1B64324(confirmDeckMenu);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v13; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_49F8EA7 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_49F8EA7 = 1;
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
      sub_1B6432C(copyDeckSelectMenu, v8);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v13 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v14 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                          SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                          v8,
                                                          v9);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      v15);
    if ( !supportEditMenu )
LABEL_10:
      sub_1B64324(copyDeckSelectMenu);
    SupportSelectEditMenu__Open(supportEditMenu, v13, isEdit, v14, v16);
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
  const MethodInfo *v5; // x1

  if ( (byte_49F8E9A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F8E9A = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1B64324(supportSelectMenu);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndShowServant(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v5; // x1
  struct SupportServantData_array *supportServantData; // x9
  __int64 v7; // x8
  SupportServantData_o **m_Items; // x9
  SupportServantData_o *v9; // x10

  if ( (byte_49F8E97 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F8E97 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, method);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_15;
  if ( (int)*(_QWORD *)&supportServantData->max_length >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)&supportServantData->max_length;
    m_Items = supportServantData->m_Items;
    do
    {
      v9 = *m_Items;
      if ( *m_Items && !v9->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_15;
        v9->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.decideButton;
      }
      --v7;
      ++m_Items;
    }
    while ( v7 );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_15:
    sub_1B64324(supportSelectMenu);
  SupportSelectMenu__Redisp(supportSelectMenu, v5);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_49F8E98 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_49F8E98 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1B64324(v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
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
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_1B64324(CenterNum);
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
  int32_t CenterNum; // w22
  const MethodInfo *v39; // x1
  int64_t isUpdate; // x0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  int32_t v44; // w23
  __int64 v45; // x2
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v48; // x21
  CancelConfirmMenu_CallbackFunc_o *v49; // x22
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x2
  struct SupportServantData_array *v54; // x8
  SupportServantData_o *v55; // x0
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v61; // x21
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x2
  __int64 v65; // x2
  struct SupportServantData_array *v66; // x22
  SupportServantData_o *v67; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v70; // x24
  System_Int32_array *v71; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v73; // x2
  __int64 v74; // x2
  struct SupportServantData_array *v75; // x22
  SupportServantData_o *v76; // x8
  EventUpValSetupInfo_o *v77; // x27
  System_Int32_array *v78; // x25
  System_Int32_array *v79; // x26
  CommonUI_o *v80; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v81; // x28
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x1
  SupportSelectMenu_o *v85; // x20
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x2
  bool v88; // w1
  SupportSelectRootComponent_o *v89; // x0
  SupportSelectMenu_o *v90; // x20
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x1
  struct SupportServantData_array *v93; // x8
  __int64 v94; // x21
  __int64 v95; // x22
  __int64 v96; // x23
  struct SupportServantData_array *v97; // x8
  SupportServantData_o *v98; // x8
  struct SupportServantData_array *v99; // x8
  SupportServantData_o *v100; // x8
  int v101; // w22
  struct SupportServantData_array *v102; // x8
  SupportServantData_o *v103; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v105; // w22
  struct SupportServantData_array *v106; // x8
  SupportServantData_o *v107; // x8
  QuestRestrictionInfo_o *v108; // x20
  __int64 v109; // x23
  __int64 v110; // x24
  int32_t v111; // w0
  int32_t v112; // w23
  int32_t v113; // w24
  PartyOrganizationUtility_c *v114; // x0
  _QWORD *v115; // x0
  System_Reflection_MethodBase_o *v116; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v118; // x8
  int64_t v119; // x21
  struct SupportServantData_array *v120; // x8
  SupportServantData_o *v121; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v123; // x0
  System_Reflection_MethodBase_o *v124; // x0
  __int64 v125; // x2
  struct SupportServantData_array *v126; // x8
  SupportServantData_o *v127; // x8
  int32_t kind; // w20
  CommonUI_o *v129; // x22
  ServantLeaderInfo_o *v130; // x21
  ServantStatusDialog_EndDelegate_o *v131; // x23
  struct SupportServantData_array *v132; // x8
  struct SupportServantData_array *v133; // x8
  int64_t v134; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v136; // x8
  System_Reflection_MethodBase_o *v137; // x0
  struct SupportServantData_array *v138; // x8
  SupportServantData_o *v139; // x8
  int32_t v140; // w20
  __int64 v141; // x1
  __int64 v142; // x2
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v144; // x21
  ServantStatusDialog_EndDelegate_o *v145; // x23
  _QWORD *v146; // x0
  System_Reflection_MethodBase_o *v147; // x0
  const MethodInfo *v148; // x1
  _QWORD *v149; // x0
  System_Reflection_MethodBase_o *v150; // x0
  _QWORD *v151; // x0
  System_Reflection_MethodBase_o *v152; // x0
  int32_t v153; // w1
  const MethodInfo *v154; // x2
  int64_t v155; // x21
  ServantStatusDialog_FormationEndDelegate_o *v156; // x23
  Il2CppObject *v157; // x20
  __int64 v158; // x1
  __int64 v159; // x2
  ServantStatusDialog_EndDelegate_o *v160; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v162; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v164; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v168; // x0
  int32_t v169; // w0
  __int64 v170; // x1
  __int64 v171; // x2
  SupportSelectRootComponent___c_c *v172; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v174; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v176; // x24
  struct SupportSelectRootComponent___c_StaticFields *v177; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v180; // x0
  struct SupportServantData_array *v181; // x8
  SupportServantData_o *v182; // x0
  _QWORD *v183; // x0
  System_Reflection_MethodBase_o *v184; // x0
  const MethodInfo *v185; // x1
  Il2CppObject *Instance; // x20
  __int64 v187; // x1
  __int64 v188; // x2
  System_String_o *v189; // x21
  SupportSelectRootComponent___c_c *v190; // x8
  System_Action_o *_9__66_2; // x23
  System_String_o *v192; // x22
  Il2CppObject *v193; // x24
  struct SupportSelectRootComponent___c_StaticFields *v194; // x0
  int32_t v195; // w2
  int32_t v196; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v197; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v198; // 0:x0.16

  if ( (byte_49F8E91 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v8);
    sub_1B640C8(&CancelConfirmMenu_CallbackFunc_TypeInfo, v9);
    sub_1B640C8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1B640C8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v11);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_1B640C8(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v24);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v25);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndShowEquip__, v26);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v27);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndShowServant__, v28);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v29);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v30);
    sub_1B640C8(&Method_SupportSelectRootComponent_OnBackSelect__, v31);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v32);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v33);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__, v34);
    sub_1B640C8(&SupportSelectRootComponent___c_TypeInfo, v35);
    sub_1B640C8(&StringLiteral_10218/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v36);
    sub_1B640C8(&StringLiteral_1/*""*/, v37);
    byte_49F8E91 = 1;
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
      v48 = supportServantData->m_Items[CenterNum];
      v49 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B64314(CancelConfirmMenu_CallbackFunc_TypeInfo, v41, v45);
      CancelConfirmMenu_CallbackFunc___ctor(
        v49,
        (Il2CppObject *)this,
        (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
        v50);
      if ( !cancelConfirmMenu )
        goto LABEL_179;
      CancelConfirmMenu__Open(cancelConfirmMenu, v51, v48, v49, v52);
      return;
    case 0:
      isUpdate = SupportSelectRootComponent__isUpdate(this, 1, 1, v43);
      if ( (isUpdate & 1) != 0 )
      {
        v54 = this->fields.supportServantData;
        if ( !v54 )
          goto LABEL_179;
        if ( CenterNum < v54->max_length )
        {
          v55 = v54->m_Items[CenterNum];
          if ( v55 && SupportServantData__get_IsNoServant(v55, 0LL) )
          {
LABEL_15:
            v56 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v56 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v57 = (System_Reflection_MethodBase_o *)sub_1B640AC(v56, v56[4]);
            OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v61 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                               v59,
                                                               v60);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v61,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              v62);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v61, v63);
              return;
            }
LABEL_179:
            sub_1B64324(isUpdate);
          }
          SupportSelectRootComponent__SaveTemp(this, -1, v53);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)isUpdate, 0LL);
          isUpdate = (int64_t)this->fields.supportServantSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)isUpdate, 0LL);
          v151 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v151 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v152 = (System_Reflection_MethodBase_o *)sub_1B640AC(v151, v151[4]);
          OverwriteAssetSoundName__PlaySystemSe(v152, 8, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_179;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, v153, v154);
          goto LABEL_140;
        }
LABEL_180:
        sub_1B6432C(isUpdate, v41);
      }
      if ( this->fields.isEdit )
      {
        v149 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v149 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v150 = (System_Reflection_MethodBase_o *)sub_1B640AC(v149, v149[4]);
        OverwriteAssetSoundName__PlaySystemSe(v150, 8, 0LL);
LABEL_140:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v41);
        v89 = this;
        v88 = 0;
        this->fields.isDragSwapState = 0;
LABEL_141:
        SupportSelectRootComponent__setEditUI(v89, v88, v87);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v162 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v162 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v162->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v162->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v162);
          v162 = SupportSelectRootComponent___c_TypeInfo;
        }
        v164 = (Il2CppObject *)v162->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v41, v53);
        System_Func_int__bool____ctor(
          _9__66_0,
          v164,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v166, v167);
      }
      v168 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
      v169 = System_Linq_Enumerable__Count_int_(
               v168,
               (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      v172 = SupportSelectRootComponent___c_TypeInfo;
      tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
      v174 = v169;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v172 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_1 = v172->static_fields->__9__66_1;
      if ( !_9__66_1 )
      {
        if ( !v172->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v172);
          v172 = SupportSelectRootComponent___c_TypeInfo;
        }
        v176 = (Il2CppObject *)v172->static_fields->__9;
        _9__66_1 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v170, v171);
        System_Func_int__bool____ctor(
          _9__66_1,
          v176,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v177 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v177->__9__66_1 = _9__66_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v177->__9__66_1, (int32_t)_9__66_1, v178, v179);
      }
      v180 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v180,
                   (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v174 < 1 || (int)isUpdate <= 0 )
      {
        v181 = this->fields.supportServantData;
        if ( !v181 )
          goto LABEL_179;
        if ( CenterNum >= v181->max_length )
          goto LABEL_180;
        v182 = v181->m_Items[CenterNum];
        if ( v182 && SupportServantData__get_IsNoServant(v182, 0LL) )
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
      v183 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v183 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v184 = (System_Reflection_MethodBase_o *)sub_1B640AC(v183, v183[4]);
      OverwriteAssetSoundName__PlaySystemSe(v184, 8, 0LL);
      SupportSelectRootComponent__RequestApi(this, v185);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v42);
      SupportSelectRootComponent__setEditUI(this, 1, v64);
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
      v66 = this->fields.supportServantData;
      if ( !v66 )
        goto LABEL_179;
      if ( v66->max_length <= deckNum )
        goto LABEL_180;
      v67 = v66->m_Items[deckNum];
      if ( !v67 )
        goto LABEL_179;
      eventSetupInfo2 = v67->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v70 = this->fields.tempFixMainQuestSupportDeckIds;
      v71 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                              SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                              v41,
                                                              v65);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_179;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v66,
        deckNum,
        classPos,
        eventSetupInfo2,
        v44,
        v70,
        v71,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, v42);
      SupportSelectRootComponent__setEditUI(this, 1, v73);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v75 = this->fields.supportServantData;
      if ( !v75 )
        goto LABEL_179;
      if ( v75->max_length <= deckNum )
        goto LABEL_180;
      v76 = v75->m_Items[deckNum];
      if ( !v76 )
        goto LABEL_179;
      v77 = v76->fields.eventSetupInfo2;
      v78 = this->fields.tempFixMainQuestSupportDeckIds;
      v79 = this->fields.tempFixEventQuestSupportDeckIds;
      v80 = (CommonUI_o *)isUpdate;
      v81 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B64314(
                                                            SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                            v41,
                                                            v74);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v81,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        0LL);
      if ( !v80 )
        goto LABEL_179;
      CommonUI__OpenSupportServantEquipListMenu(v80, v75, deckNum, classPos, v77, v44, v78, v79, v81, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !supportSelectMenu )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, v83);
      SupportSelectRootComponent__ChangeDeckName(this, v84);
      return;
    case 5:
      v85 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !v85 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v85, isUpdate, v86);
      v88 = 1;
      this->fields.isDragSwapState = 1;
      v89 = this;
      goto LABEL_141;
    case 6:
      v90 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v41);
      if ( !v90 )
        goto LABEL_179;
      SupportSelectMenu__moveCenterItem(v90, isUpdate, v91);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v92);
      return;
    case 7:
      v93 = this->fields.supportServantData;
      if ( !v93 )
        goto LABEL_179;
      if ( v93->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v93->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v94 = *(_QWORD *)(isUpdate + 24);
      if ( !v94 )
        goto LABEL_125;
      v96 = *(_QWORD *)(v94 + 48);
      v95 = *(_QWORD *)(v94 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v197.fields.currentCryptoKey = v96;
      *(_QWORD *)&v197.fields.fakeValue = v95;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v197, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_125;
      v97 = this->fields.supportServantData;
      if ( !v97 )
        goto LABEL_179;
      if ( v97->max_length <= deckNum )
        goto LABEL_180;
      v98 = v97->m_Items[deckNum];
      if ( !v98 )
        goto LABEL_179;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v94,
                   v98->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_125;
      v99 = this->fields.supportServantData;
      if ( !v99 )
        goto LABEL_179;
      if ( v99->max_length <= deckNum )
        goto LABEL_180;
      v100 = v99->m_Items[deckNum];
      if ( !v100 )
        goto LABEL_179;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v94, v100->fields.questRestrictionInfo, 0LL) )
        goto LABEL_125;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      v101 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( v101 < 1 )
        goto LABEL_76;
      v102 = this->fields.supportServantData;
      if ( !v102 )
        goto LABEL_179;
      if ( v102->max_length <= deckNum )
        goto LABEL_180;
      v103 = v102->m_Items[deckNum];
      if ( !v103 )
        goto LABEL_179;
      questRestrictionInfo = v103->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_179;
      v105 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, v105, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v106 = this->fields.supportServantData;
      if ( !v106 )
        goto LABEL_179;
      if ( v106->max_length <= deckNum )
        goto LABEL_180;
      v107 = v106->m_Items[deckNum];
      if ( !v107 )
        goto LABEL_179;
      v108 = v107->fields.questRestrictionInfo;
      v110 = *(_QWORD *)(v94 + 48);
      v109 = *(_QWORD *)(v94 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v198.fields.currentCryptoKey = v110;
      *(_QWORD *)&v198.fields.fakeValue = v109;
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v198, 0LL);
      v112 = *(_DWORD *)(v94 + 64);
      v113 = v111;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v94, 0LL);
      if ( !v108 )
        goto LABEL_179;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v108, v113, v112, isUpdate, v105, 1, 0LL) )
        goto LABEL_125;
LABEL_76:
      if ( !this->fields.supportInfoJump )
      {
LABEL_125:
        v146 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v146 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v147 = (System_Reflection_MethodBase_o *)sub_1B640AC(v146, v146[4]);
        OverwriteAssetSoundName__PlaySystemSe(v147, 2, 0LL);
LABEL_128:
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_179;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, v148);
        return;
      }
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !isUpdate )
        goto LABEL_179;
      if ( *(_BYTE *)(isUpdate + 148) )
      {
        v114 = PartyOrganizationUtility_TypeInfo;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v114 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v114->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !isUpdate )
            goto LABEL_179;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)isUpdate, 0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            isUpdate = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10218/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
            v189 = (System_String_o *)isUpdate;
            v190 = SupportSelectRootComponent___c_TypeInfo;
            if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
              v190 = SupportSelectRootComponent___c_TypeInfo;
            }
            _9__66_2 = v190->static_fields->__9__66_2;
            v192 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__66_2 )
            {
              if ( !v190->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v190);
                v190 = SupportSelectRootComponent___c_TypeInfo;
              }
              v193 = (Il2CppObject *)v190->static_fields->__9;
              _9__66_2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v187, v188);
              System_Action___ctor(
                _9__66_2,
                v193,
                Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_2__,
                0LL);
              v194 = SupportSelectRootComponent___c_TypeInfo->static_fields;
              v194->__9__66_2 = _9__66_2;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v194->__9__66_2, (int32_t)_9__66_2, v195, v196);
            }
            if ( !Instance )
              goto LABEL_179;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v192,
              v189,
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
      v115 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v115 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v116 = (System_Reflection_MethodBase_o *)sub_1B640AC(v115, v115[4]);
      OverwriteAssetSoundName__PlaySystemSe(v116, 0, 0LL);
      isUpdate = (int64_t)this->fields.supportInfoJump;
      if ( !isUpdate )
        goto LABEL_179;
      supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
      *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
      *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v94 + 16);
      if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
      {
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v118 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v118 )
        goto LABEL_179;
      if ( v118->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v118->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            0LL);
      if ( !isUpdate )
        goto LABEL_179;
      v119 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_125;
      v120 = this->fields.supportServantData;
      if ( !v120 )
        goto LABEL_179;
      if ( v120->max_length <= deckNum )
        goto LABEL_180;
      v121 = v120->m_Items[deckNum];
      if ( !v121 )
        goto LABEL_179;
      isFriendInfo = v121->fields.isFriendInfo;
      v123 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v123 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v124 = (System_Reflection_MethodBase_o *)sub_1B640AC(v123, v123[4]);
      OverwriteAssetSoundName__PlaySystemSe(v124, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v126 = this->fields.supportServantData;
      if ( !v126 )
        goto LABEL_179;
      if ( v126->max_length <= deckNum )
        goto LABEL_180;
      v127 = v126->m_Items[deckNum];
      if ( !v127 )
        goto LABEL_179;
      kind = v127->fields.kind;
      v129 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v130 = *(ServantLeaderInfo_o **)(v119 + 24);
        v131 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v41, v125);
        ServantStatusDialog_EndDelegate___ctor(
          v131,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v129 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30357468(v129, kind, v130, v131, 0LL);
      }
      else
      {
        v155 = *(_QWORD *)(v119 + 56);
        v156 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B64314(
                                                               ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                               v41,
                                                               v125);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v156,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v129 )
          goto LABEL_179;
        CommonUI__OpenServantStatusDialog_30354836(v129, kind, v155, v156, 0LL, 0LL);
      }
      return;
    case 9:
      v132 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v132 )
        goto LABEL_179;
      if ( v132->max_length <= deckNum )
        goto LABEL_180;
      isUpdate = (int64_t)v132->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, 0LL);
      if ( !isUpdate )
        goto LABEL_125;
      v133 = this->fields.supportServantData;
      if ( !v133 )
        goto LABEL_179;
      if ( v133->max_length <= deckNum )
        goto LABEL_180;
      v134 = isUpdate;
      isUpdate = (int64_t)v133->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_179;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  0LL);
      v136 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v136 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v137 = (System_Reflection_MethodBase_o *)sub_1B640AC(v136, v136[4]);
      OverwriteAssetSoundName__PlaySystemSe(v137, 0, 0LL);
      v138 = this->fields.supportServantData;
      if ( !v138 )
        goto LABEL_179;
      if ( v138->max_length <= deckNum )
        goto LABEL_180;
      v139 = v138->m_Items[deckNum];
      if ( !v139 )
        goto LABEL_179;
      if ( v139->fields.isFriendInfo )
      {
        if ( v139->fields.kind == 5 )
          v140 = 14;
        else
          v140 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_179;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v144 = (CommonUI_o *)isUpdate;
        v145 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v141, v142);
        ServantStatusDialog_EndDelegate___ctor(
          v145,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v144 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog_30360564(v144, v140, equipTarget1, v145, 0LL, 0LL);
      }
      else
      {
        v157 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v160 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v158, v159);
        ServantStatusDialog_EndDelegate___ctor(
          v160,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v157 )
          goto LABEL_179;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v157, 11, v134, 1, v160, 0LL, 0LL);
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
  __int64 v26; // x1
  struct SupportServantData_array *supportServantData; // x8
  int32_t v28; // w24
  struct SupportServantData_array *v29; // x8
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+60h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+80h] [xbp-70h]

  if ( (byte_49F8E96 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_49F8E96 = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_40698696(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_40698696(v15->fields.svtId, 0LL);
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v35, 0LL, 0LL);
    v36 = v35;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v34 = v36;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v34, 0LL);
  if ( leader2 && (v20 = leader2->fields.equipTarget1) != 0LL )
  {
    v21 = *(_OWORD *)&v20->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v20->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v21;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0LL, 0LL);
    v35 = v33;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v35;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v32, 0LL);
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
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, v31);
              return;
            }
          }
        }
LABEL_39:
        sub_1B64324(CenterNum);
      }
    }
    sub_1B6432C(CenterNum, v26);
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
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
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
  __int64 v56; // x1
  __int64 v57; // x2
  System_Text_StringBuilder_o *v58; // x21
  System_String_o *v59; // x0
  Il2CppObject *Instance; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  System_Action_o *v63; // x23
  Il2CppObject *v64; // x19
  System_String_o *v65; // x21
  System_String_o *v66; // x22
  System_String_o *v67; // x23
  __int64 v68; // x1
  __int64 v69; // x2
  CommonConfirmDialog_ClickDelegate_o *v70; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16

  if ( (byte_49F8E94 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v18);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v19);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v20);
    sub_1B640C8(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_10076/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v22);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v23);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v24);
    sub_1B640C8(&StringLiteral_1/*""*/, v25);
    byte_49F8E94 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v26 = sub_1B64314(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
  SupportSelectRootComponent___c__DisplayClass71_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass71_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_42;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v28, v29);
  *(_QWORD *)(v26 + 32) = item;
  v30 = v26 + 32;
  *(_DWORD *)(v26 + 24) = result;
  *(_DWORD *)(v26 + 28) = classPos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)item, v31, v32);
  if ( *(_DWORD *)(v26 + 24) == 1 && *(_QWORD *)v30 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B6432C(UserServantLeaderEntity, v33);
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
        if ( !*(_QWORD *)v30 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v30 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v37->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v39 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v41 = userServantLeaderEntityList->m_Items[6];
          v40 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = v41;
          *(_QWORD *)&v74.fields.fakeValue = v40;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                              v74,
                                                              0LL);
          if ( !v37->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v42 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v37->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v30 )
            goto LABEL_42;
          v43 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v30 + 128LL);
          if ( !v43 )
            goto LABEL_42;
          v44 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v37->fields.isFriendInfo,
                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v46 = v37->fields.userServantLeaderEntityList;
                if ( v46 )
                {
                  v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v49 = v46->m_Items[8];
                  v48 = v46->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v75.fields.currentCryptoKey = v49;
                  *(_QWORD *)&v75.fields.fakeValue = v48;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                      v75,
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
                      v52 = *(_QWORD *)v30;
                      if ( *(_QWORD *)v30 )
                      {
                        v53 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v52 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(
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
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v58 = (System_Text_StringBuilder_o *)sub_1B64314(
                                                                     System_Text_StringBuilder_TypeInfo,
                                                                     v56,
                                                                     v57);
                              System_Text_StringBuilder___ctor(v58, 0LL);
                              if ( v58 )
                              {
                                System_Text_StringBuilder__Append_60536548(v58, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10076/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_60536548(v58, v59, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62);
                                System_Action___ctor(
                                  v63,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v63, 0LL);
                                  v64 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v65 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v58->klass->vtable._3_ToString.method)(
                                                             v58,
                                                             v58->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v70 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                                 v68,
                                                                                 v69);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v70,
                                    (Il2CppObject *)v26,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v64 )
                                  {
                                    CommonUI__OpenConfirmDialog_30345400(
                                      (CommonUI_o *)v64,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v65,
                                      v66,
                                      v67,
                                      v70,
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
            sub_1B64324(UserServantLeaderEntity);
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
  const MethodInfo *v14; // x1

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
    sub_1B6432C(this, *(_QWORD *)&result);
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
  SupportSelectMenu__Redisp((SupportSelectMenu_o *)this, v14);
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
    sub_1B64324(this);
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
  __int64 v35; // x2
  BalanceConfig_c *v36; // x8
  __int64 v37; // x10
  unsigned __int64 v38; // x24
  int32_t v39; // w9
  int32_t v40; // w26
  __int64 v41; // x23
  __int64 v42; // x27
  struct SupportServantData_array *supportServantData; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x28
  struct SupportServantData_array *v47; // x8
  SupportServantData_o *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x19
  System_Func_object__bool__o *v50; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  ServantEntity_o *v52; // x27
  int32_t Rarity; // w0
  int v54; // w29
  int64_t v55; // x2
  int32_t v56; // w28
  System_String_o *v57; // x19
  Il2CppObject *v58; // x28
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x19
  Il2CppObject *v63; // x29
  Il2CppObject *Name; // x28
  Il2CppObject *ClassName; // x0
  __int64 v66; // x1
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  __int64 v73; // [xsp+10h] [xbp-A0h]
  __int64 v74; // [xsp+18h] [xbp-98h]
  ServantLimitImageMaster_o *v75; // [xsp+20h] [xbp-90h]
  UserServantCollectionMaster_o *Master_object; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v79; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49F8E9C & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v16);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v17);
    sub_1B640C8(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v18);
    sub_1B640C8(&int_TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v26);
    sub_1B640C8(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_12333/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v28);
    sub_1B640C8(&StringLiteral_12334/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v29);
    byte_49F8E9C = 1;
  }
  entity = 0LL;
  v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&idx,
                                                       *(_QWORD *)&nowDeckId);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_69:
    sub_1B64324(Instance);
  }
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v75 = (ServantLimitImageMaster_o *)Instance;
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  v37 = 184LL;
  if ( isMain )
    v37 = 180LL;
  v74 = *(unsigned int *)((char *)&v36->static_fields->CriticalRateToAddByQuickFirstBonus + v37);
  if ( *(int *)((char *)&v36->static_fields->CriticalRateToAddByQuickFirstBonus + v37) >= 1 )
  {
    v38 = 0LL;
    v73 = (unsigned int)idx;
    do
    {
      if ( v38 != v73 )
      {
        if ( !fixDeckIds )
          goto LABEL_69;
        if ( v38 >= fixDeckIds->max_length )
LABEL_70:
          sub_1B6432C(Instance, v34);
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
            v42 = sub_1B64314(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v34, v35);
            SupportSelectRootComponent___c__DisplayClass81_0___ctor(
              (SupportSelectRootComponent___c__DisplayClass81_0_o *)v42,
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
                                  v40,
                                  0LL);
            if ( !v42 )
              goto LABEL_69;
            *(_QWORD *)(v42 + 16) = Instance;
            v46 = v42 + 16;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 16), Instance, v44, v45);
            if ( !*(_QWORD *)(v42 + 16) )
              goto LABEL_69;
            if ( *(_DWORD *)(*(_QWORD *)(v42 + 16) + 64LL) )
            {
              v47 = this->fields.supportServantData;
              if ( !v47 )
                goto LABEL_69;
              if ( (unsigned int)v41 >= v47->max_length )
                goto LABEL_70;
              v48 = v47->m_Items[v41];
              if ( !v48 )
                goto LABEL_69;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v48->fields.userServantLeaderEntityList;
              v50 = (System_Func_object__bool__o *)sub_1B64314(
                                                     System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                     v34,
                                                     v35);
              System_Func_object__bool____ctor(
                v50,
                (Il2CppObject *)v42,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v51 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v50,
                      (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v51,
                           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v46 )
                  goto LABEL_69;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_69;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v46 + 64LL),
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v46 )
                  goto LABEL_69;
                v52 = (ServantEntity_o *)Instance;
                Instance = *(_QWORD *)(*(_QWORD *)v46 + 16LL);
                if ( !Instance )
                  goto LABEL_69;
                Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Instance, 0LL);
                if ( Rarity )
                {
                  v54 = Rarity;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*(_QWORD *)v46 )
                    goto LABEL_69;
                  v55 = Instance;
                  Instance = (__int64)Master_object;
                  if ( !Master_object )
                    goto LABEL_69;
                  if ( UserServantCollectionMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         v55,
                         *(_DWORD *)(*(_QWORD *)v46 + 64LL),
                         0LL) )
                  {
                    Instance = (__int64)v75;
                    if ( !*(_QWORD *)v46 )
                      goto LABEL_69;
                    if ( !entity )
                      goto LABEL_69;
                    if ( !v75 )
                      goto LABEL_69;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v75,
                                 *(_DWORD *)(*(_QWORD *)v46 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_69;
                    v56 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v56 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v79 = v54;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v79);
                  if ( !v52 )
                    goto LABEL_69;
                  v63 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v52, v56, -1, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v52, 0LL);
                  Instance = (__int64)System_String__Format_61389836(v62, v63, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v52 )
                    goto LABEL_69;
                  v57 = (System_String_o *)Instance;
                  v58 = (Il2CppObject *)ServantEntity__getName(v52, -1, -1, 0LL);
                  v59 = (Il2CppObject *)ServantEntity__getClassName(v52, 0LL);
                  Instance = (__int64)System_String__Format_61389768(v57, v58, v59, 0LL);
                }
                v66 = Instance;
                if ( !v30 )
                  goto LABEL_69;
                items = v30->fields._items;
                v68 = Method_System_Collections_Generic_List_string__Add__;
                ++v30->fields._version;
                if ( !items )
                  goto LABEL_69;
                size = v30->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = &items->obj.klass + size;
                  v30->fields._size = size + 1;
                  v70[4] = (Il2CppClass *)v66;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 4), v66, v60, v61);
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
    while ( v38 != v74 );
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
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_49F8EAB & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_49F8EAB = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B6432C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    v11);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64324(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v9, v10, v12);
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

  if ( (byte_49F8E83 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&SupportServantData___TypeInfo, v3);
    byte_49F8E83 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_1B64170(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v5, v6, v7);
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

  if ( (byte_49F8EB4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F8EB4 = 1;
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
      sub_1B6432C(Servant, method);
    v16 = v15->m_Items[i];
    if ( !v16 )
LABEL_34:
      sub_1B64324(Servant);
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

  if ( (byte_49F8E85 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_49F8E85 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_49F8E84 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_49F8E84 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) >= 0;
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
  __int64 v13; // x2
  __int64 v14; // x8
  bool v15; // w9
  il2cpp_array_size_t v16; // w22
  signed __int64 v17; // x28
  __int64 v18; // x19
  int v19; // w8
  il2cpp_array_size_t v20; // w27
  int32_t i; // w23
  __int64 v22; // x24
  struct SupportServantData_array *supportServantData; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  struct SupportServantData_array *v27; // x8
  SupportServantData_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v30; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v34; // [xsp+10h] [xbp-70h]
  bool v35; // [xsp+1Ch] [xbp-64h]

  if ( (byte_49F8EA5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_1B640C8(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v8);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v9);
    sub_1B640C8(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v10);
    byte_49F8EA5 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1B64324(CenterNum);
  v14 = *(_QWORD *)&fixDeckIds->max_length;
  v15 = (int)v14 > 0;
  if ( (int)v14 >= 1 )
  {
    v16 = (unsigned int)CenterNum;
    v17 = 0LL;
    v18 = (int)CenterNum;
    v34 = fixDeckIds;
    do
    {
      v35 = v15;
      if ( v17 >= (unsigned __int64)(unsigned int)v14 )
LABEL_29:
        sub_1B6432C(CenterNum, v12);
      v19 = fixDeckIds->m_Items[v17 + 1];
      v20 = v19 - 1;
      if ( v19 >= 1 && v20 != idx )
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
          v22 = sub_1B64314(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v12, v13);
          SupportSelectRootComponent___c__DisplayClass98_0___ctor(
            (SupportSelectRootComponent___c__DisplayClass98_0_o *)v22,
            0LL);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_28;
          if ( v16 >= supportServantData->max_length )
            goto LABEL_29;
          CenterNum = supportServantData->m_Items[v18];
          if ( !CenterNum )
            goto LABEL_28;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, 0LL);
          if ( !v22 )
            goto LABEL_28;
          *(_QWORD *)(v22 + 16) = CenterNum;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)CenterNum, v24, v25);
          v26 = *(_QWORD *)(v22 + 16);
          if ( !v26 )
            goto LABEL_28;
          if ( *(_DWORD *)(v26 + 64) )
          {
            v27 = this->fields.supportServantData;
            if ( !v27 )
              goto LABEL_28;
            if ( v20 >= v27->max_length )
              goto LABEL_29;
            v28 = v27->m_Items[v20];
            if ( !v28 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.userServantLeaderEntityList;
            v30 = (System_Func_object__bool__o *)sub_1B64314(
                                                   System_Func_UserServantLeaderEntity__bool__TypeInfo,
                                                   v12,
                                                   v13);
            System_Func_object__bool____ctor(
              v30,
              (Il2CppObject *)v22,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v31 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v30,
                    (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v31,
                   (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v15 = v35;
              return !v15;
            }
          }
        }
      }
      fixDeckIds = v34;
      ++v17;
      LODWORD(v14) = v34->max_length;
      v15 = v17 < (int)v14;
    }
    while ( v17 < (int)v14 );
  }
  return !v15;
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
  System_Array_o *v13; // x22
  int monitor; // w25
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  BalanceConfig_c *v18; // x0
  Il2CppObject *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  BalanceConfig_c *v21; // x0
  bool v22; // w21
  __int64 v23; // x1
  __int64 v24; // x2
  char v25; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v27; // x0
  System_Func_int__bool__o *_9__67_0; // x22
  Il2CppObject *v29; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int32_t v34; // w0
  __int64 v35; // x1
  __int64 v36; // x2
  SupportSelectRootComponent___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v39; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v41; // x23
  struct SupportSelectRootComponent___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  int32_t v46; // w0
  bool v47; // w8

  if ( (byte_49F8E92 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v8);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v9);
    sub_1B640C8(&SupportSelectRootComponent___c_TypeInfo, v10);
    byte_49F8E92 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v13 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].klass;
  if ( !SelfUserGame )
    goto LABEL_40;
  monitor = (int)v13[12].monitor;
  if ( SelfUserGame[1].monitor )
  {
    v15 = System_Array__Clone(SelfUserGame, 0LL);
    if ( v15 )
    {
      v16 = v15;
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64204(v15, int___TypeInfo);
      if ( !v17 )
        goto LABEL_17;
    }
    else
    {
      v17 = 0LL;
    }
  }
  else
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64170(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v18->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v13[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1B64324(SelfUserGame);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64170(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v21->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v19 = System_Array__Clone(SelfUserGame, 0LL);
  if ( !v19 )
  {
    v20 = 0LL;
    goto LABEL_22;
  }
  v16 = v19;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64204(v19, int___TypeInfo);
  if ( !v20 )
  {
LABEL_17:
    sub_1B645E4(v16);
    goto LABEL_18;
  }
LABEL_22:
  v22 = System_Linq_Enumerable__SequenceEqual_int_(
          v17,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v25 = v22 & System_Linq_Enumerable__SequenceEqual_int_(
                v20,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( (v25 & 1) == 0 )
    goto LABEL_37;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v27 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v27 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_0 = v27->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = SupportSelectRootComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__67_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v23, v24);
    System_Func_int__bool____ctor(_9__67_0, v29, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v34 = System_Linq_Enumerable__Count_int_(v33, (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
  v37 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v39 = v34;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v37 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__67_1 = v37->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = SupportSelectRootComponent___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v37->static_fields->__9;
    _9__67_1 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v35, v36);
    System_Func_int__bool____ctor(_9__67_1, v41, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v42 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v42->__9__67_1 = _9__67_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__67_1, (int32_t)_9__67_1, v43, v44);
  }
  v45 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v46 = System_Linq_Enumerable__Count_int_(v45, (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v39 < 1 || v46 <= 0 )
    v47 = CenterNum + 1 != monitor;
  else
LABEL_37:
    v47 = 0;
  return v47 || (v25 & 1) == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsValidServantData(
        SupportSelectRootComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_49F8E86 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_49F8E86 = 1;
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
  int32_t v25; // w2
  int32_t v26; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
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
  __int64 v53; // x1
  __int64 v54; // x2
  System_Text_StringBuilder_o *v55; // x21
  System_String_o *v56; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  System_String_o *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  CommonConfirmDialog_ClickDelegate_o *v63; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_49F8E93 & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v17);
    sub_1B640C8(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_10076/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v19);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v20);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v21);
    sub_1B640C8(&StringLiteral_1/*""*/, v22);
    byte_49F8E93 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v23 = sub_1B64314(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&classPos);
  SupportSelectRootComponent___c__DisplayClass69_0___ctor(
    (SupportSelectRootComponent___c__DisplayClass69_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_35;
  *(_QWORD *)(v23 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v23 + 32) = entity;
  v27 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v23 + 32);
  *(_DWORD *)(v23 + 24) = result;
  *(_DWORD *)(v23 + 28) = classPos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)entity, v28, v29);
  if ( *(_DWORD *)(v23 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B6432C(UserServantLeaderEntity, v30);
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
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v35 = (UserServantEntity_o *)*v27;
      if ( !*v27 )
        goto LABEL_35;
      v36 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v38 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v38;
      *(_QWORD *)&v67.fields.fakeValue = v37;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                          v67,
                                                          0LL);
      if ( !*v27 )
        goto LABEL_35;
      v39 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v27, 0LL);
      oldServantIdList = v34->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v41 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          v42 = (UserServantEntity_o *)*v27;
          if ( *v27 )
          {
            v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
            v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v68.fields.currentCryptoKey = v45;
            *(_QWORD *)&v68.fields.fakeValue = v44;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                v68,
                                                                0LL);
            if ( v43 )
            {
              v46 = DataMasterBase_object__object__int___GetEntity(
                      v43,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v27 )
              {
                v47 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                    (*v27)[6],
                                                                    0LL);
                if ( v46 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v46,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0LL);
                  v48 = (UserServantEntity_o *)*v27;
                  if ( *v27 )
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
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v55 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v53, v54);
                          System_Text_StringBuilder___ctor(v55, 0LL);
                          if ( v55 )
                          {
                            System_Text_StringBuilder__Append_60536548(v55, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10076/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_60536548(v55, v56, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v58 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v55->klass->vtable._3_ToString.method)(
                                                       v55,
                                                       v55->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v63 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                           CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                           v61,
                                                                           v62);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v63,
                              (Il2CppObject *)v23,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30345400(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v58,
                                v59,
                                v60,
                                v63,
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
        sub_1B64324(UserServantLeaderEntity);
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
  SupportServantSelectMenu_o *CenterNum; // x0
  Il2CppObject *supportInfoJump; // x2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  struct SupportServantData_array *supportServantData; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x20
  SupportServantData_o *v23; // x21
  CancelConfirmMenu_CallbackFunc_o *v24; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x4
  const MethodInfo *v28; // x1
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w20
  SupportServantSelectMenu_o *v34; // x23
  int32_t pushTabButton; // w21
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x24
  System_Int32_array *v38; // x22
  const MethodInfo *v39; // x2
  BalanceConfig_c *v40; // x0
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x1
  System_Int32_array *v43; // x23
  BalanceConfig_c *v44; // x0
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  __int64 v50; // x1
  __int64 v51; // x2
  CancelConfirmDeckIdDialog_CallbackFunc_o *v52; // x27
  const MethodInfo *v53; // x3

  if ( (byte_49F8EA0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v8);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v9);
    sub_1B640C8(&Method_SupportSelectRootComponent_OnClickBack__, v10);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v11);
    byte_49F8EA0 = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v16 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickBack__);
      v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v18);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1B6432C(CenterNum, v19);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v23 = supportServantData->m_Items[(int)CenterNum];
        v24 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B64314(CancelConfirmMenu_CallbackFunc_TypeInfo, v19, v20);
        CancelConfirmMenu_CallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
          v25);
        if ( cancelConfirmMenu )
        {
          CancelConfirmMenu__Open(cancelConfirmMenu, v26, v23, v24, v27);
          return;
        }
      }
      goto LABEL_52;
    }
    if ( !SupportSelectRootComponent__IsFinallyUpdate(this, method)
      && !SupportSelectRootComponent__IsUpdateDeckId(this, v28)
      || this->fields.isEdit )
    {
      v29 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickBack__);
      v30 = (System_Reflection_MethodBase_o *)sub_1B640AC(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 1, 0LL);
      if ( this->fields.isEdit )
      {
        SupportSelectRootComponent__SetActiveApplyIcon(this, v31);
        this->fields.isDragSwapState = 0;
        SupportSelectRootComponent__setEditUI(this, 0, v32);
        return;
      }
      CenterNum = this->fields.supportServantSelectMenu;
      if ( CenterNum )
      {
        SupportServantSelectMenu__ClearScrollValue(CenterNum, 0LL);
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22137/*"ok"*/, v39);
        return;
      }
      goto LABEL_52;
    }
    v33 = SupportSelectRootComponent__getCenterNum(this, v28);
    CenterNum = (SupportServantSelectMenu_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !CenterNum )
      goto LABEL_52;
    v34 = CenterNum;
    CenterNum = *(SupportServantSelectMenu_o **)&CenterNum->fields.state;
    if ( !CenterNum )
      goto LABEL_52;
    pushTabButton = (int32_t)v34->fields.pushTabButton;
    if ( CenterNum->fields.m_CancellationTokenSource )
    {
      v36 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
      if ( v36 )
      {
        v37 = v36;
        v38 = (System_Int32_array *)sub_1B64204(v36, int___TypeInfo);
        if ( !v38 )
          goto LABEL_43;
      }
      else
      {
        v38 = 0LL;
      }
    }
    else
    {
      v40 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      v38 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v40->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v34->fields.callbackFunc;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v41 = System_Array__Clone((System_Array_o *)CenterNum, 0LL);
    if ( !v41 )
    {
      v43 = 0LL;
      goto LABEL_48;
    }
    v37 = v41;
    v43 = (System_Int32_array *)sub_1B64204(v41, int___TypeInfo);
    if ( v43 )
      goto LABEL_48;
LABEL_43:
    sub_1B645E4(v37);
LABEL_44:
    v44 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v44 = BalanceConfig_TypeInfo;
    }
    v43 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v44->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v42);
    v45 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickBack__);
    v46 = (System_Reflection_MethodBase_o *)sub_1B640AC(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v52 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1B64314(
                                                        CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo,
                                                        v50,
                                                        v51);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v52,
      (Il2CppObject *)this,
      (intptr_t)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__,
      v53);
    if ( cancelConfirmDeckIdDialog )
    {
      CancelConfirmDeckIdDialog__Open(
        cancelConfirmDeckIdDialog,
        v33 + 1,
        pushTabButton,
        tempFixMainQuestSupportDeckIds,
        tempFixEventQuestSupportDeckIds,
        v38,
        v43,
        v52,
        0LL);
      return;
    }
LABEL_52:
    sub_1B64324(CenterNum);
  }
  v12 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickBack__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v21; // x1
  __int64 v22; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1

  if ( (byte_49F8E9E & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__, v8);
    byte_49F8E9E = 1;
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
    sub_1B6432C(FixedErrorList, v14);
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
        v18 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v23 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v21,
                                                         v22);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v24);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v23, v25);
        return;
      }
LABEL_19:
      sub_1B64324(FixedErrorList);
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
      v30);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v31);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v33);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v34);
  }
  else
  {
    v26 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v29);
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
  __int64 v21; // x1
  __int64 v22; // x2
  SupportSelectConfirmMenu_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1

  if ( (byte_49F8E9D & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__, v8);
    byte_49F8E9D = 1;
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
    sub_1B6432C(FixedErrorList, v14);
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
        v18 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v23 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                         SupportSelectConfirmMenu_CallbackFunc_TypeInfo,
                                                         v21,
                                                         v22);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        v24);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v23, v25);
        return;
      }
LABEL_19:
      sub_1B64324(FixedErrorList);
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
      v30);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v31);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v33);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v34);
  }
  else
  {
    v26 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    if ( !fixErrorDialog )
      goto LABEL_19;
    SupportDeckFixErrorDialog__Open(fixErrorDialog, (System_String_array *)FixedErrorList, v29);
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectEditMenu_o *supportEditMenu; // x20
  _BOOL4 isEdit; // w23
  SupportServantData_o *v10; // x21
  SupportSelectEditMenu_OnClickButtonEvent_o *v11; // x22
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4

  if ( (byte_49F8EA4 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_49F8EA4 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B6432C(CenterNum, v5);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v10 = supportServantData->m_Items[(int)CenterNum];
  v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                        SupportSelectEditMenu_OnClickButtonEvent_TypeInfo,
                                                        v5,
                                                        v6);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    v12);
  if ( !supportEditMenu )
LABEL_7:
    sub_1B64324(CenterNum);
  SupportSelectEditMenu__Open(supportEditMenu, v10, isEdit, v11, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_49F8E9F & 1) == 0 )
  {
    sub_1B640C8(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__, isFixed);
    byte_49F8E9F = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
  SupportSelectRootComponent_o *v3; // x19
  unsigned int *supportServantData; // x23
  unsigned __int64 v5; // x22
  __int64 v6; // x24
  unsigned __int64 v7; // x8
  SupportServantData_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v12; // x22
  __int64 v13; // x24
  unsigned __int64 v14; // x8
  SupportServantData_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v19; // x22
  __int64 v20; // x24
  unsigned __int64 v21; // x8
  SupportServantData_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0

  v3 = this;
  if ( (byte_49F8E82 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&SupportServantData_TypeInfo, method);
    byte_49F8E82 = 1;
  }
  supportServantData = (unsigned int *)v3->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_35;
  v5 = 0LL;
  v6 = 8LL;
  while ( 1 )
  {
    v7 = supportServantData[6];
    if ( (__int64)v5 >= (int)v7 )
      break;
    if ( v5 >= v7 )
      goto LABEL_37;
    if ( !*(_QWORD *)&supportServantData[2 * v5 + 8] )
    {
      v8 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v8, 0LL);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B64204(v8, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v25 = sub_1B64348();
          sub_1B641F0(v25, 0LL);
        }
      }
      if ( v5 >= supportServantData[6] )
LABEL_37:
        sub_1B6432C(this, method);
      *(_QWORD *)&supportServantData[2 * v5 + 8] = v8;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&supportServantData[v6], (int32_t)v8, v9, v10);
      supportServantData = (unsigned int *)v3->fields.supportServantData;
    }
    ++v5;
    v6 += 2LL;
    if ( !supportServantData )
      goto LABEL_35;
  }
  orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
  if ( !orgSupportServantData )
    goto LABEL_35;
  v12 = 0LL;
  v13 = 8LL;
  while ( 1 )
  {
    v14 = orgSupportServantData[6];
    if ( (__int64)v12 >= (int)v14 )
      break;
    if ( v12 >= v14 )
      goto LABEL_37;
    if ( !*(_QWORD *)&orgSupportServantData[2 * v12 + 8] )
    {
      v15 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v15, 0LL);
      if ( v15 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B64204(v15, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v12 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v12 + 8] = v15;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&orgSupportServantData[v13], (int32_t)v15, v16, v17);
      orgSupportServantData = (unsigned int *)v3->fields.orgSupportServantData;
    }
    ++v12;
    v13 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_1B64324(this);
  v19 = 0LL;
  v20 = 8LL;
  while ( 1 )
  {
    v21 = tmpSupportServantData[6];
    if ( (__int64)v19 >= (int)v21 )
      break;
    if ( v19 >= v21 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v19 + 8] )
    {
      v22 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v22, 0LL);
      if ( v22 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B64204(v22, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v19 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v19 + 8] = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&tmpSupportServantData[v20], (int32_t)v22, v23, v24);
      tmpSupportServantData = (unsigned int *)v3->fields.tmpSupportServantData;
    }
    ++v19;
    v20 += 2LL;
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
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_49F8EA9 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_49F8EA9 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B6432C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    v11);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64324(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v9, v10, v12);
}


void __fastcall SupportSelectRootComponent__RemoveAllEquip(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 CenterNum; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x20
  SupportServantData_o *v9; // x21
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4

  if ( (byte_49F8EAD & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_49F8EAD = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B6432C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B64314(
                                                               SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo,
                                                               v5,
                                                               v6);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    v11);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B64324(CenterNum);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v9, v10, v12);
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
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x21

  if ( (byte_49F8E8F & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v8);
    byte_49F8E8F = 1;
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
        sub_1B6432C(Instance, v11);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], 0LL);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22137/*"ok"*/, v16);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v19,
                                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1B64324(Instance);
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
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  SupportSelectListViewIndicator_o *indicator; // x19
  const MethodInfo *v13; // x2

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
      sub_1B6432C(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&IsNullOrEmpty->fields.decideButton,
            (int32_t)editDeckName,
            v6,
            v7),
          SupportSelectRootComponent__SaveTemp(this, -1, v10),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0LL)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, v11),
          !indicator) )
    {
LABEL_8:
      sub_1B64324(IsNullOrEmpty);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, v13);
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
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_49F8EA3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_1B640C8(&Method_SupportSelectRootComponent_ReturnScene__, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_49F8EA3 = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    v8 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0(Method_SupportSelectRootComponent_ReturnScene__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
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
      SupportSelectMenu__Reset(supportSelectMenu, v14, v15);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v16);
      goto LABEL_11;
    }
LABEL_20:
    sub_1B64324(supportSelectMenu);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B6432C(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1B64324(this);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  const MethodInfo *v16; // x1
  int32_t CenterNum; // w0
  const MethodInfo *v18; // x2
  bool IsFixedMainQuestSupportDeckIdNow; // w22
  const MethodInfo *v20; // x1
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  bool IsFixedEventQuestSupportDeckIdNow; // w23
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w24
  int32_t i; // w25
  int32_t v28; // w26
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v39; // x20
  System_Int32_array *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v43; // x24
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x5

  if ( (byte_49F8EA6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_49F8EA6 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, method);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v13, v14);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v16);
  IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                       this,
                                       CenterNum + 1,
                                       v18);
  v21 = SupportSelectRootComponent__getCenterNum(this, v20);
  IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v21 + 1, v22);
  v26 = SupportSelectRootComponent__getCenterNum(this, v24);
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
    if ( v26 == i )
      continue;
    if ( IsFixedMainQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v25),
          ((unsigned __int8)supportEditMenu & 1) != 0)
      || (v28 = i + 1, IsFixedEventQuestSupportDeckIdNow)
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         v28,
                                                         v25),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v12 )
        goto LABEL_33;
      items = v12->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_33;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          i,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size + 1] = i;
      }
    }
    else if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v28, v25)
           || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                              this,
                                                              i,
                                                              this->fields.tempFixMainQuestSupportDeckIds,
                                                              v32),
               ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v28, v25) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v33);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v15 )
      goto LABEL_33;
    v34 = v15->fields._items;
    v35 = Method_System_Collections_Generic_List_int__Add__;
    ++v15->fields._version;
    if ( !v34 )
      goto LABEL_33;
    v36 = v15->fields._size;
    if ( (unsigned int)v36 >= v34->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v15,
        i,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = v36 + 1;
      v34->m_Items[v36 + 1] = i;
    }
  }
  if ( !v12
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v12,
                                                       (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v15)
    || (v39 = (System_Int32_array *)supportEditMenu,
        v40 = System_Collections_Generic_List_int___ToArray(
                v15,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        v43 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1B64314(
                                                                   SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo,
                                                                   v41,
                                                                   v42),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v43,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          v44),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1B64324(supportEditMenu);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v39, v40, v43, v45);
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
    sub_1B64324(supportSelectMenu);
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

  if ( (byte_49F8E8E & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, list);
    byte_49F8E8E = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (ServantStatusBattleListViewItem_o *)&this->fields.cacheAssetNameList;
  v6 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_37484096(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (ServantStatusBattleListViewItem_c *)list;
  sub_1B6406C(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3);
  if ( v6 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_37486440(v6, 0LL);
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x0
  __int64 *v23; // x8
  __int64 v24; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v26; // x8
  SupportSelectRootComponent_o *v27; // x23
  struct SupportServantData_array *v28; // x8
  int32_t v29; // w1
  struct SupportServantData_array *v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-50h]

  v8 = this;
  if ( (byte_49F8E95 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_System_Array_IndexOf_long___, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_1B640C8(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_49F8E95 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( result != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
    v23 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_40698696(userSvtEntity->fields.svtId, 0LL);
    v16 = item->fields.userSvtEntity;
    if ( !v16 )
      goto LABEL_32;
    v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v18 = (int)this;
    *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v38.fields.fakeValue = v17;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v37, 0LL, 0LL);
    v18 = 0;
    v38 = v37;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v36 = v38;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v36, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1B64324(this);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v26 = supportServantData->m_Items[selectNum];
  if ( !v26 )
    goto LABEL_32;
  v27 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v26->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_2F31F78 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v28 = v8->fields.supportServantData;
    if ( !v28 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v28->max_length )
      goto LABEL_33;
    v29 = (int)this;
    this = (SupportSelectRootComponent_o *)v28->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, v29, 0LL);
  }
  v30 = v8->fields.supportServantData;
  if ( !v30 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= v30->max_length )
LABEL_33:
    sub_1B6432C(this, v24);
  this = (SupportSelectRootComponent_o *)v30->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v27, v18, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  v23 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v33 = v22;
  System_Action___ctor(v22, (Il2CppObject *)v8, *v23, 0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v33, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v34) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v35);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, v35);
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
  __int64 v23; // x2
  __int64 v24; // x25
  __int64 v25; // x26
  __int64 v26; // x27
  struct System_Int32_array *v27; // x8
  unsigned __int64 v28; // x29
  unsigned int *v29; // x23
  SupportServantData_o *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  unsigned int *v33; // x8
  struct SupportInfoJump_o *v34; // x10
  struct System_Int32_array *v35; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v37; // x26
  __int64 v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  unsigned __int64 v41; // x28
  unsigned int v42; // w27
  struct System_Int32_array *v43; // x8
  unsigned int *v44; // x23
  SupportServantData_o *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  unsigned int *v48; // x0
  unsigned int *v49; // x8
  struct SupportInfoJump_o *v50; // x9
  struct System_Int32_array *v51; // x10
  unsigned __int64 v52; // x25
  struct System_Int32_array *v53; // x8
  unsigned int *v54; // x23
  SupportServantData_o *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  unsigned int *v58; // x0
  unsigned int *v59; // x8
  struct SupportInfoJump_o *v60; // x9
  struct System_Int32_array *v61; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x0

  v5 = this;
  if ( (byte_49F8E87 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, deckIndex);
    sub_1B640C8(&BalanceConfig_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v8);
    sub_1B640C8(&SupportServantData___TypeInfo, v9);
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&SupportServantData_TypeInfo, v10);
    byte_49F8E87 = 1;
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
      sub_1B6432C(this, deckIndex);
    *(_QWORD *)&v16[i] = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16[i], 0, (int32_t)method, v3);
    ++v13;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    v37 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v38 = sub_1B64170(SupportServantData___TypeInfo, (unsigned int)(v37 + v18));
    *p_supportServantData = (unsigned int *)v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v38, v39, v40);
    if ( (int)v18 < 1 )
    {
      v42 = 0;
LABEL_52:
      if ( (int)v37 < 1 )
        goto LABEL_69;
      v52 = 0LL;
      while ( 1 )
      {
        v53 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v53 )
          break;
        if ( v52 >= v53->max_length )
          goto LABEL_74;
        if ( v53->m_Items[v52 + 1] >= 1 )
        {
          v54 = *p_supportServantData;
          v55 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, deckIndex, v23);
          SupportServantData___ctor(v55, 0LL);
          if ( !v54 )
            break;
          if ( v55 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B64204(v55, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v42 >= v54[6] )
            goto LABEL_74;
          v58 = &v54[2 * v42];
          *((_QWORD *)v58 + 4) = v55;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 8), (int32_t)v55, v56, v57);
          v59 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v42 >= v59[6] )
            goto LABEL_74;
          v60 = v5->fields.supportInfoJump;
          if ( !v60 )
            break;
          v61 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v61 )
            break;
          if ( v52 >= v61->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v59[2 * v42 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33049960(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v60->fields.kind,
            v60->fields.isSelect,
            v60->fields.eventSetupInfo,
            1,
            v61->m_Items[v52 + 1],
            0LL);
          ++v42;
        }
        if ( (unsigned int)v37 == ++v52 )
          goto LABEL_69;
      }
    }
    else
    {
      v41 = 0LL;
      v42 = 0;
      while ( 1 )
      {
        v43 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v43 )
          break;
        if ( v41 >= v43->max_length )
          goto LABEL_74;
        if ( v43->m_Items[v41 + 1] >= 1 )
        {
          v44 = *p_supportServantData;
          v45 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, deckIndex, v23);
          SupportServantData___ctor(v45, 0LL);
          if ( !v44 )
            break;
          if ( v45 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B64204(v45, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
            if ( !this )
            {
LABEL_75:
              v67 = sub_1B64348();
              sub_1B641F0(v67, 0LL);
            }
          }
          if ( v42 >= v44[6] )
            goto LABEL_74;
          v48 = &v44[2 * v42];
          *((_QWORD *)v48 + 4) = v45;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 8), (int32_t)v45, v46, v47);
          v49 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v42 >= v49[6] )
            goto LABEL_74;
          v50 = v5->fields.supportInfoJump;
          if ( !v50 )
            break;
          v51 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v51 )
            break;
          if ( v41 >= v51->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v49[2 * v42 + 8];
          if ( !this )
            break;
          SupportServantData__Init_33049960(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v50->fields.kind,
            v50->fields.isSelect,
            v50->fields.eventSetupInfo,
            0,
            v51->m_Items[v41 + 1],
            0LL);
          ++v42;
        }
        if ( v19 == ++v41 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1B64324(this);
  }
  v20 = sub_1B64170(SupportServantData___TypeInfo, (unsigned int)v18);
  *p_supportServantData = (unsigned int *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.supportServantData, v20, v21, v22);
  if ( (int)v18 >= 1 )
  {
    v24 = -(__int64)(unsigned int)v18;
    v25 = 8LL;
    v26 = 8LL;
    do
    {
      v27 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v27 )
        goto LABEL_73;
      v28 = v25 - 8;
      if ( v25 - 8 >= (unsigned __int64)v27->max_length )
        goto LABEL_74;
      if ( *((int *)&v27->obj.klass + v25) >= 1 )
      {
        v29 = *p_supportServantData;
        v30 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, deckIndex, v23);
        SupportServantData___ctor(v30, 0LL);
        if ( !v29 )
          goto LABEL_73;
        if ( v30 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B64204(v30, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v28 >= v29[6] )
          goto LABEL_74;
        *(_QWORD *)&v29[v26] = v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29[v26], (int32_t)v30, v31, v32);
        v33 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v28 >= v33[6] )
          goto LABEL_74;
        v34 = v5->fields.supportInfoJump;
        if ( !v34 )
          goto LABEL_73;
        v35 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v35 )
          goto LABEL_73;
        if ( v28 >= v35->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v33[v26];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_33049960(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v34->fields.kind,
          v34->fields.isSelect,
          v34->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v35->obj.klass + v25),
          0LL);
      }
      ++v25;
      v26 += 2LL;
    }
    while ( v24 + v25 != 8 );
  }
LABEL_69:
  supportSelectMenu = v5->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_73;
  indicator = supportSelectMenu->fields.indicator;
  v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, deckIndex, v23);
  System_Action___ctor(v64, (Il2CppObject *)v5, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v64, v65, v66);
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
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  SupportSelectRootComponent___c_c *v35; // x0
  System_Func_int__bool__o *_9__49_0; // x22
  Il2CppObject *v37; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  unsigned int v42; // w0
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x2
  void *monitor; // x8
  __int64 v48; // x24
  __int64 v49; // x23
  unsigned __int64 v50; // x25
  unsigned int *v51; // x26
  SupportServantData_o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  unsigned int *v55; // x9
  struct SupportInfoJump_o *v56; // x8
  __int64 v57; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  struct SupportInfoJump_o *v63; // x8
  QuestRestrictionInfo_o *v64; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v66; // x0

  v4 = this;
  if ( (byte_49F8E88 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BalanceConfig_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v10);
    sub_1B640C8(&int___TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B640C8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v14);
    sub_1B640C8(&SupportServantData___TypeInfo, v15);
    sub_1B640C8(&SupportServantData_TypeInfo, v16);
    sub_1B640C8(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v17);
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&SupportSelectRootComponent___c_TypeInfo, v18);
    byte_49F8E88 = 1;
  }
  supportInfoJump = v4->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v20 = v4->fields.supportInfoJump;
  if ( !v20 )
    goto LABEL_57;
  questRestrictionInfo = v20->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[i], 0, v2, v3);
    ++v24;
  }
  v28 = v4->fields.supportInfoJump;
  if ( !v28 || (followerInfo = v28->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1B64324(this);
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
  v33 = v30;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64204(v30, int___TypeInfo);
  if ( !v34 )
  {
    sub_1B645E4(v33);
LABEL_28:
    v34 = 0LL;
  }
  v35 = SupportSelectRootComponent___c_TypeInfo;
  if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
    v35 = SupportSelectRootComponent___c_TypeInfo;
  }
  _9__49_0 = v35->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = SupportSelectRootComponent___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__49_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v31, v32);
    System_Func_int__bool____ctor(
      _9__49_0,
      v37,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v39, v40);
  }
  v41 = System_Linq_Enumerable__Where_int_(
          v34,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  v42 = System_Linq_Enumerable__Count_int_(v41, (const MethodInfo_2E558E8 *)Method_System_Linq_Enumerable_Count_int___);
  v43 = sub_1B64170(SupportServantData___TypeInfo, v42);
  *p_supportServantData = (unsigned int *)v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.supportServantData, v43, v44, v45);
  if ( !v34 )
    goto LABEL_57;
  monitor = v34[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v48 = 8LL;
    v49 = 8LL;
    while ( 1 )
    {
      v50 = v48 - 8;
      if ( v48 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v34->klass + v48) >= 1 )
      {
        v51 = *p_supportServantData;
        v52 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, method, v46);
        SupportServantData___ctor(v52, 0LL);
        if ( !v51 )
          goto LABEL_57;
        if ( v52 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B64204(v52, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
          if ( !this )
          {
            v66 = sub_1B64348();
            sub_1B641F0(v66, 0LL);
          }
        }
        if ( v50 >= v51[6] )
          break;
        *(_QWORD *)&v51[v49] = v52;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v51[v49], (int32_t)v52, v53, v54);
        v55 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v50 >= v55[6] )
          break;
        v56 = v4->fields.supportInfoJump;
        if ( !v56 )
          goto LABEL_57;
        if ( v50 >= LODWORD(v34[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v55[v49];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_33050800(
          (SupportServantData_o *)this,
          v56->fields.followerInfo,
          v56->fields.kind,
          v56->fields.isSelect,
          v56->fields.eventSetupInfo,
          v56->fields.questRestrictionInfo,
          *((_DWORD *)&v34->klass + v48),
          0LL);
      }
      LODWORD(monitor) = v34[1].monitor;
      v57 = v48 - 7;
      ++v48;
      v49 += 2LL;
      if ( v57 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1B6432C(this, method);
  }
LABEL_51:
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v46);
  System_Action___ctor(v60, (Il2CppObject *)v4, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v60, v61, v62);
  v63 = v4->fields.supportInfoJump;
  if ( !v63 )
    goto LABEL_57;
  v64 = v63->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v4->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v64, this->fields.kind, 0LL, 0LL);
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
  int v19; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v21; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
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
  __int64 v52; // x2
  int32_t v53; // w3
  struct SupportServantData_array *supportServantData; // x21
  __int64 v55; // x8
  unsigned __int64 v56; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v58; // x21
  SupportServantData_array *v59; // x22
  SupportSelectMenu_CallbackFunc_o *v60; // x23
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  SupportSelectMenu_DragSwapCallbackFunc_o *v64; // x24
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x5
  __int64 v67; // x1
  __int64 v68; // x2
  struct SupportSelectMenu_o *v69; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v71; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  const MethodInfo *v74; // x1
  struct SupportSelectMenu_o *v75; // x8
  __int64 v76; // x2
  int32_t v77; // w3
  struct SupportServantData_array *v78; // x20
  __int64 v79; // x8
  unsigned __int64 v80; // x21
  struct EventUpValSetupInfo_o *v81; // x1
  SupportSelectMenu_o *v82; // x20
  SupportServantData_array *v83; // x21
  int32_t v84; // w22
  SupportSelectMenu_CallbackFunc_o *v85; // x23
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  __int64 v88; // x2
  SupportSelectMenu_DragSwapCallbackFunc_o *v89; // x24
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x5
  const MethodInfo *v92; // x2
  struct SupportServantData_array *v93; // x8
  bool v94; // w1
  __int64 v95; // x1
  __int64 v96; // x2
  System_Action_o *v97; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F8E89 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v3);
    sub_1B640C8(&BalanceConfig_TypeInfo, v4);
    sub_1B640C8(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_1B640C8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_1B640C8(&StringLiteral_12412/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_49F8E89 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12412/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    v19 = v18->static_fields->SupportDeckMax - 1;
    if ( Int >= v19 )
      Int = v19;
    deckIndex = Int;
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v21 = (struct System_Int32_array *)sub_1B64170(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v21;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int32_t)v21,
      v23,
      v24);
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
    v33 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v33;
    sub_1B6406C(
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
    SupportSelectRootComponent__initSupportServantDatas(this, v25);
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
          TitleInfoControl__setTitleInfo_36878412(
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
                        sub_1B6406C(
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
                    sub_1B6432C(followerQuestInfomationDraw, v25);
                  }
LABEL_49:
                  v58 = this->fields.supportSelectMenu;
                  v59 = this->fields.supportServantData;
                  v60 = (SupportSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                              SupportSelectMenu_CallbackFunc_TypeInfo,
                                                              v25,
                                                              v52);
                  SupportSelectMenu_CallbackFunc___ctor(
                    v60,
                    (Il2CppObject *)this,
                    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                    v61);
                  v64 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B64314(
                                                                      SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                                      v62,
                                                                      v63);
                  SupportSelectMenu_DragSwapCallbackFunc___ctor(
                    v64,
                    (Il2CppObject *)this,
                    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                    v65);
                  if ( v58 )
                  {
                    SupportSelectMenu__Open(v58, v59, Int, v60, v64, v66);
                    v69 = this->fields.supportSelectMenu;
                    if ( v69 )
                    {
                      indicator = v69->fields.indicator;
                      v71 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v67, v68);
                      System_Action___ctor(
                        v71,
                        (Il2CppObject *)this,
                        Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                        0LL);
                      if ( indicator )
                      {
                        indicator->fields.modifyCenterItemCallBack = v71;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&indicator->fields.modifyCenterItemCallBack,
                          (int32_t)v71,
                          v72,
                          v73);
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
    sub_1B64324(followerQuestInfomationDraw);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, v16);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  TitleInfoControl__setTitleInfo_36878412(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    81,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v74);
  v75 = this->fields.supportSelectMenu;
  if ( !v75 )
    goto LABEL_76;
  followerQuestInfomationDraw = (SupportServantData_o *)v75->fields.headerObject;
  if ( !followerQuestInfomationDraw )
    goto LABEL_76;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v78 = this->fields.supportServantData;
  if ( !v78 )
    goto LABEL_76;
  v79 = *(_QWORD *)&v78->max_length;
  if ( (int)v79 >= 1 )
  {
    v80 = 0LL;
    while ( v80 < (unsigned int)v79 )
    {
      followerQuestInfomationDraw = v78->m_Items[v80];
      if ( followerQuestInfomationDraw )
      {
        v81 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v81;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int32_t)v81,
          v76,
          v77);
      }
      LODWORD(v79) = v78->max_length;
      if ( (__int64)++v80 >= (int)v79 )
        goto LABEL_65;
    }
    goto LABEL_77;
  }
LABEL_65:
  v82 = this->fields.supportSelectMenu;
  v83 = this->fields.supportServantData;
  v84 = deckIndex;
  v85 = (SupportSelectMenu_CallbackFunc_o *)sub_1B64314(SupportSelectMenu_CallbackFunc_TypeInfo, v25, v76);
  SupportSelectMenu_CallbackFunc___ctor(
    v85,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v86);
  v89 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B64314(
                                                      SupportSelectMenu_DragSwapCallbackFunc_TypeInfo,
                                                      v87,
                                                      v88);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v89,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v90);
  if ( !v82 )
    goto LABEL_76;
  SupportSelectMenu__Open(v82, v83, v84, v85, v89, v91);
  v93 = this->fields.supportServantData;
  if ( !v93 )
    goto LABEL_76;
  v94 = (int)v93->max_length >= 2 && v93->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v94, v92);
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
  v97 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v95, v96);
  System_Action___ctor(v97, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v97, 2, 1, 0LL);
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
  if ( (byte_49F8E9B & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_49F8E9B = 1;
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
    sub_1B64324(this);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1B6432C(this, *(_QWORD *)&idx);
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
    sub_1B64324(titleInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  SupportSelectRootComponent_o *v4; // x19
  struct SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  v4 = this;
  if ( (byte_49F8E8D & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B640C8(
                                             &Method_SingletonMonoBehaviour_AtlasManager__get_Instance__,
                                             method);
    byte_49F8E8D = 1;
  }
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  supportSelectMenu->fields.supportServantData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&supportSelectMenu->fields.supportServantData, 0, v2, v3);
  BaseMenu__Init((BaseMenu_o *)supportSelectMenu, 0LL);
  this = (SupportSelectRootComponent_o *)v4->fields.supportServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)this, 0LL);
  this = (SupportSelectRootComponent_o *)v4->fields.supportSelectConfirmMenu;
  if ( !this )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)this, v6);
  this = (SupportSelectRootComponent_o *)v4->fields.cancelConfirmMenu;
  if ( !this )
    goto LABEL_15;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)this, v7);
  this = (SupportSelectRootComponent_o *)v4->fields.deckNameInputMenu;
  if ( !this )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)this, v8);
  this = (SupportSelectRootComponent_o *)v4->fields.fixErrorDialog;
  if ( !this )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)this, v9);
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
        (this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1B64324(this);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)this, 2, 0, 0LL);
  v4->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(v4, 0LL, v10);
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

  if ( (byte_49F8E81 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&SupportServantData___TypeInfo, v4);
    sub_1B640C8(&StringLiteral_13033/*"SvtEqScrollBarValue"*/, v5);
    byte_49F8E81 = 1;
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
    v9 = (struct SupportServantData_array *)sub_1B64170(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v9, v10, v11);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (struct SupportServantData_array *)sub_1B64170(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v12->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.orgSupportServantData, (int32_t)v13, v14, v15);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_1B64170(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v17;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tmpSupportServantData, (int32_t)v17, v18, v19);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13033/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  struct SupportInfoJump_o *v31; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  EventUpValSetupInfo_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  EventUpValSetupInfo_o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1

  if ( (byte_49F8E8A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, data);
    sub_1B640C8(&AtlasManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_EventQuestMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B640C8(&SceneJumpInfo_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&SupportInfoJump_TypeInfo, v14);
    sub_1B640C8(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v15);
    byte_49F8E8A = 1;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, v24, (int32_t)method, v3);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3);
    v22 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_sceneJumpInfo, v22, v20, v21);
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
  v31 = *p_supportInfoJump;
  if ( !*p_supportInfoJump || !v31->fields.otherUserGameEntity || !v31->fields.questRestrictionInfo )
  {
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v44 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
        v47 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v45, v46);
        EventUpValSetupInfo___ctor_38592760(v47, v44, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v47;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v47, v48, v49);
        SupportSelectRootComponent__StartUp(this, v50);
        return;
      }
    }
LABEL_41:
    sub_1B64324(bgTxtSprite);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  v34 = System_Linq_Enumerable__ToArray_int_(
          OngoingQuestTargetEventIds,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v35, v36);
  EventUpValSetupInfo___ctor_38592760(v37, v34, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v37;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventSetupInfo, (int32_t)v37, v38, v39);
  v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__51_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v42, 0LL);
}


int32_t __fastcall SupportSelectRootComponent__getCenterNum(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B64324(0LL);
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
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x24
  il2cpp_array_size_t v5; // w20
  __int64 v6; // x23
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0

  v3 = this;
  if ( (byte_49F8EB2 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B640C8(&SupportServantData_TypeInfo, method);
    byte_49F8EB2 = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1B64324(this);
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
      v8 = (SupportServantData_o *)sub_1B64314(SupportServantData_TypeInfo, method, v2);
      SupportServantData___ctor(v8, 0LL);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B64204(v8, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v11 = sub_1B64348();
          sub_1B641F0(v11, 0LL);
        }
      }
      if ( v5 >= supportServantData->max_length )
LABEL_17:
        sub_1B6432C(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) = (Il2CppClass *)v8;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)supportServantData + v6), (int32_t)v8, v9, v10);
      supportServantData = v3->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v5 >= supportServantData->max_length )
      goto LABEL_17;
    this = *(SupportSelectRootComponent_o **)((char *)&supportServantData->obj.klass + v6);
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v5, v3->fields.eventSetupInfo, 0LL);
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

  if ( (byte_49F8EB1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, servant);
    byte_49F8EB1 = 1;
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
    sub_1B6432C(OldServant, v8);
  OldServant = v18->m_Items[CenterNum];
  if ( !OldServant )
LABEL_30:
    sub_1B64324(OldServant);
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
  const MethodInfo *v9; // x4
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  __int64 v12; // x1
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

  if ( (byte_49F8E8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_49F8E8C = 1;
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
              (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
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
          (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v22 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v22,
                            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                                    (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
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
              (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___)
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
    sub_1B6432C(eventSupportDeckIds, v12);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
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
          v9),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_1B64324(eventSupportDeckIds);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v28,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    v29);
}


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
    sub_1B64324(blackMask);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, v14, v15);
  SupportSelectRootComponent__ChangeTitle(this, v16);
}


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
    sub_1B64324(scrollView);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, v6);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8EB7 & 1) == 0 )
  {
    sub_1B640C8(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_49F8EB7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SupportSelectRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49F8EB8 & 1) == 0 )
  {
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_49F8EB8 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v19; // w21
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_49F8EB9 & 1) == 0 )
  {
    sub_1B640C8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SupportSelectRootComponent_OnBackSelect__, v6);
    byte_49F8EB9 = 1;
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
      sub_1B6432C(_4__this, isDecide);
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(_4__this, 0LL);
    v16 = (Il2CppObject *)this->fields.__4__this;
    if ( !v16
      || (monitor = (System_Int32_array *)v16[18].monitor,
          klass = (System_Int32_array *)v16[19].klass,
          v19 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B64314(
                                                                  SupportServantSelectMenu_CallbackFunc_TypeInfo,
                                                                  v14,
                                                                  v15),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v16,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1B64324(_4__this);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v19,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v8; // x1
  struct SupportSelectRootComponent_o *v9; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v12; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x28
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  int32_t v21; // w19
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v23; // x3

  if ( (byte_49F8EBA & 1) == 0 )
  {
    sub_1B640C8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v6);
    byte_49F8EBA = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_15;
    supportServantData = v9->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v9->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B6432C(_4__this, v8);
    v12 = supportServantData->m_Items[selectNum];
    if ( !v12 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v12->fields.eventSetupInfo2;
    v15 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__GetCurrentDeckID(this->fields.__4__this, 0LL);
    v18 = (Il2CppObject *)this->fields.__4__this;
    if ( !v18
      || (monitor = (System_Int32_array *)v18[18].monitor,
          klass = (System_Int32_array *)v18[19].klass,
          v21 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B64314(
                                                                     SupportServantEquipListMenu_CallbackFunc_TypeInfo,
                                                                     v16,
                                                                     v17),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v18,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v23),
          !v15) )
    {
LABEL_15:
      sub_1B64324(_4__this);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v15,
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
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.svtId == svtInfo->fields.svtId;
}