void SupportSelectRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596CCE1 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectRootComponent_TypeInfo);
    byte_596CCE1 = 1;
  }
  LODWORD(SupportSelectRootComponent_TypeInfo->static_fields->EDIT_SCENE_FADE_TIME) = (struct SupportSelectRootComponent_StaticFields)1056964608;
}


void SupportSelectRootComponent___ctor(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct System_Int32_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596CCE0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_596CCE0 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v4->static_fields->FixMainSupportDeckNum);
  this->fields.tempFixMainQuestSupportDeckIds = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct System_Int32_array *)sub_2213B20(
                                       int___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->FixEventSupportDeckNum);
  this->fields.tempFixEventQuestSupportDeckIds = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__AddEntryCountNarrowFigure(
        SupportSelectRootComponent_o *this,
        SupportServantData_array *supportServantDataList,
        const MethodInfo *method)
{
  SupportSelectRootComponent___c_c *v5; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__55_0; // x21
  Il2CppObject *v8; // x22
  struct SupportSelectRootComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  SupportSelectRootComponent___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct SupportSelectRootComponent___c_StaticFields *v21; // x9
  System_Func_object__object__o *_9__55_1; // x21
  Il2CppObject *v23; // x22
  struct SupportSelectRootComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_array *v34; // x20
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  MissionNaviTransitionBoardItem_o *p_addEntryCountNarrowFigureAssetNameList; // x19
  System_String_array *v43; // x21
  struct System_String_array *addEntryCountNarrowFigureAssetNameList; // t1

  if ( (byte_596CCB8 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_string____string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SupportServantData__string_____);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_SupportServantData__string____TypeInfo);
    sub_2213A60(&System_Func_string____IEnumerable_string___TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent___c__AddEntryCountNarrowFigure_b__55_0__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__AddEntryCountNarrowFigure_b__55_1__);
    sub_2213A60(&SupportSelectRootComponent___c_TypeInfo);
    byte_596CCB8 = 1;
  }
  v5 = SupportSelectRootComponent___c_TypeInfo;
  if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, supportServantDataList, method);
    v5 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__55_0 = (System_Func_object__object__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, supportServantDataList, method);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_SupportServantData__string____TypeInfo);
    System_Func_object__object____ctor(
      _9__55_0,
      v8,
      Method_SupportSelectRootComponent___c__AddEntryCountNarrowFigure_b__55_0__,
      0);
    v9 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v9->__9__55_0 = (struct System_Func_SupportServantData__string____o *)_9__55_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__55_0, (int32_t)_9__55_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)supportServantDataList,
          (System_Func_TSource__TResult__o *)_9__55_0,
          (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_SupportServantData__string_____);
  v19 = SupportSelectRootComponent___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v17, v18);
    v19 = SupportSelectRootComponent___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__55_1 = (System_Func_object__object__o *)v21->__9__55_1;
  if ( !_9__55_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__55_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string____IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__55_1,
      v23,
      Method_SupportSelectRootComponent___c__AddEntryCountNarrowFigure_b__55_1__,
      0);
    v24 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v24->__9__55_1 = (struct System_Func_string____IEnumerable_string___o *)_9__55_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__55_1, (int32_t)_9__55_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v20,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__55_1,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_string____string___);
  v34 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v31,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32, v33);
  AssetManager__AssetStorageAddEntryCount(v34, 0);
  addEntryCountNarrowFigureAssetNameList = this->fields.addEntryCountNarrowFigureAssetNameList;
  p_addEntryCountNarrowFigureAssetNameList = (MissionNaviTransitionBoardItem_o *)&this->fields.addEntryCountNarrowFigureAssetNameList;
  v43 = addEntryCountNarrowFigureAssetNameList;
  if ( addEntryCountNarrowFigureAssetNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35, v36);
    AssetManager__releaseAssetStorage_47506132(v43, 0);
  }
  p_addEntryCountNarrowFigureAssetNameList->klass = (MissionNaviTransitionBoardItem_c *)v34;
  sub_2213A04(p_addEntryCountNarrowFigureAssetNameList, (int32_t)v34, v36, v37, v38, v39, v40, v41);
}


void SupportSelectRootComponent__CallbackUpdateDeckIdApi(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t CenterNum; // w0
  const MethodInfo *v6; // x2

  if ( (byte_596CCBA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13097/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_596CCBA = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)result);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13097/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, CenterNum, 0);
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

  if ( (byte_596CCD9 & 1) == 0 )
  {
    sub_2213A60(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndChangeDeckName__);
    byte_596CCD9 = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_8;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(CenterNum);
  CenterNum = supportServantData->m_Items[(int)CenterNum];
  if ( !CenterNum
    || (deckNameInputMenu = this->fields.deckNameInputMenu,
        deckName_k__BackingField = CenterNum->fields._deckName_k__BackingField,
        DefaultDeckName = SupportServantData__getDefaultDeckName(CenterNum, v4),
        v9 = (SupportDeckNameInputMenu_CallbackFunc_o *)sub_2213CCC(SupportDeckNameInputMenu_CallbackFunc_TypeInfo),
        SupportDeckNameInputMenu_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndChangeDeckName__,
          0),
        !deckNameInputMenu) )
  {
LABEL_8:
    sub_2213CDC(CenterNum, v4);
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
    sub_2213CDC(titleInfo, method);
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
  SupportServantData_o *v11; // x21
  SupportServantData_o *v12; // x22
  SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *v13; // x23

  if ( (byte_596CCD2 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndConfirmDeckCopy__);
    byte_596CCD2 = 1;
  }
  this->fields.copyTargetDeckId = targetDeckId;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&targetDeckId);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_9;
  max_length = supportServantData->max_length;
  if ( (unsigned int)CenterNum >= max_length || (v9 = this->fields.copyTargetDeckId - 1, v9 >= max_length) )
    sub_2213CE4(CenterNum);
  copyConfirmMenu = this->fields.copyConfirmMenu;
  v11 = supportServantData->m_Items[(int)CenterNum];
  v12 = supportServantData->m_Items[v9];
  v13 = (SupportSelectConfirmCopyMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectConfirmCopyMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmCopyMenu_OnClickButtonEvent___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndConfirmDeckCopy__,
    0);
  if ( !copyConfirmMenu )
LABEL_9:
    sub_2213CDC(CenterNum, v6);
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
  unsigned __int64 v8; // x23
  int i; // w26

  if ( (byte_596CCDD & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCDD = 1;
  }
  if ( !orgData )
LABEL_17:
    sub_2213CDC(this, orgData);
  if ( SLODWORD(orgData->max_length) >= 1 )
  {
    v8 = 0;
    do
    {
      for ( i = 0; ; ++i )
      {
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, orgData, toData);
          this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
        }
        if ( i >= SHIDWORD(this->fields.applyIconObj[7].monitor) )
          break;
        if ( !toData )
          goto LABEL_17;
        if ( v8 >= LODWORD(toData->max_length) || v8 >= LODWORD(orgData->max_length) )
          sub_2213CE4(this);
        this = (SupportSelectRootComponent_o *)toData->m_Items[v8];
        if ( !this )
          goto LABEL_17;
        SupportServantData__CopyData(
          (SupportServantData_o *)this,
          orgData->m_Items[v8],
          isInit,
          (const MethodInfo *)isInit);
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
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_596CCCC & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    byte_596CCCC = 1;
  }
  cancelConfirmMenu = this->fields.cancelConfirmMenu;
  if ( !cancelConfirmMenu )
    goto LABEL_12;
  CancelConfirmMenu__Close(cancelConfirmMenu, 0);
  v6 = Method_SupportSelectRootComponent_EndCancelConfirmMenu__;
  if ( isDecide )
  {
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
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
LABEL_12:
    sub_2213CDC(cancelConfirmMenu, isDecide);
  }
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
  v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
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
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_596CCCB & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596CCCB = 1;
  }
  cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
  if ( !cancelConfirmDeckIdDialog )
    goto LABEL_12;
  CancelConfirmDeckIdDialog__Close(cancelConfirmDeckIdDialog, 0);
  v6 = Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__;
  if ( isDecide )
  {
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
    cancelConfirmDeckIdDialog = (CancelConfirmDeckIdDialog_o *)this->fields.supportServantSelectMenu;
    if ( cancelConfirmDeckIdDialog )
    {
      SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)cancelConfirmDeckIdDialog, 0);
      SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_23515/*"ok"*/, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(cancelConfirmDeckIdDialog, isDecide);
  }
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndChangeDeckName(
        SupportSelectRootComponent_o *this,
        bool isDecide,
        System_String_o *changeName,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportSelectEditMenu_o *supportEditMenu; // x0
  SupportDeckNameInputMenu_o *deckNameInputMenu; // x20
  System_Action_o *v13; // x21

  if ( (byte_596CCDA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent__EndChangeDeckName_b__106_0__);
    byte_596CCDA = 1;
  }
  if ( isDecide )
  {
    this->fields.editDeckName = changeName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.editDeckName,
      (int32_t)changeName,
      changeName,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    supportEditMenu = this->fields.supportEditMenu;
    if ( supportEditMenu )
    {
      SupportSelectEditMenu__Close(supportEditMenu, 0);
      deckNameInputMenu = this->fields.deckNameInputMenu;
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_SupportSelectRootComponent__EndChangeDeckName_b__106_0__,
        0);
      if ( deckNameInputMenu )
      {
        SupportDeckNameInputMenu__Close_42437488(deckNameInputMenu, v13, 0);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(supportEditMenu, isDecide);
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
    sub_2213CDC(0, method);
  SupportSelectMenu__Reset(supportSelectMenu, this->fields.classPos, 0);
}


void SupportSelectRootComponent__EndCloseServantEquipListDecide(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_2213CDC(0, method);
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
}


void SupportSelectRootComponent__EndCloseShowServantQuestJump(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596CCC3 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596CCC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  const MethodInfo *v11; // x2

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
        sub_2213CE4(CenterNum);
      v9 = supportServantData->m_Items[v6];
      if ( !v9 )
        goto LABEL_15;
      SupportServantData__CopyData(v9, supportServantData->m_Items[(int)CenterNum], 0, v5);
      SupportSelectRootComponent__SaveTemp(this, v6, v10);
      SupportSelectRootComponent__AddEntryCountNarrowFigure(this, this->fields.tmpSupportServantData, v11);
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
    sub_2213CDC(CenterNum, isDecide);
  }
  CenterNum = this->fields.copyConfirmMenu;
  if ( !CenterNum )
    goto LABEL_15;
  SupportSelectConfirmCopyMenu__Close(CenterNum, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__EndConfirmMenu(
        SupportSelectRootComponent_o *this,
        bool flag,
        const MethodInfo *method)
{
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x0

  supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
  if ( !supportSelectConfirmMenu )
    sub_2213CDC(0, flag);
  SupportSelectConfirmMenu__Close_42446932(supportSelectConfirmMenu, 0, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  int32_t i; // w21
  struct SupportServantData_array *v20; // x8
  const MethodInfo *v21; // x2
  struct SupportServantData_array *v22; // x8
  struct SupportServantData_array *v23; // x8
  struct SupportServantData_array *v24; // x8
  const MethodInfo *v25; // x2

  if ( (byte_596CCD6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCD6 = 1;
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
        sub_2213CE4(confirmDeckMenu);
      v9 = &supportServantData->obj.klass + (int)confirmDeckMenu;
      v10 = v9[4];
      if ( v10 )
      {
        DefaultDeckName = SupportServantData__getDefaultDeckName(
                            (SupportServantData_o *)v9[4],
                            (const MethodInfo *)isDecide);
        v10->_1.klass = (Il2CppClass *)DefaultDeckName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v10->_1.klass,
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
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide, v18);
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
    sub_2213CDC(confirmDeckMenu, isDecide);
  }
}


void SupportSelectRootComponent__EndLoadCommonBg(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0
  System_Action_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_596CCB5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent__EndLoadCommonBg_b__51_0__);
    byte_596CCB5 = 1;
  }
  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0),
        (titleInfo = (UnityEngine_Component_o *)this->fields.backSkinSprite) == 0)
    || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
  {
    sub_2213CDC(titleInfo, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndLoadCommonBg_b__51_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
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
  const MethodInfo *v7; // x2
  __int64 CenterNum; // x22
  int32_t i; // w20
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v11; // x2
  struct SupportServantData_array *v12; // x8
  struct SupportServantData_array *v13; // x8
  struct SupportServantData_array *v14; // x8
  const MethodInfo *v15; // x2

  if ( (byte_596CCD4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCD4 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_30;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0);
  if ( isDecide )
  {
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    for ( i = 0; ; ++i )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide, v7);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(confirmDeckMenu[1].fields.m_CachedPtr + 180) )
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
                                                            i,
                                                            v7);
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
        SupportServantData__removeServantData((SupportServantData_o *)confirmDeckMenu, i, v11);
      }
      v13 = this->fields.supportServantData;
      if ( !v13 )
        goto LABEL_30;
      if ( (unsigned int)CenterNum >= LODWORD(v13->max_length) )
LABEL_31:
        sub_2213CE4(confirmDeckMenu);
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v13->m_Items[CenterNum];
      if ( !confirmDeckMenu )
        goto LABEL_30;
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)SupportServantData__getEquip(
                                                            (SupportServantData_o *)confirmDeckMenu,
                                                            i,
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
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v7);
      }
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
    sub_2213CDC(confirmDeckMenu, isDecide);
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
  const MethodInfo *v7; // x2
  __int64 CenterNum; // x22
  int32_t i; // w20
  struct SupportServantData_array *supportServantData; // x8
  struct SupportServantData_array *v11; // x8
  const MethodInfo *v12; // x2

  if ( (byte_596CCD8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCD8 = 1;
  }
  confirmDeckMenu = this->fields.confirmDeckMenu;
  if ( !confirmDeckMenu )
    goto LABEL_22;
  SupportSelectConfirmDeckMenu__Close(confirmDeckMenu, 0);
  if ( isDecide )
  {
    CenterNum = SupportSelectRootComponent__getCenterNum(this, v6);
    for ( i = 0; ; ++i )
    {
      confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isDecide, v7);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(confirmDeckMenu[1].fields.m_CachedPtr + 180) )
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
                                                            i,
                                                            v7);
      if ( (__int64)confirmDeckMenu >= 1 )
      {
        v11 = this->fields.supportServantData;
        if ( !v11 )
          goto LABEL_22;
        if ( (unsigned int)CenterNum >= LODWORD(v11->max_length) )
LABEL_23:
          sub_2213CE4(confirmDeckMenu);
        confirmDeckMenu = (SupportSelectConfirmDeckMenu_o *)v11->m_Items[CenterNum];
        if ( !confirmDeckMenu )
          goto LABEL_22;
        SupportServantData__removeEquipData((SupportServantData_o *)confirmDeckMenu, i, v7);
      }
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
    sub_2213CDC(confirmDeckMenu, isDecide);
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
  SupportSelectEditMenu_o *supportEditMenu; // x21
  _BOOL4 isEdit; // w23
  SupportServantData_o *v10; // x20
  SupportSelectEditMenu_OnClickButtonEvent_o *v11; // x22

  if ( (byte_596CCD1 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_596CCD1 = 1;
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
      sub_2213CE4(copyDeckSelectMenu);
    supportEditMenu = this->fields.supportEditMenu;
    isEdit = this->fields.isEdit;
    v10 = supportServantData->m_Items[(int)copyDeckSelectMenu];
    v11 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    SupportSelectEditMenu_OnClickButtonEvent___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SupportSelectRootComponent_EndSupportEditMenu__,
      0);
    if ( !supportEditMenu )
LABEL_10:
      sub_2213CDC(copyDeckSelectMenu, *(_QWORD *)&deckId);
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

  if ( (byte_596CCC4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CCC4 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu
    || (SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0),
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)supportSelectMenu, 0, 0),
        (supportSelectMenu = this->fields.supportSelectMenu) == 0) )
  {
    sub_2213CDC(supportSelectMenu, isDecide);
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
  struct SupportServantData_array *supportServantData; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  SupportServantData_o **m_Items; // x10
  SupportServantData_o *v10; // x11
  const MethodInfo *v11; // x2
  SupportServantData_array *tmpSupportServantData; // x1

  if ( (byte_596CCC1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CCC1 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  SupportSelectMenu__moveCenterItem(supportSelectMenu, this->fields.selectNum, 0);
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_19;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)supportSelectMenu, 0, 0);
  supportSelectMenu = (SupportSelectMenu_o *)UserGameMaster__getSelfUserGame(0);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  max_length = supportServantData->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = (unsigned int)max_length & ~((int)max_length >> 31);
    v8 = (unsigned int)supportServantData->max_length;
    m_Items = supportServantData->m_Items;
    do
    {
      if ( !v8 )
        sub_2213CE4(supportSelectMenu);
      v10 = *m_Items;
      if ( *m_Items && !v10->fields.isFriendInfo )
      {
        if ( !supportSelectMenu )
          goto LABEL_19;
        v10->fields.pushUserServantId = (int64_t)supportSelectMenu->fields.swapButton;
      }
      --v7;
      ++m_Items;
      --v8;
    }
    while ( v7 );
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
LABEL_19:
    sub_2213CDC(supportSelectMenu, isDecide);
  SupportSelectMenu__Redisp(supportSelectMenu, 0);
  tmpSupportServantData = this->fields.tmpSupportServantData;
  if ( tmpSupportServantData )
    SupportSelectRootComponent__AddEntryCountNarrowFigure(this, tmpSupportServantData, v11);
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

  if ( (byte_596CCC2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__);
    byte_596CCC2 = 1;
  }
  if ( questId < 1 )
  {
    SupportSelectRootComponent__EndShowServant(this, 0, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndCloseShowServantQuestJump__, 0);
    if ( !Instance )
      sub_2213CDC(v8, v9);
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
    sub_2213CDC(CenterNum, v7);
  SupportSelectMenu__moveCenterItem(supportSelectMenu, CenterNum, 0);
  if ( resultKind <= 1 )
  {
    if ( resultKind )
    {
      if ( resultKind == 1 )
        SupportSelectRootComponent__RemoveAll(this, v8);
    }
    else
    {
      SupportSelectRootComponent__SelectCopySupportDeck(this, v8);
    }
  }
  else
  {
    switch ( resultKind )
    {
      case 2:
        SupportSelectRootComponent__InitAll(this, v8);
        break;
      case 3:
        SupportSelectRootComponent__RemoveAllEquip(this, v8);
        break;
      case 4:
        SupportSelectRootComponent__ChangeDeckName(this, v8);
        break;
    }
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
  const MethodInfo *v10; // x1
  int64_t supportSelectMenu; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  const MethodInfo *v16; // x2
  struct SupportServantData_array *v17; // x8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  ServantLeaderInfo_o **v25; // x21
  System_String_o *v26; // x2
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct FollowerInfo_o *followerInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userSvtGrandHash; // x23
  System_Func_object__bool__o *v30; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  ServantLeaderInfo_o *v37; // x8
  __int64 v38; // x22
  __int64 v39; // x23
  struct SupportServantData_array *v40; // x8
  SupportServantData_o *v41; // x8
  struct SupportServantData_array *v42; // x8
  SupportServantData_o *v43; // x8
  int v44; // w22
  struct SupportServantData_array *v45; // x8
  SupportServantData_o *v46; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t v48; // w22
  struct SupportServantData_array *v49; // x8
  SupportServantData_o *v50; // x8
  QuestRestrictionInfo_o *v51; // x20
  int32_t v52; // w23
  int32_t limitCount; // w24
  Il2CppObject *v54; // x20
  System_Action_o *v55; // x22
  System_Reflection_MethodBase_o *v56; // x0
  ServantLeaderInfo_o *v57; // x8
  int32_t grandGraphId; // w9
  int32_t supportDeckId; // w8
  int v60; // w23
  SupportSelectMenu_o *v61; // x20
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x2
  struct SupportServantData_array *v64; // x8
  SupportServantData_o *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  SupportSelectConfirmMenu_o *supportSelectConfirmMenu; // x20
  SupportSelectConfirmMenu_CallbackFunc_o *v68; // x21
  struct SupportServantData_array *v69; // x8
  CancelConfirmMenu_o *cancelConfirmMenu; // x21
  SupportServantData_o *v71; // x20
  CancelConfirmMenu_CallbackFunc_o *v72; // x22
  const MethodInfo *v73; // x2
  struct SupportServantData_array *v74; // x22
  SupportServantData_o *v75; // x8
  CommonUI_o *v76; // x24
  System_Int32_array *v77; // x26
  System_Int32_array *v78; // x27
  EventUpValSetupInfo_o *v79; // x25
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x28
  const MethodInfo *v81; // x3
  SupportSelectMenu_o *v82; // x20
  const MethodInfo *v83; // x1
  struct SupportServantData_array *v84; // x8
  const MethodInfo *v85; // x2
  struct SupportServantData_array *v86; // x8
  int64_t v87; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x22
  _QWORD *v89; // x8
  System_Reflection_MethodBase_o *v90; // x0
  struct SupportServantData_array *v91; // x8
  SupportServantData_o *v92; // x8
  int32_t v93; // w20
  CommonUI_o *v94; // x21
  EquipTargetInfo_o *equipTarget1; // x22
  ServantStatusDialog_EndDelegate_o *v96; // x23
  const MethodInfo *v97; // x2
  struct SupportServantData_array *supportServantData; // x22
  SupportServantData_o *v99; // x8
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x25
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x26
  SupportServantSelectMenu_o *supportServantSelectMenu; // x27
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  SupportServantSelectMenu_CallbackFunc_o *v104; // x28
  SupportSelectMenu_o *v105; // x20
  const MethodInfo *v106; // x2
  SupportSelectRootComponent_o *v107; // x0
  bool v108; // w1
  struct SupportServantData_array *v109; // x8
  int64_t v110; // x21
  struct SupportServantData_array *v111; // x8
  SupportServantData_o *v112; // x8
  _QWORD *v113; // x0
  System_Reflection_MethodBase_o *v114; // x0
  struct SupportServantData_array *v115; // x8
  SupportServantData_o *v116; // x8
  CommonUI_o *v117; // x22
  int32_t kind; // w20
  ServantLeaderInfo_o *v119; // x21
  ServantStatusDialog_EndDelegate_o *v120; // x23
  _QWORD *v121; // x0
  System_Reflection_MethodBase_o *v122; // x0
  _QWORD *v123; // x0
  System_Reflection_MethodBase_o *v124; // x0
  _QWORD *v125; // x0
  System_Reflection_MethodBase_o *v126; // x0
  const MethodInfo *v127; // x2
  System_Reflection_MethodBase_o *v128; // x0
  struct SupportServantData_array *v129; // x8
  SupportServantData_o *v130; // x8
  CommonUI_o *v131; // x22
  int32_t v132; // w20
  int64_t v133; // x21
  ServantStatusDialog_FormationEndDelegate_o *v134; // x23
  Il2CppObject *Instance; // x20
  ServantStatusDialog_EndDelegate_o *v136; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x20
  SupportSelectRootComponent___c_c *v138; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__62_0; // x21
  Il2CppObject *v141; // x23
  struct SupportSelectRootComponent___c_StaticFields *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  int32_t v150; // w0
  __int64 v151; // x1
  __int64 v152; // x2
  SupportSelectRootComponent___c_c *v153; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x21
  int v155; // w20
  struct SupportSelectRootComponent___c_StaticFields *v156; // x9
  System_Func_int__bool__o *_9__62_1; // x23
  Il2CppObject *v158; // x24
  struct SupportSelectRootComponent___c_StaticFields *v159; // x0
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v166; // x0
  struct SupportServantData_array *v167; // x8
  SupportServantData_o *v168; // x0
  System_Reflection_MethodBase_o *v169; // x0
  const MethodInfo *v170; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16

  if ( (byte_596CCBB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_2213A60(&System_Func_ServantLeaderInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndShowEquip__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndShowServantWithQuest__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndShowServant__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_OnBackSelect__);
    sub_2213A60(&Method_SupportSelectRootComponent__EndSupportSelectMenu_b__62_3__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__62_0__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__62_1__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__DisplayClass62_0__EndSupportSelectMenu_b__2__);
    sub_2213A60(&SupportSelectRootComponent___c__DisplayClass62_0_TypeInfo);
    sub_2213A60(&SupportSelectRootComponent___c_TypeInfo);
    byte_596CCBB = 1;
  }
  this->fields.classPos = classPos;
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&result);
  this->fields.selectNum = deckNum;
  supportSelectMenu = SupportSelectRootComponent__getCenterNum(this, v10);
  if ( result <= 5 )
  {
    if ( result > 2 )
    {
      v60 = supportSelectMenu;
      if ( result == 3 )
      {
        supportSelectMenu = (int64_t)this->fields.supportSelectMenu;
        this->fields.state = 2;
        if ( !supportSelectMenu )
          goto LABEL_184;
        SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)supportSelectMenu, this->fields.selectNum, 0);
        SupportSelectRootComponent__setEditUI(this, 1, v97);
        supportSelectMenu = (int64_t)this->fields.titleInfo;
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)supportSelectMenu,
                                       0);
        if ( !supportSelectMenu )
          goto LABEL_184;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0);
        supportSelectMenu = (int64_t)this->fields.backSkinSprite;
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)supportSelectMenu,
                                       0);
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)UnityEngine_GameObject__get_transform(
                                       (UnityEngine_GameObject_o *)supportSelectMenu,
                                       0);
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)supportSelectMenu, 0);
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)supportSelectMenu,
                                       0);
        if ( !supportSelectMenu )
          goto LABEL_184;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0);
        supportServantData = this->fields.supportServantData;
        if ( !supportServantData )
          goto LABEL_184;
        if ( LODWORD(supportServantData->max_length) > deckNum )
        {
          v99 = supportServantData->m_Items[deckNum];
          if ( !v99 )
            goto LABEL_184;
          tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
          tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
          supportServantSelectMenu = this->fields.supportServantSelectMenu;
          eventSetupInfo2 = v99->fields.eventSetupInfo2;
          v104 = (SupportServantSelectMenu_CallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_CallbackFunc_TypeInfo);
          SupportServantSelectMenu_CallbackFunc___ctor(
            v104,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0);
          if ( !supportServantSelectMenu )
            goto LABEL_184;
          SupportServantSelectMenu__Open(
            supportServantSelectMenu,
            supportServantData,
            deckNum,
            classPos,
            eventSetupInfo2,
            v60 + 1,
            tempFixMainQuestSupportDeckIds,
            tempFixEventQuestSupportDeckIds,
            v104,
            0);
          return;
        }
      }
      else
      {
        if ( result != 4 )
        {
          v61 = this->fields.supportSelectMenu;
          supportSelectMenu = SupportSelectRootComponent__getCenterNum(this, v12);
          if ( !v61 )
            goto LABEL_184;
          SupportSelectMenu__moveCenterItem(v61, supportSelectMenu, 0);
          SupportSelectRootComponent__ChangeDeckName(this, v62);
          return;
        }
        supportSelectMenu = (int64_t)this->fields.supportSelectMenu;
        this->fields.state = 3;
        if ( !supportSelectMenu )
          goto LABEL_184;
        SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)supportSelectMenu, this->fields.selectNum, 0);
        SupportSelectRootComponent__setEditUI(this, 1, v73);
        supportSelectMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v74 = this->fields.supportServantData;
        if ( !v74 )
          goto LABEL_184;
        if ( LODWORD(v74->max_length) > deckNum )
        {
          v75 = v74->m_Items[deckNum];
          if ( !v75 )
            goto LABEL_184;
          v76 = (CommonUI_o *)supportSelectMenu;
          v77 = this->fields.tempFixMainQuestSupportDeckIds;
          v78 = this->fields.tempFixEventQuestSupportDeckIds;
          v79 = v75->fields.eventSetupInfo2;
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_2213CCC(SupportServantEquipListMenu_CallbackFunc_TypeInfo);
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v81);
          if ( !v76 )
            goto LABEL_184;
          CommonUI__OpenSupportServantEquipListMenu(v76, v74, deckNum, classPos, v79, v60 + 1, v77, v78, callback, 0);
          return;
        }
      }
      goto LABEL_185;
    }
    if ( result )
    {
      if ( result != 1 )
        return;
      supportSelectMenu = SupportSelectRootComponent__isUpdate(this, 1, 1, v14);
      if ( (supportSelectMenu & 1) != 0 )
      {
        v64 = this->fields.supportServantData;
        if ( !v64 )
          goto LABEL_184;
        if ( (unsigned int)CenterNum >= LODWORD(v64->max_length) )
          goto LABEL_185;
        v65 = v64->m_Items[CenterNum];
        if ( v65 && SupportServantData__get_IsNoServant(v65, v12) )
          goto LABEL_71;
        SupportSelectRootComponent__SaveTemp(this, -1, v63);
        supportSelectMenu = (int64_t)this->fields.supportServantSelectMenu;
        if ( !supportSelectMenu )
          goto LABEL_184;
        SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)supportSelectMenu, 0);
        supportSelectMenu = (int64_t)this->fields.supportServantSelectMenu;
        if ( !supportSelectMenu )
          goto LABEL_184;
        SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)supportSelectMenu, 0);
        v125 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v125 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v126 = (System_Reflection_MethodBase_o *)sub_2213A44(v125, v125[4]);
        OverwriteAssetSoundName__PlaySystemSe(v126, 8, 0, 0);
        supportSelectMenu = (int64_t)this->fields.supportSelectMenu;
        if ( !supportSelectMenu )
          goto LABEL_184;
        SupportSelectMenu__Reset((SupportSelectMenu_o *)supportSelectMenu, -1, 0);
        SupportSelectRootComponent__AddEntryCountNarrowFigure(this, this->fields.tmpSupportServantData, v127);
      }
      else
      {
        if ( !this->fields.isEdit )
        {
          v137 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
          v138 = SupportSelectRootComponent___c_TypeInfo;
          if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v12, v63);
            v138 = SupportSelectRootComponent___c_TypeInfo;
          }
          static_fields = v138->static_fields;
          _9__62_0 = static_fields->__9__62_0;
          if ( !_9__62_0 )
          {
            if ( !*(&v138->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v138, v12, v63);
              static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
            }
            v141 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              _9__62_0,
              v141,
              Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__62_0__,
              0);
            v142 = SupportSelectRootComponent___c_TypeInfo->static_fields;
            v142->__9__62_0 = _9__62_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v142->__9__62_0,
              (int32_t)_9__62_0,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148);
          }
          v149 = System_Linq_Enumerable__Where_int_(
                   v137,
                   (System_Func_TSource__bool__o *)_9__62_0,
                   (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
          v150 = System_Linq_Enumerable__Count_int_(
                   v149,
                   (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
          v153 = SupportSelectRootComponent___c_TypeInfo;
          v154 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
          v155 = v150;
          if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v151, v152);
            v153 = SupportSelectRootComponent___c_TypeInfo;
          }
          v156 = v153->static_fields;
          _9__62_1 = v156->__9__62_1;
          if ( !_9__62_1 )
          {
            if ( !*(&v153->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v153, v151, v152);
              v156 = SupportSelectRootComponent___c_TypeInfo->static_fields;
            }
            v158 = (Il2CppObject *)v156->__9;
            _9__62_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              _9__62_1,
              v158,
              Method_SupportSelectRootComponent___c__EndSupportSelectMenu_b__62_1__,
              0);
            v159 = SupportSelectRootComponent___c_TypeInfo->static_fields;
            v159->__9__62_1 = _9__62_1;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v159->__9__62_1,
              (int32_t)_9__62_1,
              v160,
              v161,
              v162,
              v163,
              v164,
              v165);
          }
          v166 = System_Linq_Enumerable__Where_int_(
                   v154,
                   (System_Func_TSource__bool__o *)_9__62_1,
                   (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
          supportSelectMenu = System_Linq_Enumerable__Count_int_(
                                v166,
                                (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
          if ( v155 >= 1 && (int)supportSelectMenu > 0 )
            goto LABEL_181;
          v167 = this->fields.supportServantData;
          if ( !v167 )
            goto LABEL_184;
          if ( (unsigned int)CenterNum >= LODWORD(v167->max_length) )
            goto LABEL_185;
          v168 = v167->m_Items[CenterNum];
          if ( !v168 || !SupportServantData__get_IsNoServant(v168, v12) )
          {
LABEL_181:
            supportSelectMenu = (int64_t)this->fields.supportServantSelectMenu;
            if ( !supportSelectMenu )
              goto LABEL_184;
            SupportServantSelectMenu__ClearScrollValue((SupportServantSelectMenu_o *)supportSelectMenu, 0);
            supportSelectMenu = (int64_t)this->fields.supportServantSelectMenu;
            if ( !supportSelectMenu )
              goto LABEL_184;
            SupportServantSelectMenu__ModifyItem((SupportServantSelectMenu_o *)supportSelectMenu, 0);
            v169 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            OverwriteAssetSoundName__PlaySystemSe(v169, 8, 0, 0);
            SupportSelectRootComponent__RequestApi(this, v170);
            return;
          }
LABEL_71:
          v66 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          OverwriteAssetSoundName__PlaySystemSe(v66, 2, 0, 0);
          supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
          v68 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
          SupportSelectConfirmMenu_CallbackFunc___ctor(
            v68,
            (Il2CppObject *)this,
            Method_SupportSelectRootComponent_EndConfirmMenu__,
            0);
          if ( !supportSelectConfirmMenu )
            goto LABEL_184;
          SupportSelectConfirmMenu__Open(supportSelectConfirmMenu, 1, v68, 0);
          return;
        }
        v123 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
        if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
          v123 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
        v124 = (System_Reflection_MethodBase_o *)sub_2213A44(v123, v123[4]);
        OverwriteAssetSoundName__PlaySystemSe(v124, 8, 0, 0);
      }
    }
    else
    {
      if ( !this->fields.isEdit )
        return;
      supportSelectMenu = SupportSelectRootComponent__isUpdate(this, 1, 1, v14);
      if ( (supportSelectMenu & 1) != 0 )
      {
        v69 = this->fields.supportServantData;
        if ( !v69 )
          goto LABEL_184;
        if ( (unsigned int)CenterNum < LODWORD(v69->max_length) )
        {
          cancelConfirmMenu = this->fields.cancelConfirmMenu;
          v71 = v69->m_Items[CenterNum];
          v72 = (CancelConfirmMenu_CallbackFunc_o *)sub_2213CCC(CancelConfirmMenu_CallbackFunc_TypeInfo);
          CancelConfirmMenu_CallbackFunc___ctor(
            v72,
            (Il2CppObject *)this,
            (intptr_t)Method_SupportSelectRootComponent_EndCancelConfirmMenu__,
            0);
          if ( !cancelConfirmMenu )
            goto LABEL_184;
          CancelConfirmMenu__Open(cancelConfirmMenu, 0, v71, v72, 0);
          return;
        }
        goto LABEL_185;
      }
    }
    SupportSelectRootComponent__SetActiveApplyIcon(this, v12);
    v107 = this;
    v108 = 0;
    this->fields.isDragSwapState = 0;
LABEL_153:
    SupportSelectRootComponent__setEditUI(v107, v108, v106);
    return;
  }
  if ( result > 8 )
  {
    if ( result == 9 )
    {
      v109 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v109 )
        goto LABEL_184;
      if ( LODWORD(v109->max_length) > deckNum )
      {
        supportSelectMenu = (int64_t)v109->m_Items[deckNum];
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = (int64_t)SupportServantData__getUserServantLeaderEntity(
                                       (SupportServantData_o *)supportSelectMenu,
                                       this->fields.classPos,
                                       v13);
        if ( !supportSelectMenu )
          goto LABEL_184;
        v110 = supportSelectMenu;
        if ( *(int *)(supportSelectMenu + 64) < 1 )
          goto LABEL_138;
        v111 = this->fields.supportServantData;
        if ( !v111 )
          goto LABEL_184;
        if ( LODWORD(v111->max_length) > deckNum )
        {
          v112 = v111->m_Items[deckNum];
          if ( !v112 )
            goto LABEL_184;
          v113 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( v112->fields.isFriendInfo )
          {
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v113 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v114 = (System_Reflection_MethodBase_o *)sub_2213A44(v113, v113[4]);
            OverwriteAssetSoundName__PlaySystemSe(v114, 0, 0, 0);
            supportSelectMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v115 = this->fields.supportServantData;
            if ( !v115 )
              goto LABEL_184;
            if ( LODWORD(v115->max_length) > deckNum )
            {
              v116 = v115->m_Items[deckNum];
              if ( !v116 )
                goto LABEL_184;
              v117 = (CommonUI_o *)supportSelectMenu;
              kind = v116->fields.kind;
              v119 = *(ServantLeaderInfo_o **)(v110 + 24);
              v120 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v120,
                (Il2CppObject *)this,
                Method_SupportSelectRootComponent_EndShowServant__,
                0);
              if ( !v117 )
                goto LABEL_184;
              CommonUI__OpenServantStatusDialog_37385604(v117, kind, v119, v120, 0);
              return;
            }
          }
          else
          {
            if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
              v113 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
            v128 = (System_Reflection_MethodBase_o *)sub_2213A44(v113, v113[4]);
            OverwriteAssetSoundName__PlaySystemSe(v128, 0, 0, 0);
            supportSelectMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v129 = this->fields.supportServantData;
            if ( !v129 )
              goto LABEL_184;
            if ( LODWORD(v129->max_length) > deckNum )
            {
              v130 = v129->m_Items[deckNum];
              if ( !v130 )
                goto LABEL_184;
              v131 = (CommonUI_o *)supportSelectMenu;
              v132 = v130->fields.kind;
              v133 = *(_QWORD *)(v110 + 56);
              v134 = (ServantStatusDialog_FormationEndDelegate_o *)sub_2213CCC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
              ServantStatusDialog_FormationEndDelegate___ctor(
                v134,
                (Il2CppObject *)this,
                Method_SupportSelectRootComponent_EndShowServantWithQuest__,
                0);
              if ( !v131 )
                goto LABEL_184;
              CommonUI__OpenServantStatusDialog_37383124(v131, v132, v133, v134, 0, 0);
              return;
            }
          }
        }
      }
    }
    else
    {
      if ( result != 10 )
      {
        if ( result == 11 )
          SupportSelectRootComponent__OpenGrandListInfo(this, v12);
        return;
      }
      v84 = this->fields.supportServantData;
      this->fields.state = 4;
      if ( !v84 )
        goto LABEL_184;
      if ( LODWORD(v84->max_length) > deckNum )
      {
        supportSelectMenu = (int64_t)v84->m_Items[deckNum];
        if ( !supportSelectMenu )
          goto LABEL_184;
        supportSelectMenu = SupportServantData__getEquip(
                              (SupportServantData_o *)supportSelectMenu,
                              this->fields.classPos,
                              v13);
        if ( !supportSelectMenu )
          goto LABEL_138;
        v86 = this->fields.supportServantData;
        if ( !v86 )
          goto LABEL_184;
        if ( LODWORD(v86->max_length) > deckNum )
        {
          v87 = supportSelectMenu;
          supportSelectMenu = (int64_t)v86->m_Items[deckNum];
          if ( !supportSelectMenu )
            goto LABEL_184;
          UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(
                                      (SupportServantData_o *)supportSelectMenu,
                                      this->fields.classPos,
                                      v85);
          v89 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
          if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
            v89 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
          v90 = (System_Reflection_MethodBase_o *)sub_2213A44(v89, v89[4]);
          OverwriteAssetSoundName__PlaySystemSe(v90, 0, 0, 0);
          v91 = this->fields.supportServantData;
          if ( !v91 )
            goto LABEL_184;
          if ( LODWORD(v91->max_length) > deckNum )
          {
            v92 = v91->m_Items[deckNum];
            if ( !v92 )
              goto LABEL_184;
            if ( v92->fields.isFriendInfo )
            {
              if ( v92->fields.kind == 5 )
                v93 = 14;
              else
                v93 = 13;
              supportSelectMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !UserServantLeaderEntity )
                goto LABEL_184;
              v94 = (CommonUI_o *)supportSelectMenu;
              equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
              v96 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v96,
                (Il2CppObject *)this,
                Method_SupportSelectRootComponent_EndShowEquip__,
                0);
              if ( !v94 )
                goto LABEL_184;
              CommonUI__OpenServantEquipStatusDialog_37388712(v94, v93, equipTarget1, v96, 0, 0);
            }
            else
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              v136 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v136,
                (Il2CppObject *)this,
                Method_SupportSelectRootComponent_EndShowEquip__,
                0);
              if ( !Instance )
                goto LABEL_184;
              CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, v87, 1, v136, 0, 0, 0);
            }
            return;
          }
        }
      }
    }
    goto LABEL_185;
  }
  if ( result == 6 )
  {
    v105 = this->fields.supportSelectMenu;
    supportSelectMenu = SupportSelectRootComponent__getCenterNum(this, v12);
    if ( !v105 )
      goto LABEL_184;
    SupportSelectMenu__moveCenterItem(v105, supportSelectMenu, 0);
    v107 = this;
    v108 = 1;
    this->fields.isDragSwapState = 1;
    goto LABEL_153;
  }
  if ( result == 7 )
  {
    v82 = this->fields.supportSelectMenu;
    supportSelectMenu = SupportSelectRootComponent__getCenterNum(this, v12);
    if ( !v82 )
      goto LABEL_184;
    SupportSelectMenu__moveCenterItem(v82, supportSelectMenu, 0);
    SupportSelectRootComponent__OpenSupportEditMenu(this, v83);
    return;
  }
  v15 = sub_2213CCC(SupportSelectRootComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  v17 = this->fields.supportServantData;
  if ( !v17 )
    goto LABEL_184;
  if ( LODWORD(v17->max_length) <= deckNum )
    goto LABEL_185;
  supportSelectMenu = (int64_t)v17->m_Items[deckNum];
  if ( !supportSelectMenu )
    goto LABEL_184;
  supportSelectMenu = (int64_t)SupportServantData__getUserServantLeaderEntity(
                                 (SupportServantData_o *)supportSelectMenu,
                                 this->fields.classPos,
                                 v16);
  if ( !supportSelectMenu || !v15 )
    goto LABEL_184;
  v24 = *(_QWORD *)(supportSelectMenu + 24);
  *(_QWORD *)(v15 + 16) = v24;
  v25 = (ServantLeaderInfo_o **)(v15 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), v24, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v15 + 16) )
    goto LABEL_138;
  supportInfoJump = this->fields.supportInfoJump;
  if ( supportInfoJump && supportInfoJump->fields._IsUseGrandSupport_k__BackingField )
  {
    followerInfo = supportInfoJump->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_184;
    userSvtGrandHash = (System_Collections_Generic_IEnumerable_TSource__o *)followerInfo->fields.userSvtGrandHash;
    v30 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ServantLeaderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v15,
      Method_SupportSelectRootComponent___c__DisplayClass62_0__EndSupportSelectMenu_b__2__,
      0);
    v31 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            userSvtGrandHash,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_ServantLeaderInfo___);
    if ( v31 )
    {
      *v25 = (ServantLeaderInfo_o *)v31;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)v31, v26, v32, v33, v34, v35, v36);
    }
  }
  v37 = *v25;
  if ( !*v25 )
    goto LABEL_138;
  v38 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v26);
  *(_QWORD *)&v171.fields.currentCryptoKey = v38;
  *(_QWORD *)&v171.fields.fakeValue = v39;
  supportSelectMenu = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v171, 0);
  if ( !(_DWORD)supportSelectMenu )
    goto LABEL_138;
  v40 = this->fields.supportServantData;
  if ( !v40 )
    goto LABEL_184;
  if ( LODWORD(v40->max_length) <= deckNum )
    goto LABEL_185;
  v41 = v40->m_Items[deckNum];
  if ( !v41 )
    goto LABEL_184;
  supportSelectMenu = (int64_t)*v25;
  if ( !*v25 )
    goto LABEL_184;
  supportSelectMenu = ServantLeaderInfo__getQuestRestriction(
                        (ServantLeaderInfo_o *)supportSelectMenu,
                        v41->fields.questRestrictionInfo,
                        0);
  if ( (supportSelectMenu & 1) != 0 )
    goto LABEL_138;
  v42 = this->fields.supportServantData;
  if ( !v42 )
    goto LABEL_184;
  if ( LODWORD(v42->max_length) <= deckNum )
    goto LABEL_185;
  v43 = v42->m_Items[deckNum];
  if ( !v43 )
    goto LABEL_184;
  supportSelectMenu = (int64_t)*v25;
  if ( !*v25 )
    goto LABEL_184;
  if ( ServantLeaderInfo__IsSlotRestriction(
         (ServantLeaderInfo_o *)supportSelectMenu,
         v43->fields.questRestrictionInfo,
         0) )
  {
    goto LABEL_138;
  }
  supportSelectMenu = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_184;
  v44 = *(_DWORD *)(supportSelectMenu + 80);
  supportSelectMenu = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_184;
  if ( v44 < 1 )
    goto LABEL_47;
  v45 = this->fields.supportServantData;
  if ( !v45 )
    goto LABEL_184;
  if ( LODWORD(v45->max_length) <= deckNum )
    goto LABEL_185;
  v46 = v45->m_Items[deckNum];
  if ( !v46 )
    goto LABEL_184;
  questRestrictionInfo = v46->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_184;
  v48 = *(_DWORD *)(supportSelectMenu + 84);
  supportSelectMenu = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(questRestrictionInfo, v48, 0);
  if ( (supportSelectMenu & 1) == 0 )
    goto LABEL_47;
  v49 = this->fields.supportServantData;
  if ( !v49 )
    goto LABEL_184;
  if ( LODWORD(v49->max_length) <= deckNum )
LABEL_185:
    sub_2213CE4(supportSelectMenu);
  v50 = v49->m_Items[deckNum];
  if ( !v50 )
    goto LABEL_184;
  supportSelectMenu = (int64_t)*v25;
  if ( !*v25 )
    goto LABEL_184;
  v51 = v50->fields.questRestrictionInfo;
  supportSelectMenu = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)supportSelectMenu, -1, 0);
  if ( !*v25 )
    goto LABEL_184;
  v52 = supportSelectMenu;
  limitCount = (*v25)->fields.limitCount;
  supportSelectMenu = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(*v25, -1, 0);
  if ( !v51 )
    goto LABEL_184;
  if ( QuestRestrictionInfo__IsRestrictionServantIndividuality(v51, v52, limitCount, supportSelectMenu, v48, 1, 0) )
    goto LABEL_138;
LABEL_47:
  if ( !this->fields.supportInfoJump )
  {
LABEL_138:
    v121 = Method_SupportSelectRootComponent_EndSupportSelectMenu__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_EndSupportSelectMenu__ + 83) & 2) != 0 )
      v121 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    v122 = (System_Reflection_MethodBase_o *)sub_2213A44(v121, v121[4]);
    OverwriteAssetSoundName__PlaySystemSe(v122, 2, 0, 0);
    supportSelectMenu = (int64_t)this->fields.supportSelectMenu;
    if ( !supportSelectMenu )
      goto LABEL_184;
    SupportSelectMenu__Active((SupportSelectMenu_o *)supportSelectMenu, 0);
    return;
  }
  v54 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_SupportSelectRootComponent__EndSupportSelectMenu_b__62_3__, 0);
  if ( !v54 )
    goto LABEL_184;
  if ( !PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v54, v55, 0) )
  {
    v56 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0);
    supportSelectMenu = (int64_t)this->fields.supportInfoJump;
    if ( !supportSelectMenu )
      goto LABEL_184;
    v57 = *v25;
    *(_DWORD *)(supportSelectMenu + 48) = this->fields.classPos;
    if ( !v57 )
      goto LABEL_184;
    grandGraphId = v57->fields.grandGraphId;
    supportDeckId = v57->fields.supportDeckId;
    *(_DWORD *)(supportSelectMenu + 72) = grandGraphId;
    *(_DWORD *)(supportSelectMenu + 52) = supportDeckId;
    if ( !SupportInfoJump__ReturnScene((SupportInfoJump_o *)supportSelectMenu, 1, (Il2CppObject *)supportSelectMenu, 0) )
    {
      supportSelectMenu = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( supportSelectMenu )
      {
        AvalonSceneManager__popScene(
          (AvalonSceneManager_o *)supportSelectMenu,
          1,
          (Il2CppObject *)this->fields.supportInfoJump,
          0);
        return;
      }
LABEL_184:
      sub_2213CDC(supportSelectMenu, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int128 v18; // q1
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x25
  struct EquipTargetInfo_o *v22; // x8
  __int128 v23; // q1
  int64_t v24; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x26
  SupportServantData_o *CenterNum; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  struct SupportServantData_array *supportServantData; // x8
  int32_t v31; // w24
  const MethodInfo *v32; // x4
  struct SupportServantData_array *v33; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_596CCC0 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596CCC0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v37, 0, sizeof(v37));
  if ( kind != 1 )
    return;
  if ( leader1 && (equipTarget1 = leader1->fields.equipTarget1) != 0 )
  {
    v14 = BasicHelper__DecryptValue_51160428(equipTarget1->fields.svtId, 0);
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
  v16 = BasicHelper__DecryptValue_51160428(v15->fields.svtId, 0);
LABEL_12:
  if ( leader1 && (v17 = leader1->fields.equipTarget1) != 0 )
  {
    v18 = *(_OWORD *)&v17->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v37.fields.fakeValue = v18;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        *(_QWORD *)&kind,
        *(_QWORD *)&classPos1);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v37, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
      *(_QWORD *)&kind,
      *(_QWORD *)&classPos1);
  v35 = v37;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v35, 0);
  if ( leader2 && (v22 = leader2->fields.equipTarget1) != 0 )
  {
    v23 = *(_OWORD *)&v22->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v22->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v36.fields.fakeValue = v23;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v36, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
  v34 = v36;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v34, 0);
  if ( classPos1 != classPos2 )
  {
    v26 = v24;
    CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, v25);
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_39;
    v31 = (int)CenterNum;
    if ( (unsigned int)CenterNum < LODWORD(supportServantData->max_length) )
    {
      CenterNum = supportServantData->m_Items[(int)CenterNum];
      if ( !CenterNum )
        goto LABEL_39;
      SupportServantData__setEquipData(CenterNum, classPos1, v26, v16, v29);
      v33 = this->fields.supportServantData;
      if ( !v33 )
        goto LABEL_39;
      if ( (unsigned int)v31 < LODWORD(v33->max_length) )
      {
        CenterNum = v33->m_Items[v31];
        if ( CenterNum )
        {
          SupportServantData__setEquipData(CenterNum, classPos2, v21, v14, v32);
          CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
          if ( CenterNum )
          {
            SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)CenterNum, v31, 0);
            CenterNum = (SupportServantData_o *)this->fields.supportSelectMenu;
            if ( CenterNum )
            {
              SupportSelectMenu__Redisp((SupportSelectMenu_o *)CenterNum, 0);
              return;
            }
          }
        }
LABEL_39:
        sub_2213CDC(CenterNum, v28);
      }
    }
    sub_2213CE4(CenterNum);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v29; // x22
  __int64 v30; // x2
  struct UserServantLeaderEntity_array *userServantLeaderEntityList; // x8
  PartyOrganizationUtility_o *v32; // x23
  UserServantLeaderEntity_o *v33; // x24
  UserServantLeaderEntity_o *v34; // x25
  int32_t v35; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  int32_t v37; // w25
  Il2CppObject *Entity; // x24
  __int64 v39; // x2
  struct UserServantLeaderEntity_array *v40; // x8
  PartyOrganizationUtility_o *v41; // x23
  UserServantLeaderEntity_o *v42; // x25
  UserServantLeaderEntity_o *v43; // x26
  UserServantEntity_o *v44; // x8
  System_String_o *v45; // x22
  __int64 v46; // x8
  int32_t v47; // w21
  __int64 v48; // x1
  __int64 v49; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x24
  System_String_o *RarityInvalidMessage; // x22
  System_Text_StringBuilder_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  System_String_o *v55; // x0
  Il2CppObject *Instance; // x22
  System_Action_o *v57; // x23
  Il2CppObject *v58; // x19
  System_String_o *v59; // x21
  System_String_o *v60; // x22
  System_String_o *v61; // x23
  CommonConfirmDialog_ClickDelegate_o *v62; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_596CCBE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__DisplayClass67_0__EndSupportServantEquipListMenu_b__0__);
    sub_2213A60(&SupportSelectRootComponent___c__DisplayClass67_0_TypeInfo);
    sub_2213A60(&StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CCBE = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_2213CCC(SupportSelectRootComponent___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_42;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = item;
  v18 = v9 + 32;
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)item, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 && *(_QWORD *)v18 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_42;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_2213CE4(UserServantLeaderEntity);
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
          UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          userServantLeaderEntityList = v29->fields.userServantLeaderEntityList;
          if ( !userServantLeaderEntityList )
            goto LABEL_42;
          v32 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
          v33 = userServantLeaderEntityList->m_Items[6];
          v34 = userServantLeaderEntityList->m_Items[7];
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v30);
          *(_QWORD *)&v66.fields.currentCryptoKey = v33;
          *(_QWORD *)&v66.fields.fakeValue = v34;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v66,
                                                              0);
          if ( !v29->fields.userServantLeaderEntityList )
            goto LABEL_42;
          v35 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(
                                                              (UserServantEntity_o *)v29->fields.userServantLeaderEntityList,
                                                              0);
          if ( !*(_QWORD *)v18 )
            goto LABEL_42;
          v36 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(*(_QWORD *)v18 + 136LL);
          if ( !v36 )
            goto LABEL_42;
          v37 = (int)UserServantLeaderEntity;
          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                              v36[1],
                                                              0);
          if ( !v32 )
            goto LABEL_42;
          if ( PartyOrganizationUtility__IsRarityRestriction(
                 v32,
                 &skillName,
                 &actMaxRarity[1],
                 v35,
                 v37,
                 (int32_t)UserServantLeaderEntity,
                 -1,
                 0) )
          {
            UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( UserServantLeaderEntity )
            {
              UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)UserServantLeaderEntity,
                                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
              if ( UserServantLeaderEntity )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity,
                           *(_DWORD *)&v29->fields.isFriendInfo,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                v40 = v29->fields.userServantLeaderEntityList;
                if ( v40 )
                {
                  v41 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                  v42 = v40->m_Items[8];
                  v43 = v40->m_Items[9];
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v39);
                  *(_QWORD *)&v67.fields.currentCryptoKey = v42;
                  *(_QWORD *)&v67.fields.fakeValue = v43;
                  UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                      v67,
                                                                      0);
                  if ( Entity )
                  {
                    UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                        (ServantEntity_o *)Entity,
                                                                        (int32_t)UserServantLeaderEntity,
                                                                        -1,
                                                                        0,
                                                                        0,
                                                                        0);
                    v44 = (UserServantEntity_o *)v29->fields.userServantLeaderEntityList;
                    if ( v44 )
                    {
                      v45 = (System_String_o *)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v44, 0);
                      v46 = *(_QWORD *)v18;
                      if ( *(_QWORD *)v18 )
                      {
                        v47 = (int)UserServantLeaderEntity;
                        UserServantLeaderEntity = *(SupportServantData_o **)(v46 + 136);
                        if ( UserServantLeaderEntity )
                        {
                          Name = ServantEntity__GetName((ServantEntity_o *)UserServantLeaderEntity, -1, 0, -1, 0, 0);
                          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                              v48,
                              v49);
                          UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(
                                                                              Name,
                                                                              0);
                          if ( v41 )
                          {
                            RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                     v41,
                                                     actMaxRarity,
                                                     v45,
                                                     v47,
                                                     (System_String_o *)UserServantLeaderEntity,
                                                     skillName,
                                                     actMaxRarity[1],
                                                     0);
                            UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                            if ( UserServantLeaderEntity )
                            {
                              PartyOrganizationUtility__DecisionFontSize(
                                (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                                &minFontSize[1],
                                minFontSize,
                                actMaxRarity[0],
                                0);
                              v52 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
                              System_Text_StringBuilder___ctor(v52, 0);
                              if ( v52 )
                              {
                                System_Text_StringBuilder__Append_75735064(v52, RarityInvalidMessage, 0);
                                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53, v54);
                                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                                System_Text_StringBuilder__Append_75735064(v52, v55, 0);
                                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                v57 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v57,
                                  (Il2CppObject *)this,
                                  Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__,
                                  0);
                                if ( Instance )
                                {
                                  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v57, 0);
                                  v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                  v59 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v52->klass->vtable._3_ToString.methodPtr)(
                                                             v52,
                                                             v52->klass->vtable._3_ToString.method);
                                  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
                                  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
                                  v62 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                  CommonConfirmDialog_ClickDelegate___ctor(
                                    v62,
                                    (Il2CppObject *)v9,
                                    Method_SupportSelectRootComponent___c__DisplayClass67_0__EndSupportServantEquipListMenu_b__0__,
                                    0);
                                  if ( v58 )
                                  {
                                    CommonUI__OpenConfirmDialog_37373584(
                                      (CommonUI_o *)v58,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      v59,
                                      v60,
                                      v61,
                                      v62,
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
            sub_2213CDC(UserServantLeaderEntity, v11);
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
  struct SupportServantData_array *v7; // x8
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v9; // x2
  struct SupportServantData_array *v10; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v12; // x8
  __int64 v13; // x9
  SupportServantData_o **m_Items; // x10
  const MethodInfo *v15; // x2

  selectNum = this->fields.selectNum;
  v6 = this;
  this->fields.state = 1;
  if ( result == 2 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      goto LABEL_33;
    this = (SupportSelectRootComponent_o *)supportServantData->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeServantData((SupportServantData_o *)this, classPos, *(const MethodInfo **)&classPos);
  }
  else if ( result == 1 )
  {
    v7 = this->fields.supportServantData;
    if ( !v7 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= LODWORD(v7->max_length) )
      goto LABEL_33;
    this = (SupportSelectRootComponent_o *)v7->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__setServantData((SupportServantData_o *)this, classPos, entity, (const MethodInfo *)entity);
  }
  if ( !SupportSelectRootComponent__isUpdate(v6, 1, 1, (const MethodInfo *)entity) && !v6->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v6, 0, v9);
  this = (SupportSelectRootComponent_o *)UserGameMaster__getSelfUserGame(0);
  v10 = v6->fields.supportServantData;
  if ( !v10 )
    goto LABEL_32;
  max_length = v10->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = (unsigned int)max_length & ~((int)max_length >> 31);
    v13 = (unsigned int)v10->max_length;
    m_Items = v10->m_Items;
    while ( v13 )
    {
      if ( *m_Items )
      {
        if ( !this )
          goto LABEL_32;
        (*m_Items)->fields.pushUserServantId = (int64_t)this->fields.titleInfo;
      }
      --v12;
      ++m_Items;
      --v13;
      if ( !v12 )
        goto LABEL_22;
    }
LABEL_33:
    sub_2213CE4(this);
  }
LABEL_22:
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
  SupportSelectMenu__moveCenterItem((SupportSelectMenu_o *)this, selectNum, 0);
  this = (SupportSelectRootComponent_o *)v6->fields.supportSelectMenu;
  if ( !this )
    goto LABEL_32;
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
LABEL_32:
    sub_2213CDC(this, *(_QWORD *)&result);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  SupportSelectRootComponent__AddEntryCountNarrowFigure(v6, v6->fields.tmpSupportServantData, v15);
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
  int32_t CenterNum; // w22
  __int64 Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  BalanceConfig_c *v17; // x8
  int v18; // w9
  int32_t *p_FixMainSupportDeckNum; // x9
  unsigned __int64 v20; // x19
  int32_t v21; // w9
  int32_t v22; // w24
  __int64 v23; // x23
  __int64 v24; // x25
  const MethodInfo *v25; // x2
  struct SupportServantData_array *supportServantData; // x8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x26
  struct SupportServantData_array *v34; // x8
  SupportServantData_o *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x27
  System_Func_object__bool__o *v37; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  UserServantEntity_o *v39; // x26
  int v40; // w28
  __int64 v41; // x1
  __int64 v42; // x2
  ServantEntity_o *ServantEntity; // x25
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t CollectionMaxLimitCountSealAfter; // w26
  System_String_o *v47; // x27
  Il2CppObject *v48; // x28
  Il2CppObject *Name; // x26
  Il2CppObject *ClassName; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x26
  Il2CppObject *v58; // x27
  Il2CppObject *v59; // x0
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v66; // [xsp+10h] [xbp-80h]
  __int64 v67; // [xsp+18h] [xbp-78h]
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // [xsp+20h] [xbp-70h]
  int v69; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_596CCC6 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_2213A60(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__DisplayClass77_0__GetFixedErrorList_b__0__);
    sub_2213A60(&SupportSelectRootComponent___c__DisplayClass77_0_TypeInfo);
    sub_2213A60(&StringLiteral_13018/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/);
    sub_2213A60(&StringLiteral_13019/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/);
    byte_596CCC6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_56:
    sub_2213CDC(Instance, v15);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v17 = BalanceConfig_TypeInfo;
  v18 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( isMain )
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15, v16);
      v17 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v17->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15, v16);
      v17 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v17->static_fields->FixEventSupportDeckNum;
  }
  v67 = (unsigned int)*p_FixMainSupportDeckNum;
  if ( (int)v67 >= 1 )
  {
    v20 = 0;
    v66 = (unsigned int)idx;
    do
    {
      if ( v20 != v66 )
      {
        if ( !fixDeckIds )
          goto LABEL_56;
        if ( v20 >= LODWORD(fixDeckIds->max_length) )
LABEL_57:
          sub_2213CE4(Instance);
        v21 = fixDeckIds->m_Items[v20];
        if ( v21 )
        {
          v22 = 0;
          v23 = v21 - 1;
          while ( 1 )
          {
            if ( !*(&v17->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v17, v15, v16);
              v17 = BalanceConfig_TypeInfo;
            }
            if ( v22 >= v17->static_fields->SupportDeckMemberMax )
              break;
            v24 = sub_2213CCC(SupportSelectRootComponent___c__DisplayClass77_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v24, 0);
            supportServantData = this->fields.supportServantData;
            if ( !supportServantData )
              goto LABEL_56;
            if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
              goto LABEL_57;
            Instance = (__int64)supportServantData->m_Items[CenterNum];
            if ( !Instance )
              goto LABEL_56;
            Instance = (__int64)SupportServantData__getUserServantLeaderEntity(
                                  (SupportServantData_o *)Instance,
                                  v22,
                                  v25);
            if ( !v24 )
              goto LABEL_56;
            *(_QWORD *)(v24 + 16) = Instance;
            v33 = v24 + 16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 16), Instance, v27, v28, v29, v30, v31, v32);
            if ( !*(_QWORD *)(v24 + 16) )
              goto LABEL_56;
            if ( *(_DWORD *)(*(_QWORD *)(v24 + 16) + 64LL) )
            {
              v34 = this->fields.supportServantData;
              if ( !v34 )
                goto LABEL_56;
              if ( (unsigned int)v23 >= LODWORD(v34->max_length) )
                goto LABEL_57;
              v35 = v34->m_Items[v23];
              if ( !v35 )
                goto LABEL_56;
              userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v35->fields.userServantLeaderEntityList;
              v37 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v37,
                (Il2CppObject *)v24,
                Method_SupportSelectRootComponent___c__DisplayClass77_0__GetFixedErrorList_b__0__,
                0);
              v38 = System_Linq_Enumerable__Where_object_(
                      userServantLeaderEntityList,
                      (System_Func_TSource__bool__o *)v37,
                      (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
              Instance = System_Linq_Enumerable__Count_object_(
                           v38,
                           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
              if ( (int)Instance >= 1 )
              {
                if ( !*(_QWORD *)v33 )
                  goto LABEL_56;
                Instance = (__int64)v68;
                if ( !v68 )
                  goto LABEL_56;
                Instance = (__int64)DataMasterBase_object__object__long___GetEntity(
                                      v68,
                                      *(_QWORD *)(*(_QWORD *)v33 + 56LL),
                                      (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
                if ( !Instance )
                  goto LABEL_56;
                v39 = (UserServantEntity_o *)Instance;
                Instance = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Instance, 0, 0);
                if ( !Instance )
                  goto LABEL_56;
                v40 = *(_DWORD *)(Instance + 24);
                ServantEntity = UserServantEntity__GetServantEntity(v39, -1, 0);
                if ( v40 )
                {
                  CollectionMaxLimitCountSealAfter = UserServantEntity__GetCollectionMaxLimitCountSealAfter(v39, 0);
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
                  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13018/*"SUPPORT_DECK_FIXED_ERROR_SERVANT"*/, 0);
                  v69 = v40;
                  Instance = j_il2cpp_value_box_0(qword_5984348, &v69);
                  if ( !ServantEntity )
                    goto LABEL_56;
                  v48 = (Il2CppObject *)Instance;
                  Name = (Il2CppObject *)ServantEntity__getName(
                                           ServantEntity,
                                           CollectionMaxLimitCountSealAfter,
                                           -1,
                                           0,
                                           0,
                                           0);
                  ClassName = (Il2CppObject *)ServantEntity__getClassName(ServantEntity, 0);
                  Instance = (__int64)System_String__Format_75697948(v47, v48, Name, ClassName, 0);
                }
                else
                {
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
                  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13019/*"SUPPORT_DECK_FIXED_ERROR_SERVANT_NAME_ONLY"*/, 0);
                  if ( !ServantEntity )
                    goto LABEL_56;
                  v57 = (System_String_o *)Instance;
                  v58 = (Il2CppObject *)ServantEntity__getName(ServantEntity, -1, -1, 0, 0, 0);
                  v59 = (Il2CppObject *)ServantEntity__getClassName(ServantEntity, 0);
                  Instance = (__int64)System_String__Format_75697880(v57, v58, v59, 0);
                }
                v15 = Instance;
                if ( !v10 )
                  goto LABEL_56;
                items = v10->fields._items;
                v61 = Method_System_Collections_Generic_List_string__Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_56;
                size = v10->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    (Il2CppObject *)Instance,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                }
                else
                {
                  v63 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v63[4] = (Il2CppClass *)v15;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), v15, v51, v52, v53, v54, v55, v56);
                }
              }
            }
            ++v22;
            v17 = BalanceConfig_TypeInfo;
          }
        }
      }
      ++v20;
    }
    while ( v20 != v67 );
  }
  return (System_Collections_Generic_List_string__o *)v10;
}


void SupportSelectRootComponent__InitAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x21
  SupportServantData_o *v7; // x20
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_596CCD5 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndInitAll__);
    byte_596CCD5 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndInitAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_2213CDC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 1, v7, v8, 0);
}


void SupportSelectRootComponent__InitSupportServantData(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct SupportServantData_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_596CCAE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SupportServantData___TypeInfo);
    byte_596CCAE = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct SupportServantData_array *)sub_2213B20(
                                            SupportServantData___TypeInfo,
                                            (unsigned int)v4->static_fields->SupportDeckMax);
  this->fields.supportServantData = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SupportSelectRootComponent__RefreshSupportServantData(this, v12);
}


bool SupportSelectRootComponent__IsFinallyUpdate(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  unsigned __int64 i; // x24
  BalanceConfig_c *v5; // x0
  int SupportDeckMax; // w8
  bool v7; // w20
  int32_t v8; // w21
  SupportServantData_o *Servant; // x0
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v11; // x2
  struct SupportServantData_array *orgSupportServantData; // x8
  SupportServantData_o *v13; // x22
  const MethodInfo *v14; // x2
  struct SupportServantData_array *v15; // x8
  const MethodInfo *v16; // x2
  struct SupportServantData_array *v17; // x8
  SupportServantData_o *v18; // x22
  int64_t Equip; // x0
  SupportServantData_o *v20; // x8
  struct SupportServantData_array *v21; // x9
  SupportServantData_o *v22; // x9

  if ( (byte_596CCDE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCDE = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v5 = BalanceConfig_TypeInfo;
    }
    SupportDeckMax = v5->static_fields->SupportDeckMax;
    v7 = (int)i < SupportDeckMax;
    if ( (int)i >= SupportDeckMax )
      break;
    v8 = 0;
    while ( 1 )
    {
      Servant = (SupportServantData_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
        Servant = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      supportServantData = this->fields.supportServantData;
      if ( v8 >= SHIDWORD(Servant[1].fields.oldEquipIdList->m_Items[18]) )
        break;
      if ( !supportServantData )
        goto LABEL_37;
      if ( i >= LODWORD(supportServantData->max_length) )
        goto LABEL_38;
      Servant = supportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_37;
      Servant = (SupportServantData_o *)SupportServantData__getServant(Servant, v8, v2);
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_37;
      if ( i >= LODWORD(orgSupportServantData->max_length) )
        goto LABEL_38;
      v13 = Servant;
      Servant = orgSupportServantData->m_Items[i];
      if ( !Servant )
        goto LABEL_37;
      Servant = (SupportServantData_o *)SupportServantData__getServant(Servant, v8, v11);
      if ( v13 != Servant )
        return 1;
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_37;
      if ( i >= LODWORD(v15->max_length) )
        goto LABEL_38;
      Servant = v15->m_Items[i];
      if ( !Servant )
        goto LABEL_37;
      Servant = (SupportServantData_o *)SupportServantData__getEquip(Servant, v8, v14);
      v17 = this->fields.orgSupportServantData;
      if ( !v17 )
        goto LABEL_37;
      if ( i >= LODWORD(v17->max_length) )
        goto LABEL_38;
      v18 = Servant;
      Servant = v17->m_Items[i];
      if ( !Servant )
        goto LABEL_37;
      Equip = SupportServantData__getEquip(Servant, v8++, v16);
      if ( v18 != (SupportServantData_o *)Equip )
        return 1;
    }
    if ( !supportServantData )
      goto LABEL_37;
    if ( i >= LODWORD(supportServantData->max_length) )
      goto LABEL_38;
    v20 = supportServantData->m_Items[i];
    if ( !v20 )
      goto LABEL_37;
    v21 = this->fields.orgSupportServantData;
    if ( !v21 )
      goto LABEL_37;
    if ( i >= LODWORD(v21->max_length) )
LABEL_38:
      sub_2213CE4(Servant);
    v22 = v21->m_Items[i];
    if ( !v22 )
LABEL_37:
      sub_2213CDC(Servant, method);
    if ( System_String__op_Inequality(v20->fields._deckName_k__BackingField, v22->fields._deckName_k__BackingField, 0) )
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

  if ( (byte_596CCB0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_596CCB0 = 1;
  }
  tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
  if ( tempFixEventQuestSupportDeckIds )
    LOBYTE(tempFixEventQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                                tempFixEventQuestSupportDeckIds,
                                                checkDeckId,
                                                (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >= 0;
  return (char)tempFixEventQuestSupportDeckIds;
}


bool SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(
        SupportSelectRootComponent_o *this,
        int32_t checkDeckId,
        const MethodInfo *method)
{
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x0

  if ( (byte_596CCAF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_596CCAF = 1;
  }
  tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
  if ( tempFixMainQuestSupportDeckIds )
    LOBYTE(tempFixMainQuestSupportDeckIds) = System_Array__IndexOf_int_(
                                               tempFixMainQuestSupportDeckIds,
                                               checkDeckId,
                                               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) >= 0;
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
  __int64 v8; // x2
  il2cpp_array_size_t max_length; // x8
  bool v10; // w20
  unsigned int v11; // w22
  signed __int64 v12; // x28
  __int64 v13; // x19
  int v14; // w8
  __int64 v15; // x27
  int32_t i; // w23
  __int64 v17; // x24
  const MethodInfo *v18; // x2
  struct SupportServantData_array *supportServantData; // x8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x8
  struct SupportServantData_array *v27; // x8
  SupportServantData_o *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *userServantLeaderEntityList; // x25
  System_Func_object__bool__o *v30; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_596CCCF & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
    sub_2213A60(&System_Func_UserServantLeaderEntity__bool__TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent___c__DisplayClass94_0__IsPossibleCopy_b__0__);
    sub_2213A60(&SupportSelectRootComponent___c__DisplayClass94_0_TypeInfo);
    byte_596CCCF = 1;
  }
  CenterNum = (SupportServantData_o *)SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  if ( !fixDeckIds )
LABEL_27:
    sub_2213CDC(CenterNum, v7);
  max_length = fixDeckIds->max_length;
  v10 = (int)max_length < 1;
  if ( (int)max_length >= 1 )
  {
    v11 = (unsigned int)CenterNum;
    v12 = 0;
    v13 = (int)CenterNum;
    v34 = fixDeckIds;
    do
    {
      if ( v12 >= (unsigned __int64)(unsigned int)max_length )
LABEL_28:
        sub_2213CE4(CenterNum);
      v14 = fixDeckIds->m_Items[v12];
      v15 = (unsigned int)(v14 - 1);
      if ( v14 >= 1 && (_DWORD)v15 != idx )
      {
        for ( i = 0; ; ++i )
        {
          CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v8);
            CenterNum = (SupportServantData_o *)BalanceConfig_TypeInfo;
          }
          if ( i >= SHIDWORD(CenterNum[1].fields.oldEquipIdList->m_Items[18]) )
            break;
          v17 = sub_2213CCC(SupportSelectRootComponent___c__DisplayClass94_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v17, 0);
          supportServantData = this->fields.supportServantData;
          if ( !supportServantData )
            goto LABEL_27;
          if ( v11 >= LODWORD(supportServantData->max_length) )
            goto LABEL_28;
          CenterNum = supportServantData->m_Items[v13];
          if ( !CenterNum )
            goto LABEL_27;
          CenterNum = (SupportServantData_o *)SupportServantData__getUserServantLeaderEntity(CenterNum, i, v18);
          if ( !v17 )
            goto LABEL_27;
          *(_QWORD *)(v17 + 16) = CenterNum;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)CenterNum, v20, v21, v22, v23, v24, v25);
          v26 = *(_QWORD *)(v17 + 16);
          if ( !v26 )
            goto LABEL_27;
          if ( *(_DWORD *)(v26 + 64) )
          {
            v27 = this->fields.supportServantData;
            if ( !v27 )
              goto LABEL_27;
            if ( (unsigned int)v15 >= LODWORD(v27->max_length) )
              goto LABEL_28;
            v28 = v27->m_Items[v15];
            if ( !v28 )
              goto LABEL_27;
            userServantLeaderEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.userServantLeaderEntityList;
            v30 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantLeaderEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v30,
              (Il2CppObject *)v17,
              Method_SupportSelectRootComponent___c__DisplayClass94_0__IsPossibleCopy_b__0__,
              0);
            v31 = System_Linq_Enumerable__Where_object_(
                    userServantLeaderEntityList,
                    (System_Func_TSource__bool__o *)v30,
                    (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserServantLeaderEntity___);
            if ( System_Linq_Enumerable__Count_object_(
                   v31,
                   (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_UserServantLeaderEntity___) > 0 )
              return v10;
          }
        }
      }
      fixDeckIds = v34;
      ++v12;
      LODWORD(max_length) = v34->max_length;
      v10 = v12 >= (int)max_length;
    }
    while ( v12 < (int)max_length );
  }
  return v10;
}


bool SupportSelectRootComponent__IsUpdateDeckId(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t CenterNum; // w19
  System_Array_o *SelfUserGame; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x22
  int klass; // w25
  Il2CppObject *v9; // x0
  __int64 v10; // x2
  Il2CppClass *v11; // x24
  Il2CppObject *v12; // x23
  __int64 v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  BalanceConfig_c *v15; // x0
  Il2CppObject *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x22
  BalanceConfig_c *v18; // x0
  bool v19; // w21
  __int64 v20; // x1
  __int64 v21; // x2
  char v22; // w24
  System_Collections_Generic_IEnumerable_TSource__o *tempFixMainQuestSupportDeckIds; // x21
  SupportSelectRootComponent___c_c *v24; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__63_0; // x22
  Il2CppObject *v27; // x23
  struct SupportSelectRootComponent___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  SupportSelectRootComponent___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *tempFixEventQuestSupportDeckIds; // x21
  int v41; // w20
  struct SupportSelectRootComponent___c_StaticFields *v42; // x9
  System_Func_int__bool__o *_9__63_1; // x22
  Il2CppObject *v44; // x23
  struct SupportSelectRootComponent___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  int32_t v53; // w0
  bool v54; // w8

  if ( (byte_596CCBC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__63_0__);
    sub_2213A60(&Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__63_1__);
    sub_2213A60(&SupportSelectRootComponent___c_TypeInfo);
    byte_596CCBC = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  SelfUserGame = (System_Array_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_40;
  v7 = SelfUserGame;
  SelfUserGame = (System_Array_o *)SelfUserGame[13].monitor;
  if ( !SelfUserGame )
    goto LABEL_40;
  klass = (int)v7[13].klass;
  if ( SelfUserGame[1].monitor )
  {
    v9 = System_Array__Clone(SelfUserGame, 0);
    if ( v9 )
    {
      v11 = int___TypeInfo;
      v12 = v9;
      v14 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213BB4(v9, int___TypeInfo);
      if ( !v14 )
        goto LABEL_17;
    }
    else
    {
      v14 = 0;
    }
  }
  else
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
      v15 = BalanceConfig_TypeInfo;
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v15->static_fields->FixMainSupportDeckNum);
  }
  SelfUserGame = (System_Array_o *)v7[14].klass;
  if ( !SelfUserGame )
LABEL_40:
    sub_2213CDC(SelfUserGame, v5);
  if ( !SelfUserGame[1].monitor )
  {
LABEL_18:
    v18 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v10);
      v18 = BalanceConfig_TypeInfo;
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(
                                                                 int___TypeInfo,
                                                                 (unsigned int)v18->static_fields->FixEventSupportDeckNum);
    goto LABEL_22;
  }
  v16 = System_Array__Clone(SelfUserGame, 0);
  if ( !v16 )
  {
    v17 = 0;
    goto LABEL_22;
  }
  v11 = int___TypeInfo;
  v12 = v16;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213BB4(v16, int___TypeInfo);
  if ( !v17 )
  {
LABEL_17:
    sub_221405C(v12, v11, v10, v13);
    goto LABEL_18;
  }
LABEL_22:
  v19 = System_Linq_Enumerable__SequenceEqual_int_(
          v14,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds,
          (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  v22 = v19
      & System_Linq_Enumerable__SequenceEqual_int_(
          v17,
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds,
          (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  if ( (v22 & 1) == 0 )
    goto LABEL_37;
  tempFixMainQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixMainQuestSupportDeckIds;
  v24 = SupportSelectRootComponent___c_TypeInfo;
  if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v20, v21);
    v24 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__63_0 = static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v20, v21);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__63_0, v27, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__63_0__, 0);
    v28 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v28->__9__63_0 = _9__63_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__63_0, (int32_t)_9__63_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_int_(
          tempFixMainQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__63_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v36 = System_Linq_Enumerable__Count_int_(v35, (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  v39 = SupportSelectRootComponent___c_TypeInfo;
  tempFixEventQuestSupportDeckIds = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.tempFixEventQuestSupportDeckIds;
  v41 = v36;
  if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v37, v38);
    v39 = SupportSelectRootComponent___c_TypeInfo;
  }
  v42 = v39->static_fields;
  _9__63_1 = v42->__9__63_1;
  if ( !_9__63_1 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v37, v38);
      v42 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__63_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__63_1, v44, Method_SupportSelectRootComponent___c__IsUpdateDeckId_b__63_1__, 0);
    v45 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v45->__9__63_1 = _9__63_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__63_1, (int32_t)_9__63_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__Where_int_(
          tempFixEventQuestSupportDeckIds,
          (System_Func_TSource__bool__o *)_9__63_1,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v53 = System_Linq_Enumerable__Count_int_(v52, (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  if ( v41 < 1 || v53 <= 0 )
    v54 = CenterNum + 1 != klass;
  else
LABEL_37:
    v54 = 0;
  return v54 || (v22 & 1) == 0;
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  struct SupportServantData_array *supportServantData; // x8
  __int64 selectNum; // x9
  SupportServantData_o *v29; // x22
  __int64 v30; // x2
  UserServantEntity_o *v31; // x8
  PartyOrganizationUtility_o *v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  int32_t v35; // w24
  struct System_Int64_array *oldServantIdList; // x8
  int32_t v37; // w25
  __int64 v38; // x2
  UserServantEntity_o *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  __int64 v41; // x23
  __int64 v42; // x24
  Il2CppObject *v43; // x23
  PartyOrganizationUtility_o *v44; // x20
  UserServantEntity_o *v45; // x8
  System_String_o *v46; // x21
  EquipTargetInfo_o *v47; // x8
  int32_t v48; // w22
  System_String_o *RarityInvalidMessage; // x20
  System_Text_StringBuilder_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *v53; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  System_String_o *v57; // x23
  CommonConfirmDialog_ClickDelegate_o *v58; // x24
  int32_t minFontSize[2]; // [xsp+48h] [xbp-68h] BYREF
  int32_t actMaxRarity[2]; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *skillName; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_596CCBD & 1) == 0 )
  {
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent___c__DisplayClass65_0__OnBackSelect_b__0__);
    sub_2213A60(&SupportSelectRootComponent___c__DisplayClass65_0_TypeInfo);
    sub_2213A60(&StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CCBD = 1;
  }
  *(_QWORD *)actMaxRarity = 0;
  skillName = 0;
  *(_QWORD *)minFontSize = 0;
  v9 = sub_2213CCC(SupportSelectRootComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_35;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = entity;
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v9 + 32);
  *(_DWORD *)(v9 + 24) = result;
  *(_DWORD *)(v9 + 28) = classPos;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)entity, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v9 + 24) == 1 )
  {
    supportServantData = this->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_35;
    selectNum = this->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_2213CE4(UserServantLeaderEntity);
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
      UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v31 = (UserServantEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_35;
      v32 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
      v33 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v34 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v30);
      *(_QWORD *)&v62.fields.currentCryptoKey = v33;
      *(_QWORD *)&v62.fields.fakeValue = v34;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                          v62,
                                                          0);
      if ( !*v18 )
        goto LABEL_35;
      v35 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity((UserServantEntity_o *)*v18, 0);
      oldServantIdList = v29->fields.oldServantIdList;
      if ( !oldServantIdList )
        goto LABEL_35;
      v37 = (int)UserServantLeaderEntity;
      UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&oldServantIdList->m_Items[3],
                                                          0);
      if ( !v32 )
        goto LABEL_35;
      if ( PartyOrganizationUtility__IsRarityRestriction(
             v32,
             &skillName,
             &actMaxRarity[1],
             v35,
             v37,
             (int32_t)UserServantLeaderEntity,
             -1,
             0) )
      {
        UserServantLeaderEntity = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( UserServantLeaderEntity )
        {
          UserServantLeaderEntity = (SupportServantData_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)UserServantLeaderEntity,
                                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
          v39 = (UserServantEntity_o *)*v18;
          if ( *v18 )
          {
            v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserServantLeaderEntity;
            v41 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
            v42 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v38);
            *(_QWORD *)&v63.fields.currentCryptoKey = v41;
            *(_QWORD *)&v63.fields.fakeValue = v42;
            UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                v63,
                                                                0);
            if ( v40 )
            {
              v43 = DataMasterBase_object__object__int___GetEntity(
                      v40,
                      (int32_t)UserServantLeaderEntity,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( *v18 )
              {
                v44 = (PartyOrganizationUtility_o *)UserServantLeaderEntity;
                UserServantLeaderEntity = (SupportServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                    (*v18)[6],
                                                                    0);
                if ( v43 )
                {
                  UserServantLeaderEntity = (SupportServantData_o *)ServantEntity__getName(
                                                                      (ServantEntity_o *)v43,
                                                                      (int32_t)UserServantLeaderEntity,
                                                                      -1,
                                                                      0,
                                                                      0,
                                                                      0);
                  v45 = (UserServantEntity_o *)*v18;
                  if ( *v18 )
                  {
                    v46 = (System_String_o *)UserServantLeaderEntity;
                    UserServantLeaderEntity = (SupportServantData_o *)UserServantEntity__getRarity(v45, 0);
                    v47 = (EquipTargetInfo_o *)v29->fields.oldServantIdList;
                    if ( v47 )
                    {
                      v48 = (int)UserServantLeaderEntity;
                      UserServantLeaderEntity = (SupportServantData_o *)EquipTargetInfo__GetSvtName(v47, 0);
                      if ( v44 )
                      {
                        RarityInvalidMessage = PartyOrganizationUtility__GetRarityInvalidMessage(
                                                 v44,
                                                 actMaxRarity,
                                                 v46,
                                                 v48,
                                                 (System_String_o *)UserServantLeaderEntity,
                                                 skillName,
                                                 actMaxRarity[1],
                                                 0);
                        UserServantLeaderEntity = (SupportServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
                        if ( UserServantLeaderEntity )
                        {
                          PartyOrganizationUtility__DecisionFontSize(
                            (PartyOrganizationUtility_o *)UserServantLeaderEntity,
                            &minFontSize[1],
                            minFontSize,
                            actMaxRarity[0],
                            0);
                          v50 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
                          System_Text_StringBuilder___ctor(v50, 0);
                          if ( v50 )
                          {
                            System_Text_StringBuilder__Append_75735064(v50, RarityInvalidMessage, 0);
                            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
                            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10511/*"PARTY_ORGANIZATION_BONUS_SKILL_INVALID_CONFIRM"*/, 0);
                            System_Text_StringBuilder__Append_75735064(v50, v53, 0);
                            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                            v55 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v50->klass->vtable._3_ToString.methodPtr)(
                                                       v50,
                                                       v50->klass->vtable._3_ToString.method);
                            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
                            v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
                            v58 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                            CommonConfirmDialog_ClickDelegate___ctor(
                              v58,
                              (Il2CppObject *)v9,
                              Method_SupportSelectRootComponent___c__DisplayClass65_0__OnBackSelect_b__0__,
                              0);
                            if ( Instance )
                            {
                              CommonUI__OpenConfirmDialog_37373584(
                                (CommonUI_o *)Instance,
                                (System_String_o *)StringLiteral_1/*""*/,
                                v55,
                                v56,
                                v57,
                                v58,
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
        sub_2213CDC(UserServantLeaderEntity, v11);
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
  CancelConfirmMenu_o *cancelConfirmMenu; // x21
  SupportServantData_o *v14; // x20
  CancelConfirmMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w20
  __int64 v21; // x2
  SupportServantSelectMenu_o *v22; // x23
  int32_t state; // w21
  Il2CppObject *v24; // x0
  __int64 v25; // x2
  Il2CppObject *v26; // x24
  Il2CppClass *v27; // x25
  __int64 v28; // x3
  System_Int32_array *v29; // x22
  const MethodInfo *v30; // x2
  BalanceConfig_c *v31; // x0
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x1
  System_Int32_array *v34; // x23
  BalanceConfig_c *v35; // x0
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  System_Int32_array *tempFixMainQuestSupportDeckIds; // x24
  System_Int32_array *tempFixEventQuestSupportDeckIds; // x25
  CancelConfirmDeckIdDialog_o *cancelConfirmDeckIdDialog; // x26
  CancelConfirmDeckIdDialog_CallbackFunc_o *v41; // x27

  if ( (byte_596CCCA & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    sub_2213A60(&CancelConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndCancelConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndChangeDeckIdCancelConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_OnClickBack__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596CCCA = 1;
  }
  if ( !this->fields.supportInfoJump )
  {
    if ( this->fields.isEdit && SupportSelectRootComponent__isUpdate(this, 1, 1, v2) )
    {
      v9 = Method_SupportSelectRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickBack__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
      CenterNum = (SupportServantSelectMenu_o *)SupportSelectRootComponent__getCenterNum(this, v11);
      supportServantData = this->fields.supportServantData;
      if ( supportServantData )
      {
        if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
          sub_2213CE4(CenterNum);
        cancelConfirmMenu = this->fields.cancelConfirmMenu;
        v14 = supportServantData->m_Items[(int)CenterNum];
        v15 = (CancelConfirmMenu_CallbackFunc_o *)sub_2213CCC(CancelConfirmMenu_CallbackFunc_TypeInfo);
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
        v17 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickBack__);
      v18 = (System_Reflection_MethodBase_o *)sub_2213A44(v17, v17[4]);
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
        SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_23515/*"ok"*/, v30);
        return;
      }
      goto LABEL_52;
    }
    v20 = SupportSelectRootComponent__getCenterNum(this, v16);
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
        v26 = v24;
        v27 = int___TypeInfo;
        v29 = (System_Int32_array *)sub_2213BB4(v24, int___TypeInfo);
        if ( !v29 )
          goto LABEL_43;
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v31 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v21);
        v31 = BalanceConfig_TypeInfo;
      }
      v29 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v31->static_fields->FixMainSupportDeckNum);
    }
    CenterNum = (SupportServantSelectMenu_o *)v22->fields.requestCallback;
    if ( !CenterNum )
      goto LABEL_52;
    if ( !CenterNum->fields.m_CancellationTokenSource )
      goto LABEL_44;
    v32 = System_Array__Clone((System_Array_o *)CenterNum, 0);
    if ( !v32 )
    {
      v34 = 0;
      goto LABEL_48;
    }
    v26 = v32;
    v27 = int___TypeInfo;
    v34 = (System_Int32_array *)sub_2213BB4(v32, int___TypeInfo);
    if ( v34 )
      goto LABEL_48;
LABEL_43:
    sub_221405C(v26, v27, v25, v28);
LABEL_44:
    v35 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v25);
      v35 = BalanceConfig_TypeInfo;
    }
    v34 = (System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)v35->static_fields->FixEventSupportDeckNum);
LABEL_48:
    SupportSelectRootComponent__getCenterNum(this, v33);
    v36 = Method_SupportSelectRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v36 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickBack__);
    v37 = (System_Reflection_MethodBase_o *)sub_2213A44(v36, v36[4]);
    OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0, 0);
    tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
    tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
    cancelConfirmDeckIdDialog = this->fields.cancelConfirmDeckIdDialog;
    v41 = (CancelConfirmDeckIdDialog_CallbackFunc_o *)sub_2213CCC(CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    CancelConfirmDeckIdDialog_CallbackFunc___ctor(
      v41,
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
        v29,
        v34,
        v41,
        0);
      return;
    }
LABEL_52:
    sub_2213CDC(CenterNum, v6);
  }
  v4 = Method_SupportSelectRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
    CenterNum = (SupportServantSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  if ( (byte_596CCC8 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    byte_596CCC8 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6);
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v7 + 1,
                                                                  this->fields.tempFixEventQuestSupportDeckIds,
                                                                  0,
                                                                  v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(FixedErrorList);
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
        v14 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_2213CDC(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_19;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7 + 1, 1, v11);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7 + 1,
      1,
      this->fields.tempFixEventQuestSupportDeckIds,
      0);
    IsFixedEventQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, v7 + 1, v21);
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
      v18 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickFixEventDeckButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_596CCC7 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndConfirmMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    byte_596CCC7 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, *(const MethodInfo **)&idx);
  v7 = SupportSelectRootComponent__getCenterNum(this, v6);
  FixedErrorList = (System_Collections_Generic_List_object__o *)SupportSelectRootComponent__GetFixedErrorList(
                                                                  this,
                                                                  idx,
                                                                  v7 + 1,
                                                                  this->fields.tempFixMainQuestSupportDeckIds,
                                                                  1,
                                                                  v8);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_19;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(FixedErrorList);
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
        v14 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
      v15 = (System_Reflection_MethodBase_o *)sub_2213A44(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      supportSelectConfirmMenu = this->fields.supportSelectConfirmMenu;
      v17 = (SupportSelectConfirmMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_2213CDC(FixedErrorList, v10);
    }
  }
  if ( !v13 )
    goto LABEL_19;
  if ( v13->fields._size < 1 )
  {
    SupportSelectRootComponent__UpdateTempFixDeckId(this, idx, v7 + 1, 0, v11);
    FixedErrorList = (System_Collections_Generic_List_object__o *)this->fields.supportSelectMenu;
    if ( !FixedErrorList )
      goto LABEL_19;
    SupportSelectMenu__SetFixDeckButton(
      (SupportSelectMenu_o *)FixedErrorList,
      v7 + 1,
      0,
      this->fields.tempFixMainQuestSupportDeckIds,
      0);
    IsFixedMainQuestSupportDeckIdNow = SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, v7 + 1, v21);
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
      v18 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OnClickFixMainDeckButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    fixErrorDialog = this->fields.fixErrorDialog;
    FixedErrorList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                    v13,
                                                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_596CCDF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_OpenGrandListInfo__);
    byte_596CCDF = 1;
  }
  v3 = Method_SupportSelectRootComponent_OpenGrandListInfo__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_OpenGrandListInfo__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_OpenGrandListInfo__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.supportInfoJump )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v6);
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
  SupportSelectEditMenu_o *supportEditMenu; // x21
  SupportServantData_o *v7; // x20
  _BOOL4 isEdit; // w23
  SupportSelectEditMenu_OnClickButtonEvent_o *v9; // x22

  if ( (byte_596CCCE & 1) == 0 )
  {
    sub_2213A60(&SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportEditMenu__);
    byte_596CCCE = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(CenterNum);
  supportEditMenu = this->fields.supportEditMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  isEdit = this->fields.isEdit;
  v9 = (SupportSelectEditMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectEditMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectEditMenu_OnClickButtonEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportEditMenu__,
    0);
  if ( !supportEditMenu )
LABEL_7:
    sub_2213CDC(CenterNum, v4);
  SupportSelectEditMenu__Open(supportEditMenu, v7, isEdit, v9, 0);
}


void SupportSelectRootComponent__PlaySEOnClickFixQuestSupportDeck(
        SupportSelectRootComponent_o *this,
        bool isFixed,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596CCC9 & 1) == 0 )
  {
    sub_2213A60(&Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
    byte_596CCC9 = 1;
  }
  v4 = Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__;
  if ( (*((_BYTE *)Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_PlaySEOnClickFixQuestSupportDeck__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, !isFixed, 0, 0);
}


void SupportSelectRootComponent__RefreshSupportServantData(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectRootComponent_o *v2; // x19
  unsigned int *supportServantData; // x22
  unsigned __int64 v4; // x23
  __int64 v5; // x24
  unsigned __int64 v6; // x8
  unsigned int *v7; // x25
  SupportServantData_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  unsigned int *orgSupportServantData; // x22
  unsigned __int64 v18; // x23
  __int64 v19; // x24
  unsigned __int64 v20; // x8
  unsigned int *v21; // x25
  SupportServantData_o *v22; // x20
  const MethodInfo *v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  unsigned int *tmpSupportServantData; // x22
  unsigned __int64 v31; // x23
  __int64 v32; // x24
  unsigned __int64 v33; // x8
  unsigned int *v34; // x25
  SupportServantData_o *v35; // x20
  const MethodInfo *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0

  v2 = this;
  if ( (byte_596CCAD & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_2213A60(&SupportServantData_TypeInfo);
    byte_596CCAD = 1;
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
    v7 = &supportServantData[2 * v4];
    if ( !*((_QWORD *)v7 + 4) )
    {
      v8 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v8, v9);
      if ( v8 )
      {
        this = (SupportSelectRootComponent_o *)sub_2213BB4(v8, *(_QWORD *)(*(_QWORD *)supportServantData + 64LL));
        if ( !this )
        {
LABEL_38:
          v43 = sub_2213D00(this, v16);
          sub_2213BA0(v43, 0);
        }
      }
      if ( v4 >= supportServantData[6] )
LABEL_37:
        sub_2213CE4(this);
      *((_QWORD *)v7 + 4) = v8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&supportServantData[v5],
        (int32_t)v8,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
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
  v18 = 0;
  v19 = 8;
  while ( 1 )
  {
    v20 = orgSupportServantData[6];
    if ( (__int64)v18 >= (int)v20 )
      break;
    if ( v18 >= v20 )
      goto LABEL_37;
    v21 = &orgSupportServantData[2 * v18];
    if ( !*((_QWORD *)v21 + 4) )
    {
      v22 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v22, v23);
      if ( v22 )
      {
        this = (SupportSelectRootComponent_o *)sub_2213BB4(v22, *(_QWORD *)(*(_QWORD *)orgSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v18 >= orgSupportServantData[6] )
        goto LABEL_37;
      *((_QWORD *)v21 + 4) = v22;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&orgSupportServantData[v19],
        (int32_t)v22,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      orgSupportServantData = (unsigned int *)v2->fields.orgSupportServantData;
    }
    ++v18;
    v19 += 2;
    if ( !orgSupportServantData )
      goto LABEL_35;
  }
  tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
  if ( !tmpSupportServantData )
LABEL_35:
    sub_2213CDC(this, method);
  v31 = 0;
  v32 = 8;
  while ( 1 )
  {
    v33 = tmpSupportServantData[6];
    if ( (__int64)v31 >= (int)v33 )
      break;
    if ( v31 >= v33 )
      goto LABEL_37;
    v34 = &tmpSupportServantData[2 * v31];
    if ( !*((_QWORD *)v34 + 4) )
    {
      v35 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v35, v36);
      if ( v35 )
      {
        this = (SupportSelectRootComponent_o *)sub_2213BB4(v35, *(_QWORD *)(*(_QWORD *)tmpSupportServantData + 64LL));
        if ( !this )
          goto LABEL_38;
      }
      if ( v31 >= tmpSupportServantData[6] )
        goto LABEL_37;
      *((_QWORD *)v34 + 4) = v35;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&tmpSupportServantData[v32],
        (int32_t)v35,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      tmpSupportServantData = (unsigned int *)v2->fields.tmpSupportServantData;
    }
    ++v31;
    v32 += 2;
    if ( !tmpSupportServantData )
      goto LABEL_35;
  }
}


void SupportSelectRootComponent__RemoveAll(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x21
  SupportServantData_o *v7; // x20
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_596CCD3 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndRemoveAll__);
    byte_596CCD3 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAll__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_2213CDC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 0, v7, v8, 0);
}


void SupportSelectRootComponent__RemoveAllEquip(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  __int64 CenterNum; // x0
  __int64 v4; // x1
  struct SupportServantData_array *supportServantData; // x8
  SupportSelectConfirmDeckMenu_o *confirmDeckMenu; // x21
  SupportServantData_o *v7; // x20
  SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *v8; // x22

  if ( (byte_596CCD7 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndRemoveAllEquip__);
    byte_596CCD7 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  supportServantData = this->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_7;
  if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
    sub_2213CE4(CenterNum);
  confirmDeckMenu = this->fields.confirmDeckMenu;
  v7 = supportServantData->m_Items[(int)CenterNum];
  v8 = (SupportSelectConfirmDeckMenu_OnClickButtonEvent_o *)sub_2213CCC(SupportSelectConfirmDeckMenu_OnClickButtonEvent_TypeInfo);
  SupportSelectConfirmDeckMenu_OnClickButtonEvent___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndRemoveAllEquip__,
    0);
  if ( !confirmDeckMenu )
LABEL_7:
    sub_2213CDC(CenterNum, v4);
  SupportSelectConfirmDeckMenu__Open(confirmDeckMenu, 2, v7, v8, 0);
}


void SupportSelectRootComponent__RequestApi(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t CenterNum; // w20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  __int64 i; // x22
  SupportServantData_o *Instance; // x0
  unsigned int v9; // w8
  struct SupportServantData_array *supportServantData; // x9
  struct SupportServantData_array *orgSupportServantData; // x10
  const MethodInfo *v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2

  if ( (byte_596CCB9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_FollowerSetupRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596CCB9 = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, method);
  if ( SupportSelectRootComponent__IsFinallyUpdate(this, v4) )
  {
    for ( i = 4; ; ++i )
    {
      Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
        Instance = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      v9 = i - 4;
      if ( (int)i - 4 >= SLODWORD(Instance[1].fields.oldEquipIdList->m_Items[17]) )
        break;
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_21;
      if ( v9 >= LODWORD(supportServantData->max_length) )
        goto LABEL_22;
      orgSupportServantData = this->fields.orgSupportServantData;
      if ( !orgSupportServantData )
        goto LABEL_21;
      if ( v9 >= LODWORD(orgSupportServantData->max_length) )
LABEL_22:
        sub_2213CE4(Instance);
      Instance = (SupportServantData_o *)*((_QWORD *)&supportServantData->obj.klass + i);
      if ( !Instance )
        goto LABEL_21;
      SupportServantData__SetOld(Instance, *((SupportServantData_o **)&orgSupportServantData->obj.klass + i), v6);
    }
  }
  else if ( !SupportSelectRootComponent__IsUpdateDeckId(this, v5) )
  {
LABEL_20:
    SupportSelectRootComponent__ReturnScene(this, (System_String_o *)StringLiteral_23515/*"ok"*/, v12);
    return;
  }
  Instance = (SupportServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_CallbackUpdateDeckIdApi__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14, v15);
  Instance = (SupportServantData_o *)NetworkManager__getRequest_object_(
                                       v13,
                                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_FollowerSetupRequest___);
  if ( !Instance )
LABEL_21:
    sub_2213CDC(Instance, v5);
  if ( !FollowerSetupRequest__beginRequest(
          (FollowerSetupRequest_o *)Instance,
          this->fields.supportServantData,
          CenterNum + 1,
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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
      sub_2213CE4(IsNullOrEmpty);
    IsNullOrEmpty = (SupportSelectMenu_o *)supportServantData->m_Items[CenterNum];
    if ( !IsNullOrEmpty
      || (editDeckName = this->fields.editDeckName,
          IsNullOrEmpty->fields.decideButton = (struct UICommonButton_o *)editDeckName,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&IsNullOrEmpty->fields.decideButton,
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
      sub_2213CDC(IsNullOrEmpty, v5);
    }
    SupportSelectListViewIndicator__DrawPartyInfo(indicator, (SupportSelectListViewItem_o *)IsNullOrEmpty, 0);
  }
}


void SupportSelectRootComponent__ReturnScene(
        SupportSelectRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v5; // x1
  const MethodInfo *v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  SupportSelectMenu_o *supportSelectMenu; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  SceneJumpInfo_o *sceneJumpInfo; // x0

  if ( (byte_596CCCD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_ReturnScene__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596CCCD = 1;
  }
  v5 = (System_String_o *)StringLiteral_23336/*"ng"*/;
  this->fields.state = 0;
  if ( System_String__op_Equality(result, v5, 0) )
  {
    v7 = Method_SupportSelectRootComponent_ReturnScene__;
    if ( (*((_BYTE *)Method_SupportSelectRootComponent_ReturnScene__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_2213A78(Method_SupportSelectRootComponent_ReturnScene__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0);
LABEL_11:
      this->fields.isDragSwapState = 0;
      SupportSelectRootComponent__setEditUI(this, 0, v11);
      return;
    }
    goto LABEL_20;
  }
  if ( this->fields.isEdit )
  {
    SupportSelectRootComponent__initSupportServantDatas(this, v6);
    supportSelectMenu = this->fields.supportSelectMenu;
    if ( supportSelectMenu )
    {
      SupportSelectMenu__Reset(supportSelectMenu, -1, 0);
      SupportSelectRootComponent__SetActiveApplyIcon(this, v12);
      goto LABEL_11;
    }
LABEL_20:
    sub_2213CDC(supportSelectMenu, v9);
  }
  supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !supportSelectMenu )
    goto LABEL_20;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)supportSelectMenu, 0) )
  {
    supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !supportSelectMenu )
      goto LABEL_20;
    AvalonSceneManager__popScene((AvalonSceneManager_o *)supportSelectMenu, 1, 0, 0);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    if ( !sceneJumpInfo || !SceneJumpInfo__ReturnScene(sceneJumpInfo, 0) )
    {
      supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_2213CE4(this);
  this = (SupportSelectRootComponent_o *)supportServantData->m_Items[targetIdx];
  if ( !this )
LABEL_7:
    sub_2213CDC(this, *(_QWORD *)&targetIdx);
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
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  SupportSelectCopyDeckSelectMenu_o *copyDeckSelectMenu; // x22
  SupportServantData_array *supportServantData; // x23
  System_Int32_array *v28; // x20
  System_Int32_array *v29; // x21
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v30; // x24

  if ( (byte_596CCD0 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSelectCopySupportDeck__);
    byte_596CCD0 = 1;
  }
  supportEditMenu = this->fields.supportEditMenu;
  if ( !supportEditMenu )
    goto LABEL_33;
  SupportSelectEditMenu__Close(supportEditMenu, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v15);
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
      || IsFixedEventQuestSupportDeckIdNow
      && (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(
                                                         this,
                                                         i + 1,
                                                         v15),
          ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !v4 )
        goto LABEL_33;
      items = v4->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        goto LABEL_33;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          i,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = i;
      }
    }
    else if ( !SupportSelectRootComponent__IsFixedMainQuestSupportDeckIdNow(this, i + 1, v15)
           || (supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                              this,
                                                              i,
                                                              this->fields.tempFixMainQuestSupportDeckIds,
                                                              v21),
               ((unsigned __int8)supportEditMenu & 1) != 0) )
    {
      if ( !SupportSelectRootComponent__IsFixedEventQuestSupportDeckIdNow(this, i + 1, v15) )
        continue;
      supportEditMenu = (SupportSelectEditMenu_o *)SupportSelectRootComponent__IsPossibleCopy(
                                                     this,
                                                     i,
                                                     this->fields.tempFixEventQuestSupportDeckIds,
                                                     v22);
      if ( ((unsigned __int8)supportEditMenu & 1) != 0 )
        continue;
    }
    if ( !v5 )
      goto LABEL_33;
    v23 = v5->fields._items;
    v24 = Method_System_Collections_Generic_List_int__Add__;
    ++v5->fields._version;
    if ( !v23 )
      goto LABEL_33;
    v25 = v5->fields._size;
    if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v5,
        i,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v5->fields._size = v25 + 1;
      v23->m_Items[v25] = i;
    }
  }
  if ( !v4
    || (copyDeckSelectMenu = this->fields.copyDeckSelectMenu,
        supportServantData = this->fields.supportServantData,
        supportEditMenu = (SupportSelectEditMenu_o *)System_Collections_Generic_List_int___ToArray(
                                                       v4,
                                                       (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v5)
    || (v28 = (System_Int32_array *)supportEditMenu,
        v29 = System_Collections_Generic_List_int___ToArray(
                v5,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        v30 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *)sub_2213CCC(SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo),
        SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
          v30,
          (Il2CppObject *)this,
          Method_SupportSelectRootComponent_EndSelectCopySupportDeck__,
          0),
        !copyDeckSelectMenu) )
  {
LABEL_33:
    sub_2213CDC(supportEditMenu, method);
  }
  SupportSelectCopyDeckSelectMenu__Open(copyDeckSelectMenu, supportServantData, v28, v29, v30, 0);
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
    sub_2213CDC(supportSelectMenu, method);
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
  __int64 v11; // x2
  struct UserServantEntity_o *v12; // x8
  __int128 v13; // q1
  int32_t v14; // w22
  Il2CppObject *Instance; // x21
  System_Action_o *v16; // x0
  intptr_t v17; // x2
  struct SupportServantData_array *supportServantData; // x8
  SupportServantData_o *v19; // x8
  SupportSelectRootComponent_o *v20; // x23
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  struct SupportServantData_array *v23; // x8
  struct SupportServantData_array *v24; // x8
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h] BYREF

  v7 = result;
  v8 = this;
  if ( (byte_596CCBF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_IndexOf_long___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__);
    this = (SupportSelectRootComponent_o *)sub_2213A60(&Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__);
    byte_596CCBF = 1;
  }
  selectNum = v8->fields.selectNum;
  v8->fields.state = 1;
  memset(&v29, 0, sizeof(v29));
  if ( v7 != 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v17 = Method_SupportSelectRootComponent_EndCloseServantEquipListCancel__;
    goto LABEL_26;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( !userSvtEntity )
      goto LABEL_32;
    this = (SupportSelectRootComponent_o *)BasicHelper__DecryptValue_51160428(userSvtEntity->fields.svtId, 0);
    v12 = item->fields.userSvtEntity;
    if ( !v12 )
      goto LABEL_32;
    v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
    v14 = (int)this;
    *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v29.fields.fakeValue = v13;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
        *(_QWORD *)&result,
        *(_QWORD *)&classPos);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v29, 0, 0);
    v14 = 0;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&result, v11);
  v28 = v29;
  this = (SupportSelectRootComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v28, 0);
  supportServantData = v8->fields.supportServantData;
  if ( !supportServantData )
LABEL_32:
    sub_2213CDC(this, *(_QWORD *)&result);
  if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
    goto LABEL_33;
  v19 = supportServantData->m_Items[selectNum];
  if ( !v19 )
    goto LABEL_32;
  v20 = this;
  this = (SupportSelectRootComponent_o *)System_Array__IndexOf_long_(
                                           v19->fields.equipIdList,
                                           (int64_t)this,
                                           (const MethodInfo_3A2E664 *)Method_System_Array_IndexOf_long___);
  if ( (_DWORD)this != -1 )
  {
    v23 = v8->fields.supportServantData;
    if ( !v23 )
      goto LABEL_32;
    if ( (unsigned int)selectNum >= LODWORD(v23->max_length) )
      goto LABEL_33;
    *(_QWORD *)&result = (unsigned int)this;
    this = (SupportSelectRootComponent_o *)v23->m_Items[selectNum];
    if ( !this )
      goto LABEL_32;
    SupportServantData__removeEquipData((SupportServantData_o *)this, result, v21);
  }
  v24 = v8->fields.supportServantData;
  if ( !v24 )
    goto LABEL_32;
  if ( (unsigned int)selectNum >= LODWORD(v24->max_length) )
LABEL_33:
    sub_2213CE4(this);
  this = (SupportSelectRootComponent_o *)v24->m_Items[selectNum];
  if ( !this )
    goto LABEL_32;
  SupportServantData__setEquipData((SupportServantData_o *)this, classPos, (int64_t)v20, v14, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v17 = Method_SupportSelectRootComponent_EndCloseServantEquipListDecide__;
LABEL_26:
  v25 = v16;
  System_Action___ctor(v16, (Il2CppObject *)v8, v17, 0);
  if ( !Instance )
    goto LABEL_32;
  CommonUI__CloseSupportServantEquipListMenu((CommonUI_o *)Instance, v25, 0);
  if ( !SupportSelectRootComponent__isUpdate(v8, 1, 1, v26) && !v8->fields.isDragSwapState )
    SupportSelectRootComponent__setEditUI(v8, 0, v27);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportSelectRootComponent_o *v9; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x20
  unsigned __int64 v12; // x24
  __int64 i; // x26
  struct SupportServantData_array *supportServantData; // x8
  struct System_Int32_array *mainSupportDeckIds; // x8
  il2cpp_array_size_t v16; // x21
  __int64 v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x26
  __int64 v25; // x25
  __int64 v26; // x27
  struct System_Int32_array *v27; // x8
  unsigned __int64 v28; // x28
  unsigned int *v29; // x29
  SupportServantData_o *v30; // x21
  const MethodInfo *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  const MethodInfo *v39; // x7
  struct SupportServantData_array *v40; // x8
  struct SupportInfoJump_o *v41; // x10
  struct System_Int32_array *v42; // x9
  struct System_Int32_array *eventSupportDeckIds; // x9
  __int64 max_length_low; // x25
  il2cpp_array_size_t max_length; // x24
  __int64 v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  unsigned __int64 v53; // x27
  unsigned int v54; // w26
  struct System_Int32_array *v55; // x8
  struct SupportServantData_array *v56; // x29
  SupportServantData_o *v57; // x21
  const MethodInfo *v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppClass **v65; // x0
  const MethodInfo *v66; // x7
  struct SupportServantData_array *v67; // x9
  struct SupportInfoJump_o *v68; // x8
  struct System_Int32_array *v69; // x10
  unsigned __int64 v70; // x25
  struct System_Int32_array *v71; // x8
  struct SupportServantData_array *v72; // x28
  SupportServantData_o *v73; // x21
  const MethodInfo *v74; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  Il2CppClass **v81; // x0
  const MethodInfo *v82; // x7
  struct SupportServantData_array *v83; // x9
  struct SupportInfoJump_o *v84; // x8
  struct System_Int32_array *v85; // x10
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x21
  System_Action_o *v88; // x22
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  __int64 v95; // x0

  v9 = this;
  if ( (byte_596CCB1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_2213A60(&SupportServantData___TypeInfo);
    this = (SupportSelectRootComponent_o *)sub_2213A60(&SupportServantData_TypeInfo);
    byte_596CCB1 = 1;
  }
  supportInfoJump = v9->fields.supportInfoJump;
  *deckIndex = 0;
  if ( !supportInfoJump )
    goto LABEL_76;
  otherUserGameEntity = supportInfoJump->fields.otherUserGameEntity;
  v12 = 0;
  for ( i = 32; ; i += 8 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deckIndex, method);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    supportServantData = v9->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_76;
    if ( v12 >= LODWORD(supportServantData->max_length) )
LABEL_77:
      sub_2213CE4(this);
    supportServantData->m_Items[v12] = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)supportServantData + i),
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ++v12;
  }
  if ( !otherUserGameEntity )
    goto LABEL_76;
  this = (SupportSelectRootComponent_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
                                           (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
                                           (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !mainSupportDeckIds )
      goto LABEL_76;
    eventSupportDeckIds = otherUserGameEntity->fields.eventSupportDeckIds;
    if ( !eventSupportDeckIds )
      goto LABEL_76;
    max_length_low = LODWORD(mainSupportDeckIds->max_length);
    max_length = eventSupportDeckIds->max_length;
    v46 = sub_2213B20(SupportServantData___TypeInfo, (unsigned int)(max_length + max_length_low));
    v9->fields.supportServantData = (struct SupportServantData_array *)v46;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.supportServantData, v46, v47, v48, v49, v50, v51, v52);
    if ( (int)max_length_low < 1 )
    {
      v54 = 0;
LABEL_53:
      if ( (int)max_length < 1 )
        goto LABEL_70;
      v70 = 0;
      while ( 1 )
      {
        v71 = otherUserGameEntity->fields.eventSupportDeckIds;
        if ( !v71 )
          break;
        if ( v70 >= LODWORD(v71->max_length) )
          goto LABEL_77;
        if ( v71->m_Items[v70] >= 1 )
        {
          v72 = v9->fields.supportServantData;
          v73 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v73, v74);
          if ( !v72 )
            break;
          if ( v73 )
          {
            this = (SupportSelectRootComponent_o *)sub_2213BB4(v73, v72->obj.klass->_1.element_class);
            if ( !this )
              goto LABEL_78;
          }
          if ( v54 >= LODWORD(v72->max_length) )
            goto LABEL_77;
          v81 = &v72->obj.klass + (int)v54;
          v81[4] = (Il2CppClass *)v73;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v73, v75, v76, v77, v78, v79, v80);
          v83 = v9->fields.supportServantData;
          if ( !v83 )
            break;
          if ( v54 >= LODWORD(v83->max_length) )
            goto LABEL_77;
          v84 = v9->fields.supportInfoJump;
          if ( !v84 )
            break;
          v85 = otherUserGameEntity->fields.eventSupportDeckIds;
          if ( !v85 )
            break;
          if ( v70 >= LODWORD(v85->max_length) )
            goto LABEL_77;
          this = (SupportSelectRootComponent_o *)v83->m_Items[v54];
          if ( !this )
            break;
          SupportServantData__Init_42507020(
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
        if ( (unsigned int)max_length == ++v70 )
          goto LABEL_70;
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
          goto LABEL_77;
        if ( v55->m_Items[v53] >= 1 )
        {
          v56 = v9->fields.supportServantData;
          v57 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
          SupportServantData___ctor(v57, v58);
          if ( !v56 )
            break;
          if ( v57 )
          {
            this = (SupportSelectRootComponent_o *)sub_2213BB4(v57, v56->obj.klass->_1.element_class);
            if ( !this )
            {
LABEL_78:
              v95 = sub_2213D00(this, v38);
              sub_2213BA0(v95, 0);
            }
          }
          if ( v54 >= LODWORD(v56->max_length) )
            goto LABEL_77;
          v65 = &v56->obj.klass + (int)v54;
          v65[4] = (Il2CppClass *)v57;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v57, v59, v60, v61, v62, v63, v64);
          v67 = v9->fields.supportServantData;
          if ( !v67 )
            break;
          if ( v54 >= LODWORD(v67->max_length) )
            goto LABEL_77;
          v68 = v9->fields.supportInfoJump;
          if ( !v68 )
            break;
          v69 = otherUserGameEntity->fields.mainSupportDeckIds;
          if ( !v69 )
            break;
          if ( v53 >= LODWORD(v69->max_length) )
            goto LABEL_77;
          this = (SupportSelectRootComponent_o *)v67->m_Items[v54];
          if ( !this )
            break;
          SupportServantData__Init_42507020(
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
        if ( max_length_low == ++v53 )
          goto LABEL_53;
      }
    }
LABEL_76:
    sub_2213CDC(this, deckIndex);
  }
  if ( !mainSupportDeckIds )
    goto LABEL_76;
  v16 = mainSupportDeckIds->max_length;
  v17 = sub_2213B20(SupportServantData___TypeInfo, (unsigned int)v16);
  v9->fields.supportServantData = (struct SupportServantData_array *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.supportServantData, v17, v18, v19, v20, v21, v22, v23);
  if ( (int)v16 >= 1 )
  {
    v24 = 8;
    v25 = -(__int64)(unsigned int)v16;
    v26 = 8;
    do
    {
      v27 = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !v27 )
        goto LABEL_76;
      v28 = v24 - 8;
      if ( v24 - 8 >= (unsigned __int64)LODWORD(v27->max_length) )
        goto LABEL_77;
      if ( *((int *)&v27->obj.klass + v24) >= 1 )
      {
        v29 = (unsigned int *)v9->fields.supportServantData;
        v30 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v30, v31);
        if ( !v29 )
          goto LABEL_76;
        if ( v30 )
        {
          this = (SupportSelectRootComponent_o *)sub_2213BB4(v30, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
          if ( !this )
            goto LABEL_78;
        }
        if ( v28 >= v29[6] )
          goto LABEL_77;
        *(_QWORD *)&v29[v26] = v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29[v26], (int32_t)v30, v32, v33, v34, v35, v36, v37);
        v40 = v9->fields.supportServantData;
        if ( !v40 )
          goto LABEL_76;
        if ( v28 >= LODWORD(v40->max_length) )
          goto LABEL_77;
        v41 = v9->fields.supportInfoJump;
        if ( !v41 )
          goto LABEL_76;
        v42 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v42 )
          goto LABEL_76;
        if ( v28 >= LODWORD(v42->max_length) )
          goto LABEL_77;
        this = *(SupportSelectRootComponent_o **)((char *)&v40->obj.klass + v26 * 4);
        if ( !this )
          goto LABEL_76;
        SupportServantData__Init_42507020(
          (SupportServantData_o *)this,
          otherUserGameEntity,
          v41->fields.kind,
          v41->fields.isSelect,
          v41->fields.eventSetupInfo,
          0,
          *((_DWORD *)&v42->obj.klass + v24),
          v39);
      }
      ++v24;
      v26 += 2;
    }
    while ( v25 + v24 != 8 );
  }
LABEL_70:
  supportSelectMenu = v9->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_76;
  indicator = supportSelectMenu->fields.indicator;
  v88 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)v9, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_76;
  indicator->fields.modifyCenterItemCallBack = v88;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
    (int32_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this = (SupportSelectRootComponent_o *)v9->fields.followerQuestInfomationDraw;
  if ( !this )
    goto LABEL_76;
  FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)this, 0, 0, 0, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)otherUserGameEntity->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v9->fields.supportSelectMenu;
    if ( !this )
      goto LABEL_76;
    SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)this, 1, 0);
  }
}


void SupportSelectRootComponent__SetFriendInfoPrepareBattle(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SupportSelectRootComponent_o *v8; // x19
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct SupportInfoJump_o *v10; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *Entity; // x0
  bool v13; // w20
  unsigned __int64 v14; // x21
  __int64 i; // x26
  struct SupportServantData_array *supportServantData; // x8
  struct SupportInfoJump_o *v17; // x8
  struct FollowerInfo_o *followerInfo; // x26
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x21
  Il2CppClass *v23; // x22
  __int64 v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  SupportSelectRootComponent___c_c *v26; // x0
  struct SupportSelectRootComponent___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__48_0; // x21
  Il2CppObject *v29; // x22
  struct SupportSelectRootComponent___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  unsigned int v38; // w0
  __int64 v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  void *monitor; // x8
  __int64 v47; // x23
  __int64 v48; // x22
  unsigned __int64 v49; // x24
  unsigned int *v50; // x28
  SupportServantData_o *v51; // x21
  const MethodInfo *v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  const MethodInfo *v60; // x7
  struct SupportServantData_array *v61; // x9
  struct SupportInfoJump_o *v62; // x8
  __int64 v63; // x9
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct SupportInfoJump_o *v73; // x8
  QuestRestrictionInfo_o *v74; // x21
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  __int64 v76; // x0

  v8 = this;
  if ( (byte_596CCB2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_2213A60(&SupportServantData___TypeInfo);
    sub_2213A60(&SupportServantData_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__48_0__);
    this = (SupportSelectRootComponent_o *)sub_2213A60(&SupportSelectRootComponent___c_TypeInfo);
    byte_596CCB2 = 1;
  }
  supportInfoJump = v8->fields.supportInfoJump;
  if ( !supportInfoJump )
    goto LABEL_60;
  if ( !supportInfoJump->fields.questRestrictionInfo )
    goto LABEL_11;
  this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_60;
  this = (SupportSelectRootComponent_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = v8->fields.supportInfoJump;
  if ( !v10 )
    goto LABEL_60;
  questRestrictionInfo = v10->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !this )
    goto LABEL_60;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             questRestrictionInfo->fields.questId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( Entity )
    v13 = !QuestEntity__IsNeedUseEventQuestSupport((QuestEntity_o *)Entity, 0);
  else
LABEL_11:
    v13 = 1;
  v14 = 0;
  for ( i = 32; ; i += 8 )
  {
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v14 >= SLODWORD(this->fields.applyIconObj[7].klass) )
      break;
    supportServantData = v8->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_60;
    if ( v14 >= LODWORD(supportServantData->max_length) )
      goto LABEL_61;
    supportServantData->m_Items[v14] = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)supportServantData + i), 0, v2, v3, v4, v5, v6, v7);
    ++v14;
  }
  v17 = v8->fields.supportInfoJump;
  if ( !v17 )
LABEL_60:
    sub_2213CDC(this, method);
  followerInfo = v17->fields.followerInfo;
  if ( v13 )
  {
    if ( !followerInfo )
      goto LABEL_60;
    this = (SupportSelectRootComponent_o *)followerInfo->fields.mainSupportDeckIds;
    if ( !this )
      goto LABEL_60;
  }
  else
  {
    if ( !followerInfo )
      goto LABEL_60;
    this = (SupportSelectRootComponent_o *)followerInfo->fields.eventSupportDeckIds;
    if ( !this )
      goto LABEL_60;
  }
  v19 = System_Array__Clone((System_Array_o *)this, 0);
  if ( !v19 )
    goto LABEL_29;
  v22 = v19;
  v23 = int___TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213BB4(v19, int___TypeInfo);
  if ( !v25 )
  {
    sub_221405C(v22, v23, v21, v24);
LABEL_29:
    v25 = 0;
  }
  v26 = SupportSelectRootComponent___c_TypeInfo;
  if ( !*(&SupportSelectRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectRootComponent___c_TypeInfo, v20, v21);
    v26 = SupportSelectRootComponent___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__48_0 = static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v20, v21);
      static_fields = SupportSelectRootComponent___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__48_0,
      v29,
      Method_SupportSelectRootComponent___c__SetFriendInfoPrepareBattle_b__48_0__,
      0);
    v30 = SupportSelectRootComponent___c_TypeInfo->static_fields;
    v30->__9__48_0 = _9__48_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->__9__48_0, (int32_t)_9__48_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__Where_int_(
          v25,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v38 = System_Linq_Enumerable__Count_int_(v37, (const MethodInfo_38790D4 *)Method_System_Linq_Enumerable_Count_int___);
  v39 = sub_2213B20(SupportServantData___TypeInfo, v38);
  v8->fields.supportServantData = (struct SupportServantData_array *)v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.supportServantData, v39, v40, v41, v42, v43, v44, v45);
  if ( !v25 )
    goto LABEL_60;
  monitor = v25[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v47 = 8;
    v48 = 8;
    while ( 1 )
    {
      v49 = v47 - 8;
      if ( v47 - 8 >= (unsigned __int64)(unsigned int)monitor )
        break;
      if ( *((int *)&v25->klass + v47) >= 1 )
      {
        v50 = (unsigned int *)v8->fields.supportServantData;
        v51 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
        SupportServantData___ctor(v51, v52);
        if ( !v50 )
          goto LABEL_60;
        if ( v51 )
        {
          this = (SupportSelectRootComponent_o *)sub_2213BB4(v51, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
          if ( !this )
          {
            v76 = sub_2213D00(0, v59);
            sub_2213BA0(v76, 0);
          }
        }
        if ( v49 >= v50[6] )
          break;
        *(_QWORD *)&v50[v48] = v51;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50[v48], (int32_t)v51, v53, v54, v55, v56, v57, v58);
        v61 = v8->fields.supportServantData;
        if ( !v61 )
          goto LABEL_60;
        if ( v49 >= LODWORD(v61->max_length) )
          break;
        v62 = v8->fields.supportInfoJump;
        if ( !v62 )
          goto LABEL_60;
        if ( v49 >= LODWORD(v25[1].monitor) )
          break;
        this = *(SupportSelectRootComponent_o **)((char *)&v61->obj.klass + v48 * 4);
        if ( !this )
          goto LABEL_60;
        SupportServantData__Init_42509136(
          (SupportServantData_o *)this,
          v62->fields.followerInfo,
          v62->fields.kind,
          v62->fields.isSelect,
          v62->fields.eventSetupInfo,
          v62->fields.questRestrictionInfo,
          *((_DWORD *)&v25->klass + v47),
          v60);
      }
      LODWORD(monitor) = v25[1].monitor;
      v63 = v47 - 7;
      ++v47;
      v48 += 2;
      if ( v63 >= (int)monitor )
        goto LABEL_52;
    }
LABEL_61:
    sub_2213CE4(this);
  }
LABEL_52:
  supportSelectMenu = v8->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_60;
  indicator = supportSelectMenu->fields.indicator;
  v66 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)v8, Method_SupportSelectRootComponent_modifyCenterItemCallBack__, 0);
  if ( !indicator )
    goto LABEL_60;
  indicator->fields.modifyCenterItemCallBack = v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = v8->fields.supportInfoJump;
  if ( !v73 )
    goto LABEL_60;
  v74 = v73->fields.questRestrictionInfo;
  followerQuestInfomationDraw = v8->fields.followerQuestInfomationDraw;
  this = (SupportSelectRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this || !followerQuestInfomationDraw )
    goto LABEL_60;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    v74,
    (int32_t)this->fields.supportSelectConfirmMenu,
    0,
    0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)followerInfo->fields.userSvtGrandHash, 0) )
  {
    this = (SupportSelectRootComponent_o *)v8->fields.supportSelectMenu;
    if ( !this )
      goto LABEL_60;
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
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Int; // w20
  BalanceConfig_c *v11; // x8
  int v12; // w8
  UserGameEntity_o *SelfUserGame; // x21
  struct System_Int32_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  __int64 i; // x29
  struct BalanceConfig_StaticFields *oldEquipIdList; // x9
  unsigned __int64 v24; // x8
  struct System_Int32_array *fixMainSupportDeckIds; // x9
  unsigned __int64 max_length_low; // x10
  struct System_Int32_array *tempFixMainQuestSupportDeckIds; // x10
  struct System_Int32_array *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x2
  __int64 j; // x28
  unsigned __int64 v37; // x8
  struct System_Int32_array *fixEventSupportDeckIds; // x9
  unsigned __int64 v39; // x10
  struct System_Int32_array *tempFixEventQuestSupportDeckIds; // x10
  SupportSelectRootComponent_o *v41; // x0
  const MethodInfo *v42; // x4
  SupportServantData_array **p_tmpSupportServantData; // x28
  SupportSelectRootComponent_o *v44; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct SupportServantData_array *supportServantData; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v57; // x22
  struct EventUpValSetupInfo_o *eventSetupInfo; // x1
  SupportSelectMenu_o *v59; // x21
  SupportServantData_array *v60; // x22
  SupportSelectMenu_CallbackFunc_o *v61; // x23
  const MethodInfo *v62; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v63; // x24
  const MethodInfo *v64; // x3
  struct SupportSelectMenu_o *v65; // x8
  struct SupportSelectListViewIndicator_o *indicator; // x20
  System_Action_o *v67; // x21
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct SupportServantData_array *v82; // x20
  il2cpp_array_size_t v83; // x8
  unsigned __int64 v84; // x21
  struct EventUpValSetupInfo_o *v85; // x1
  SupportSelectMenu_o *v86; // x20
  SupportServantData_array *v87; // x21
  int32_t v88; // w22
  SupportSelectMenu_CallbackFunc_o *v89; // x23
  const MethodInfo *v90; // x3
  SupportSelectMenu_DragSwapCallbackFunc_o *v91; // x24
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x2
  SupportServantData_array *v94; // x8
  bool v95; // w1
  System_Action_o *v96; // x20
  __int64 v97; // x1
  __int64 v98; // x2
  int32_t deckIndex; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596CCB3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SupportSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_EndLoadCommonBg__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportSelectMenu__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportServantDragSwap__);
    sub_2213A60(&Method_SupportSelectRootComponent_modifyCenterItemCallBack__);
    sub_2213A60(&StringLiteral_13097/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/);
    byte_596CCB3 = 1;
  }
  deckIndex = 0;
  SupportSelectRootComponent__InitSupportServantData(this, method);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__SetGrandListInfoButton((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  supportInfoJump = this->fields.supportInfoJump;
  deckIndex = 0;
  if ( !supportInfoJump )
  {
    EventTutorialMaster__CheckTutorial(-1, 48, 0, 0, 0, 0, 0, 0);
    Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_13097/*"SUPPORT_SETTING_SCENE_INITIAL_PAGE_INDEX"*/, 0, 0);
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = v11->static_fields->SupportDeckMax - 1;
    if ( Int >= v12 )
      Int = v12;
    deckIndex = Int;
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    v14 = (struct System_Int32_array *)sub_2213B20(
                                         int___TypeInfo,
                                         (unsigned int)BalanceConfig_TypeInfo->static_fields->FixMainSupportDeckNum);
    this->fields.tempFixMainQuestSupportDeckIds = v14;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tempFixMainQuestSupportDeckIds,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( i = 8; ; ++i )
    {
      if ( !HIDWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu, v3, v21);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      oldEquipIdList = (struct BalanceConfig_StaticFields *)supportSelectMenu[1].fields.oldEquipIdList;
      v24 = i - 8;
      if ( i - 8 >= oldEquipIdList->FixMainSupportDeckNum )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixMainSupportDeckIds = SelfUserGame->fields.fixMainSupportDeckIds;
      if ( !fixMainSupportDeckIds )
        goto LABEL_75;
      max_length_low = LODWORD(fixMainSupportDeckIds->max_length);
      if ( (__int64)v24 < (int)max_length_low )
      {
        if ( v24 >= max_length_low )
          goto LABEL_76;
        tempFixMainQuestSupportDeckIds = this->fields.tempFixMainQuestSupportDeckIds;
        if ( !tempFixMainQuestSupportDeckIds )
          goto LABEL_75;
        if ( v24 >= LODWORD(tempFixMainQuestSupportDeckIds->max_length) )
          goto LABEL_76;
        *((_DWORD *)&tempFixMainQuestSupportDeckIds->obj.klass + i) = *((_DWORD *)&fixMainSupportDeckIds->obj.klass + i);
      }
    }
    if ( !HIDWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
    {
      j_il2cpp_runtime_class_init_0(supportSelectMenu, v3, v21);
      oldEquipIdList = BalanceConfig_TypeInfo->static_fields;
    }
    v28 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)oldEquipIdList->FixEventSupportDeckNum);
    this->fields.tempFixEventQuestSupportDeckIds = v28;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tempFixEventQuestSupportDeckIds,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
    for ( j = 8; ; ++j )
    {
      if ( !HIDWORD(supportSelectMenu[1].fields.eventSetupInfo2) )
      {
        j_il2cpp_runtime_class_init_0(supportSelectMenu, v3, v35);
        supportSelectMenu = (SupportServantData_o *)BalanceConfig_TypeInfo;
      }
      v37 = j - 8;
      if ( j - 8 >= SLODWORD(supportSelectMenu[1].fields.oldEquipIdList->m_Items[21]) )
        break;
      if ( !SelfUserGame )
        goto LABEL_75;
      fixEventSupportDeckIds = SelfUserGame->fields.fixEventSupportDeckIds;
      if ( !fixEventSupportDeckIds )
        goto LABEL_75;
      v39 = LODWORD(fixEventSupportDeckIds->max_length);
      if ( (__int64)v37 < (int)v39 )
      {
        if ( v37 >= v39 )
          goto LABEL_76;
        tempFixEventQuestSupportDeckIds = this->fields.tempFixEventQuestSupportDeckIds;
        if ( !tempFixEventQuestSupportDeckIds )
          goto LABEL_75;
        if ( v37 >= LODWORD(tempFixEventQuestSupportDeckIds->max_length) )
          goto LABEL_76;
        *((_DWORD *)&tempFixEventQuestSupportDeckIds->obj.klass + j) = *((_DWORD *)&fixEventSupportDeckIds->obj.klass + j);
      }
    }
    SupportSelectRootComponent__initSupportServantDatas(this, v3);
    SupportSelectRootComponent__CopySupportData(
      v41,
      this->fields.supportServantData,
      this->fields.orgSupportServantData,
      1,
      v42);
    p_tmpSupportServantData = &this->fields.tmpSupportServantData;
    SupportSelectRootComponent__CopySupportData(
      v44,
      this->fields.supportServantData,
      this->fields.tmpSupportServantData,
      1,
      v45);
    supportSelectMenu = (SupportServantData_o *)this->fields.followerQuestInfomationDraw;
    if ( supportSelectMenu )
    {
      FollowerQuestInfomationDraw__SetInfomation((FollowerQuestInfomationDraw_o *)supportSelectMenu, 0, 0, 0, 0);
      supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
      if ( supportSelectMenu )
      {
        SupportSelectMenu__buttonDispSetting((SupportSelectMenu_o *)supportSelectMenu, 1, 0);
        SupportSelectRootComponent__setEditUI(this, this->fields.isEdit, v46);
        SupportSelectRootComponent__setInfoUIDisp(this, 1, v47);
        supportSelectMenu = (SupportServantData_o *)this->fields.titleInfo;
        if ( supportSelectMenu )
        {
          TitleInfoControl__setTitleInfo_46862424(
            (TitleInfoControl_o *)supportSelectMenu,
            this->fields.myFSM,
            2,
            84,
            1,
            0);
          this->fields.state = 1;
          SupportSelectRootComponent__SetActiveApplyIcon(this, v48);
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
                  v57 = 0;
                  while ( v57 < (unsigned int)max_length )
                  {
                    supportSelectMenu = supportServantData->m_Items[v57];
                    if ( supportSelectMenu )
                    {
                      eventSetupInfo = this->fields.eventSetupInfo;
                      supportSelectMenu->fields.eventSetupInfo = eventSetupInfo;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&supportSelectMenu->fields.eventSetupInfo,
                        (int32_t)eventSetupInfo,
                        v49,
                        v50,
                        v51,
                        v52,
                        v53,
                        v54);
                    }
                    LODWORD(max_length) = supportServantData->max_length;
                    if ( (__int64)++v57 >= (int)max_length )
                      goto LABEL_49;
                  }
LABEL_76:
                  sub_2213CE4(supportSelectMenu);
                }
LABEL_49:
                v59 = this->fields.supportSelectMenu;
                v60 = this->fields.supportServantData;
                v61 = (SupportSelectMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectMenu_CallbackFunc_TypeInfo);
                SupportSelectMenu_CallbackFunc___ctor(
                  v61,
                  (Il2CppObject *)this,
                  (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
                  v62);
                v63 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_2213CCC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
                SupportSelectMenu_DragSwapCallbackFunc___ctor(
                  v63,
                  (Il2CppObject *)this,
                  Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
                  v64);
                if ( v59 )
                {
                  SupportSelectMenu__Open(v59, v60, Int, v61, v63, 0);
                  v65 = this->fields.supportSelectMenu;
                  if ( v65 )
                  {
                    indicator = v65->fields.indicator;
                    v67 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v67,
                      (Il2CppObject *)this,
                      Method_SupportSelectRootComponent_modifyCenterItemCallBack__,
                      0);
                    if ( indicator )
                    {
                      indicator->fields.modifyCenterItemCallBack = v67;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&indicator->fields.modifyCenterItemCallBack,
                        (int32_t)v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        v72,
                        v73);
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
    sub_2213CDC(supportSelectMenu, v3);
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
  TitleInfoControl__setTitleInfo_46862424((TitleInfoControl_o *)supportSelectMenu, this->fields.myFSM, 2, 85, 1, 0);
  this->fields.state = 4;
  SupportSelectRootComponent__SetActiveApplyIcon(this, v75);
  supportSelectMenu = (SupportServantData_o *)this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_75;
  SupportSelectMenu__SetActiveHeader((SupportSelectMenu_o *)supportSelectMenu, 0, 0);
  p_tmpSupportServantData = &this->fields.supportServantData;
  v82 = this->fields.supportServantData;
  if ( !v82 )
    goto LABEL_75;
  v83 = v82->max_length;
  if ( (int)v83 >= 1 )
  {
    v84 = 0;
    while ( v84 < (unsigned int)v83 )
    {
      supportSelectMenu = v82->m_Items[v84];
      if ( supportSelectMenu )
      {
        v85 = this->fields.eventSetupInfo;
        supportSelectMenu->fields.eventSetupInfo = v85;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&supportSelectMenu->fields.eventSetupInfo,
          (int32_t)v85,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81);
      }
      LODWORD(v83) = v82->max_length;
      if ( (__int64)++v84 >= (int)v83 )
        goto LABEL_64;
    }
    goto LABEL_76;
  }
LABEL_64:
  v86 = this->fields.supportSelectMenu;
  v87 = this->fields.supportServantData;
  v88 = deckIndex;
  v89 = (SupportSelectMenu_CallbackFunc_o *)sub_2213CCC(SupportSelectMenu_CallbackFunc_TypeInfo);
  SupportSelectMenu_CallbackFunc___ctor(
    v89,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectRootComponent_EndSupportSelectMenu__,
    v90);
  v91 = (SupportSelectMenu_DragSwapCallbackFunc_o *)sub_2213CCC(SupportSelectMenu_DragSwapCallbackFunc_TypeInfo);
  SupportSelectMenu_DragSwapCallbackFunc___ctor(
    v91,
    (Il2CppObject *)this,
    Method_SupportSelectRootComponent_EndSupportServantDragSwap__,
    v92);
  if ( !v86 )
    goto LABEL_75;
  SupportSelectMenu__Open(v86, v87, v88, v89, v91, 0);
  v94 = *p_tmpSupportServantData;
  if ( !*p_tmpSupportServantData )
    goto LABEL_75;
  v95 = SLODWORD(v94->max_length) >= 2 && v94->m_Items[1] != 0;
  SupportSelectRootComponent__setInfoUIDisp(this, v95, v93);
LABEL_70:
  SupportSelectRootComponent__AddEntryCountNarrowFigure(this, *p_tmpSupportServantData, v74);
  supportSelectMenu = (SupportServantData_o *)this->fields.backSkinSprite;
  if ( !supportSelectMenu )
    goto LABEL_75;
  supportSelectMenu = (SupportServantData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)supportSelectMenu,
                                                0);
  if ( !supportSelectMenu )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportSelectMenu, 0, 0);
  v96 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_SupportSelectRootComponent_EndLoadCommonBg__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v97, v98);
  AtlasManager__LoadUISkin(v96, 2, 1, 0);
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
  unsigned __int64 v10; // x23
  __int64 v11; // x22
  int32_t v12; // w24
  struct System_Int32_array *v13; // x8
  char *v14; // x8
  struct System_Int32_array *tempFixMainQuestSupportDeckIds; // x8
  unsigned __int64 v16; // x23
  int32_t v17; // w25
  struct System_Int32_array *v18; // x8
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  bool v21; // zf
  int32_t v22; // w9

  v8 = this;
  if ( (byte_596CCC5 & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCC5 = 1;
  }
  if ( isEvent )
  {
    tempFixEventQuestSupportDeckIds = v8->fields.tempFixEventQuestSupportDeckIds;
    if ( !tempFixEventQuestSupportDeckIds )
      goto LABEL_38;
    if ( LODWORD(tempFixEventQuestSupportDeckIds->max_length) <= idx )
      goto LABEL_39;
    v10 = 0;
    v11 = idx;
    v12 = tempFixEventQuestSupportDeckIds->m_Items[idx];
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !HIDWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&idx, *(_QWORD *)&deckId);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v10 >= SLODWORD(this->fields.applyIconObj[8].monitor) )
        break;
      if ( v12 != deckId && idx != v10 )
      {
        v13 = v8->fields.tempFixEventQuestSupportDeckIds;
        if ( !v13 )
          goto LABEL_38;
        if ( v10 >= LODWORD(v13->max_length) )
          goto LABEL_39;
        v14 = (char *)v13 + 4 * v10;
        if ( *((_DWORD *)v14 + 8) == deckId )
          *((_DWORD *)v14 + 8) = 0;
      }
      ++v10;
    }
    v20 = v8->fields.tempFixEventQuestSupportDeckIds;
    v21 = v12 == deckId;
  }
  else
  {
    tempFixMainQuestSupportDeckIds = v8->fields.tempFixMainQuestSupportDeckIds;
    if ( !tempFixMainQuestSupportDeckIds )
      goto LABEL_38;
    if ( LODWORD(tempFixMainQuestSupportDeckIds->max_length) <= idx )
      goto LABEL_39;
    v16 = 0;
    v11 = idx;
    v17 = tempFixMainQuestSupportDeckIds->m_Items[idx];
    this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( !HIDWORD(this->fields.supportServantData) )
      {
        j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&idx, *(_QWORD *)&deckId);
        this = (SupportSelectRootComponent_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v16 >= SHIDWORD(this->fields.applyIconObj[8].klass) )
        break;
      if ( v17 != deckId && idx != v16 )
      {
        v18 = v8->fields.tempFixMainQuestSupportDeckIds;
        if ( !v18 )
          goto LABEL_38;
        if ( v16 >= LODWORD(v18->max_length) )
          goto LABEL_39;
        v19 = (char *)v18 + 4 * v16;
        if ( *((_DWORD *)v19 + 8) == deckId )
          *((_DWORD *)v19 + 8) = 0;
      }
      ++v16;
    }
    v20 = v8->fields.tempFixMainQuestSupportDeckIds;
    v21 = v17 == deckId;
  }
  if ( v21 )
    v22 = 0;
  else
    v22 = deckId;
  if ( !v20 )
LABEL_38:
    sub_2213CDC(this, *(_QWORD *)&idx);
  if ( LODWORD(v20->max_length) <= idx )
LABEL_39:
    sub_2213CE4(this);
  v20->m_Items[v11] = v22;
}


void SupportSelectRootComponent___EndLoadCommonBg_b__51_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *titleInfo; // x0

  titleInfo = (UnityEngine_Component_o *)this->fields.titleInfo;
  if ( !titleInfo || (titleInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleInfo, 0)) == 0 )
    sub_2213CDC(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent___EndSupportSelectMenu_b__62_3(
        SupportSelectRootComponent_o *this,
        const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_2213CDC(0, method);
  SupportSelectMenu__Active(supportSelectMenu, 0);
}


void SupportSelectRootComponent___beginStartUp_b__50_0(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596CCE2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_StartUp__);
    byte_596CCE2 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void SupportSelectRootComponent__beginFinish(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  MissionNaviTransitionBoardItem_o *p_addEntryCountNarrowFigureAssetNameList; // x19
  System_String_array *v7; // x20
  struct System_String_array *addEntryCountNarrowFigureAssetNameList; // t1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596CCB7 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_596CCB7 = 1;
  }
  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  SupportSelectMenu__Init(supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportServantSelectMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  SupportServantSelectMenu__Init((SupportServantSelectMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.supportSelectConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  SupportSelectConfirmMenu__Init((SupportSelectConfirmMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.cancelConfirmMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  CancelConfirmMenu__Init((CancelConfirmMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.deckNameInputMenu;
  if ( !supportSelectMenu )
    goto LABEL_19;
  SupportDeckNameInputMenu__Init((SupportDeckNameInputMenu_o *)supportSelectMenu, 0);
  supportSelectMenu = (SupportSelectMenu_o *)this->fields.fixErrorDialog;
  if ( !supportSelectMenu )
    goto LABEL_19;
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
        (supportSelectMenu = (SupportSelectMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_19:
    sub_2213CDC(supportSelectMenu, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)supportSelectMenu, 2, 0, 0);
  addEntryCountNarrowFigureAssetNameList = this->fields.addEntryCountNarrowFigureAssetNameList;
  p_addEntryCountNarrowFigureAssetNameList = (MissionNaviTransitionBoardItem_o *)&this->fields.addEntryCountNarrowFigureAssetNameList;
  v7 = addEntryCountNarrowFigureAssetNameList;
  p_addEntryCountNarrowFigureAssetNameList[-1].fields._QuestId_k__BackingField = 0;
  if ( addEntryCountNarrowFigureAssetNameList )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
    AssetManager__releaseAssetStorage_47506132(v7, 0);
    p_addEntryCountNarrowFigureAssetNameList->klass = 0;
    sub_2213A04(p_addEntryCountNarrowFigureAssetNameList, 0, v9, v10, v11, v12, v13, v14);
  }
}


void SupportSelectRootComponent__beginInitialize(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  struct SupportServantData_array *supportServantData; // x8
  BalanceConfig_c *v6; // x0
  struct SupportServantData_array *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BalanceConfig_c *v14; // x0
  struct SupportServantData_array *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BalanceConfig_c *v22; // x0
  struct SupportServantData_array *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Instance; // x0
  __int64 v31; // x1

  if ( (byte_596CCAC & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&SupportServantData___TypeInfo);
    sub_2213A60(&StringLiteral_13747/*"SvtEqScrollBarValue"*/);
    byte_596CCAC = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  supportServantData = this->fields.supportServantData;
  this->fields.state = 0;
  if ( !supportServantData )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v4);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = (struct SupportServantData_array *)sub_2213B20(
                                              SupportServantData___TypeInfo,
                                              (unsigned int)v6->static_fields->SupportDeckMax);
    this->fields.supportServantData = v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.supportServantData,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !this->fields.orgSupportServantData )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v4);
      v14 = BalanceConfig_TypeInfo;
    }
    v15 = (struct SupportServantData_array *)sub_2213B20(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v14->static_fields->SupportDeckMax);
    this->fields.orgSupportServantData = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.orgSupportServantData,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !this->fields.tmpSupportServantData )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v4);
      v22 = BalanceConfig_TypeInfo;
    }
    v23 = (struct SupportServantData_array *)sub_2213B20(
                                               SupportServantData___TypeInfo,
                                               (unsigned int)v22->static_fields->SupportDeckMax);
    this->fields.tmpSupportServantData = v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tmpSupportServantData,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  SupportSelectRootComponent__RefreshSupportServantData(this, v3);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13747/*"SvtEqScrollBarValue"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v31);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void SupportSelectRootComponent__beginStartUp(
        SupportSelectRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v12; // x10
  struct SupportInfoJump_o **p_supportInfoJump; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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
  __int64 v30; // x1
  __int64 v31; // x2
  struct SupportInfoJump_o *v32; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_IEnumerable_TSource__o *OngoingQuestTargetEventIds; // x0
  System_Int32_array *v35; // x20
  EventUpValSetupInfo_o *v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Action_o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v47; // x20
  EventUpValSetupInfo_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Action_o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2

  if ( (byte_596CCB4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SupportInfoJump_TypeInfo);
    sub_2213A60(&Method_SupportSelectRootComponent_StartUp__);
    sub_2213A60(&Method_SupportSelectRootComponent__beginStartUp_b__50_0__);
    byte_596CCB4 = 1;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.supportInfoJump,
      v22,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.supportInfoJump,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v20 = 0;
    p_sceneJumpInfo = &this->fields.sceneJumpInfo;
    this->fields.sceneJumpInfo = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_sceneJumpInfo, v20, v14, v15, v16, v17, v18, v19);
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
  v32 = *p_supportInfoJump;
  if ( *p_supportInfoJump && v32->fields.otherUserGameEntity && v32->fields.questRestrictionInfo )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30, v31);
    bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
          v35 = System_Linq_Enumerable__ToArray_int_(
                  OngoingQuestTargetEventIds,
                  (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
          v36 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
          EventUpValSetupInfo___ctor_48741124(v36, v35, 0, 0, 0, 0);
          this->fields.eventSetupInfo = v36;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
            (int32_t)v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          v43 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v43, (Il2CppObject *)this, Method_SupportSelectRootComponent__beginStartUp_b__50_0__, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v44, v45);
          AtlasManager__LoadOutGameAtlas(v43, 0);
          return;
        }
      }
    }
LABEL_43:
    sub_2213CDC(bgTxtSprite, v27);
  }
  bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !bgTxtSprite )
    goto LABEL_43;
  bgTxtSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)bgTxtSprite,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !bgTxtSprite )
    goto LABEL_43;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)bgTxtSprite, 0, 0, 0);
  v47 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v48 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v48, v47, 0, 0, 0, 0);
  this->fields.eventSetupInfo = v48;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSetupInfo,
    (int32_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_SupportSelectRootComponent_StartUp__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v56, v57);
  AtlasManager__LoadPartyOrganizationAtlas(v55, 1, 0);
}


int32_t SupportSelectRootComponent__getCenterNum(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  SupportSelectMenu_o *supportSelectMenu; // x0
  SupportSelectListViewItem_o *CenterItem; // x0

  supportSelectMenu = this->fields.supportSelectMenu;
  if ( !supportSelectMenu )
    sub_2213CDC(0, method);
  CenterItem = SupportSelectMenu__GetCenterItem(supportSelectMenu, 0);
  if ( CenterItem )
    LODWORD(CenterItem) = CenterItem->fields.index;
  return (int)CenterItem;
}


void SupportSelectRootComponent__initSupportServantDatas(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SupportSelectRootComponent_o *v3; // x19
  struct SupportServantData_array *supportServantData; // x23
  unsigned int v5; // w20
  unsigned int max_length; // w8
  Il2CppClass **v7; // x26
  SupportServantData_o **v8; // x26
  Il2CppClass *v9; // t1
  SupportServantData_o *v10; // x21
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x0

  v3 = this;
  if ( (byte_596CCDC & 1) == 0 )
  {
    this = (SupportSelectRootComponent_o *)sub_2213A60(&SupportServantData_TypeInfo);
    byte_596CCDC = 1;
  }
  supportServantData = v3->fields.supportServantData;
  if ( !supportServantData )
LABEL_15:
    sub_2213CDC(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length = supportServantData->max_length;
    if ( (int)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
      goto LABEL_17;
    v7 = &supportServantData->obj.klass + (int)v5;
    v9 = v7[4];
    v8 = (SupportServantData_o **)(v7 + 4);
    if ( !v9 )
    {
      v10 = (SupportServantData_o *)sub_2213CCC(SupportServantData_TypeInfo);
      SupportServantData___ctor(v10, v11);
      if ( v10 )
      {
        this = (SupportSelectRootComponent_o *)sub_2213BB4(v10, supportServantData->obj.klass->_1.element_class);
        if ( !this )
        {
          v19 = sub_2213D00(0, v18);
          sub_2213BA0(v19, 0);
        }
      }
      if ( v5 >= LODWORD(supportServantData->max_length) )
LABEL_17:
        sub_2213CE4(this);
      *v8 = v10;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&supportServantData->m_Items[v5],
        (int32_t)v10,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      supportServantData = v3->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_15;
    }
    if ( v5 >= LODWORD(supportServantData->max_length) )
      goto LABEL_17;
    this = (SupportSelectRootComponent_o *)supportServantData->m_Items[v5];
    if ( this )
    {
      SupportServantData__Init((SupportServantData_o *)this, ++v5, v3->fields.eventSetupInfo, v2);
      supportServantData = v3->fields.supportServantData;
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 CenterNum; // x24
  int32_t i; // w22
  SupportServantData_o *OldServant; // x0
  int32_t v12; // w26
  struct SupportServantData_array *supportServantData; // x8
  const MethodInfo *v14; // x2
  struct SupportServantData_array *v15; // x8
  SupportServantData_o *v16; // x23
  struct SupportServantData_array *v17; // x8
  const MethodInfo *v18; // x2
  struct SupportServantData_array *v19; // x8
  SupportServantData_o *v20; // x23
  struct SupportServantData_array *v21; // x8
  SupportServantData_o *v22; // x8

  if ( (byte_596CCDB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CCDB = 1;
  }
  CenterNum = SupportSelectRootComponent__getCenterNum(this, (const MethodInfo *)servant);
  for ( i = 0; ; ++i )
  {
    OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v8);
      OldServant = (SupportServantData_o *)BalanceConfig_TypeInfo;
    }
    v12 = HIDWORD(OldServant[1].fields.oldEquipIdList->m_Items[18]);
    if ( i >= v12 )
      break;
    if ( servant )
    {
      supportServantData = this->fields.supportServantData;
      if ( !supportServantData )
        goto LABEL_28;
      if ( (unsigned int)CenterNum >= LODWORD(supportServantData->max_length) )
        goto LABEL_29;
      OldServant = supportServantData->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_28;
      OldServant = (SupportServantData_o *)SupportServantData__getServant(OldServant, i, v8);
      v15 = this->fields.supportServantData;
      if ( !v15 )
        goto LABEL_28;
      if ( (unsigned int)CenterNum >= LODWORD(v15->max_length) )
        goto LABEL_29;
      v16 = OldServant;
      OldServant = v15->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_28;
      OldServant = (SupportServantData_o *)SupportServantData__getOldServant(OldServant, i, v14);
      if ( v16 != OldServant )
        break;
    }
    if ( equip )
    {
      v17 = this->fields.supportServantData;
      if ( !v17 )
        goto LABEL_28;
      if ( (unsigned int)CenterNum >= LODWORD(v17->max_length) )
        goto LABEL_29;
      OldServant = v17->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_28;
      OldServant = (SupportServantData_o *)SupportServantData__getEquip(OldServant, i, v8);
      v19 = this->fields.supportServantData;
      if ( !v19 )
        goto LABEL_28;
      if ( (unsigned int)CenterNum >= LODWORD(v19->max_length) )
        goto LABEL_29;
      v20 = OldServant;
      OldServant = v19->m_Items[CenterNum];
      if ( !OldServant )
        goto LABEL_28;
      OldServant = (SupportServantData_o *)SupportServantData__getOldEquip(OldServant, i, v18);
      if ( v20 != OldServant )
        break;
    }
  }
  v21 = this->fields.supportServantData;
  if ( !v21 )
    goto LABEL_28;
  if ( (unsigned int)CenterNum >= LODWORD(v21->max_length) )
LABEL_29:
    sub_2213CE4(OldServant);
  v22 = v21->m_Items[CenterNum];
  if ( !v22 )
LABEL_28:
    sub_2213CDC(OldServant, v7);
  return (i < v12)
       | System_String__op_Inequality(
           v22->fields._oldDeckName_k__BackingField,
           v22->fields._deckName_k__BackingField,
           0);
}


void SupportSelectRootComponent__modifyCenterItemCallBack(SupportSelectRootComponent_o *this, const MethodInfo *method)
{
  int32_t CenterNum; // w20
  const MethodInfo *v4; // x1
  void *eventSupportDeckIds; // x0
  __int64 v6; // x1
  struct SupportInfoJump_o *supportInfoJump; // x8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x23
  bool v9; // w8
  int32_t v10; // w3
  int32_t v11; // w4
  char v12; // w1
  char v13; // w2
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

  if ( (byte_596CCB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_596CCB6 = 1;
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
              (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      v10 = 0;
      v11 = v17 + 1;
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
              (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      v11 = 0;
      v10 = v23 + 1;
    }
    eventSupportDeckIds = this->fields.supportSelectMenu;
    if ( !eventSupportDeckIds )
      goto LABEL_39;
    v13 = ReturnTypeByQuestId != 0;
    v12 = ReturnTypeByQuestId == 0;
    goto LABEL_34;
  }
  v9 = System_Linq_Enumerable__SequenceEqual_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.mainSupportDeckIds,
         (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
         (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  eventSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
  if ( !v9 )
  {
    v18 = System_Linq_Enumerable__Concat_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)eventSupportDeckIds,
            (System_Collections_Generic_IEnumerable_TSource__o *)otherUserGameEntity->fields.eventSupportDeckIds,
            (const MethodInfo_3875F9C *)Method_System_Linq_Enumerable_Concat_int___);
    eventSupportDeckIds = System_Linq_Enumerable__ToArray_int_(
                            v18,
                            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                      (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
      v22 = (_DWORD)eventSupportDeckIds + 1;
    }
    if ( CenterNum < max_length )
    {
      v11 = 0;
      goto LABEL_27;
    }
    if ( !v21 )
      goto LABEL_39;
    if ( (unsigned int)CenterNum < v21[6] )
    {
      v11 = System_Array__IndexOf_int_(
              otherUserGameEntity->fields.eventSupportDeckIds,
              v21[CenterNum + 8],
              (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
          + 1;
LABEL_27:
      eventSupportDeckIds = this->fields.supportSelectMenu;
      if ( !eventSupportDeckIds )
        goto LABEL_39;
      v10 = v22;
      v13 = CenterNum >= max_length;
      v12 = CenterNum < max_length;
      goto LABEL_34;
    }
LABEL_40:
    sub_2213CE4(eventSupportDeckIds);
  }
  if ( !eventSupportDeckIds )
    goto LABEL_39;
  if ( (unsigned int)CenterNum >= *((_DWORD *)eventSupportDeckIds + 6) )
    goto LABEL_40;
  eventSupportDeckIds = (void *)System_Array__IndexOf_int_(
                                  (System_Int32_array *)eventSupportDeckIds,
                                  *((_DWORD *)eventSupportDeckIds + CenterNum + 8),
                                  (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  if ( !this->fields.supportSelectMenu )
    goto LABEL_39;
  v10 = (_DWORD)eventSupportDeckIds + 1;
  v11 = (_DWORD)eventSupportDeckIds + 1;
  eventSupportDeckIds = this->fields.supportSelectMenu;
  v12 = 1;
  v13 = 1;
LABEL_34:
  SupportSelectMenu__SetActiveCurrentSupportSprite((SupportSelectMenu_o *)eventSupportDeckIds, v12, v13, v10, v11, 0);
LABEL_35:
  if ( this->fields.supportInfoJump )
    return;
LABEL_36:
  eventSupportDeckIds = this->fields.supportSelectMenu;
  if ( !eventSupportDeckIds
    || (SupportSelectMenu__SetFixDeckButton(
          (SupportSelectMenu_o *)eventSupportDeckIds,
          CenterNum + 1,
          0,
          this->fields.tempFixMainQuestSupportDeckIds,
          0),
        (eventSupportDeckIds = this->fields.supportSelectMenu) == 0) )
  {
LABEL_39:
    sub_2213CDC(eventSupportDeckIds, v6);
  }
  SupportSelectMenu__SetFixDeckButton(
    (SupportSelectMenu_o *)eventSupportDeckIds,
    CenterNum + 1,
    1,
    this->fields.tempFixEventQuestSupportDeckIds,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent__setEditUI(SupportSelectRootComponent_o *this, bool editOn, const MethodInfo *method)
{
  UnityEngine_Component_o *blackMask; // x0
  bool v6; // w21
  struct SupportSelectMenu_o *supportSelectMenu; // x8
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

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
  if ( !blackMask
    || (SupportSelectMenu__setActiveDeckNameChangeButton((SupportSelectMenu_o *)blackMask, v6, 0),
        SupportSelectRootComponent__SetActiveApplyIcon(this, v8),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0)
    || (SupportSelectMenu__SetActiveFixDeckButton((SupportSelectMenu_o *)blackMask, v6, 0),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0)
    || (SupportSelectMenu__SetAbleToSwapDrag((SupportSelectMenu_o *)blackMask, editOn, 0),
        (blackMask = (UnityEngine_Component_o *)this->fields.supportSelectMenu) == 0) )
  {
LABEL_11:
    sub_2213CDC(blackMask, editOn);
  }
  SupportSelectMenu__SetupFooterButtons((SupportSelectMenu_o *)blackMask, editOn, 0);
  SupportSelectRootComponent__ChangeTitle(this, v9);
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
    sub_2213CDC(scrollView, disp);
  }
  SupportSelectListViewIndicator__SetActive((SupportSelectListViewIndicator_o *)scrollView, disp, 0);
}


void SupportSelectRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CCE3 & 1) == 0 )
  {
    sub_2213A60(&SupportSelectRootComponent___c_TypeInfo);
    byte_596CCE3 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SupportSelectRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SupportSelectRootComponent___c_TypeInfo->static_fields->__9 = (struct SupportSelectRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SupportSelectRootComponent___c_TypeInfo->static_fields,
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


System_String_array *SupportSelectRootComponent___c___AddEntryCountNarrowFigure_b__55_0(
        SupportSelectRootComponent___c_o *this,
        SupportServantData_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return SupportServantData__GetNarrowFigureAssetNameList(e, (const MethodInfo *)e);
}


System_Collections_Generic_IEnumerable_string__o *SupportSelectRootComponent___c___AddEntryCountNarrowFigure_b__55_1(
        SupportSelectRootComponent___c_o *this,
        System_String_array *l,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_string__o *)l;
}


bool SupportSelectRootComponent___c___EndSupportSelectMenu_b__62_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___EndSupportSelectMenu_b__62_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___IsUpdateDeckId_b__63_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___IsUpdateDeckId_b__63_1(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


bool SupportSelectRootComponent___c___SetFriendInfoPrepareBattle_b__48_0(
        SupportSelectRootComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}


void SupportSelectRootComponent___c__DisplayClass62_0___ctor(
        SupportSelectRootComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass62_0___EndSupportSelectMenu_b__2(
        SupportSelectRootComponent___c__DisplayClass62_0_o *this,
        ServantLeaderInfo_o *x,
        const MethodInfo *method)
{
  struct ServantLeaderInfo_o *info; // x8

  if ( !x || (info = this->fields.info) == 0 )
    sub_2213CDC(this, x);
  return x->fields.userSvtId == info->fields.userSvtId;
}


void SupportSelectRootComponent___c__DisplayClass65_0___ctor(
        SupportSelectRootComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent___c__DisplayClass65_0___OnBackSelect_b__0(
        SupportSelectRootComponent___c__DisplayClass65_0_o *this,
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
  int v14; // w21
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  SupportServantSelectMenu_CallbackFunc_o *callback; // x27

  if ( (byte_596CCE4 & 1) == 0 )
  {
    sub_2213A60(&SupportServantSelectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_OnBackSelect__);
    byte_596CCE4 = 1;
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
      sub_2213CE4(_4__this);
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
      || (v14 = (int)_4__this,
          monitor = (System_Int32_array *)v13[18].monitor,
          klass = (System_Int32_array *)v13[19].klass,
          callback = (SupportServantSelectMenu_CallbackFunc_o *)sub_2213CCC(SupportServantSelectMenu_CallbackFunc_TypeInfo),
          SupportServantSelectMenu_CallbackFunc___ctor(
            callback,
            v13,
            Method_SupportSelectRootComponent_OnBackSelect__,
            0),
          !supportServantSelectMenu) )
    {
LABEL_15:
      sub_2213CDC(_4__this, isDecide);
    }
    SupportServantSelectMenu__Open(
      supportServantSelectMenu,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v14 + 1,
      monitor,
      klass,
      callback,
      0);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void SupportSelectRootComponent___c__DisplayClass67_0___ctor(
        SupportSelectRootComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectRootComponent___c__DisplayClass67_0___EndSupportServantEquipListMenu_b__0(
        SupportSelectRootComponent___c__DisplayClass67_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SupportSelectRootComponent_o *_4__this; // x0
  struct SupportSelectRootComponent_o *v7; // x8
  struct SupportServantData_array *supportServantData; // x20
  __int64 selectNum; // x22
  SupportServantData_o *v10; // x9
  CommonUI_o *v11; // x19
  int32_t classPos; // w23
  EventUpValSetupInfo_o *eventSetupInfo2; // x24
  Il2CppObject *v14; // x28
  int v15; // w21
  System_Int32_array *monitor; // x25
  System_Int32_array *klass; // x26
  SupportServantEquipListMenu_CallbackFunc_o *callback; // x27
  const MethodInfo *v19; // x3

  if ( (byte_596CCE5 & 1) == 0 )
  {
    sub_2213A60(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__);
    byte_596CCE5 = 1;
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
    _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_15;
    supportServantData = v7->fields.supportServantData;
    if ( !supportServantData )
      goto LABEL_15;
    selectNum = v7->fields.selectNum;
    if ( (unsigned int)selectNum >= LODWORD(supportServantData->max_length) )
      sub_2213CE4(_4__this);
    v10 = supportServantData->m_Items[selectNum];
    if ( !v10 )
      goto LABEL_15;
    v11 = (CommonUI_o *)_4__this;
    classPos = this->fields.classPos;
    eventSetupInfo2 = v10->fields.eventSetupInfo2;
    _4__this = (SupportSelectRootComponent_o *)SupportSelectRootComponent__getCenterNum(
                                                 this->fields.__4__this,
                                                 (const MethodInfo *)isDecide);
    v14 = (Il2CppObject *)this->fields.__4__this;
    if ( !v14
      || (v15 = (int)_4__this,
          monitor = (System_Int32_array *)v14[18].monitor,
          klass = (System_Int32_array *)v14[19].klass,
          callback = (SupportServantEquipListMenu_CallbackFunc_o *)sub_2213CCC(SupportServantEquipListMenu_CallbackFunc_TypeInfo),
          SupportServantEquipListMenu_CallbackFunc___ctor(
            callback,
            v14,
            Method_SupportSelectRootComponent_EndSupportServantEquipListMenu__,
            v19),
          !v11) )
    {
LABEL_15:
      sub_2213CDC(_4__this, isDecide);
    }
    CommonUI__OpenSupportServantEquipListMenu(
      v11,
      supportServantData,
      selectNum,
      classPos,
      eventSetupInfo2,
      v15 + 1,
      monitor,
      klass,
      callback,
      0);
  }
  _4__this = (SupportSelectRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void SupportSelectRootComponent___c__DisplayClass77_0___ctor(
        SupportSelectRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass77_0___GetFixedErrorList_b__0(
        SupportSelectRootComponent___c__DisplayClass77_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0 )
    sub_2213CDC(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}


void SupportSelectRootComponent___c__DisplayClass94_0___ctor(
        SupportSelectRootComponent___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectRootComponent___c__DisplayClass94_0___IsPossibleCopy_b__0(
        SupportSelectRootComponent___c__DisplayClass94_0_o *this,
        UserServantLeaderEntity_o *x,
        const MethodInfo *method)
{
  struct UserServantLeaderEntity_o *svtInfo; // x8

  if ( !x || (svtInfo = this->fields.svtInfo) == 0 )
    sub_2213CDC(this, x);
  return x->fields.svtId == svtInfo->fields.svtId;
}