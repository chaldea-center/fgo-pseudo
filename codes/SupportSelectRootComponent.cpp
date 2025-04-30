void __fastcall SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4ACB2 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectRootComponent_TypeInfo, v1);
    byte_4A4ACB2 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void __fastcall SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4ACB1 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&int___TypeInfo, v3);
    byte_4A4ACB1 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v5, v6, v7);
  v8 = (struct System_Int32_array *)sub_1B86460(
                                      int___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v8, v9, v10);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4A4AC8C & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12347/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, result);
    byte_4A4AC8C = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_12347/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0LL);
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

  if ( (byte_4A4ACAB & 1) == 0 )
  {
    sub_1B863B8(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndChangeDeckName__, v3);
    byte_4A4ACAB = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B8661C(CenterNum, v5);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, v5),
        v10 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_1B86604(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0LL),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_1B86614(CenterNum, v5);
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
    sub_1B86614(titleInfo, method);
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

  if ( (byte_4A4ACA4 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&targetDeckId);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__, v5);
    byte_4A4ACA4 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v10 = this->fields.copyTargetDeckId - 1, v10 >= max_length) )
    sub_1B8661C(CenterNum, v7);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v12 = supportServantData->m_Items[(int)CenterNum];
  v13 = supportServantData->m_Items[v10];
  v14 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v14,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0LL);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_1B86614(CenterNum, v7);
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
  int v10; // w24
  SupportSelectRootComponent_o **v11; // x25

  if ( (byte_4A4ACAF & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&BalanceConfig_TypeInfo, orgData);
    byte_4A4ACAF = 1;
  }
  if ( !orgData )
LABEL_18:
    sub_1B86614(this, orgData);
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
          sub_1B8661C(this, orgData);
        this = *v11;
        if ( !*v11 )
          goto LABEL_18;
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  SupportSelectRootComponent_o *v8; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2

  if ( (byte_4A4AC9E & 1) == 0 )
  {
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, isDecide);
    byte_4A4AC9E = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_10;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0LL);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
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
      SupportSelectMenu__Reset((SupportSelectMenu_o *)cancelConfirmMenu, -1, 0LL);
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v10);
      return;
    }
LABEL_10:
    sub_1B86614(cancelConfirmMenu, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
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

  if ( (byte_4A4AC9D & 1) == 0 )
  {
    sub_1B863B8(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, isDecide);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    byte_4A4AC9D = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_10;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0LL);
  v7 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
  if ( isDecide )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0LL);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22061/*"ok"*/, v9);
      return;
    }
LABEL_10:
    sub_1B86614(cancelConfirmDeckIdDialog, isDecide);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v10; // x21

  if ( (byte_4A4ACAC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__, v7);
    byte_4A4ACAC = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.editDeckName, (int32_t)changeName, (int32_t)changeName, method);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0LL);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__110_0__,
        0LL);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_33940420(deckNameInputMenu, v10, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B86614(supportEditMenu, isDecide);
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
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B86614(0LL, method);
  SupportSelectMenu__Reset(supportSelectMenu, this->fields.classPos, 0LL);
}


void __fastcall SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B86614(0LL, method);
  SupportSelectMenu__Redisp(supportSelectMenu, 0LL);
}


void __fastcall SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A4AC95 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A4AC95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
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
        sub_1B8661C(CenterNum, isDecide);
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
            SupportSelectMenu__Reset((SupportSelectMenu_o *)CenterNum, -1, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B86614(CenterNum, isDecide);
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
    sub_1B86614(0LL, flag);
  SupportSelectConfirmMenu__Close_33949924(supportSelectConfirmMenu, 0LL, 0LL);
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
  System_String_o *DefaultDeckName; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  int32_t i; // w21
  struct SupportServantData_array *v16; // x8
  const MethodInfo *v17; // x2
  struct SupportServantData_array *v18; // x8
  struct SupportServantData_array *v19; // x8
  struct SupportServantData_array *v20; // x8
  const MethodInfo *v21; // x2

  if ( (byte_4A4ACA8 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isDecide);
    byte_4A4ACA8 = 1;
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
        sub_1B8661C(confirmDeckMenu, isDecide);
      v9 = &supportServantData->obj.klass + (int)confirmDeckMenu;
      v10 = v9[4];
      if ( v10 )
      {
        DefaultDeckName = SupportServantData__getDefaultDeckName(
                            (SupportServantData_o *)v9[4],
                            (const MethodInfo *)isDecide);
        v10->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_1B8635C((CGThumbnailListItem_o *)&v10->_1.klass, (int32_t)DefaultDeckName, v12, v13);
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
          v16 = this->fields.supportServantData;
          if ( !v16 )
            goto LABEL_33;
          if ( v8 >= v16->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v16->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, i, v14);
          if ( confirmDeckMenu >= 1 )
          {
            v18 = this->fields.supportServantData;
            if ( !v18 )
              goto LABEL_33;
            if ( v8 >= v18->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v18->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, v17);
          }
          v19 = this->fields.supportServantData;
          if ( !v19 )
            goto LABEL_33;
          if ( v8 >= v19->max_length )
            goto LABEL_34;
          confirmDeckMenu = (__int64)v19->m_Items[v8];
          if ( !confirmDeckMenu )
            goto LABEL_33;
          confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, i, v17);
          if ( confirmDeckMenu >= 1 )
          {
            v20 = this->fields.supportServantData;
            if ( !v20 )
              goto LABEL_33;
            if ( v8 >= v20->max_length )
              goto LABEL_34;
            confirmDeckMenu = (__int64)v20->m_Items[v8];
            if ( !confirmDeckMenu )
              goto LABEL_33;
            SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v14);
          }
        }
        confirmDeckMenu = (__int64)this->fields.supportEditMenu;
        if ( confirmDeckMenu )
        {
          SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
          confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
          if ( confirmDeckMenu )
          {
            SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0LL);
            SupportSelectRootComponent__setEditUI(this, 1, v21);
            return;
          }
        }
      }
    }
LABEL_33:
    sub_1B86614(confirmDeckMenu, isDecide);
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

  if ( (byte_4A4AC87 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__52_0__, v4);
    byte_4A4AC87 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0LL)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0LL)) == 0LL )
  {
    sub_1B86614(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
  __int64 confirmDeckMenu; // x0
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

  if ( (byte_4A4ACA6 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isDecide);
    byte_4A4ACA6 = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_30;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v7 >= *(_DWORD *)(*(_QWORD *)(confirmDeckMenu + 184) + 164LL) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_31;
      confirmDeckMenu = (__int64)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = SupportServantData__getServant((SupportServantData_o *)confirmDeckMenu, v7, v8);
      if ( confirmDeckMenu >= 1 )
      {
        v12 = this->fields.supportServantData;
        if ( !v12 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v12->max_length )
          goto LABEL_31;
        confirmDeckMenu = (__int64)v12->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, v7, v11);
      }
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v13->max_length )
LABEL_31:
        sub_1B8661C(confirmDeckMenu, isDecide);
      confirmDeckMenu = (__int64)v13->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, v7, v11);
      if ( confirmDeckMenu >= 1 )
      {
        v14 = this->fields.supportServantData;
        if ( !v14 )
          goto LABEL_30;
        if ( (unsigned int)CenterNum >= v14->max_length )
          goto LABEL_31;
        confirmDeckMenu = (__int64)v14->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_30;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (__int64)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
      confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0LL);
        SupportSelectRootComponent__setEditUI(this, 1, v15);
        return;
      }
    }
LABEL_30:
    sub_1B86614(confirmDeckMenu, isDecide);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__EndRemoveAllEquip(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 confirmDeckMenu; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w20
  const MethodInfo *v8; // x2
  __int64 CenterNum; // x21
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  const MethodInfo *v12; // x2

  if ( (byte_4A4ACAA & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, isDecide);
    byte_4A4ACAA = 1;
  }
  confirmDeckMenu = (__int64)this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_22;
  SupportSelectConfirmDeckMenu__Close((SupportSelectConfirmDeckMenu_o *)confirmDeckMenu, 0LL);
  if ( isDecide )
  {
    v7 = 0;
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    while ( 1 )
    {
      confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        confirmDeckMenu = (__int64)BalanceConfig_TypeInfo;
      }
      if ( v7 >= *(_DWORD *)(*(_QWORD *)(confirmDeckMenu + 184) + 164LL) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_22;
      if ( (unsigned int)CenterNum >= supportServantData->max_length )
        goto LABEL_23;
      confirmDeckMenu = (__int64)supportServantData->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_22;
      confirmDeckMenu = SupportServantData__getEquip((SupportServantData_o *)confirmDeckMenu, v7, v8);
      if ( confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_22;
        if ( (unsigned int)CenterNum >= v11->max_length )
LABEL_23:
          sub_1B8661C(confirmDeckMenu, isDecide);
        confirmDeckMenu = (__int64)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_22;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, v7, v8);
      }
      ++v7;
    }
    confirmDeckMenu = (__int64)this->fields.supportEditMenu;
    if ( confirmDeckMenu )
    {
      SupportSelectEditMenu__Close((SupportSelectEditMenu_o *)confirmDeckMenu, 0LL);
      confirmDeckMenu = (__int64)this->fields.supportSelectMenu;
      if ( confirmDeckMenu )
      {
        SupportSelectMenu__Reset((SupportSelectMenu_o *)confirmDeckMenu, -1, 0LL);
        SupportSelectRootComponent__setEditUI(this, 1, v12);
        return;
      }
    }
LABEL_22:
    sub_1B86614(confirmDeckMenu, isDecide);
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

  if ( (byte_4A4ACA3 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, *(_QWORD *)&deckId);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v5);
    byte_4A4ACA3 = 1;
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
      sub_1B8661C(copyDeckSelectMenu, *(_QWORD *)&deckId);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v11 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v12 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v12,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0LL);
    if ( !supportEditMenu )
LABEL_10:
      sub_1B86614(copyDeckSelectMenu, *(_QWORD *)&deckId);
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

  if ( (byte_4A4AC96 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4AC96 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0LL),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0LL, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL) )
  {
    sub_1B86614(supportSelectMenu, isDecide);
  }
  SupportSelectMenu__Redisp(supportSelectMenu, 0LL);
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

  if ( (byte_4A4AC93 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4AC93 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, 0LL);
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

  if ( (byte_4A4AC94 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, v7);
    byte_4A4AC94 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_1B86614(v10, v11);
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
  const MethodInfo *v8; // x1

  supportSelectMenu = this->fields.supportSelectMenu;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&resultKind);
  if ( !supportSelectMenu )
    sub_1B86614(CenterNum, v7);
  SupportSelectMenu__moveCenterItem(supportSelectMenu, CenterNum, 0LL);
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
  const MethodInfo *v51; // x2
  struct SupportServantData_array *v52; // x22
  SupportServantData_o *v53; // x8
  EventUpValSetupInfo_o *eventSetupInfo2; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  System_Int32_array *v56; // x24
  System_Int32_array *v57; // x25
  SupportServantSelectMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v59; // x2
  struct SupportServantData_array *v60; // x22
  SupportServantData_o *v61; // x8
  EventUpValSetupInfo_o *v62; // x27
  System_Int32_array *v63; // x25
  System_Int32_array *v64; // x26
  CommonUI_o *v65; // x24
  SupportServantEquipListMenu_CallbackFunc_o *v66; // x28
  const MethodInfo *v67; // x3
  SupportSelectMenu_o *supportSelectMenu; // x20
  const MethodInfo *v69; // x1
  SupportSelectMenu_o *v70; // x20
  const MethodInfo *v71; // x2
  bool v72; // w1
  SupportSelectRootComponent_o *v73; // x0
  SupportSelectMenu_o *v74; // x20
  const MethodInfo *v75; // x1
  struct SupportServantData_array *v76; // x8
  __int64 v77; // x21
  __int64 v78; // x22
  __int64 v79; // x23
  struct SupportServantData_array *v80; // x8
  SupportServantData_o *v81; // x8
  struct SupportServantData_array *v82; // x8
  SupportServantData_o *v83; // x8
  int v84; // w22
  struct SupportServantData_array *v85; // x8
  SupportServantData_o *v86; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v88; // w22
  struct SupportServantData_array *v89; // x8
  SupportServantData_o *v90; // x8
  QuestRestrictionInfo_o *v91; // x20
  __int64 v92; // x23
  __int64 v93; // x24
  int32_t v94; // w0
  int32_t v95; // w23
  int32_t v96; // w24
  Il2CppObject *Instance; // x20
  System_Action_o *v98; // x22
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  Il2CppObject *supportInfoJump; // x2
  struct SupportServantData_array *v102; // x8
  int64_t v103; // x21
  struct SupportServantData_array *v104; // x8
  SupportServantData_o *v105; // x8
  _BOOL4 isFriendInfo; // w24
  _QWORD *v107; // x0
  System_Reflection_MethodBase_o *v108; // x0
  struct SupportServantData_array *v109; // x8
  SupportServantData_o *v110; // x8
  int32_t kind; // w20
  CommonUI_o *v112; // x22
  ServantLeaderInfo_o *v113; // x21
  ServantStatusDialog_EndDelegate_o *v114; // x23
  struct SupportServantData_array *v115; // x8
  const MethodInfo *v116; // x2
  struct SupportServantData_array *v117; // x8
  int64_t v118; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v120; // x8
  System_Reflection_MethodBase_o *v121; // x0
  struct SupportServantData_array *v122; // x8
  SupportServantData_o *v123; // x8
  int32_t v124; // w20
  EquipTargetInfo_o *equipTarget1; // x22
  CommonUI_o *v126; // x21
  ServantStatusDialog_EndDelegate_o *v127; // x23
  _QWORD *v128; // x0
  System_Reflection_MethodBase_o *v129; // x0
  _QWORD *v130; // x0
  System_Reflection_MethodBase_o *v131; // x0
  _QWORD *v132; // x0
  System_Reflection_MethodBase_o *v133; // x0
  int64_t v134; // x21
  ServantStatusDialog_FormationEndDelegate_o *v135; // x23
  Il2CppObject *v136; // x20
  ServantStatusDialog_EndDelegate_o *v137; // x22
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x20
  SupportSelectRootComponent___c_c *v139; // x0
  System_Func_int__bool__o *_9__66_0; // x21
  Il2CppObject *v141; // x23
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  int32_t v146; // w0
  SupportSelectRootComponent___c_c *v147; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v149; // w20
  System_Func_int__bool__o *_9__66_1; // x23
  Il2CppObject *v151; // x24
  struct SupportSelectRootComponent___c_StaticFields *v152; // x0
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  struct SupportServantData_array *v156; // x8
  SupportServantData_o *v157; // x0
  _QWORD *v158; // x0
  System_Reflection_MethodBase_o *v159; // x0
  const MethodInfo *v160; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_4A4AC8D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B863B8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, v8);
    sub_1B863B8(&CancelConfirmMenu_CallbackFunc_TypeInfo, v9);
    sub_1B863B8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1B863B8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, v11);
    sub_1B863B8(&ServantStatusDialog_EndDelegate_TypeInfo, v12);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_int___, v13);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_1B863B8(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v15);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v16);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v19);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v21);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v22);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndShowEquip__, v23);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndShowServantWithQuest__, v24);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndShowServant__, v25);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v26);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v27);
    sub_1B863B8(&Method_SupportSelectRootComponent_OnBackSelect__, v28);
    sub_1B863B8(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__, v29);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__, v30);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__, v31);
    sub_1B863B8(&SupportSelectRootComponent___c_TypeInfo, v32);
    byte_4A4AC8D = 1;
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
      v43 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B86604(CancelConfirmMenu_CallbackFunc_TypeInfo);
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
          if ( v46 && SupportServantData__get_IsNoServant(v46, v36) )
          {
LABEL_15:
            v47 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v47 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v48 = (System_Reflection_MethodBase_o *)sub_1B8639C(v47, v47[4]);
            OverwriteAssetSoundName__PlaySystemSe(v48, 2, 0, 0LL);
            supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
            v50 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B86604(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
            SupportSelectConfirmMenu_CallbackFunc___ctor(
              v50,
              (Il2CppObject *)this,
              Method_SupportSelectRootComponent_EndConfirmMenu__,
              0LL);
            if ( supportSelectConfirmMenu )
            {
              SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v50, 0LL);
              return;
            }
LABEL_163:
            sub_1B86614(isUpdate, v36);
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
          v132 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v132 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v133 = (System_Reflection_MethodBase_o *)sub_1B8639C(v132, v132[4]);
          OverwriteAssetSoundName__PlaySystemSe(v133, 8, 0, 0LL);
          isUpdate = (int64_t)this->fields.supportSelectMenu;
          if ( !isUpdate )
            goto LABEL_163;
          SupportSelectMenu__Reset((SupportSelectMenu_o *)isUpdate, -1, 0LL);
          goto LABEL_134;
        }
LABEL_164:
        sub_1B8661C(isUpdate, v36);
      }
      if ( this->fields.isEdit )
      {
        v130 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v130 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v131 = (System_Reflection_MethodBase_o *)sub_1B8639C(v130, v130[4]);
        OverwriteAssetSoundName__PlaySystemSe(v131, 8, 0, 0LL);
LABEL_134:
        SupportSelectRootComponent__SetActiveApplyIcon(this, v36);
        v73 = this;
        v72 = 0;
        this->fields.isDragSwapState = 0;
LABEL_135:
        SupportSelectRootComponent__setEditUI(v73, v72, v71);
        return;
      }
      tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
      v139 = SupportSelectRootComponent___c_TypeInfo;
      if ( !SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo);
        v139 = SupportSelectRootComponent___c_TypeInfo;
      }
      _9__66_0 = v139->static_fields->__9__66_0;
      if ( !_9__66_0 )
      {
        if ( !v139->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v139);
          v139 = SupportSelectRootComponent___c_TypeInfo;
        }
        v141 = (Il2CppObject *)v139->static_fields->__9;
        _9__66_0 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_0,
          v141,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_0__,
          0LL);
        static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__66_0 = _9__66_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v143, v144);
      }
      v145 = System_Linq_Enumerable__Where_int_(
               tempFixMainQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_0,
               (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
      v146 = System_Linq_Enumerable__Count_int_(
               v145,
               (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
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
        _9__66_1 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__66_1,
          v151,
          Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__66_1__,
          0LL);
        v152 = SupportSelectRootComponent___c_TypeInfo->static_fields;
        v152->__9__66_1 = _9__66_1;
        sub_1B8635C((CGThumbnailListItem_o *)&v152->__9__66_1, (int32_t)_9__66_1, v153, v154);
      }
      v155 = System_Linq_Enumerable__Where_int_(
               tempFixEventQuestSupportDeckIds,
               (System_Func_TSource__bool__o *)_9__66_1,
               (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
      isUpdate = System_Linq_Enumerable__Count_int_(
                   v155,
                   (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
      if ( v149 < 1 || (int)isUpdate <= 0 )
      {
        v156 = this->fields.supportServantData;
        if ( !v156 )
          goto LABEL_163;
        if ( CenterNum >= v156->max_length )
          goto LABEL_164;
        v157 = v156->m_Items[CenterNum];
        if ( v157 && SupportServantData__get_IsNoServant(v157, v36) )
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
      v158 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v158 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v159 = (System_Reflection_MethodBase_o *)sub_1B8639C(v158, v158[4]);
      OverwriteAssetSoundName__PlaySystemSe(v159, 8, 0, 0LL);
      SupportSelectRootComponent__RequestApi(this, v160);
      return;
    case 2:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 2;
      if ( !isUpdate )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0LL);
      SupportSelectRootComponent__setEditUI(this, 1, v51);
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
      v52 = this->fields.supportServantData;
      if ( !v52 )
        goto LABEL_163;
      if ( v52->max_length <= deckNum )
        goto LABEL_164;
      v53 = v52->m_Items[deckNum];
      if ( !v53 )
        goto LABEL_163;
      eventSetupInfo2 = v53->fields.eventSetupInfo2;
      supportServantSelectMenu = this->fields.supportServantSelectMenu;
      v56 = this->fields.tempFixMainQuestSupportDeckIds;
      v57 = this->fields.tempFixEventQuestSupportDeckIds;
      callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B86604(SupportServantSelectMenu_CallbackFunc_TypeInfo);
      SupportServantSelectMenu_CallbackFunc___ctor(
        callback,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_OnBackSelect__,
        0LL);
      if ( !supportServantSelectMenu )
        goto LABEL_163;
      SupportServantSelectMenu__Open(
        supportServantSelectMenu,
        v52,
        deckNum,
        classPos,
        eventSetupInfo2,
        v39,
        v56,
        v57,
        callback,
        0LL);
      return;
    case 3:
      isUpdate = (int64_t)this->fields.supportSelectMenu;
      this->fields.state = 3;
      if ( !isUpdate )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)isUpdate, this->fields.selectNum, 0LL);
      SupportSelectRootComponent__setEditUI(this, 1, v59);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v60 = this->fields.supportServantData;
      if ( !v60 )
        goto LABEL_163;
      if ( v60->max_length <= deckNum )
        goto LABEL_164;
      v61 = v60->m_Items[deckNum];
      if ( !v61 )
        goto LABEL_163;
      v62 = v61->fields.eventSetupInfo2;
      v63 = this->fields.tempFixMainQuestSupportDeckIds;
      v64 = this->fields.tempFixEventQuestSupportDeckIds;
      v65 = (CommonUI_o *)isUpdate;
      v66 = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B86604(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
      SupportServantEquipListMenu_CallbackFunc___ctor(
        v66,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
        v67);
      if ( !v65 )
        goto LABEL_163;
      CommonUI__OpenSupportServantEquipListMenu(v65, v60, deckNum, classPos, v62, v39, v63, v64, v66, 0LL);
      return;
    case 4:
      supportSelectMenu = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !supportSelectMenu )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(supportSelectMenu, isUpdate, 0LL);
      SupportSelectRootComponent__ChangeDeckName(this, v69);
      return;
    case 5:
      v70 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !v70 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v70, isUpdate, 0LL);
      v72 = 1;
      this->fields.isDragSwapState = 1;
      v73 = this;
      goto LABEL_135;
    case 6:
      v74 = this->fields.supportSelectMenu;
      isUpdate = SupportSelectRootComponent__getCenterNum(this, v36);
      if ( !v74 )
        goto LABEL_163;
      SupportSelectMenu__moveCenterItem(v74, isUpdate, 0LL);
      SupportSelectRootComponent__OpenSupportEditMenu(this, v75);
      return;
    case 7:
      v76 = this->fields.supportServantData;
      if ( !v76 )
        goto LABEL_163;
      if ( v76->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v76->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v37);
      if ( !isUpdate )
        goto LABEL_163;
      v77 = *(_QWORD *)(isUpdate + 24);
      if ( !v77 )
        goto LABEL_120;
      v79 = *(_QWORD *)(v77 + 48);
      v78 = *(_QWORD *)(v77 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v161.fields.currentCryptoKey = v79;
      *(_QWORD *)&v161.fields.fakeValue = v78;
      isUpdate = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v161, 0LL);
      if ( !(_DWORD)isUpdate )
        goto LABEL_120;
      v80 = this->fields.supportServantData;
      if ( !v80 )
        goto LABEL_163;
      if ( v80->max_length <= deckNum )
        goto LABEL_164;
      v81 = v80->m_Items[deckNum];
      if ( !v81 )
        goto LABEL_163;
      isUpdate = ServantLeaderInfo__getQuestRestriction(
                   (ServantLeaderInfo_o *)v77,
                   v81->fields.questRestrictionInfo,
                   0LL);
      if ( (isUpdate & 1) != 0 )
        goto LABEL_120;
      v82 = this->fields.supportServantData;
      if ( !v82 )
        goto LABEL_163;
      if ( v82->max_length <= deckNum )
        goto LABEL_164;
      v83 = v82->m_Items[deckNum];
      if ( !v83 )
        goto LABEL_163;
      if ( ServantLeaderInfo__IsSlotRestriction((ServantLeaderInfo_o *)v77, v83->fields.questRestrictionInfo, 0LL) )
        goto LABEL_120;
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      v84 = *(_DWORD *)(isUpdate + 48);
      isUpdate = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !isUpdate )
        goto LABEL_163;
      if ( v84 < 1 )
        goto LABEL_76;
      v85 = this->fields.supportServantData;
      if ( !v85 )
        goto LABEL_163;
      if ( v85->max_length <= deckNum )
        goto LABEL_164;
      v86 = v85->m_Items[deckNum];
      if ( !v86 )
        goto LABEL_163;
      questRestrictionInfo = v86->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_163;
      v88 = *(_DWORD *)(isUpdate + 52);
      isUpdate = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(questRestrictionInfo, v88, 0LL);
      if ( (isUpdate & 1) == 0 )
        goto LABEL_76;
      v89 = this->fields.supportServantData;
      if ( !v89 )
        goto LABEL_163;
      if ( v89->max_length <= deckNum )
        goto LABEL_164;
      v90 = v89->m_Items[deckNum];
      if ( !v90 )
        goto LABEL_163;
      v91 = v90->fields.questRestrictionInfo;
      v93 = *(_QWORD *)(v77 + 48);
      v92 = *(_QWORD *)(v77 + 56);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v162.fields.currentCryptoKey = v93;
      *(_QWORD *)&v162.fields.fakeValue = v92;
      v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v162, 0LL);
      v95 = *(_DWORD *)(v77 + 64);
      v96 = v94;
      isUpdate = ServantLeaderInfo__getDispLimitCount((ServantLeaderInfo_o *)v77, 0LL);
      if ( !v91 )
        goto LABEL_163;
      if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v91, v96, v95, isUpdate, v88, 1, 0LL) )
        goto LABEL_120;
LABEL_76:
      if ( this->fields.supportInfoJump )
      {
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        v98 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v98,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent__EndSupportSelectMenu_b__66_2__,
          0LL);
        if ( !Instance )
          goto LABEL_163;
        if ( !PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)Instance, v98, 0LL) )
        {
          v99 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v99 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v100 = (System_Reflection_MethodBase_o *)sub_1B8639C(v99, v99[4]);
          OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0, 0LL);
          isUpdate = (int64_t)this->fields.supportInfoJump;
          if ( !isUpdate )
            goto LABEL_163;
          supportInfoJump = (Il2CppObject *)this->fields.supportInfoJump;
          *(_DWORD *)(isUpdate + 48) = this->fields.classPos;
          *(_DWORD *)(isUpdate + 52) = *(_DWORD *)(v77 + 16);
          if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)isUpdate, 1, supportInfoJump, 0LL) )
          {
            isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v128 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v128 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v129 = (System_Reflection_MethodBase_o *)sub_1B8639C(v128, v128[4]);
        OverwriteAssetSoundName__PlaySystemSe(v129, 2, 0, 0LL);
        isUpdate = (int64_t)this->fields.supportSelectMenu;
        if ( !isUpdate )
          goto LABEL_163;
        SupportSelectMenu__Active((SupportSelectMenu_o *)isUpdate, 0LL);
      }
      return;
    case 8:
      v102 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v102 )
        goto LABEL_163;
      if ( v102->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v102->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = (int64_t)SupportServantData__getUserServantLeaderEntity(
                            (SupportServantData_o *)isUpdate,
                            this->fields.classPos,
                            v37);
      if ( !isUpdate )
        goto LABEL_163;
      v103 = isUpdate;
      if ( *(int *)(isUpdate + 64) < 1 )
        goto LABEL_120;
      v104 = this->fields.supportServantData;
      if ( !v104 )
        goto LABEL_163;
      if ( v104->max_length <= deckNum )
        goto LABEL_164;
      v105 = v104->m_Items[deckNum];
      if ( !v105 )
        goto LABEL_163;
      isFriendInfo = v105->fields.isFriendInfo;
      v107 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v107 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v108 = (System_Reflection_MethodBase_o *)sub_1B8639C(v107, v107[4]);
      OverwriteAssetSoundName__PlaySystemSe(v108, 0, 0, 0LL);
      isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v109 = this->fields.supportServantData;
      if ( !v109 )
        goto LABEL_163;
      if ( v109->max_length <= deckNum )
        goto LABEL_164;
      v110 = v109->m_Items[deckNum];
      if ( !v110 )
        goto LABEL_163;
      kind = v110->fields.kind;
      v112 = (CommonUI_o *)isUpdate;
      if ( isFriendInfo )
      {
        v113 = *(ServantLeaderInfo_o **)(v103 + 24);
        v114 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v114,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServant__,
          0LL);
        if ( !v112 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_30495528(v112, kind, v113, v114, 0LL);
      }
      else
      {
        v134 = *(_QWORD *)(v103 + 56);
        v135 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B86604(ServantStatusDialog_FormationEndDelegate_TypeInfo);
        ServantStatusDialog_FormationEndDelegate___ctor(
          v135,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowServantWithQuest__,
          0LL);
        if ( !v112 )
          goto LABEL_163;
        CommonUI__OpenServantStatusDialog_30492872(v112, kind, v134, v135, 0LL, 0LL);
      }
      return;
    case 9:
      v115 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v115 )
        goto LABEL_163;
      if ( v115->max_length <= deckNum )
        goto LABEL_164;
      isUpdate = (int64_t)v115->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      isUpdate = SupportServantData__getEquip((SupportServantData_o *)isUpdate, this->fields.classPos, v37);
      if ( !isUpdate )
        goto LABEL_120;
      v117 = this->fields.supportServantData;
      if ( !v117 )
        goto LABEL_163;
      if ( v117->max_length <= deckNum )
        goto LABEL_164;
      v118 = isUpdate;
      isUpdate = (int64_t)v117->m_Items[deckNum];
      if ( !isUpdate )
        goto LABEL_163;
      UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)isUpdate,
                                  this->fields.classPos,
                                  v116);
      v120 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
        v120 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
      v121 = (System_Reflection_MethodBase_o *)sub_1B8639C(v120, v120[4]);
      OverwriteAssetSoundName__PlaySystemSe(v121, 0, 0, 0LL);
      v122 = this->fields.supportServantData;
      if ( !v122 )
        goto LABEL_163;
      if ( v122->max_length <= deckNum )
        goto LABEL_164;
      v123 = v122->m_Items[deckNum];
      if ( !v123 )
        goto LABEL_163;
      if ( v123->fields.isFriendInfo )
      {
        if ( v123->fields.kind == 5 )
          v124 = 14;
        else
          v124 = 13;
        isUpdate = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !UserServantLeaderEntity )
          goto LABEL_163;
        equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
        v126 = (CommonUI_o *)isUpdate;
        v127 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v127,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v126 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog_30498624(v126, v124, equipTarget1, v127, 0LL, 0LL);
      }
      else
      {
        v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v137 = (ServantStatusDialog_EndDelegate_o *)sub_1B86604(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v137,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndShowEquip__,
          0LL);
        if ( !v136 )
          goto LABEL_163;
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)v136, 11, v118, 1, v137, 0LL, 0LL);
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

  if ( (byte_4A4AC92 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&kind);
    byte_4A4AC92 = 1;
  }
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0LL )
  {
    v14 = BasicHelper__DecryptValue_42186464(equipTarget1->fields.svtId, 0LL);
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
  v16 = BasicHelper__DecryptValue_42186464(v15->fields.svtId, 0LL);
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
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v34, 0LL);
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
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
  if ( classPos1 != classPos2 )
  {
    v24 = v22;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v23);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v29 = (int)CenterNum;
    if ( (unsigned int)CenterNum < supportServantData->max_length )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v24, v16, v27);
      v31 = this->fields.supportServantData;
      if ( !v31 )
        goto LABEL_39;
      if ( v29 < v31->max_length )
      {
        CenterNum = v31->m_Items[v29];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v19, v14, v30);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v29, 0LL);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, 0LL);
              return;
            }
          }
        }
LABEL_39:
        sub_1B86614(CenterNum, v26);
      }
    }
    sub_1B8661C(CenterNum, v26);
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
  const MethodInfo *v30; // x3
  __int64 v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v38; // x22
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v40; // x23
  UserServantLeaderEntity_o *v41; // x24
  UserServantLeaderEntity_o *v42; // x25
  int32_t v43; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v44; // x8
  int32_t v45; // w25
  Il2CppObject *Entity; // x24
  struct UserServantLeaderEntity_array *v47; // x8
  PartyOrganizationUtility_o *v48; // x23
  UserServantLeaderEntity_o *v49; // x25
  UserServantLeaderEntity_o *v50; // x26
  UserServantEntity_o *v51; // x8
  System_String_o *v52; // x22
  __int64 v53; // x8
  int32_t v54; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v57; // x21
  System_String_o *v58; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v60; // x23
  Il2CppObject *v61; // x19
  System_String_o *v62; // x21
  System_String_o *v63; // x22
  System_String_o *v64; // x23
  CommonConfirmDialog_ClickDelegate_o *v65; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4A4AC90 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v18);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__, v19);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__, v20);
    sub_1B863B8(&SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_9950/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v22);
    sub_1B863B8(&StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, v23);
    sub_1B863B8(&StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, v24);
    sub_1B863B8(&StringLiteral_1/*""*/, v25);
    byte_4A4AC90 = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v26 = sub_1B86604(SupportSelectRootComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_42;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v26 + 16), (int32_t)this, v29, v30);
  *(_QWORD *)(v26 + 32) = item;
  v31 = v26 + 32;
  *(_DWORD *)(v26 + 24) = result;
  *(_DWORD *)(v26 + 28) = classPos;
  sub_1B8635C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)item, v32, v33);
  if ( *(_DWORD *)(v26 + 24) == 1 && *(_QWORD *)v31 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B8661C(UserServantLeaderEntity, v28);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_42;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v26 + 28),
                                                        v34);
    if ( UserServantLeaderEntity )
    {
      v38 = UserServantLeaderEntity;
      if ( *(int *)&UserServantLeaderEntity->fields.isFriendInfo >= 1 )
      {
        if ( !*(_QWORD *)v31 )
          goto LABEL_42;
        if ( *(_QWORD *)(*(_QWORD *)v31 + 128LL) )
        {
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v38->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v40 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v42 = userServantLeaderEntityList->m_Items[6];
          v41 = userServantLeaderEntityList->m_Items[7];
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = v42;
          *(_QWORD *)&v69.fields.fakeValue = v41;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                              v69,
                                                              0LL);
          if ( !v38->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v43 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v38->fields.userServantLeaderEntityList,
                                                              0LL);
          if ( !*(_QWORD *)v31 )
            goto LABEL_42;
          v44 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v31 + 128LL);
          if ( !v44 )
            goto LABEL_42;
          v45 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                              v44[1],
                                                              0LL);
          if ( !v40 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v40,
                 &skillName,
                 &actMaxRarity[1],
                 v43,
                 v45,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0LL) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v38->fields.isFriendInfo,
                           (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v47 = v38->fields.userServantLeaderEntityList;
                if ( v47 )
                {
                  v48 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v50 = v47->m_Items[8];
                  v49 = v47->m_Items[9];
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v70.fields.currentCryptoKey = v50;
                  *(_QWORD *)&v70.fields.fakeValue = v49;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                      v70,
                                                                      0LL);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0,
                                                                        0LL);
                    v51 = (UserServantEntity_o *)v38->fields.userServantLeaderEntityList;
                    if ( v51 )
                    {
                      v52 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v51, 0LL);
                      v53 = *(_QWORD *)v31;
                      if ( *(_QWORD *)v31 )
                      {
                        v54 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v53 + 128);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0LL);
                          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47470088(
                                                                              Name,
                                                                              0LL);
                          if ( v48 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v48,
                                                     actMaxRarity,
                                                     v52,
                                                     v54,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0LL);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0LL);
                              v57 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v57, 0LL);
                              if ( v57 )
                              {
                                System_Text_StringBuilder__Append_61730360(v57, RarityInvalidMessage, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v58 = LocalizationManager__Get((System_String_o *)StringLiteral_9950/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                                System_Text_StringBuilder__Append_61730360(v57, v58, 0LL);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v60 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v60,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0LL);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v60, 0LL);
                                  v61 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                                                             v57,
                                                             v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                                  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, 0LL);
                                  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, 0LL);
                                  v65 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v65,
                                    (Il2CppObject *)v26,
                                    Method_SupportSelectRootComponent___c__DisplayClass71_0__EndSupportServantEquipListMenu_b__0__,
                                    0LL);
                                  if ( v61 )
                                  {
                                    CommonUI__OpenConfirmDialog_30483432(
                                      (CommonUI_o *)v61,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v62,
                                      v63,
                                      v64,
                                      v65,
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
            sub_1B86614(UserServantLeaderEntity, v28);
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
    v35);
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
  struct SupportServantData_array *v10; // x9
  __int64 v11; // x8
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
      SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, (const MethodInfo *)entity);
      goto LABEL_11;
    }
LABEL_32:
    sub_1B8661C(this, *(_QWORD *)&result);
  }
  v8 = this->fields.supportServantData;
  if ( !v8 )
    goto LABEL_31;
  if ( (unsigned int)selectNum >= v8->max_length )
    goto LABEL_32;
  this = (SupportSelectRootComponent_o *)v8->m_Items[selectNum];
  if ( !this )
    goto LABEL_31;
  SupportServantData__removeServantData((SupportServantData_o *)this, classPos, *(const MethodInfo **)&classPos);
LABEL_11:
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v9);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
  v10 = v6->fields.supportServantData;
  if ( !v10 )
    goto LABEL_31;
  if ( (int)*(_QWORD *)&v10->max_length >= 1 )
  {
    v11 = (unsigned int)*(_QWORD *)&v10->max_length;
    m_Items = v10->m_Items;
    do
    {
      if ( *m_Items )
      {
        if ( !this )
          goto LABEL_31;
        (*m_Items)->fields.pushUserServantId = (int64_t)this->fields.cancelConfirmMenu;
      }
      --v11;
      ++m_Items;
    }
    while ( v11 );
  }
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, 0LL);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_31;
  SupportSelectMenu__Redisp((SupportSelectMenu_o *)this, 0LL);
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
    sub_1B86614(this, *(_QWORD *)&result);
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
  System_Collections_Generic_List_object__o *v31; // x21
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  __int64 Instance; // x0
  __int64 v35; // x1
  Il2CppObject *Master_object; // x19
  BalanceConfig_c *v37; // x8
  __int64 v38; // x10
  unsigned __int64 v39; // x25
  int32_t v40; // w9
  int32_t v41; // w28
  __int64 v42; // x24
  __int64 v43; // x29
  const MethodInfo *v44; // x2
  struct SupportServantData_array *supportServantData; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x19
  struct SupportServantData_array *v49; // x8
  SupportServantData_o *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x26
  System_Func_object__bool__o *v52; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  ServantEntity_o *v54; // x29
  int v55; // w27
  int32_t v56; // w19
  System_String_o *v57; // x19
  Il2CppObject *v58; // x26
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_String_o *v62; // x26
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  Il2CppObject *v66; // x27
  Il2CppObject *Name; // x19
  Il2CppObject *ClassName; // x0
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 size; // x10
  Il2CppClass **v72; // x0
  __int64 v75; // [xsp+8h] [xbp-A8h]
  __int64 v76; // [xsp+10h] [xbp-A0h]
  ServantLimitImageMaster_o *v77; // [xsp+18h] [xbp-98h]
  UserServantCollectionMaster_o *v78; // [xsp+20h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *v79; // [xsp+28h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+30h] [xbp-80h]
  int32_t CenterNum; // [xsp+38h] [xbp-78h]
  int v82; // [xsp+44h] [xbp-6Ch] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A4AC98 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v13);
    sub_1B863B8(&DataManager_TypeInfo, v14);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v16);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v17);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v18);
    sub_1B863B8(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v19);
    sub_1B863B8(&int_TypeInfo, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v22);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v23);
    sub_1B863B8(&LocalizationManager_TypeInfo, v24);
    sub_1B863B8(&NetworkManager_TypeInfo, v25);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__, v27);
    sub_1B863B8(&SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo, v28);
    sub_1B863B8(&StringLiteral_12268/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, v29);
    sub_1B863B8(&StringLiteral_12269/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, v30);
    byte_4A4AC98 = 1;
  }
  entity = 0LL;
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( isMain )
  {
    if ( SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, nowDeckId, v32) )
      return (System_Collections_Generic_List_string__o *)v31;
  }
  else if ( SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, nowDeckId, v32) )
  {
    return (System_Collections_Generic_List_string__o *)v31;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, v33);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_75:
    sub_1B86614(Instance, v35);
  }
  v79 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)Instance,
                                                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v77 = (ServantLimitImageMaster_o *)Instance;
  v78 = (UserServantCollectionMaster_o *)Master_object;
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  v38 = 184LL;
  if ( isMain )
    v38 = 180LL;
  v76 = *(unsigned int *)((char *)&v37->static_fields->CriticalRateToAddByQuickFirstBonus + v38);
  if ( *(int *)((char *)&v37->static_fields->CriticalRateToAddByQuickFirstBonus + v38) >= 1 )
  {
    v39 = 0LL;
    v75 = (unsigned int)idx;
    do
    {
      if ( v39 != v75 )
      {
        if ( !fixDeckIds )
          goto LABEL_75;
        if ( v39 >= fixDeckIds->max_length )
LABEL_76:
          sub_1B8661C(Instance, v35);
        v40 = fixDeckIds->m_Items[v39 + 1];
        if ( v40 )
        {
          v41 = 0;
          v42 = v40 - 1;
          while ( 1 )
          {
            if ( !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v37 = BalanceConfig_TypeInfo;
            }
            if ( v41 >= v37->static_fields->SupportDeckMemberMax )
              break;
            v43 = sub_1B86604(SupportSelectRootComponent___c__DisplayClass81_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v43, 0LL);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_75;
            if ( CenterNum >= supportServantData->max_length )
              goto LABEL_76;
            Instance = (__int64)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_75;
            Instance = (__int64)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v41,
                                  v44);
            if ( !v43 )
              goto LABEL_75;
            *(_QWORD *)(v43 + 16) = Instance;
            v48 = v43 + 16;
            sub_1B8635C((CGThumbnailListItem_o *)(v43 + 16), Instance, v46, v47);
            if ( !*(_QWORD *)(v43 + 16) )
              goto LABEL_75;
            if ( *(_DWORD *)(*(_QWORD *)(v43 + 16) + 64LL) )
            {
              v49 = this->fields.supportServantData;
              if ( !v49 )
                goto LABEL_75;
              if ( (unsigned int)v42 >= v49->max_length )
                goto LABEL_76;
              v50 = v49->m_Items[v42];
              if ( !v50 )
                goto LABEL_75;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v50->fields.userServantLeaderEntityList;
              v52 = (System_Func_object__bool__o *)sub_1B86604(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v52,
                (Il2CppObject *)v43,
                Method_SupportSelectRootComponent___c__DisplayClass81_0__GetFixedErrorList_b__0__,
                0LL);
              v53 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v52,
                      (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v53,
                           (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v48 )
                  goto LABEL_75;
                Instance = (__int64)MasterData_object;
                if ( !MasterData_object )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                      MasterData_object,
                                      *(_DWORD *)(*(_QWORD *)v48 + 64LL),
                                      (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !*(_QWORD *)v48 )
                  goto LABEL_75;
                v54 = (ServantEntity_o *)Instance;
                Instance = (__int64)v79;
                if ( !v79 )
                  goto LABEL_75;
                Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                      v79,
                                      *(_QWORD *)(*(_QWORD *)v48 + 56LL),
                                      (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                if ( !Instance )
                  goto LABEL_75;
                Instance = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Instance, 0LL, 0LL);
                if ( !Instance )
                  goto LABEL_75;
                v55 = *(_DWORD *)(Instance + 24);
                if ( v55 )
                {
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4A48C25 )
                  {
                    sub_1B863B8(&NetworkManager_TypeInfo, v35);
                    byte_4A48C25 = 1;
                  }
                  Instance = (__int64)NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = (__int64)NetworkManager_TypeInfo;
                  }
                  if ( !*(_QWORD *)v48 || !v78 )
                    goto LABEL_75;
                  Instance = UserServantCollectionMaster__TryGetEntity(
                               v78,
                               &entity,
                               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                               *(_DWORD *)(*(_QWORD *)v48 + 64LL),
                               0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !*(_QWORD *)v48 )
                      goto LABEL_75;
                    Instance = (__int64)v77;
                    if ( !entity )
                      goto LABEL_75;
                    if ( !v77 )
                      goto LABEL_75;
                    Instance = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 v77,
                                 *(_DWORD *)(*(_QWORD *)v48 + 64LL),
                                 entity->fields.maxLimitCount,
                                 0LL);
                    if ( !entity )
                      goto LABEL_75;
                    v56 = (_DWORD)Instance == entity->fields.maxLimitCount ? -1 : Instance;
                  }
                  else
                  {
                    v56 = -1;
                  }
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12268/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0LL);
                  v82 = v55;
                  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v82, v63, v64, v65);
                  if ( !v54 )
                    goto LABEL_75;
                  v66 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(v54, v56, -1, 0, 0LL);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(v54, 0LL);
                  Instance = (__int64)System_String__Format_61686536(v62, v66, Name, ClassName, 0LL);
                }
                else
                {
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12269/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0LL);
                  if ( !v54 )
                    goto LABEL_75;
                  v57 = (System_String_o *)Instance;
                  v58 = (Il2CppObject *)ServantEntity__getName(v54, -1, -1, 0, 0LL);
                  v59 = (Il2CppObject *)ServantEntity__getClassName(v54, 0LL);
                  Instance = (__int64)System_String__Format_61686468(v57, v58, v59, 0LL);
                }
                v35 = Instance;
                if ( !v31 )
                  goto LABEL_75;
                items = v31->fields._items;
                v70 = Method_System_Collections_Generic_List_string__Add__;
                ++v31->fields._version;
                if ( !items )
                  goto LABEL_75;
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                }
                else
                {
                  v72 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v72[4] = (Il2CppClass *)v35;
                  sub_1B8635C((CGThumbnailListItem_o *)(v72 + 4), v35, v60, v61);
                }
              }
            }
            v37 = BalanceConfig_TypeInfo;
            ++v41;
          }
        }
      }
      ++v39;
    }
    while ( v39 != v76 );
  }
  return (System_Collections_Generic_List_string__o *)v31;
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

  if ( (byte_4A4ACA7 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndInitAll__, v3);
    byte_4A4ACA7 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B8661C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B86614(CenterNum, v5);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v8, v9, 0LL);
}


void __fastcall SupportSelectRootComponent__InitSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct SupportServantData_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4A4AC7F & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&SupportServantData___TypeInfo, v3);
    byte_4A4AC7F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_1B86460(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v5, v6, v7);
  SupportSelectRootComponent__RefreshSupportServantData(this, v8);
}


bool __fastcall SupportSelectRootComponent__IsFinallyUpdate(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  il2cpp_array_size_t i; // w23
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

  if ( (byte_4A4ACB0 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    byte_4A4ACB0 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Servant = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(Servant);
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
      Servant = SupportServantData__getServant(v10, j, v2);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_34;
      if ( i >= orgSupportServantData->max_length )
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
      if ( i >= v15->max_length )
        goto LABEL_35;
      Servant = (int64_t)v15->m_Items[i];
      if ( !Servant )
        goto LABEL_34;
      Servant = SupportServantData__getEquip((SupportServantData_o *)Servant, j, v14);
      v17 = this->fields.orgSupportServantData;
      if ( !v17 )
        goto LABEL_34;
      if ( i >= v17->max_length )
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
    if ( i >= v19->max_length )
LABEL_35:
      sub_1B8661C(Servant, method);
    v20 = v19->m_Items[i];
    if ( !v20 )
LABEL_34:
      sub_1B86614(Servant, method);
    if ( System_String__op_Inequality(v10->fields._deckName_k__BackingField, v20->fields._deckName_k__BackingField, 0LL) )
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

  if ( (byte_4A4AC81 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_4A4AC81 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_4A4AC80 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&checkDeckId);
    byte_4A4AC80 = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___) >= 0;
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
  const MethodInfo *v22; // x2
  struct SupportServantData_array *supportServantData; // x8
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  struct SupportServantData_array *v27; // x8
  SupportServantData_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v30; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v34; // [xsp+10h] [xbp-70h]
  bool v35; // [xsp+1Ch] [xbp-64h]

  if ( (byte_4A4ACA1 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___, v7);
    sub_1B863B8(&System_Func_UserServantLeaderEntity__bool__TypeInfo, v8);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__, v9);
    sub_1B863B8(&SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo, v10);
    byte_4A4ACA1 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_28:
    sub_1B86614(CenterNum, v12);
  v13 = *(_QWORD *)&fixDeckIds->max_length;
  v14 = (int)v13 > 0;
  if ( (int)v13 >= 1 )
  {
    v15 = (unsigned int)CenterNum;
    v16 = 0LL;
    v17 = (int)CenterNum;
    v34 = fixDeckIds;
    do
    {
      v35 = v14;
      if ( v16 >= (unsigned __int64)(unsigned int)v13 )
LABEL_29:
        sub_1B8661C(CenterNum, v12);
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
          v21 = sub_1B86604(SupportSelectRootComponent___c__DisplayClass98_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v21, 0LL);
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
          sub_1B8635C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)CenterNum, v24, v25);
          v26 = *(_QWORD *)(v21 + 16);
          if ( !v26 )
            goto LABEL_28;
          if ( *(_DWORD *)(v26 + 64) )
          {
            v27 = this->fields.supportServantData;
            if ( !v27 )
              goto LABEL_28;
            if ( v19 >= v27->max_length )
              goto LABEL_29;
            v28 = v27->m_Items[v19];
            if ( !v28 )
              goto LABEL_28;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.userServantLeaderEntityList;
            v30 = (System_Func_object__bool__o *)sub_1B86604(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v30,
              (Il2CppObject *)v21,
              Method_SupportSelectRootComponent___c__DisplayClass98_0__IsPossibleCopy_b__0__,
              0LL);
            v31 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v30,
                    (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v31,
                   (const MethodInfo_2F8B4FC *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
            {
              v14 = v35;
              return !v14;
            }
          }
        }
      }
      fixDeckIds = v34;
      ++v16;
      LODWORD(v13) = v34->max_length;
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
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w0
  SupportSelectRootComponent___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v36; // w20
  System_Func_int__bool__o *_9__67_1; // x22
  Il2CppObject *v38; // x23
  struct SupportSelectRootComponent___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  int32_t v43; // w0
  bool v44; // w8

  if ( (byte_4A4AC8E & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_int___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B863B8(&int___TypeInfo, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, v8);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, v9);
    sub_1B863B8(&SupportSelectRootComponent___c_TypeInfo, v10);
    byte_4A4AC8E = 1;
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
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B864F4(v16, int___TypeInfo);
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
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B86460(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v19->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v14[13].monitor;
  if ( !SelfUserGame )
LABEL_40:
    sub_1B86614(SelfUserGame, v13);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B86460(
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
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B864F4(v20, int___TypeInfo);
  if ( !v21 )
  {
LABEL_17:
    sub_1B868D4(v17);
    goto LABEL_18;
  }
LABEL_22:
  v23 = System_Linq_Enumerable__SequenceEqual_int_(
          v18,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_2FA3FBC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v24 = v23 & System_Linq_Enumerable__SequenceEqual_int_(
                v21,
                (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
                (const MethodInfo_2FA3FBC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    _9__67_0 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_0, v28, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_0__, 0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = _9__67_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
  v33 = System_Linq_Enumerable__Count_int_(v32, (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
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
    _9__67_1 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__67_1, v38, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__67_1__, 0LL);
    v39 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v39->__9__67_1 = _9__67_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v39->__9__67_1, (int32_t)_9__67_1, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__67_1,
          (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
  v43 = System_Linq_Enumerable__Count_int_(v42, (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
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

  if ( (byte_4A4AC82 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    byte_4A4AC82 = 1;
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
  const MethodInfo *v27; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v35; // x22
  UserServantEntity_o *v36; // x8
  PartyOrganizationUtility_o *v37; // x23
  __int64 v38; // x24
  __int64 v39; // x25
  int32_t v40; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v42; // w25
  UserServantEntity_o *v43; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x20
  __int64 v45; // x23
  __int64 v46; // x24
  Il2CppObject *v47; // x23
  PartyOrganizationUtility_o *v48; // x20
  UserServantEntity_o *v49; // x8
  System_String_o *v50; // x21
  EquipTargetInfo_o *v51; // x8
  int32_t v52; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v54; // x21
  System_String_o *v55; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v57; // x21
  System_String_o *v58; // x22
  System_String_o *v59; // x23
  CommonConfirmDialog_ClickDelegate_o *v60; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4A4AC8F & 1) == 0 )
  {
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, *(_QWORD *)&result);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B863B8(&LocalizationManager_TypeInfo, v11);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v15);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v16);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__, v17);
    sub_1B863B8(&SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_9950/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, v19);
    sub_1B863B8(&StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, v20);
    sub_1B863B8(&StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, v21);
    sub_1B863B8(&StringLiteral_1/*""*/, v22);
    byte_4A4AC8F = 1;
  }
  *(_QWORD *)actMaxRarity = 0LL;
  skillName = 0LL;
  *(_QWORD *)minFontSize = 0LL;
  v23 = sub_1B86604(SupportSelectRootComponent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_35;
  *(_QWORD *)(v23 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 16), (int32_t)this, v26, v27);
  *(_QWORD *)(v23 + 32) = entity;
  v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v23 + 32);
  *(_DWORD *)(v23 + 24) = result;
  *(_DWORD *)(v23 + 28) = classPos;
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 32), (int32_t)entity, v29, v30);
  if ( *(_DWORD *)(v23 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B8661C(UserServantLeaderEntity, v25);
    UserServantLeaderEntity = supportServantData->m_Items[selectNum];
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    UserServantLeaderEntity = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(
                                                        UserServantLeaderEntity,
                                                        *(_DWORD *)(v23 + 28),
                                                        v31);
    if ( !UserServantLeaderEntity )
      goto LABEL_35;
    v35 = UserServantLeaderEntity;
    if ( UserServantLeaderEntity->fields.oldServantIdList )
    {
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v36 = (UserServantEntity_o *)*v28;
      if ( !*v28 )
        goto LABEL_35;
      v37 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v39 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v64.fields.currentCryptoKey = v39;
      *(_QWORD *)&v64.fields.fakeValue = v38;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                          v64,
                                                          0LL);
      if ( !*v28 )
        goto LABEL_35;
      v40 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v28, 0LL);
      oldServantIdList = v35->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v42 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0LL);
      if ( !v37 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v37,
             &skillName,
             &actMaxRarity[1],
             v40,
             v42,
             (int32_t)UserServantLeaderEntity,
             -1,
             0LL) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
          v43 = (UserServantEntity_o *)*v28;
          if ( *v28 )
          {
            v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v46 = *(_QWORD *)&v43->fields.svtId.fields.currentCryptoKey;
            v45 = *(_QWORD *)&v43->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v65.fields.currentCryptoKey = v46;
            *(_QWORD *)&v65.fields.fakeValue = v45;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                v65,
                                                                0LL);
            if ( v44 )
            {
              v47 = DataMasterBase_object__object__int___GetEntity(
                      v44,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v28 )
              {
                v48 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                                    (*v28)[6],
                                                                    0LL);
                if ( v47 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v47,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0,
                                                                      0LL);
                  v49 = (UserServantEntity_o *)*v28;
                  if ( *v28 )
                  {
                    v50 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v49, 0LL);
                    v51 = (EquipTargetInfo_o *)v35->fields.oldServantIdList;
                    if ( v51 )
                    {
                      v52 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v51, 0LL);
                      if ( v48 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v48,
                                                 actMaxRarity,
                                                 v50,
                                                 v52,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0LL);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0LL);
                          v54 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v54, 0LL);
                          if ( v54 )
                          {
                            System_Text_StringBuilder__Append_61730360(v54, RarityInvalidMessage, 0LL);
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9950/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0LL);
                            System_Text_StringBuilder__Append_61730360(v54, v55, 0LL);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v57 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v54->klass->vtable._3_ToString.method)(
                                                       v54,
                                                       v54->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
                            v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_YES"*/, 0LL);
                            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_NO"*/, 0LL);
                            v60 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v60,
                              (Il2CppObject *)v23,
                              Method_SupportSelectRootComponent___c__DisplayClass69_0__OnBackSelect_b__0__,
                              0LL);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_30483432(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v57,
                                v58,
                                v59,
                                v60,
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
        sub_1B86614(UserServantLeaderEntity, v25);
      }
    }
  }
  SupportSelectRootComponent__ExecutionServantSet(
    this,
    *(_DWORD *)(v23 + 24),
    *(_DWORD *)(v23 + 28),
    *(UserServantEntity_o **)(v23 + 32),
    v32);
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

  if ( (byte_4A4AC9C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, v4);
    sub_1B863B8(&CancelConfirmMenu_CallbackFunc_TypeInfo, v5);
    sub_1B863B8(&int___TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__, v8);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__, v9);
    sub_1B863B8(&Method_SupportSelectRootComponent_OnClickBack__, v10);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v11);
    byte_4A4AC9C = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v17 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickBack__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B8639C(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0LL);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v19);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= supportServantData->max_length )
          sub_1B8661C(CenterNum, v14);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v22 = supportServantData->m_Items[(int)CenterNum];
        v23 = (CancelConfirmMenu_CallbackFunc_o *)sub_1B86604(CancelConfirmMenu_CallbackFunc_TypeInfo);
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
        v25 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickBack__);
      v26 = (System_Reflection_MethodBase_o *)sub_1B8639C(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 1, 0, 0LL);
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
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22061/*"ok"*/, v34);
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
        v33 = (System_Int32_array *)sub_1B864F4(v31, int___TypeInfo);
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
      v33 = (System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)v35->static_fields->FixMainSupportDeckNum);
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
    v38 = (System_Int32_array *)sub_1B864F4(v36, int___TypeInfo);
    if ( v38 )
      goto LABEL_48;
LABEL_43:
    sub_1B868D4(v32);
LABEL_44:
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    v38 = (System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)v39->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v37);
    v40 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickBack__);
    v41 = (System_Reflection_MethodBase_o *)sub_1B8639C(v40, v40[4]);
    OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0, 0LL);
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    v45 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_1B86604(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
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
    sub_1B86614(CenterNum, v14);
  }
  v12 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickBack__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B8639C(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  int32_t v11; // w21
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v17; // x22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v21; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v25; // x2
  _BOOL8 IsFixedEventQuestSupportDeckIdNow; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_4A4AC9A & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__, v8);
    byte_4A4AC9A = 1;
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
    sub_1B8661C(FixedErrorList, v14);
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v14);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v18 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B8639C(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B86604(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v21, 0LL);
        return;
      }
LABEL_19:
      sub_1B86614(FixedErrorList, v14);
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
      0LL);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v11, v25);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedEventQuestSupportDeckIdNow,
      IsFixedEventQuestSupportDeckIdNow,
      v27);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v28);
  }
  else
  {
    v22 = Method_SupportSelectRootComponent_OnClickFixEventDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixEventDeckButton__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v23 = (System_Reflection_MethodBase_o *)sub_1B8639C(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  int32_t v11; // w21
  const MethodInfo *v12; // x5
  System_Collections_Generic_List_object__o *FixedErrorList; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x4
  struct SupportServantData_array *supportServantData; // x8
  System_Collections_Generic_List_object__o *v17; // x22
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v21; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  SupportDeckFixErrorDialog_o *fixErrorDialog; // x19
  const MethodInfo *v25; // x2
  _BOOL8 IsFixedMainQuestSupportDeckIdNow; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1

  if ( (byte_4A4AC99 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&idx);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndConfirmMenu__, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__, v8);
    byte_4A4AC99 = 1;
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
    sub_1B8661C(FixedErrorList, v14);
  v17 = FixedErrorList;
  FixedErrorList = (System_Collections_Generic_List_object__o *)supportServantData->m_Items[CenterNum];
  if ( FixedErrorList )
  {
    FixedErrorList = (System_Collections_Generic_List_object__o *)SupportServantData__get_IsNoServant(
                                                                    (SupportServantData_o *)FixedErrorList,
                                                                    v14);
    if ( ((unsigned __int8)FixedErrorList & 1) != 0 )
    {
      v18 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B8639C(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v21 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_1B86604(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
      SupportSelectConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent_EndConfirmMenu__,
        0LL);
      if ( supportSelectConfirmMenu )
      {
        SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v21, 0LL);
        return;
      }
LABEL_19:
      sub_1B86614(FixedErrorList, v14);
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
      0LL);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v11, v25);
    SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
      (SupportSelectRootComponent_o *)IsFixedMainQuestSupportDeckIdNow,
      IsFixedMainQuestSupportDeckIdNow,
      v27);
    SupportSelectRootComponent__SetActiveApplyIcon(this, v28);
  }
  else
  {
    v22 = Method_SupportSelectRootComponent_OnClickFixMainDeckButton__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickFixMainDeckButton__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v23 = (System_Reflection_MethodBase_o *)sub_1B8639C(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0LL);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4A4ACA0 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportEditMenu__, v3);
    byte_4A4ACA0 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B8661C(CenterNum, v5);
  supportEditMenu = this->fields.supportEditMenu;
  isEdit = this->fields.isEdit;
  v9 = supportServantData->m_Items[(int)CenterNum];
  v10 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0LL);
  if ( !supportEditMenu )
LABEL_7:
    sub_1B86614(CenterNum, v5);
  SupportSelectEditMenu__Open(supportEditMenu, v9, isEdit, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A4AC9B & 1) == 0 )
  {
    sub_1B863B8(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__, isFixed);
    byte_4A4AC9B = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
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
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  unsigned int *orgSupportServantData; // x23
  unsigned __int64 v12; // x22
  __int64 v13; // x24
  unsigned __int64 v14; // x8
  SupportServantData_o *v15; // x20
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned int *tmpSupportServantData; // x23
  unsigned __int64 v20; // x22
  __int64 v21; // x24
  unsigned __int64 v22; // x8
  SupportServantData_o *v23; // x20
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0

  v2 = this;
  if ( (byte_4A4AC7E & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&SupportServantData_TypeInfo, method);
    byte_4A4AC7E = 1;
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
      v7 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
      SupportServantData___ctor(v7, v8);
      if ( v7 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B864F4(v7, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v27 = sub_1B86638();
          sub_1B864E0(v27, 0LL);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_1B8661C(this, method);
      *(_QWORD *)&supportServantData[2 * v4 + 8] = v7;
      sub_1B8635C((CGThumbnailListItem_o *)&supportServantData[v5], (int32_t)v7, v9, v10);
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
      v15 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
      SupportServantData___ctor(v15, v16);
      if ( v15 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B864F4(v15, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v12 >= orgSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&orgSupportServantData[2 * v12 + 8] = v15;
      sub_1B8635C((CGThumbnailListItem_o *)&orgSupportServantData[v13], (int32_t)v15, v17, v18);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v12;
    v13 += 2LL;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_1B86614(this, method);
  v20 = 0LL;
  v21 = 8LL;
  while ( 1 )
  {
    v22 = tmpSupportServantData[6];
    if ( (__int64)v20 >= (int)v22 )
      break;
    if ( v20 >= v22 )
      goto LABEL_37;
    if ( !*(_QWORD *)&tmpSupportServantData[2 * v20 + 8] )
    {
      v23 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
      SupportServantData___ctor(v23, v24);
      if ( v23 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B864F4(v23, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v20 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *(_QWORD *)&tmpSupportServantData[2 * v20 + 8] = v23;
      sub_1B8635C((CGThumbnailListItem_o *)&tmpSupportServantData[v21], (int32_t)v23, v25, v26);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v20;
    v21 += 2LL;
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

  if ( (byte_4A4ACA5 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndRemoveAll__, v3);
    byte_4A4ACA5 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B8661C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B86614(CenterNum, v5);
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

  if ( (byte_4A4ACA9 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo, method);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndRemoveAllEquip__, v3);
    byte_4A4ACA9 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= supportServantData->max_length )
    sub_1B8661C(CenterNum, v5);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v8 = supportServantData->m_Items[(int)CenterNum];
  v9 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_1B86604(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0LL);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_1B86614(CenterNum, v5);
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
  SupportServantData_o *Instance; // x0
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *orgSupportServantData; // x9
  const MethodInfo *v17; // x2
  NetworkManager_ResultCallbackFunc_o *v18; // x21

  if ( (byte_4A4AC8B & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_FollowerSetupRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__, v7);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v8);
    byte_4A4AC8B = 1;
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
        sub_1B8661C(Instance, v11);
      Instance = supportServantData->m_Items[i];
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, orgSupportServantData->m_Items[i], v12);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v11) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_22061/*"ok"*/, v17);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0LL);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v18,
                                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_1B86614(Instance, v11);
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
  const MethodInfo *v7; // x3
  struct SupportServantData_array *supportServantData; // x8
  struct System_String_o *editDeckName; // x1
  const MethodInfo *v10; // x2
  SupportSelectListViewIndicator_o *indicator; // x19

  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  IsNullOrEmpty = (SupportSelectMenu_o *)System_String__IsNullOrEmpty(this->fields.editDeckName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_8;
    if ( CenterNum >= supportServantData->max_length )
      sub_1B8661C(IsNullOrEmpty, v5);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_1B8635C((CGThumbnailListItem_o *)&IsNullOrEmpty->fields.decideButton, (int32_t)editDeckName, v6, v7),
          SupportSelectRootComponent__SaveTemp(this, -1, v10),
          (IsNullOrEmpty = this->fields.supportSelectMenu) == 0LL)
      || (indicator = IsNullOrEmpty->fields.indicator,
          IsNullOrEmpty = (SupportSelectMenu_o *)SupportSelectMenu__GetCenterItem(IsNullOrEmpty, 0LL),
          !indicator) )
    {
LABEL_8:
      sub_1B86614(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, 0LL);
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
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_4A4AC9F & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, result);
    sub_1B863B8(&Method_SupportSelectRootComponent_ReturnScene__, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4AC9F = 1;
  }
  this->fields.state = 0;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
  {
    v8 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B863D0(Method_SupportSelectRootComponent_ReturnScene__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B8639C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0LL);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v12);
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
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0LL);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v13);
      goto LABEL_11;
    }
LABEL_20:
    sub_1B86614(supportSelectMenu, v10);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0LL) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0LL, 0LL);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0LL) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B8661C(this, *(_QWORD *)&targetIdx);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_1B86614(this, *(_QWORD *)&targetIdx);
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

  if ( (byte_4A4ACA2 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B863B8(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__, v8);
    byte_4A4ACA2 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
    if ( i >= SLODWORD(supportEditMenu->fields.onClickButton[1].fields.method_info) )
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
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
                                                       (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v11)
    || (v35 = (System_Int32_array *)supportEditMenu,
        v36 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__),
        v37 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_1B86604(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v37,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          0LL),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_1B86614(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v35, v36, v37, 0LL);
}


void __fastcall SupportSelectRootComponent__SetActiveApplyIcon(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  if ( this->fields.supportInfoJump || this->fields.isEdit )
  {
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__HideActiveSupportApplyIcon(supportSelectMenu, 0LL);
      return;
    }
LABEL_7:
    sub_1B86614(supportSelectMenu, method);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, method);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_7;
  SupportSelectMenu__SetActiveSupportApplyIcon(
    this->fields.supportSelectMenu,
    (_DWORD)supportSelectMenu + 1,
    this->fields.tempFixMainQuestSupportDeckIds,
    this->fields.tempFixEventQuestSupportDeckIds,
    0LL);
}


void __fastcall SupportSelectRootComponent__SetCacheAssetNameList(
        SupportSelectRootComponent_o *this,
        System_String_array *list,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_array *v6; // x19
  CGThumbnailListItem_o *p_cacheAssetNameList; // x21
  struct System_String_array *cacheAssetNameList; // t1

  if ( (byte_4A4AC8A & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, list);
    byte_4A4AC8A = 1;
  }
  cacheAssetNameList = this->fields.cacheAssetNameList;
  p_cacheAssetNameList = (CGThumbnailListItem_o *)&this->fields.cacheAssetNameList;
  v6 = cacheAssetNameList;
  if ( list )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage_38751600(list, 0LL, 1, 0LL);
  }
  p_cacheAssetNameList->klass = (CGThumbnailListItem_c *)list;
  sub_1B8635C(p_cacheAssetNameList, (int32_t)list, (int32_t)method, v3);
  if ( v6 )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage_38753944(v6, 0LL);
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
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct SupportServantData_array *v27; // x8
  struct SupportServantData_array *v28; // x8
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-50h]

  v7 = result;
  v8 = this;
  if ( (byte_4A4AC91 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B863B8(&Method_System_Array_IndexOf_long___, v9);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__, v12);
    this = (SupportSelectRootComponent_o *)sub_1B863B8(
                                             &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                             v13);
    byte_4A4AC91 = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    v21 = &Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_42186464(userSvtEntity->fields.svtId, 0LL);
    v16 = item->fields.userSvtEntity;
    if ( !v16 )
      goto LABEL_32;
    v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v18 = (int)this;
    *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v34.fields.fakeValue = v17;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0LL, 0LL);
    v18 = 0;
    v34 = v33;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v34;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v32, 0LL);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_1B86614(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= supportServantData->max_length )
    goto LABEL_33;
  v23 = supportServantData->m_Items[selectNum];
  if ( !v23 )
    goto LABEL_32;
  v24 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v23->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_3069980 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v27 = v8->fields.supportServantData;
    if ( !v27 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= v27->max_length )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v27->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, v25);
  }
  v28 = v8->fields.supportServantData;
  if ( !v28 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= v28->max_length )
LABEL_33:
    sub_1B8661C(this, *(_QWORD *)&result);
  this = (SupportSelectRootComponent_o *)v28->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v24, v18, v26);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  v21 = &Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v29 = v20;
  System_Action___ctor(v20, (Il2CppObject *)v8, *v21, 0LL);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v29, 0LL);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v30) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v31);
  this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, 0LL);
}


void __fastcall SupportSelectRootComponent__SetFriendInfo(
        SupportSelectRootComponent_o *this,
        int32_t *deckIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  const MethodInfo *v22; // x3
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 v25; // x27
  struct System_Int32_array *v26; // x8
  unsigned __int64 v27; // x29
  unsigned int *v28; // x23
  SupportServantData_o *v29; // x22
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x7
  unsigned int *v34; // x8
  struct SupportInfoJump_o *v35; // x10
  struct System_Int32_array *v36; // x9
  struct System_Int32_array *eventSupportDeckIds; // x8
  __int64 v38; // x26
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  unsigned __int64 v42; // x28
  unsigned int v43; // w27
  struct System_Int32_array *v44; // x8
  unsigned int *v45; // x23
  SupportServantData_o *v46; // x22
  const MethodInfo *v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  unsigned int *v50; // x0
  const MethodInfo *v51; // x7
  unsigned int *v52; // x8
  struct SupportInfoJump_o *v53; // x9
  struct System_Int32_array *v54; // x10
  unsigned __int64 v55; // x25
  struct System_Int32_array *v56; // x8
  unsigned int *v57; // x23
  SupportServantData_o *v58; // x22
  const MethodInfo *v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  unsigned int *v62; // x0
  const MethodInfo *v63; // x7
  unsigned int *v64; // x8
  struct SupportInfoJump_o *v65; // x9
  struct System_Int32_array *v66; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v69; // x21
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  __int64 v72; // x0

  v5 = this;
  if ( (byte_4A4AC83 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, deckIndex);
    sub_1B863B8(&BalanceConfig_TypeInfo, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v8);
    sub_1B863B8(&SupportServantData___TypeInfo, v9);
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&SupportServantData_TypeInfo, v10);
    byte_4A4AC83 = 1;
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
      sub_1B8661C(this, deckIndex);
    *(_QWORD *)&v16[i] = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v16[i], 0, (int32_t)method, v3);
    ++v13;
  }
  if ( !otherUserGameEntity )
    goto LABEL_73;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_2FA3FBC *)Method_System_Linq_Enumerable_SequenceEqual_int___);
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
    v38 = *(_QWORD *)&eventSupportDeckIds->max_length;
    v39 = sub_1B86460(SupportServantData___TypeInfo, (unsigned int)(v38 + v18));
    *p_supportServantData = (unsigned int *)v39;
    sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.supportServantData, v39, v40, v41);
    if ( (int)v18 < 1 )
    {
      v43 = 0;
LABEL_52:
      if ( (int)v38 < 1 )
        goto LABEL_69;
      v55 = 0LL;
      while ( 1 )
      {
        v56 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v56 )
          break;
        if ( v55 >= v56->max_length )
          goto LABEL_74;
        if ( v56->m_Items[v55 + 1] >= 1 )
        {
          v57 = *p_supportServantData;
          v58 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
          SupportServantData___ctor(v58, v59);
          if ( !v57 )
            break;
          if ( v58 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B864F4(v58, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
            if ( !this )
              goto LABEL_75;
          }
          if ( v43 >= v57[6] )
            goto LABEL_74;
          v62 = &v57[2 * v43];
          *((_QWORD *)v62 + 4) = v58;
          sub_1B8635C((CGThumbnailListItem_o *)(v62 + 8), (int32_t)v58, v60, v61);
          v64 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v43 >= v64[6] )
            goto LABEL_74;
          v65 = v5->fields.supportInfoJump;
          if ( !v65 )
            break;
          v66 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v66 )
            break;
          if ( v55 >= v66->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v64[2 * v43 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34008268(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v65->fields.kind,
            v65->fields.isSelect,
            v65->fields.eventSetupInfo,
            1,
            v66->m_Items[v55 + 1],
            v63);
          ++v43;
        }
        if ( (unsigned int)v38 == ++v55 )
          goto LABEL_69;
      }
    }
    else
    {
      v42 = 0LL;
      v43 = 0;
      while ( 1 )
      {
        v44 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v44 )
          break;
        if ( v42 >= v44->max_length )
          goto LABEL_74;
        if ( v44->m_Items[v42 + 1] >= 1 )
        {
          v45 = *p_supportServantData;
          v46 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
          SupportServantData___ctor(v46, v47);
          if ( !v45 )
            break;
          if ( v46 )
          {
            this = (SupportSelectRootComponent_o *)sub_1B864F4(v46, *(_QWORD *)(*(_QWORD *)v45 + 64LL));
            if ( !this )
            {
LABEL_75:
              v72 = sub_1B86638();
              sub_1B864E0(v72, 0LL);
            }
          }
          if ( v43 >= v45[6] )
            goto LABEL_74;
          v50 = &v45[2 * v43];
          *((_QWORD *)v50 + 4) = v46;
          sub_1B8635C((CGThumbnailListItem_o *)(v50 + 8), (int32_t)v46, v48, v49);
          v52 = *p_supportServantData;
          if ( !*p_supportServantData )
            break;
          if ( v43 >= v52[6] )
            goto LABEL_74;
          v53 = v5->fields.supportInfoJump;
          if ( !v53 )
            break;
          v54 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v54 )
            break;
          if ( v42 >= v54->max_length )
            goto LABEL_74;
          this = *(SupportSelectRootComponent_o **)&v52[2 * v43 + 8];
          if ( !this )
            break;
          SupportServantData__Init_34008268(
            (SupportServantData_o *)this,
            otherUserGameEntity,
            v53->fields.kind,
            v53->fields.isSelect,
            v53->fields.eventSetupInfo,
            0,
            v54->m_Items[v42 + 1],
            v51);
          ++v43;
        }
        if ( v19 == ++v42 )
          goto LABEL_52;
      }
    }
LABEL_73:
    sub_1B86614(this, deckIndex);
  }
  v20 = sub_1B86460(SupportServantData___TypeInfo, (unsigned int)v18);
  *p_supportServantData = (unsigned int *)v20;
  sub_1B8635C((CGThumbnailListItem_o *)&v5->fields.supportServantData, v20, v21, v22);
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
        v29 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
        SupportServantData___ctor(v29, v30);
        if ( !v28 )
          goto LABEL_73;
        if ( v29 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B864F4(v29, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !this )
            goto LABEL_75;
        }
        if ( v27 >= v28[6] )
          goto LABEL_74;
        *(_QWORD *)&v28[v25] = v29;
        sub_1B8635C((CGThumbnailListItem_o *)&v28[v25], (int32_t)v29, v31, v32);
        v34 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_73;
        if ( v27 >= v34[6] )
          goto LABEL_74;
        v35 = v5->fields.supportInfoJump;
        if ( !v35 )
          goto LABEL_73;
        v36 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v36 )
          goto LABEL_73;
        if ( v27 >= v36->max_length )
          goto LABEL_74;
        this = *(SupportSelectRootComponent_o **)&v34[v25];
        if ( !this )
          goto LABEL_73;
        SupportServantData__Init_34008268(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v35->fields.kind,
          v35->fields.isSelect,
          v35->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v36->obj.klass + v24),
          v33);
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
  v69 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)v5, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_73;
  indicator->fields.modifyCenterItemCallBack = v69;
  sub_1B8635C((CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v69, v70, v71);
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
  const MethodInfo *v3; // x3
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
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  unsigned int v40; // w0
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  void *monitor; // x8
  __int64 v45; // x24
  __int64 v46; // x23
  unsigned __int64 v47; // x25
  unsigned int *v48; // x26
  SupportServantData_o *v49; // x22
  const MethodInfo *v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x7
  unsigned int *v54; // x9
  struct SupportInfoJump_o *v55; // x8
  __int64 v56; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct SupportInfoJump_o *v62; // x8
  QuestRestrictionInfo_o *v63; // x20
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x19
  __int64 v65; // x0

  v4 = this;
  if ( (byte_4A4AC84 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&BalanceConfig_TypeInfo, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_int___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v10);
    sub_1B863B8(&int___TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B863B8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v14);
    sub_1B863B8(&SupportServantData___TypeInfo, v15);
    sub_1B863B8(&SupportServantData_TypeInfo, v16);
    sub_1B863B8(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__, v17);
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&SupportSelectRootComponent___c_TypeInfo, v18);
    byte_4A4AC84 = 1;
  }
  supportInfoJump = v4->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_57;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_57;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v20 = v4->fields.supportInfoJump;
  if ( !v20 )
    goto LABEL_57;
  questRestrictionInfo = v20->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_57;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    sub_1B8635C((CGThumbnailListItem_o *)&v27[i], 0, v2, v3);
    ++v24;
  }
  v28 = v4->fields.supportInfoJump;
  if ( !v28 || (followerInfo = v28->fields.followerInfo) == 0LL )
LABEL_57:
    sub_1B86614(this, method);
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
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B864F4(v30, int___TypeInfo);
  if ( !v32 )
  {
    sub_1B868D4(v31);
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
    _9__49_0 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__49_0,
      v35,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__49_0__,
      0LL);
    static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v37, v38);
  }
  v39 = System_Linq_Enumerable__Where_int_(
          v32,
          (System_Func_TSource__bool__o *)_9__49_0,
          (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
  v40 = System_Linq_Enumerable__Count_int_(v39, (const MethodInfo_2F8B130 *)Method_System_Linq_Enumerable_Count_int___);
  v41 = sub_1B86460(SupportServantData___TypeInfo, v40);
  *p_supportServantData = (unsigned int *)v41;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.supportServantData, v41, v42, v43);
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
        v49 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
        SupportServantData___ctor(v49, v50);
        if ( !v48 )
          goto LABEL_57;
        if ( v49 )
        {
          this = (SupportSelectRootComponent_o *)sub_1B864F4(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( !this )
          {
            v65 = sub_1B86638();
            sub_1B864E0(v65, 0LL);
          }
        }
        if ( v47 >= v48[6] )
          break;
        *(_QWORD *)&v48[v46] = v49;
        sub_1B8635C((CGThumbnailListItem_o *)&v48[v46], (int32_t)v49, v51, v52);
        v54 = *p_supportServantData;
        if ( !*p_supportServantData )
          goto LABEL_57;
        if ( v47 >= v54[6] )
          break;
        v55 = v4->fields.supportInfoJump;
        if ( !v55 )
          goto LABEL_57;
        if ( v47 >= LODWORD(v32[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)&v54[v46];
        if ( !this )
          goto LABEL_57;
        SupportServantData__Init_34010288(
          (SupportServantData_o *)this,
          v55->fields.followerInfo,
          v55->fields.kind,
          v55->fields.isSelect,
          v55->fields.eventSetupInfo,
          v55->fields.questRestrictionInfo,
          *((_DWORD *)&v32->klass + v45),
          v53);
      }
      LODWORD(monitor) = v32[1].monitor;
      v56 = v45 - 7;
      ++v45;
      v46 += 2LL;
      if ( v56 >= (int)monitor )
        goto LABEL_51;
    }
LABEL_58:
    sub_1B8661C(this, method);
  }
LABEL_51:
  supportSelectMenu = v4->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_57;
  indicator = supportSelectMenu->fields.indicator;
  v59 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)v4, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0LL);
  if ( !indicator )
    goto LABEL_57;
  indicator->fields.modifyCenterItemCallBack = v59;
  sub_1B8635C((CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack, (int32_t)v59, v60, v61);
  v62 = v4->fields.supportInfoJump;
  if ( !v62 )
    goto LABEL_57;
  v63 = v62->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v4->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_57;
  FollowerQuestInfomationDraw__SetInfomation(followerQuestInfomationDraw, v63, this->fields.kind, 0LL, 0LL);
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
  int32_t Int; // w20
  BalanceConfig_c *v18; // x8
  int v19; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v21; // x0
  struct System_Int32_array **p_tempFixMainQuestSupportDeckIds; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  SupportServantData_o *followerQuestInfomationDraw; // x0
  __int64 i; // x25
  unsigned __int64 v27; // x24
  struct BalanceConfig_StaticFields *oldEquipIdList; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x8
  unsigned __int64 max_length; // x9
  struct System_Int32_array *v31; // x9
  struct System_Int32_array *v32; // x0
  struct System_Int32_array **p_tempFixEventQuestSupportDeckIds; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 j; // x25
  unsigned __int64 v37; // x24
  struct System_Int32_array *fixEventSupportDeckIds; // x8
  unsigned __int64 v39; // x9
  struct System_Int32_array *v40; // x9
  SupportSelectRootComponent_o *v41; // x0
  const MethodInfo *v42; // x4
  SupportSelectRootComponent_o *v43; // x0
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct SupportServantData_array *supportServantData; // x21
  __int64 v51; // x8
  unsigned __int64 v52; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *supportSelectMenu; // x21
  SupportServantData_array *v55; // x22
  SupportSelectMenu_CallbackFunc_o *v56; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v57; // x24
  struct SupportSelectMenu_o *v58; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v60; // x21
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct SupportServantData_array *v66; // x20
  __int64 v67; // x8
  unsigned __int64 v68; // x21
  struct EventUpValSetupInfo_o *v69; // x1
  SupportSelectMenu_o *v70; // x20
  SupportServantData_array *v71; // x21
  int32_t v72; // w22
  SupportSelectMenu_CallbackFunc_o *v73; // x23
  SupportSelectMenu_DragSwapCallbackFunc_o *v74; // x24
  const MethodInfo *v75; // x2
  struct SupportServantData_array *v76; // x8
  bool v77; // w1
  System_Action_o *v78; // x20
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A4AC85 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&BalanceConfig_TypeInfo, v4);
    sub_1B863B8(&SupportSelectMenu_CallbackFunc_TypeInfo, v5);
    sub_1B863B8(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo, v6);
    sub_1B863B8(&int___TypeInfo, v7);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndLoadCommonBg__, v8);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportSelectMenu__, v9);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__, v10);
    sub_1B863B8(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__, v11);
    sub_1B863B8(&StringLiteral_12347/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, v12);
    byte_4A4AC85 = 1;
  }
  SupportSelectRootComponent__InitSupportServantData(this, method);
  deckIndex = 0;
  supportInfoJump = this->fields.supportInfoJump;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0LL, 0, 0, 0, 0, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_12347/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0LL);
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
    v21 = (struct System_Int32_array *)sub_1B86460(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    p_tempFixMainQuestSupportDeckIds = &this->fields.tempFixMainQuestSupportDeckIds;
    this->fields.tempFixMainQuestSupportDeckIds = v21;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tempFixMainQuestSupportDeckIds, (int32_t)v21, v23, v24);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8LL; ; ++i )
    {
      v27 = i - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)followerQuestInfomationDraw[1].fields.oldEquipIdList;
      if ( (__int64)v27 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_74;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_74;
      max_length = fixMainSupportDeckIds->max_length;
      if ( (__int64)v27 < (int)max_length )
      {
        if ( v27 >= max_length )
          goto LABEL_75;
        v31 = *p_tempFixMainQuestSupportDeckIds;
        if ( !*p_tempFixMainQuestSupportDeckIds )
          goto LABEL_74;
        if ( v27 >= v31->max_length )
          goto LABEL_75;
        *((_DWORD *)&v31->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v32 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    p_tempFixEventQuestSupportDeckIds = &this->fields.tempFixEventQuestSupportDeckIds;
    this->fields.tempFixEventQuestSupportDeckIds = v32;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tempFixEventQuestSupportDeckIds, (int32_t)v32, v34, v35);
    followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8LL; ; ++j )
    {
      v37 = j - 8;
      if ( !LODWORD(followerQuestInfomationDraw[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(followerQuestInfomationDraw);
        followerQuestInfomationDraw = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v37 >= SLODWORD(followerQuestInfomationDraw[1].fields.oldEquipIdList->m_Items[19]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_74;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_74;
      v39 = fixEventSupportDeckIds->max_length;
      if ( (__int64)v37 < (int)v39 )
      {
        if ( v37 >= v39 )
          goto LABEL_75;
        v40 = *p_tempFixEventQuestSupportDeckIds;
        if ( !*p_tempFixEventQuestSupportDeckIds )
          goto LABEL_74;
        if ( v37 >= v40->max_length )
          goto LABEL_75;
        *((_DWORD *)&v40->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v16);
    SupportSelectRootComponent__CopySupportData(
      v41,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v42);
    SupportSelectRootComponent__CopySupportData(
      v43,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v44);
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
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, 0LL);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v45);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v46);
        followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
        if ( followerQuestInfomationDraw )
        {
          TitleInfoControl__setTitleInfo_38092652(
            (TitleInfoControl_o *)followerQuestInfomationDraw,
            this->fields.myFSM,
            2,
            81,
            1,
            0LL);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v47);
          followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( followerQuestInfomationDraw )
          {
            SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)followerQuestInfomationDraw, 1, 0LL);
            followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( followerQuestInfomationDraw )
            {
              SupportSelectMenu__SetActiveCurrentSupportSprite(
                (SupportSelectMenu_o *)followerQuestInfomationDraw,
                0,
                0,
                0,
                0,
                0LL);
              supportServantData = this->fields.supportServantData;
              if ( supportServantData )
              {
                v51 = *(_QWORD *)&supportServantData->max_length;
                if ( (int)v51 >= 1 )
                {
                  v52 = 0LL;
                  while ( v52 < (unsigned int)v51 )
                  {
                    followerQuestInfomationDraw = supportServantData->m_Items[v52];
                    if ( followerQuestInfomationDraw )
                    {
                      eventSetupInfo = this->fields.eventSetupInfo;
                      followerQuestInfomationDraw->fields.eventSetupInfo = eventSetupInfo;
                      sub_1B8635C(
                        (CGThumbnailListItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
                        (int32_t)eventSetupInfo,
                        v48,
                        v49);
                    }
                    LODWORD(v51) = supportServantData->max_length;
                    if ( (__int64)++v52 >= (int)v51 )
                      goto LABEL_48;
                  }
LABEL_75:
                  sub_1B8661C(followerQuestInfomationDraw, v16);
                }
LABEL_48:
                supportSelectMenu = this->fields.supportSelectMenu;
                v55 = this->fields.supportServantData;
                v56 = (SupportSelectMenu_CallbackFunc_o *)sub_1B86604(SupportSelectMenu_CallbackFunc_TypeInfo);
                SupportSelectMenu_CallbackFunc___ctor(
                  v56,
                  (Il2CppObject *)this,
                  (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                  0LL);
                v57 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B86604(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                SupportSelectMenu_DragSwapCallbackFunc___ctor(
                  v57,
                  (Il2CppObject *)this,
                  Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                  0LL);
                if ( supportSelectMenu )
                {
                  SupportSelectMenu__Open(supportSelectMenu, v55, Int, v56, v57, 0LL);
                  v58 = this->fields.supportSelectMenu;
                  if ( v58 )
                  {
                    indicator = v58->fields.indicator;
                    v60 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                    System_Action___ctor(
                      v60,
                      (Il2CppObject *)this,
                      Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                      0LL);
                    if ( indicator )
                    {
                      indicator->fields.modifyCenterItemCallBack = v60;
                      sub_1B8635C(
                        (CGThumbnailListItem_o *)&indicator->fields.modifyCenterItemCallBack,
                        (int32_t)v60,
                        v61,
                        v62);
                      goto LABEL_69;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_74:
    sub_1B86614(followerQuestInfomationDraw, v16);
  }
  if ( supportInfoJump->fields.otherUserGameEntity )
    SupportSelectRootComponent__SetFriendInfo(this, &deckIndex, v14);
  else
    SupportSelectRootComponent__SetFriendInfoPrepareBattle(this, v13);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, 0LL);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.titleInfo;
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  TitleInfoControl__setTitleInfo_38092652(
    (TitleInfoControl_o *)followerQuestInfomationDraw,
    this->fields.myFSM,
    2,
    82,
    1,
    0LL);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v63);
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)followerQuestInfomationDraw, 0, 0LL);
  v66 = this->fields.supportServantData;
  if ( !v66 )
    goto LABEL_74;
  v67 = *(_QWORD *)&v66->max_length;
  if ( (int)v67 >= 1 )
  {
    v68 = 0LL;
    while ( v68 < (unsigned int)v67 )
    {
      followerQuestInfomationDraw = v66->m_Items[v68];
      if ( followerQuestInfomationDraw )
      {
        v69 = this->fields.eventSetupInfo;
        followerQuestInfomationDraw->fields.eventSetupInfo = v69;
        sub_1B8635C(
          (CGThumbnailListItem_o *)&followerQuestInfomationDraw->fields.eventSetupInfo,
          (int32_t)v69,
          v64,
          v65);
      }
      LODWORD(v67) = v66->max_length;
      if ( (__int64)++v68 >= (int)v67 )
        goto LABEL_63;
    }
    goto LABEL_75;
  }
LABEL_63:
  v70 = this->fields.supportSelectMenu;
  v71 = this->fields.supportServantData;
  v72 = deckIndex;
  v73 = (SupportSelectMenu_CallbackFunc_o *)sub_1B86604(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v73,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    0LL);
  v74 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_1B86604(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v74,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    0LL);
  if ( !v70 )
    goto LABEL_74;
  SupportSelectMenu__Open(v70, v71, v72, v73, v74, 0LL);
  v76 = this->fields.supportServantData;
  if ( !v76 )
    goto LABEL_74;
  v77 = (int)v76->max_length >= 2 && v76->m_Items[1] != 0LL;
  SupportSelectRootComponent__setInfoUIDisp(this, v77, v75);
LABEL_69:
  followerQuestInfomationDraw = (SupportServantData_o *)this->fields.backSkinSprite;
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  followerQuestInfomationDraw = (SupportServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)followerQuestInfomationDraw,
                                                          0LL);
  if ( !followerQuestInfomationDraw )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)followerQuestInfomationDraw, 0, 0LL);
  v78 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v78, 2, 1, 0LL);
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
  if ( (byte_4A4AC97 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&idx);
    byte_4A4AC97 = 1;
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
    sub_1B86614(this, *(_QWORD *)&idx);
  if ( v19->max_length <= idx )
LABEL_39:
    sub_1B8661C(this, *(_QWORD *)&idx);
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
    sub_1B86614(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  SceneRootComponent__beginStartUp_39635980((SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent___EndSupportSelectMenu_b__66_2(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_1B86614(0LL, method);
  SupportSelectMenu__Active(supportSelectMenu, 0LL);
}


void __fastcall SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A4AC89 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, method);
    byte_4A4AC89 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectMenu__Init(supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportServantSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportSelectConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.cancelConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.deckNameInputMenu;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.fixErrorDialog;
  if ( !supportSelectMenu )
    goto LABEL_15;
  SupportDeckFixErrorDialog__Init((SupportDeckFixErrorDialog_o *)supportSelectMenu, 0LL);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.cancelConfirmDeckIdDialog;
  if ( !supportSelectMenu
    || (CancelConfirmDeckIdDialog__Init((CancelConfirmDeckIdDialog_o *)supportSelectMenu, 0LL),
        (supportSelectMenu = (SupportSelectMenu_o *)this->fields.followerQuestInfomationDraw) == 0LL)
    || (FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)supportSelectMenu, 0LL, 0, 0LL, 0LL),
        (supportSelectMenu = (SupportSelectMenu_o *)this->fields.backSkinSprite) == 0LL)
    || (supportSelectMenu = (SupportSelectMenu_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)supportSelectMenu,
                                                     0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0LL),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_15:
    sub_1B86614(supportSelectMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)supportSelectMenu, 2, 0, 0LL);
  this->fields.state = 0;
  SupportSelectRootComponent__SetCacheAssetNameList(this, 0LL, v4);
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
  const MethodInfo *v11; // x3
  BalanceConfig_c *v12; // x0
  struct SupportServantData_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  BalanceConfig_c *v16; // x0
  struct SupportServantData_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Instance; // x0
  __int64 v21; // x1

  if ( (byte_4A4AC7D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B863B8(&SupportServantData___TypeInfo, v4);
    sub_1B863B8(&StringLiteral_12969/*"SvtEqScrollBarValue"*/, v5);
    byte_4A4AC7D = 1;
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
    v9 = (struct SupportServantData_array *)sub_1B86460(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v8->static_fields->SupportDeckMax);
    this->fields.supportServantData = v9;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportServantData, (int32_t)v9, v10, v11);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v12 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v12 = BalanceConfig_TypeInfo;
    }
    v13 = (struct SupportServantData_array *)sub_1B86460(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v12->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v13;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.orgSupportServantData, (int32_t)v13, v14, v15);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    v17 = (struct SupportServantData_array *)sub_1B86460(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v16->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v17;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tmpSupportServantData, (int32_t)v17, v18, v19);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v6);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12969/*"SvtEqScrollBarValue"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v21);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  const MethodInfo *v21; // x3
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
  const MethodInfo *v38; // x3
  System_Action_o *v39; // x20
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v41; // x20
  EventUpValSetupInfo_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x1

  if ( (byte_4A4AC86 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, data);
    sub_1B863B8(&AtlasManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_EventQuestMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B863B8(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B863B8(&SceneJumpInfo_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B863B8(&SupportInfoJump_TypeInfo, v14);
    sub_1B863B8(&Method_SupportSelectRootComponent__beginStartUp_b__51_0__, v15);
    byte_4A4AC86 = 1;
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportInfoJump, v24, (int32_t)method, v3);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.supportInfoJump, 0, (int32_t)method, v3);
    v22 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0LL;
  }
  sub_1B8635C((CGThumbnailListItem_o *)p_sceneJumpInfo, v22, v20, v21);
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
    bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( bgTxtSprite )
    {
      bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)bgTxtSprite,
                                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( bgTxtSprite )
      {
        EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0LL, 0LL);
        v41 = System_Linq_Enumerable__ToArray_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
                (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
        v42 = (EventUpValSetupInfo_o *)sub_1B86604(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_39889424(v42, v41, 0, 0, 0, 0LL);
        this->fields.eventSetupInfo = v42;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)v42, v43, v44);
        SupportSelectRootComponent__StartUp(this, v45);
        return;
      }
    }
LABEL_41:
    sub_1B86614(bgTxtSprite, v29);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
          (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  v36 = (EventUpValSetupInfo_o *)sub_1B86604(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39889424(v36, v35, 0, 0, 0, 0LL);
  this->fields.eventSetupInfo = v36;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventSetupInfo, (int32_t)v36, v37, v38);
  v39 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(0LL, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, 0LL);
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
  __int64 v6; // x23
  il2cpp_array_size_t max_length; // w8
  SupportServantData_o *v8; // x21
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0

  v3 = this;
  if ( (byte_4A4ACAE & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_1B863B8(&SupportServantData_TypeInfo, method);
    byte_4A4ACAE = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_1B86614(this, method);
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
      v8 = (SupportServantData_o *)sub_1B86604(SupportServantData_TypeInfo);
      SupportServantData___ctor(v8, v9);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_1B864F4(v8, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v12 = sub_1B86638();
          sub_1B864E0(v12, 0LL);
        }
      }
      if ( v5 >= supportServantData->max_length )
LABEL_17:
        sub_1B8661C(this, method);
      *(Il2CppClass **)((char *)&supportServantData->obj.klass + v6) = (Il2CppClass *)v8;
      sub_1B8635C((CGThumbnailListItem_o *)((char *)supportServantData + v6), (int32_t)v8, v10, v11);
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

  if ( (byte_4A4ACAD & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, servant);
    byte_4A4ACAD = 1;
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
      v20 = 0;
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
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, v7, v9);
      v14 = this->fields.supportServantData;
      if ( !v14 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v14->max_length )
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
      if ( (unsigned int)CenterNum >= v16->max_length )
        goto LABEL_31;
      OldServant = v16->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_30;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, v7, v9);
      v18 = this->fields.supportServantData;
      if ( !v18 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= v18->max_length )
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
  if ( (unsigned int)CenterNum >= v21->max_length )
LABEL_31:
    sub_1B8661C(OldServant, v8);
  v22 = v21->m_Items[CenterNum];
  if ( !v22 )
LABEL_30:
    sub_1B86614(OldServant, v8);
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
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  int32_t v12; // w3
  char v13; // w1
  char v14; // w2
  int32_t v15; // w4
  struct FollowerInfo_o *followerInfo; // x23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w22
  int32_t v19; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_Int32_array *mainSupportDeckIds; // x8
  int32_t max_length; // w24
  System_Int32_array *v23; // x22
  int32_t v24; // w21
  int32_t v25; // w0
  int32_t v26; // w20

  if ( (byte_4A4AC88 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_4A4AC88 = 1;
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
      v19 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
      v12 = 0;
      v15 = v19 + 1;
    }
    else
    {
      eventSupportDeckIds = followerInfo->fields.mainSupportDeckIds;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      if ( CenterNum >= eventSupportDeckIds->max_length )
        goto LABEL_40;
      v25 = System_Array__IndexOf_int_(
              eventSupportDeckIds,
              eventSupportDeckIds->m_Items[CenterNum + 1],
              (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
      v15 = 0;
      v12 = v25 + 1;
    }
    eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v13 = ReturnTypeByQuestId == 0;
    v14 = ReturnTypeByQuestId != 0;
    goto LABEL_34;
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
          (const MethodInfo_2FA3FBC *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    v20 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_2F87F60 *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v20,
                            (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
    if ( !mainSupportDeckIds )
      goto LABEL_39;
    max_length = mainSupportDeckIds->max_length;
    v23 = eventSupportDeckIds;
    if ( CenterNum >= max_length )
    {
      v24 = 0;
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
                                                    (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
      v24 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v15 = 0;
      goto LABEL_27;
    }
    if ( !v23 )
      goto LABEL_39;
    if ( CenterNum < v23->max_length )
    {
      v15 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v23->m_Items[CenterNum + 1],
              (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v14 = CenterNum >= max_length;
      v13 = CenterNum < max_length;
      v12 = v24;
      goto LABEL_34;
    }
LABEL_40:
    sub_1B8661C(eventSupportDeckIds, v9);
  }
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( CenterNum >= eventSupportDeckIds->max_length )
    goto LABEL_40;
  eventSupportDeckIds = (System_Int32_array *)System_Array__IndexOf_int_(
                                                eventSupportDeckIds,
                                                eventSupportDeckIds->m_Items[CenterNum + 1],
                                                (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v12 = (_DWORD)eventSupportDeckIds + 1;
  v13 = 1;
  v14 = 1;
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  v15 = v12;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v13, v14, v12, v15, 0LL);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (v26 = CenterNum + 1,
        SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          v26,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          0LL),
        (eventSupportDeckIds = (System_Int32_array *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_39:
    sub_1B86614(eventSupportDeckIds, v9);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    v26,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__setEditUI(
        SupportSelectRootComponent_o *this,
        bool editOn,
        const MethodInfo *method)
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
  blackMask = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blackMask, 0LL);
  if ( !blackMask )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blackMask, editOn, 0LL);
  blackMask = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !blackMask )
    goto LABEL_11;
  v6 = !editOn;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)blackMask, !editOn, 0LL);
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_11;
  blackMask = (UnityEngine_Component_o *)supportSelectMenu->fields.indicator;
  if ( !blackMask )
    goto LABEL_11;
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)blackMask, v6, 0LL);
  blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu;
  if ( !blackMask )
    goto LABEL_11;
  SupportSelectMenu__setActiveDeckNameChangeButton((SupportSelectMenu_o *)blackMask, v6, 0LL);
  SupportSelectRootComponent__SetActiveApplyIcon(this, v8);
  blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu;
  if ( !blackMask
    || (SupportSelectMenu__SetActiveFixDeckButton((SupportSelectMenu_o *)blackMask, v6, 0LL),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0LL)
    || (v9 = editOn,
        SupportSelectMenu__SetAbleToSwapDrag((SupportSelectMenu_o *)blackMask, v9, 0LL),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0LL) )
  {
LABEL_11:
    sub_1B86614(blackMask, editOn);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, v9, 0LL);
  SupportSelectRootComponent__ChangeTitle(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectRootComponent__setInfoUIDisp(
        SupportSelectRootComponent_o *this,
        bool disp,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0
  struct SupportSelectMenu_o *supportSelectMenu; // x8

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView
    || (UnityEngine_Behaviour__set_enabled(scrollView, disp, 0LL),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0LL)
    || (scrollView = (UnityEngine_Behaviour_o *)supportSelectMenu->fields.indicator) == 0LL )
  {
    sub_1B86614(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, 0LL);
}


void __fastcall SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4ACB3 & 1) == 0 )
  {
    sub_1B863B8(&SupportSelectRootComponent___c_TypeInfo, v1);
    byte_4A4ACB3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  SupportSelectRootComponent_o *_4__this; // x0
  SupportServantData_array *supportServantData; // x19
  __int64 selectNum; // x20
  SupportServantData_o *v11; // x8
  SupportServantSelectMenu_o *supportServantSelectMenu; // x24
  int32_t classPos; // w22
  EventUpValSetupInfo_o *eventSetupInfo2; // x23
  Il2CppObject *v15; // x28
  System_Int32_array *monitor; // x21
  System_Int32_array *klass; // x25
  int v18; // w26
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_4A4ACB4 & 1) == 0 )
  {
    sub_1B863B8(&SupportServantSelectMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_OnBackSelect__, v7);
    byte_4A4ACB4 = 1;
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
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B8661C(_4__this, isDecide);
    v11 = supportServantData->m_Items[selectNum];
    if ( !v11 )
      goto LABEL_15;
    supportServantSelectMenu = _4__this->fields.supportServantSelectMenu;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v11->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 _4__this,
                                                 (const MethodInfo *)isDecide);
    v15 = (Il2CppObject *)this->fields.__4__this;
    if ( !v15
      || (monitor = (System_Int32_array *)v15[18].monitor,
          klass = (System_Int32_array *)v15[19].klass,
          v18 = (int)_4__this,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_1B86604(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v15,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0LL),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_1B86614(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v18 + 1,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v9; // x8
  SupportServantData_array *supportServantData; // x21
  __int64 selectNum; // x22
  SupportServantData_o *v12; // x9
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  CommonUI_o *v15; // x20
  Il2CppObject *v16; // x28
  System_Int32_array *monitor; // x19
  System_Int32_array *klass; // x25
  int v19; // w26
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v21; // x3

  if ( (byte_4A4ACB5 & 1) == 0 )
  {
    sub_1B863B8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__, v7);
    byte_4A4ACB5 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = this->fields.__4__this;
    if ( !v9 )
      goto LABEL_15;
    supportServantData = v9->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v9->fields.selectNum;
    if ( (unsigned int)selectNum >= supportServantData->max_length )
      sub_1B8661C(_4__this, isDecide);
    v12 = supportServantData->m_Items[selectNum];
    if ( !v12 )
      goto LABEL_15;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v12->fields.eventSetupInfo2;
    v15 = (CommonUI_o *)_4__this;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 this->fields.__4__this,
                                                 (const MethodInfo *)isDecide);
    v16 = (Il2CppObject *)this->fields.__4__this;
    if ( !v16
      || (monitor = (System_Int32_array *)v16[18].monitor,
          klass = (System_Int32_array *)v16[19].klass,
          v19 = (int)_4__this,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_1B86604(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v16,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v21),
          !v15) )
    {
LABEL_15:
      sub_1B86614(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v15,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v19 + 1,
      monitor,
      klass,
      callback,
      0LL);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(this, x);
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
    sub_1B86614(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}