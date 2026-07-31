void QuestBoardEffectController___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct QuestBoardEffectController_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59350C4 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController_TypeInfo);
    sub_21FFC50(&StringLiteral_3035/*"BGM_MAP_22"*/);
    sub_21FFC50(&StringLiteral_18028/*"board_message_{0}"*/);
    byte_59350C4 = 1;
  }
  v7 = StringLiteral_3035/*"BGM_MAP_22"*/;
  QuestBoardEffectController_TypeInfo->static_fields->NoVolumeBgm = (struct System_String_o *)StringLiteral_3035/*"BGM_MAP_22"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestBoardEffectController_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18028/*"board_message_{0}"*/;
  static_fields = QuestBoardEffectController_TypeInfo->static_fields;
  static_fields->BoardEffectMessage = (struct System_String_o *)StringLiteral_18028/*"board_message_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->BoardEffectMessage, v8, v10, v11, v12, v13, v14, v15);
}


void QuestBoardEffectController___ctor(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *QuestBoardEffectController__CoOnEffectFinishAction(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59350BA & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController__CoOnEffectFinishAction_d__29_TypeInfo);
    byte_59350BA = 1;
  }
  v3 = sub_21FFEBC(QuestBoardEffectController__CoOnEffectFinishAction_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *QuestBoardEffectController__DestroyObject(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59350C3 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController__DestroyObject_d__38_TypeInfo);
    byte_59350C3 = 1;
  }
  v3 = sub_21FFEBC(QuestBoardEffectController__DestroyObject_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void QuestBoardEffectController__DispDialogMessage(
        QuestBoardEffectController_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  __int64 v21; // x2
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v23; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v25; // x8

  if ( (byte_59350C0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass35_0__DispDialogMessage_b__0__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass35_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59350C0 = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callBack, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_QuestBoardEffectController___c__DisplayClass35_0__DispDialogMessage_b__0__,
    0);
  if ( this->fields.isDisplayDialogAfterEffectFinish )
  {
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    dialogParameterAfterEffectFinish = this->fields.dialogParameterAfterEffectFinish;
    if ( dialogParameterAfterEffectFinish )
    {
      v23 = (CommonUI_o *)Instance;
      messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v21);
      Instance = LocalizationManager__Get(messageLocalizationKey, 0);
      v25 = this->fields.dialogParameterAfterEffectFinish;
      if ( v25 )
      {
        if ( v23 )
        {
          CommonUI__OpenNotificationDialog_37293356(
            v23,
            (System_String_o *)StringLiteral_1/*""*/,
            Instance,
            v20,
            v25->fields.messagePosY,
            v25->fields.buttonPosY,
            -1,
            0,
            0,
            0,
            v25->fields.canMaskTouchClose,
            v25->fields.messageFontSize,
            v25->fields.onClickOkSeKind,
            0,
            0,
            0,
            0);
          return;
        }
      }
    }
LABEL_12:
    sub_21FFECC(Instance, v7);
  }
  ActionExtensions__Call(v20, 0);
}


void QuestBoardEffectController__HandleAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  int32_t appearBoardType; // w8

  appearBoardType = this->fields.appearBoardType;
  if ( appearBoardType == 1 )
  {
    QuestBoardEffectController__StartChangeBoardAppearEffect(this, effectInfo, method);
  }
  else if ( !appearBoardType )
  {
    QuestBoardEffectController__StartAddBoardAppearEffect(this, effectInfo, method);
  }
}


bool QuestBoardEffectController__InitBoardEffect(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v11; // x1
  System_Collections_Generic_List_object__o *effectInfoList; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  QuestBoardListViewManager_o **p_questBoardListViewManager; // x20
  char v31; // w28
  char v32; // w23
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x28
  int32_t appearBoardType; // w8
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  void *monitor; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x21
  __int64 v48; // x1
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  QuestBoardListViewManager_o *v52; // x0
  int32_t klass; // w1
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v54; // x21
  __int64 v55; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_59350B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_21FFC50(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_59350B8 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v9->static_fields->mInstance;
  v11 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.terminalSceneComponent,
    (int32_t)v11,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_48;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.scrTerminalListTop,
    (int32_t)mTerminalList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop
    || (mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager,
        this->fields.questBoardListViewManager = mQuestBoardListViewManager,
        p_questBoardListViewManager = &this->fields.questBoardListViewManager,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardListViewManager,
          (int32_t)mQuestBoardListViewManager,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (effectInfoList = (System_Collections_Generic_List_object__o *)this->fields.effectInfoList) == 0) )
  {
LABEL_48:
    sub_21FFECC(effectInfoList, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    effectInfoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  v31 = 0;
  v58 = v57;
  v57.fields._list = 0;
  *(_QWORD *)&v57.fields._index = &v58;
LABEL_13:
  v32 = v31;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v33 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_21FFECC(v33, v34);
    if ( !LODWORD(v58.fields._current[2].klass) )
    {
      appearBoardType = this->fields.appearBoardType;
      if ( appearBoardType == 1 )
      {
        if ( !*p_questBoardListViewManager )
          sub_21FFECC(0, v34);
        QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                          *p_questBoardListViewManager,
                                                          (int32_t)v58.fields._current[1].klass,
                                                          0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
        if ( !UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0) )
        {
          v54 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_21FFEBC(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
          QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v54, 1, 0, 0, 0, 0, 1, 0, 0, 0);
          v52 = *p_questBoardListViewManager;
          if ( !*p_questBoardListViewManager )
            sub_21FFECC(0, v55);
          goto LABEL_41;
        }
      }
      else if ( !appearBoardType )
      {
        if ( !*p_questBoardListViewManager )
          sub_21FFECC(0, v34);
        v39 = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                        *p_questBoardListViewManager,
                                        (int32_t)v58.fields._current[1].klass,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
        if ( !UnityEngine_Object__op_Equality(v39, 0, 0) )
        {
          monitor = current[1].monitor;
          if ( monitor
            && (naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment,
                *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)naturalAligment) )
          {
            if ( *(QuestBoardListEffectAppearComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) == QuestBoardListEffectAppearComponent_TypeInfo )
              v44 = (UnityEngine_Object_o *)current[1].monitor;
            else
              v44 = 0;
          }
          else
          {
            v44 = 0;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
          if ( !UnityEngine_Object__op_Equality(v44, 0, 0) )
          {
            if ( !*p_questBoardListViewManager )
              sub_21FFECC(0, v48);
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              *p_questBoardListViewManager,
              (int32_t)current[1].klass,
              0,
              0);
            if ( !v44 )
              sub_21FFECC(v49, v50);
            if ( !*p_questBoardListViewManager )
              sub_21FFECC(0, v50);
            QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
              *p_questBoardListViewManager,
              1,
              1,
              0.0,
              (int32_t)v44[5].monitor,
              0,
              0);
            v54 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_21FFEBC(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
            QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v54, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            v52 = *p_questBoardListViewManager;
            if ( !*p_questBoardListViewManager )
              sub_21FFECC(0, v51);
LABEL_41:
            klass = (int32_t)current[1].klass;
            v31 = 1;
            QuestBoardListViewManager__DispBoardForQuestBoardEffect(v52, klass, v54, 0);
            goto LABEL_13;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  return v32 & 1;
}


void QuestBoardEffectController__OnDestroy(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *questBoardListViewManager; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct QuestBoardListViewManager_o *v8; // x8
  struct UIScrollView_o *scrollView; // x20
  __int64 v10; // x2
  UnityEngine_Object_o *verticalScrollBar; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct QuestBoardListViewManager_o *v18; // x8
  struct UIScrollBar_o *scrollBar; // x1

  if ( (byte_59350B7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59350B7 = 1;
  }
  questBoardListViewManager = (UnityEngine_Object_o *)this->fields.questBoardListViewManager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(questBoardListViewManager, 0, 0);
  if ( v5 )
  {
    v8 = this->fields.questBoardListViewManager;
    if ( !v8 )
      goto LABEL_17;
    scrollView = v8->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scrollView, 0, 0);
    if ( v5 )
    {
      if ( !scrollView )
        goto LABEL_17;
      verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
      v5 = UnityEngine_Object__op_Equality(verticalScrollBar, 0, 0);
      if ( v5 )
      {
        v18 = this->fields.questBoardListViewManager;
        if ( v18 )
        {
          scrollBar = v18->fields.scrollBar;
          scrollView->fields.verticalScrollBar = (struct UIProgressBar_o *)scrollBar;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&scrollView->fields.verticalScrollBar,
            (int32_t)scrollBar,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          UIScrollView__UpdateScrollbars(scrollView, 0);
          return;
        }
LABEL_17:
        sub_21FFECC(v5, v6);
      }
    }
  }
}


void QuestBoardEffectController__PlayMessageEffect(
        QuestBoardEffectController_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  UnityEngine_Object_o *mActionPanel; // x20
  __int64 v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x21
  __int64 v32; // x2
  struct QuestBoardListViewManager_o *v33; // x8
  AssetData_o *effectAssetData; // x22
  QuestBoardEffectController_c *v35; // x0
  System_String_o *BoardEffectMessage; // x23
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  Il2CppObject *Object_object__58323140; // x22
  __int64 v41; // x2
  Il2CppObject *v42; // x0
  UnityEngine_GameObject_o **v43; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct ScrTerminalListTop_o *v50; // x8
  Il2CppObject *Component_object; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  Il2CppObject *v54; // x21
  System_Action_o *v55; // x22
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Action_o *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  UnityEngine_GameObject_o *v69; // x19
  int32_t messageEffectPrefabId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59350C1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RewardEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestBoardEffectController_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass36_0__PlayMessageEffect_b__0__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass36_0_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass36_1__PlayMessageEffect_b__1__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass36_1_TypeInfo);
    byte_59350C1 = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callBack, v14, v15, v16, v17, v18, v19);
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_32;
  if ( !questBoardListViewManager->fields.effectAssetData )
    goto LABEL_26;
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_32;
  mActionPanel = (UnityEngine_Object_o *)scrTerminalListTop->fields.mActionPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v20);
  if ( UnityEngine_Object__op_Inequality(mActionPanel, 0, 0) && this->fields.messageEffectPrefabId >= 1 )
  {
    v24 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    if ( !v24 )
      goto LABEL_32;
    *(_QWORD *)(v24 + 32) = v5;
    v31 = v24 + 32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 32), v5, v25, v26, v27, v28, v29, v30);
    v33 = this->fields.questBoardListViewManager;
    if ( !v33 )
      goto LABEL_32;
    effectAssetData = v33->fields.effectAssetData;
    v35 = QuestBoardEffectController_TypeInfo;
    if ( !*(&QuestBoardEffectController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardEffectController_TypeInfo, v7, v32);
      v35 = QuestBoardEffectController_TypeInfo;
    }
    BoardEffectMessage = v35->static_fields->BoardEffectMessage;
    messageEffectPrefabId = this->fields.messageEffectPrefabId;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &messageEffectPrefabId);
    v6 = System_String__Format(BoardEffectMessage, v37, 0);
    if ( !effectAssetData )
      goto LABEL_32;
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                effectAssetData,
                                v6,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
    v6 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v41);
      v42 = UnityEngine_Object__Instantiate_object_(
              Object_object__58323140,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v24 + 16) = v42;
      v43 = (UnityEngine_GameObject_o **)(v24 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 16), (int32_t)v42, v44, v45, v46, v47, v48, v49);
      v50 = this->fields.scrTerminalListTop;
      if ( !v50 )
        goto LABEL_32;
      GameObjectExtensions__SetParent_42881836(*v43, v50->fields.mActionPanel, 0);
      GameObjectExtensions__ResetTransform(*v43, 0);
      v6 = (System_String_o *)*v43;
      if ( !*v43 )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v6,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RewardEffectComponent___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v54 = *(Il2CppObject **)(v24 + 32);
        v55 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v55,
          v54,
          Method_QuestBoardEffectController___c__DisplayClass36_0__PlayMessageEffect_b__0__,
          0);
        *(_QWORD *)(v24 + 24) = v55;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 24), (int32_t)v55, v56, v57, v58, v59, v60, v61);
        v62 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v62,
          (Il2CppObject *)v24,
          Method_QuestBoardEffectController___c__DisplayClass36_1__PlayMessageEffect_b__1__,
          0);
        if ( Component_object )
        {
          Component_object[14].monitor = v62;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&Component_object[14].monitor,
            (int32_t)v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68);
          return;
        }
LABEL_32:
        sub_21FFECC(v6, v7);
      }
      v69 = *v43;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v69, 0);
    }
    if ( !*(_QWORD *)v31 )
      goto LABEL_32;
    ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v31 + 24LL), 0);
  }
  else
  {
LABEL_26:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
  }
}


System_Collections_IEnumerator_o *QuestBoardEffectController__ScrollBarDisabled(
        QuestBoardEffectController_o *this,
        QuestBoardListViewObject_o *obj,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_59350BE & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController__ScrollBarDisabled_d__33_TypeInfo);
    byte_59350BE = 1;
  }
  v7 = sub_21FFEBC(QuestBoardEffectController__ScrollBarDisabled_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = obj;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)obj, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = effectInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)effectInfo, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void QuestBoardEffectController__SetBgmParameter(
        QuestBoardEffectController_o *this,
        QuestBoardListEffectComponent_o *questBoardListEffectComponent,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ScrTerminalListTop_o *scrTerminalListTop; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  float *v21; // x8
  System_Collections_IEnumerator_o *v22; // x0
  __int64 v23; // x2
  float *v24; // x8
  float v25; // s8
  QuestBoardEffectController___c_c *v26; // x0
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__37_0; // x22
  Il2CppObject *v29; // x23
  struct QuestBoardEffectController___c_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_IEnumerator_o *v37; // x0
  float v38; // s8
  System_Action_o *v39; // x21
  System_Collections_IEnumerator_o *v40; // x0
  float v41; // s8
  ScrTerminalListTop_o *v42; // x21
  float v43; // s9
  BgmManager_c *v44; // x0
  float DEFAULT_VOLUME; // s10
  System_Action_o *v46; // x22

  if ( (byte_59350C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__SetBgmParameter_b__37_0__);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__1__);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__2__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass37_0_TypeInfo);
    sub_21FFC50(&QuestBoardEffectController___c_TypeInfo);
    byte_59350C2 = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = questBoardListEffectComponent;
  v14 = v5 + 24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 24),
    (int32_t)questBoardListEffectComponent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(float **)(v5 + 24);
  if ( !v21 )
    goto LABEL_27;
  scrTerminalListTop = this->fields.scrTerminalListTop;
  this->fields.bgmFadeInTime = v21[28];
  if ( !scrTerminalListTop )
    goto LABEL_27;
  v22 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(scrTerminalListTop, v21[25], v21[26], v21[29], 0, 0);
  scrTerminalListTop = (ScrTerminalListTop_o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                                                 (UnityEngine_MonoBehaviour_o *)this,
                                                 v22,
                                                 0);
  v24 = *(float **)v14;
  if ( !this->fields.isFadeInRestartBgm )
  {
    if ( v24 )
    {
      v41 = v24[27];
      if ( v41 <= 0.0 || this->fields.messageEffectAfterFadeInBgm )
        return;
      v42 = this->fields.scrTerminalListTop;
      v43 = v24[28];
      this->fields.isDelayBgmFadeIn = 1;
      v44 = BgmManager_TypeInfo;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v7, v23);
        v44 = BgmManager_TypeInfo;
      }
      DEFAULT_VOLUME = v44->static_fields->DEFAULT_VOLUME;
      v46 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v5,
        Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__2__,
        0);
      if ( v42 )
      {
        v40 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(v42, v41, v43, DEFAULT_VOLUME, v46, 0);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_21FFECC(scrTerminalListTop, v7);
  }
  if ( !v24 )
    goto LABEL_27;
  v25 = v24[26];
  v26 = QuestBoardEffectController___c_TypeInfo;
  if ( !*(&QuestBoardEffectController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo, v7, v23);
    v26 = QuestBoardEffectController___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v7, v23);
      static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__37_0, v29, Method_QuestBoardEffectController___c__SetBgmParameter_b__37_0__, 0);
    v30 = QuestBoardEffectController___c_TypeInfo->static_fields;
    v30->__9__37_0 = _9__37_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->__9__37_0, (int32_t)_9__37_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = BasicHelper__DelayCall(v25, _9__37_0, 1, 0);
  scrTerminalListTop = (ScrTerminalListTop_o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                                                 (UnityEngine_MonoBehaviour_o *)this,
                                                 v37,
                                                 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_27;
  v38 = *(float *)(*(_QWORD *)v14 + 108LL);
  if ( v38 > 0.0 && !this->fields.messageEffectAfterFadeInBgm )
  {
    this->fields.isDelayBgmFadeIn = 1;
    v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v5,
      Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__1__,
      0);
    v40 = BasicHelper__DelayCall(v38, v39, 1, 0);
LABEL_26:
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v40, 0);
  }
}


void QuestBoardEffectController__SetEffectEndSaveData(
        QuestBoardEffectController_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int v5; // w8
  System_String_o *PlayEffectName_k__BackingField; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  EventMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  EventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59350BF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350BF = 1;
  }
  v5 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
  PlayEffectName_k__BackingField = this->fields._PlayEffectName_k__BackingField;
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callBack, method);
  TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(PlayEffectName_k__BackingField, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_12;
  if ( EventMaster__TryGetEntityByBannerEffectName(
         Master_object,
         &entity,
         this->fields._PlayEffectName_k__BackingField,
         0) )
  {
    Master_object = (EventMaster_o *)entity;
    if ( entity )
    {
      id = entity->fields.id;
      BannerEffectEventTutorialFlag = EventEntity__GetBannerEffectEventTutorialFlag(entity, 0);
      EventTutorialMaster__RequestTutorialEventSet(id, BannerEffectEventTutorialFlag, 0, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(Master_object, v10);
  }
LABEL_11:
  ActionExtensions__Call(callBack, 0);
}


void QuestBoardEffectController__SetPlayEffectName(
        QuestBoardEffectController_o *this,
        System_String_o *playTerminalEffectName,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PlayEffectName_k__BackingField = playTerminalEffectName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)playTerminalEffectName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardEffectController__StartAddBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewManager_o *v32; // x24
  const MethodInfo *v33; // x3
  System_Collections_IEnumerator_o *v34; // x0
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v35; // x23
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  QuestBoardListViewManager_o *v42; // x23
  System_Action_o *v43; // x24
  System_Action_o *v44; // x25
  System_Collections_IEnumerator_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v49; // x2

  if ( (byte_59350BB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_21FFC50(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__0__);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__1__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
    byte_59350BB = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_34;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_34;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_34;
    v24 = *(Il2CppObject **)(*(_QWORD *)v14 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( !v24 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
      if ( !v24 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment;
    if ( v24->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v24->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v29 = v24;
      else
        v29 = 0;
LABEL_20:
      v30 = UnityEngine_Object__Instantiate_object__59506996(
              v29,
              transform,
              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
      questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                   (UnityEngine_Object_o *)v30,
                                                                   0,
                                                                   0);
      if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
        return;
      if ( v30 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
        GameObjectExtensions__ResetTransform(gameObject, 0);
        QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v30, 0, 0.0, 0.0, 0);
        if ( *(_QWORD *)v14 )
        {
          questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
          if ( questBoardListViewManager )
          {
            v32 = this->fields.questBoardListViewManager;
            questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                         (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                         *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                                                                         0);
            if ( v32 )
            {
              QuestBoardListViewManager__SetCenterItem(
                v32,
                (int32_t)questBoardListViewManager,
                this->fields.isScrollAnim,
                *((float *)&v30[8].klass + 1),
                0);
              v34 = QuestBoardEffectController__ScrollBarDisabled(
                      this,
                      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
                      *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
                      v33);
              UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v34, 0);
              v35 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_21FFEBC(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
              QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v35, 1, 0, 0, 0, 0, 0, 0, 0, 0);
              *(_QWORD *)(v5 + 32) = v35;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v35, v36, v37, v38, v39, v40, v41);
              v42 = this->fields.questBoardListViewManager;
              v43 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v43,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__0__,
                0);
              v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v44,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__1__,
                0);
              if ( v42 )
              {
                QuestBoardListViewManager__PlayBoardEffect(v42, (QuestBoardListEffectComponent_o *)v30, v43, v44, 0);
                questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                if ( questBoardListViewManager )
                {
                  v45 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
                          (ScrTerminalListTop_o *)questBoardListViewManager,
                          0,
                          0,
                          *(float *)&v30[7].monitor,
                          *((float *)&v30[7].monitor + 1),
                          (int32_t)v30[8].klass,
                          0,
                          0);
                  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                                                                               (UnityEngine_MonoBehaviour_o *)this,
                                                                               v45,
                                                                               0);
                  if ( *(_QWORD *)v14 )
                  {
                    questBoardListViewManager = *(QuestBoardListViewManager_o **)(*(_QWORD *)v14 + 24LL);
                    if ( questBoardListViewManager )
                    {
                      Component_object = UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)questBoardListViewManager,
                                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
                      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                        QuestBoardEffectController__SetBgmParameter(this, (QuestBoardListEffectComponent_o *)v30, v49);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_34:
      sub_21FFECC(questBoardListViewManager, v7);
    }
LABEL_16:
    v29 = 0;
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestBoardEffectController__StartBoardEffect(
        QuestBoardEffectController_o *this,
        System_String_o *playTerminalEffectName,
        bool inputIsScrollAnim,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v14; // x1
  void *effectInfoList; // x0
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x2
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__27_0; // x21
  Il2CppObject *v49; // x22
  struct QuestBoardEffectController___c_StaticFields *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  _BOOL8 v57; // x0
  const MethodInfo *v58; // x2
  Il2CppObject *current; // x1
  int v60; // w8
  const MethodInfo *v61; // x1
  System_Collections_IEnumerator_o *v62; // x0
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59350B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__StartBoardEffect_b__27_0__);
    sub_21FFC50(&QuestBoardEffectController___c_TypeInfo);
    byte_59350B9 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, playTerminalEffectName, inputIsScrollAnim);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, playTerminalEffectName, inputIsScrollAnim);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v12->static_fields->mInstance;
  v14 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.terminalSceneComponent,
    (int32_t)v14,
    (System_String_o *)inputIsScrollAnim,
    (System_String_o *)endCallBack,
    (int32_t)method,
    v5,
    v6,
    v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_29;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.scrTerminalListTop,
    (int32_t)mTerminalList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_29;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.endBoardEffectCallBack = endCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endBoardEffectCallBack,
    (int32_t)endCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._PlayEffectName_k__BackingField = playTerminalEffectName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)playTerminalEffectName,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  effectInfoList = QuestBoardEffectController___c_TypeInfo;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  this->fields.isScrollAnim = inputIsScrollAnim;
  if ( !*((_DWORD *)effectInfoList + 57) )
  {
    j_il2cpp_runtime_class_init_0(effectInfoList, v16, v45);
    effectInfoList = QuestBoardEffectController___c_TypeInfo;
  }
  static_fields = (struct QuestBoardEffectController___c_StaticFields *)*((_QWORD *)effectInfoList + 23);
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !*((_DWORD *)effectInfoList + 57) )
    {
      j_il2cpp_runtime_class_init_0(effectInfoList, v16, v45);
      static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__27_0, v49, Method_QuestBoardEffectController___c__StartBoardEffect_b__27_0__, 0);
    v50 = QuestBoardEffectController___c_TypeInfo->static_fields;
    v50->__9__27_0 = _9__27_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v50->__9__27_0, (int32_t)_9__27_0, v51, v52, v53, v54, v55, v56);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, _9__27_0, 0, 1, 0, 0),
        (effectInfoList = this->fields.effectInfoList) == 0) )
  {
LABEL_29:
    sub_21FFECC(effectInfoList, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)effectInfoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v63,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v57 )
      break;
    current = v63.fields._current;
    if ( !v63.fields._current )
      sub_21FFECC(v57, 0);
    v60 = *(_DWORD *)((char *)&v63.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v63.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v60 )
    {
      if ( v60 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v58);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__HandleAppearEffect(this, (QuestBoardEffectController_BoardEffectInfo_o *)current, v58);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v63,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v62 = QuestBoardEffectController__CoOnEffectFinishAction(this, v61);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v62, 0);
}


void QuestBoardEffectController__StartBoardFadeEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *fadePanel; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x9
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Transform_o *transform; // x22
  QuestBoardListEffectComponent_o *v20; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewManager_o *v22; // x19
  System_Action_o *v23; // x22

  if ( (byte_59350BD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass32_0__StartBoardFadeEffect_b__0__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass32_0_TypeInfo);
    byte_59350BD = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)effectInfo, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    goto LABEL_12;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_12;
  fadePanel = (Il2CppObject *)questBoardListViewManager->fields.fadePanel;
  if ( !fadePanel )
    goto LABEL_12;
  v16 = *(Il2CppObject **)(v14 + 24);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fadePanel, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  fadePanel = UnityEngine_Object__Instantiate_object__59506996(
                v16,
                transform,
                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v20 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v20, 0, 0.0, 0.0, 0),
        v22 = this->fields.questBoardListViewManager,
        v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass32_0__StartBoardFadeEffect_b__0__,
          0),
        !v22) )
  {
LABEL_12:
    sub_21FFECC(fadePanel, v7);
  }
  QuestBoardListViewManager__PlayBoardEffect(v22, v20, 0, v23, 0);
}


void QuestBoardEffectController__StartChangeBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x8
  QuestBoardListViewManager_o *v33; // x24
  const MethodInfo *v34; // x3
  System_Collections_IEnumerator_o *v35; // x0
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v36; // x23
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  QuestBoardListViewManager_o *v43; // x23
  System_Action_o *v44; // x24
  System_Action_o *v45; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *Component_object; // x20
  const MethodInfo *v49; // x2

  if ( (byte_59350BC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_21FFC50(&QuestBoardListEffectBoardOpenComponent_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__0__);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__1__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass31_0_TypeInfo);
    byte_59350BC = 1;
  }
  v5 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_33;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_33;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_33;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_33;
    v24 = *(Il2CppObject **)(*(_QWORD *)v14 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    {
      if ( !v24 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
      if ( !v24 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectBoardOpenComponent_TypeInfo->_2.naturalAligment;
    if ( v24->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectBoardOpenComponent_c *)v24->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectBoardOpenComponent_TypeInfo )
        v29 = v24;
      else
        v29 = 0;
LABEL_20:
      v30 = UnityEngine_Object__Instantiate_object__59506996(
              v29,
              transform,
              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
      questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                   (UnityEngine_Object_o *)v30,
                                                                   0,
                                                                   0);
      if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
        return;
      if ( v30 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
        GameObjectExtensions__ResetTransform(gameObject, 0);
        QuestBoardListEffectComponent__Init(
          (QuestBoardListEffectComponent_o *)v30,
          0,
          *(float *)&v30[8].monitor,
          *((float *)&v30[8].monitor + 1),
          0);
        v32 = *(_QWORD *)v14;
        LODWORD(v30[4].monitor) = v30[9].klass;
        if ( v32 )
        {
          questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
          if ( questBoardListViewManager )
          {
            v33 = this->fields.questBoardListViewManager;
            questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                         (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                         *(_DWORD *)(v32 + 16),
                                                                         0);
            if ( v33 )
            {
              QuestBoardListViewManager__SetCenterItem(
                v33,
                (int32_t)questBoardListViewManager,
                this->fields.isScrollAnim,
                *(float *)&v30[7].monitor,
                0);
              v35 = QuestBoardEffectController__ScrollBarDisabled(
                      this,
                      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
                      *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
                      v34);
              UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v35, 0);
              v36 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_21FFEBC(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
              QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v36, 1, 0, 0, 0, 0, 0, 0, 0, 0);
              *(_QWORD *)(v5 + 32) = v36;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
              v43 = this->fields.questBoardListViewManager;
              v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v44,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__0__,
                0);
              v45 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v45,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__1__,
                0);
              if ( v43 )
              {
                QuestBoardListViewManager__PlayBoardEffect(v43, (QuestBoardListEffectComponent_o *)v30, v44, v45, 0);
                if ( *(_QWORD *)v14 )
                {
                  questBoardListViewManager = *(QuestBoardListViewManager_o **)(*(_QWORD *)v14 + 24LL);
                  if ( questBoardListViewManager )
                  {
                    Component_object = UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)questBoardListViewManager,
                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
                    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                      QuestBoardEffectController__SetBgmParameter(this, (QuestBoardListEffectComponent_o *)v30, v49);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_21FFECC(questBoardListViewManager, v7);
    }
LABEL_16:
    v29 = 0;
    goto LABEL_20;
  }
}


bool QuestBoardEffectController___CoOnEffectFinishAction_b__29_0(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardEffectController___c_c *v4; // x0
  System_Collections_Generic_List_T__o *effectInfoList; // x19
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__29_3; // x20
  Il2CppObject *v8; // x21
  struct QuestBoardEffectController___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59350C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_21FFC50(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__29_3__);
    sub_21FFC50(&QuestBoardEffectController___c_TypeInfo);
    byte_59350C5 = 1;
  }
  v4 = QuestBoardEffectController___c_TypeInfo;
  effectInfoList = (System_Collections_Generic_List_T__o *)this->fields.effectInfoList;
  if ( !*(&QuestBoardEffectController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo, method, v2);
    v4 = QuestBoardEffectController___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__29_3 = (System_Func_object__bool__o *)static_fields->__9__29_3;
  if ( !_9__29_3 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__29_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__29_3,
      v8,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__29_3__,
      0);
    v9 = QuestBoardEffectController___c_TypeInfo->static_fields;
    v9->__9__29_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__29_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__29_3, (int32_t)_9__29_3, v10, v11, v12, v13, v14, v15);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__29_3,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__29_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  __int64 v4; // x1
  __int64 v5; // x2

  v2 = this;
  if ( (byte_59350C6 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_21FFC50(&StringLiteral_21870/*"isBgmPauseEnded"*/);
    byte_59350C6 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_21FFECC(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_21870/*"isBgmPauseEnded"*/, 0, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v4, v5);
  BgmManager__PauseBgm(0, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__29_2(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endBoardEffectCallBack, 0);
}


bool QuestBoardEffectController___DestroyObject_b__38_0(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  return this->fields.isDelayBgmFadeIn;
}


System_String_o *QuestBoardEffectController__get_PlayEffectName(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayEffectName_k__BackingField;
}


void QuestBoardEffectController__set_PlayEffectName(
        QuestBoardEffectController_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PlayEffectName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardEffectController_BoardEffectInfo___ctor(
        QuestBoardEffectController_BoardEffectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController_DialogParameter___ctor(
        QuestBoardEffectController_DialogParameter_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController__CoOnEffectFinishAction_d__29___ctor(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__CoOnEffectFinishAction_d__29__MoveNext(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w23
  struct QuestBoardEffectController_o *_4__this; // x19
  System_Action_o *v5; // x20
  TerminalSceneComponent_o *terminalSceneComponent; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  struct System_Action_o *scrollBar; // x1
  struct QuestBoardListViewManager_o *v16; // x8
  __int64 v17; // x20
  System_Action_object__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Action_object__o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_object__o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  ActionChain_o *v39; // x21
  __int64 v40; // x20
  System_Action_o *v41; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Func_bool__o *v48; // x21
  UnityEngine_WaitWhile_o *v49; // x19
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7

  if ( (byte_59350CC & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController_DispDialogMessage__);
    sub_21FFC50(&Method_QuestBoardEffectController_PlayMessageEffect__);
    sub_21FFC50(&Method_QuestBoardEffectController_SetEffectEndSaveData__);
    sub_21FFC50(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_0__);
    sub_21FFC50(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_1__);
    sub_21FFC50(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_2__);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_59350CC = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v48 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v48,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_0__,
      0);
    v49 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v49, v48, 0);
    this->fields.__2__current = (Il2CppObject *)v49;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    this->fields.__1__state = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_1__,
      0);
    if ( _4__this )
    {
      terminalSceneComponent = _4__this->fields.terminalSceneComponent;
      if ( terminalSceneComponent )
      {
        terminalSceneComponent = (TerminalSceneComponent_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                               terminalSceneComponent,
                                                               v5,
                                                               0);
        if ( ((unsigned __int8)terminalSceneComponent & 1) == 0
          && !_4__this->fields.isDelayBgmFadeIn
          && !_4__this->fields.messageEffectAfterFadeInBgm )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_27;
          TerminalSceneComponent__playDefaultBgm(terminalSceneComponent, v5, _4__this->fields.bgmFadeInTime, 0);
        }
        questBoardListViewManager = _4__this->fields.questBoardListViewManager;
        if ( questBoardListViewManager )
        {
          terminalSceneComponent = (TerminalSceneComponent_o *)questBoardListViewManager->fields.scrollView;
          if ( terminalSceneComponent )
          {
            scrollBar = (struct System_Action_o *)questBoardListViewManager->fields.scrollBar;
            terminalSceneComponent->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)scrollBar;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&terminalSceneComponent->fields.TUTORIAL_SPOT_ARROW_POS,
              (int32_t)scrollBar,
              v8,
              v9,
              v10,
              v11,
              v12,
              v13);
            v16 = _4__this->fields.questBoardListViewManager;
            if ( v16 )
            {
              terminalSceneComponent = (TerminalSceneComponent_o *)v16->fields.scrollView;
              if ( terminalSceneComponent )
              {
                UIScrollView__UpdateScrollbars((UIScrollView_o *)terminalSceneComponent, 0);
                v17 = sub_21FFD10(System_Action_Action____TypeInfo, 3);
                v18 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v18,
                  (Il2CppObject *)_4__this,
                  Method_QuestBoardEffectController_PlayMessageEffect__,
                  0);
                if ( v17 )
                {
                  if ( !*(_DWORD *)(v17 + 24) )
                    goto LABEL_28;
                  *(_QWORD *)(v17 + 32) = v18;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v17 + 32),
                    (int32_t)v18,
                    v19,
                    v20,
                    v21,
                    v22,
                    v23,
                    v24);
                  v25 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                  System_Action_object____ctor(
                    v25,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController_SetEffectEndSaveData__,
                    0);
                  if ( (*(_DWORD *)(v17 + 24) & 0xFFFFFFFE) == 0 )
                    goto LABEL_28;
                  *(_QWORD *)(v17 + 40) = v25;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v17 + 40),
                    (int32_t)v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31);
                  v32 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
                  System_Action_object____ctor(
                    v32,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController_DispDialogMessage__,
                    0);
                  if ( *(_DWORD *)(v17 + 24) <= 2u )
                    goto LABEL_28;
                  *(_QWORD *)(v17 + 48) = v32;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v17 + 48),
                    (int32_t)v32,
                    v33,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38);
                  v39 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
                  ActionChain___ctor_55902484(v39, (System_Action_Action__array *)v17, 0);
                  v40 = sub_21FFD10(System_Action___TypeInfo, 1);
                  v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v41,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_2__,
                    0);
                  if ( !v40 )
                    goto LABEL_27;
                  if ( !*(_DWORD *)(v40 + 24) )
LABEL_28:
                    sub_21FFED4(terminalSceneComponent);
                  *(_QWORD *)(v40 + 32) = v41;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v40 + 32),
                    (int32_t)v41,
                    v42,
                    v43,
                    v44,
                    v45,
                    v46,
                    v47);
                  if ( v39 )
                  {
                    terminalSceneComponent = (TerminalSceneComponent_o *)ChainableActionBase__Final(
                                                                           (ChainableActionBase_o *)v39,
                                                                           (System_Action_array *)v40,
                                                                           0);
                    if ( terminalSceneComponent )
                    {
                      ChainableActionBase__Execute((ChainableActionBase_o *)terminalSceneComponent, 0);
                      return _1__state == 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_21FFECC(terminalSceneComponent, v7);
  }
  return _1__state == 0;
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__CoOnEffectFinishAction_d__29__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__29_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__29__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__CoOnEffectFinishAction_d__29__System_IDisposable_Dispose(
        QuestBoardEffectController__CoOnEffectFinishAction_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardEffectController__DestroyObject_d__38___ctor(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__DestroyObject_d__38__MoveNext(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController__DestroyObject_d__38_o *v2; // x20
  int32_t _1__state; // w22
  Il2CppObject *_4__this; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *v10; // x19
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitWhile_o *v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v2 = this;
  if ( (byte_59350CD & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController__DestroyObject_b__38_0__);
    this = (QuestBoardEffectController__DestroyObject_d__38_o *)sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_59350CD = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v11 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v11, _4__this, Method_QuestBoardEffectController__DestroyObject_b__38_0__, 0);
    v12 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v12, v11, 0);
    v2->fields.__2__current = (Il2CppObject *)v12;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v2->fields.__1__state = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
    {
      this = (QuestBoardEffectController__DestroyObject_d__38_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)_4__this,
                                                                    0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
        UnityEngine_Object__Destroy_83246496(v10, 0);
        return _1__state == 0;
      }
LABEL_15:
      sub_21FFECC(this, method);
    }
  }
  return _1__state == 0;
}


Il2CppObject *QuestBoardEffectController__DestroyObject_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__DestroyObject_d__38__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestBoardEffectController__DestroyObject_d__38_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestBoardEffectController__DestroyObject_d__38__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__DestroyObject_d__38__System_IDisposable_Dispose(
        QuestBoardEffectController__DestroyObject_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardEffectController__ScrollBarDisabled_d__33___ctor(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__ScrollBarDisabled_d__33__MoveNext(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestBoardEffectController__ScrollBarDisabled_d__33_o *v8; // x19
  int32_t _1__state; // w22
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x9
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  __int64 v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct QuestBoardListViewObject_o *obj; // x1
  System_Func_bool__o *v21; // x21
  UnityEngine_WaitWhile_o *v22; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  v8 = this;
  if ( (byte_59350CE & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_QuestBoardEffectController___c__DisplayClass33_0__ScrollBarDisabled_b__0__);
    sub_21FFC50(&QuestBoardEffectController___c__DisplayClass33_0_TypeInfo);
    this = (QuestBoardEffectController__ScrollBarDisabled_d__33_o *)sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_59350CE = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v13 = sub_21FFEBC(QuestBoardEffectController___c__DisplayClass33_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( v13 )
    {
      obj = v8->fields.obj;
      *(_QWORD *)(v13 + 16) = obj;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)obj, v14, v15, v16, v17, v18, v19);
      v21 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v21,
        (Il2CppObject *)v13,
        Method_QuestBoardEffectController___c__DisplayClass33_0__ScrollBarDisabled_b__0__,
        0);
      v22 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v22, v21, 0);
      v8->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return _1__state == 0;
    }
    goto LABEL_14;
  }
  if ( _1__state == 1 )
  {
    effectInfo = v8->fields.effectInfo;
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !effectInfo )
      goto LABEL_14;
    if ( effectInfo->fields.isPlaying )
    {
      if ( _4__this )
      {
        questBoardListViewManager = _4__this->fields.questBoardListViewManager;
        if ( questBoardListViewManager )
        {
          this = (QuestBoardEffectController__ScrollBarDisabled_d__33_o *)questBoardListViewManager->fields.scrollView;
          if ( this )
          {
            this[1].monitor = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this[1].monitor, 0, v2, v3, v4, v5, v6, v7);
            return _1__state == 0;
          }
        }
      }
LABEL_14:
      sub_21FFECC(this, method);
    }
  }
  return _1__state == 0;
}


Il2CppObject *QuestBoardEffectController__ScrollBarDisabled_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__ScrollBarDisabled_d__33__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestBoardEffectController__ScrollBarDisabled_d__33_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestBoardEffectController__ScrollBarDisabled_d__33__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__ScrollBarDisabled_d__33__System_IDisposable_Dispose(
        QuestBoardEffectController__ScrollBarDisabled_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59350C7 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController___c_TypeInfo);
    byte_59350C7 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestBoardEffectController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardEffectController___c___ctor(QuestBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardEffectController___c___CoOnEffectFinishAction_b__29_3(
        QuestBoardEffectController___c_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  if ( !effectInfo )
    sub_21FFECC(this, 0);
  return effectInfo->fields.isPlaying;
}


void QuestBoardEffectController___c___SetBgmParameter_b__37_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardEffectController_c *v3; // x0
  System_String_o *NoVolumeBgm; // x19

  if ( (byte_59350C8 & 1) == 0 )
  {
    sub_21FFC50(&QuestBoardEffectController_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_59350C8 = 1;
  }
  v3 = QuestBoardEffectController_TypeInfo;
  if ( !*(&QuestBoardEffectController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController_TypeInfo, method, v2);
    v3 = QuestBoardEffectController_TypeInfo;
  }
  NoVolumeBgm = v3->static_fields->NoVolumeBgm;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  SoundManager__playBgm(NoVolumeBgm, 0);
}


void QuestBoardEffectController___c___StartBoardEffect_b__27_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
}


void QuestBoardEffectController___c__DisplayClass30_0___ctor(
        QuestBoardEffectController___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass30_0___StartAddBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x9
  QuestBoardListViewManager_o *questBoardListViewManager; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0
    || (questBoardListViewManager = _4__this->fields.questBoardListViewManager) == 0 )
  {
    sub_21FFECC(this, method);
  }
  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
    questBoardListViewManager,
    effectInfo->fields.targetBoardWarId,
    this->fields.questBoardDispOptions,
    0);
}


void QuestBoardEffectController___c__DisplayClass30_0___StartAddBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_21FFECC(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass31_0___ctor(
        QuestBoardEffectController___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass31_0___StartChangeBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x9
  QuestBoardListViewManager_o *questBoardListViewManager; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0
    || (questBoardListViewManager = _4__this->fields.questBoardListViewManager) == 0 )
  {
    sub_21FFECC(this, method);
  }
  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
    questBoardListViewManager,
    effectInfo->fields.targetBoardWarId,
    this->fields.questBoardDispOptions,
    0);
}


void QuestBoardEffectController___c__DisplayClass31_0___StartChangeBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_21FFECC(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass32_0___ctor(
        QuestBoardEffectController___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass32_0___StartBoardFadeEffect_b__0(
        QuestBoardEffectController___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_21FFECC(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass33_0___ctor(
        QuestBoardEffectController___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardEffectController___c__DisplayClass33_0___ScrollBarDisabled_b__0(
        QuestBoardEffectController___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewObject_o *obj; // x8

  obj = this->fields.obj;
  if ( !obj )
    sub_21FFECC(this, method);
  return obj->fields.isBusy;
}


void QuestBoardEffectController___c__DisplayClass35_0___ctor(
        QuestBoardEffectController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass35_0___DispDialogMessage_b__0(
        QuestBoardEffectController___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  QuestBoardEffectController_o *_4__this; // x19
  System_Collections_IEnumerator_o *v6; // x1

  ActionExtensions__Call(this->fields.callBack, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(v3, v4);
  v6 = QuestBoardEffectController__DestroyObject(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
}


void QuestBoardEffectController___c__DisplayClass36_0___ctor(
        QuestBoardEffectController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass36_0___PlayMessageEffect_b__0(
        QuestBoardEffectController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController___c__DisplayClass36_0_o *v2; // x19
  struct QuestBoardEffectController_o *_4__this; // x8
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  __int64 v5; // x1
  __int64 v6; // x2

  v2 = this;
  if ( (byte_59350C9 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass36_0_o *)sub_21FFC50(&StringLiteral_21870/*"isBgmPauseEnded"*/);
    byte_59350C9 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (terminalSceneComponent = _4__this->fields.terminalSceneComponent) == 0
    || (this = (QuestBoardEffectController___c__DisplayClass36_0_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_21FFECC(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_21870/*"isBgmPauseEnded"*/, 0, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5, v6);
  BgmManager__PauseBgm(0, 0);
}


void QuestBoardEffectController___c__DisplayClass36_1___ctor(
        QuestBoardEffectController___c__DisplayClass36_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass36_1___PlayMessageEffect_b__1(
        QuestBoardEffectController___c__DisplayClass36_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardEffectController___c__DisplayClass36_1_o *v3; // x19
  struct QuestBoardEffectController___c__DisplayClass36_0_o *CS___8__locals1; // x8
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController___c__DisplayClass36_0_o *v6; // x8
  struct QuestBoardEffectController_o *v7; // x8
  UnityEngine_Object_o *obj; // x20
  struct QuestBoardEffectController___c__DisplayClass36_0_o *v9; // x8

  v3 = this;
  if ( (byte_59350CA & 1) == 0 )
  {
    this = (QuestBoardEffectController___c__DisplayClass36_1_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59350CA = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  if ( _4__this->fields.messageEffectAfterFadeInBgm )
  {
    this = (QuestBoardEffectController___c__DisplayClass36_1_o *)_4__this->fields.terminalSceneComponent;
    if ( !this )
      goto LABEL_16;
    this = (QuestBoardEffectController___c__DisplayClass36_1_o *)TerminalSceneComponent__TryPlayGrandBgm(
                                                                   (TerminalSceneComponent_o *)this,
                                                                   v3->fields.unPauseBgm,
                                                                   0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v3->fields.CS___8__locals1;
      if ( !v6 )
        goto LABEL_16;
      v7 = v6->fields.__4__this;
      if ( !v7 )
        goto LABEL_16;
      this = (QuestBoardEffectController___c__DisplayClass36_1_o *)v7->fields.terminalSceneComponent;
      if ( !this )
        goto LABEL_16;
      TerminalSceneComponent__playDefaultBgm(
        (TerminalSceneComponent_o *)this,
        v3->fields.unPauseBgm,
        v7->fields.bgmFadeInTime,
        0);
    }
  }
  obj = (UnityEngine_Object_o *)v3->fields.obj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(obj, 0);
  v9 = v3->fields.CS___8__locals1;
  if ( !v9 )
LABEL_16:
    sub_21FFECC(this, method);
  ActionExtensions__Call(v9->fields.callBack, 0);
}


void QuestBoardEffectController___c__DisplayClass37_0___ctor(
        QuestBoardEffectController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass37_0___SetBgmParameter_b__1(
        QuestBoardEffectController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardEffectController___c__DisplayClass37_0_o *v3; // x19
  struct QuestBoardEffectController_o *_4__this; // x8
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  System_String_o *mPlayBgmName; // x20
  struct QuestBoardListEffectComponent_o *questBoardListEffectComponent; // x9
  float bgmFadeInTime; // s9
  float v9; // s8
  struct QuestBoardEffectController_o *v10; // x8

  v3 = this;
  if ( (byte_59350CB & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass37_0_o *)sub_21FFC50(&SoundManager_TypeInfo);
    byte_59350CB = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  terminalSceneComponent = _4__this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_12;
  mPlayBgmName = terminalSceneComponent->fields.mPlayBgmName;
  this = (QuestBoardEffectController___c__DisplayClass37_0_o *)BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
    this = (QuestBoardEffectController___c__DisplayClass37_0_o *)BgmManager_TypeInfo;
  }
  questBoardListEffectComponent = v3->fields.questBoardListEffectComponent;
  if ( !questBoardListEffectComponent )
    goto LABEL_12;
  bgmFadeInTime = questBoardListEffectComponent->fields.bgmFadeInTime;
  v9 = *(float *)&this[5].fields.questBoardListEffectComponent->klass;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
  SoundManager__playBgm_48459752(mPlayBgmName, v9, bgmFadeInTime, 0);
  v10 = v3->fields.__4__this;
  if ( !v10 )
LABEL_12:
    sub_21FFECC(this, method);
  v10->fields.isDelayBgmFadeIn = 0;
}


void QuestBoardEffectController___c__DisplayClass37_0___SetBgmParameter_b__2(
        QuestBoardEffectController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  _4__this->fields.isDelayBgmFadeIn = 0;
}