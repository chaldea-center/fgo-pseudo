void QuestBoardEffectController___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct QuestBoardEffectController_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E74181 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController_TypeInfo);
    sub_1D0F0B4(&StringLiteral_2941/*"BGM_MAP_22"*/);
    sub_1D0F0B4(&StringLiteral_17581/*"board_message_{0}"*/);
    byte_4E74181 = 1;
  }
  QuestBoardEffectController_TypeInfo->static_fields->NoVolumeBgm = (struct System_String_o *)StringLiteral_2941/*"BGM_MAP_22"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)QuestBoardEffectController_TypeInfo->static_fields,
    StringLiteral_2941/*"BGM_MAP_22"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17581/*"board_message_{0}"*/;
  static_fields = QuestBoardEffectController_TypeInfo->static_fields;
  static_fields->BoardEffectMessage = (struct System_String_o *)StringLiteral_17581/*"board_message_{0}"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->BoardEffectMessage, v7, v9, v10, v11, v12, v13, v14);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E74177 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController__CoOnEffectFinishAction_d__29_TypeInfo);
    byte_4E74177 = 1;
  }
  v3 = sub_1D0F300(QuestBoardEffectController__CoOnEffectFinishAction_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *QuestBoardEffectController__DestroyObject(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E74180 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController__DestroyObject_d__38_TypeInfo);
    byte_4E74180 = 1;
  }
  v3 = sub_1D0F300(QuestBoardEffectController__DestroyObject_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v22; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v24; // x8

  if ( (byte_4E7417D & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass35_0__DispDialogMessage_b__0__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass35_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7417D = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = callBack;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callBack, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_QuestBoardEffectController___c__DisplayClass35_0__DispDialogMessage_b__0__,
    0);
  if ( this->fields.isDisplayDialogAfterEffectFinish )
  {
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    dialogParameterAfterEffectFinish = this->fields.dialogParameterAfterEffectFinish;
    if ( dialogParameterAfterEffectFinish )
    {
      v22 = (CommonUI_o *)Instance;
      messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get(messageLocalizationKey, 0);
      v24 = this->fields.dialogParameterAfterEffectFinish;
      if ( v24 )
      {
        if ( v22 )
        {
          CommonUI__OpenNotificationDialog_32088184(
            v22,
            (System_String_o *)StringLiteral_1/*""*/,
            Instance,
            v20,
            v24->fields.messagePosY,
            v24->fields.buttonPosY,
            -1,
            0,
            0,
            0,
            v24->fields.canMaskTouchClose,
            v24->fields.messageFontSize,
            v24->fields.onClickOkSeKind,
            0,
            0,
            0,
            0);
          return;
        }
      }
    }
LABEL_12:
    sub_1D0F30C(Instance, v7);
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


void QuestBoardEffectController__InitBoardEffect(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v11; // x1
  System_Collections_Generic_List_object__o *effectInfoList; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  QuestBoardListViewManager_o **p_questBoardListViewManager; // x20
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x27
  int32_t appearBoardType; // w8
  UnityEngine_Object_o *v35; // x21
  void *monitor; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v38; // x21
  UnityEngine_Object_o *QuestBoardObjForWarId; // x21
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v40; // x21
  __int64 v41; // x1
  QuestBoardListViewManager_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4E74175 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_1D0F0B4(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E74175 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v9->static_fields->mInstance;
  v11 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.terminalSceneComponent, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_46;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.scrTerminalListTop,
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
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.questBoardListViewManager,
          (int32_t)mQuestBoardListViewManager,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (effectInfoList = (System_Collections_Generic_List_object__o *)this->fields.effectInfoList) == 0) )
  {
LABEL_46:
    sub_1D0F30C(effectInfoList, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    effectInfoList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v31 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1D0F30C(v31, v32);
    if ( !LODWORD(v48.fields._current[2].klass) )
    {
      appearBoardType = this->fields.appearBoardType;
      if ( appearBoardType == 1 )
      {
        if ( !*p_questBoardListViewManager )
          sub_1D0F30C(0, v32);
        QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                          *p_questBoardListViewManager,
                                                          (int32_t)v48.fields._current[1].klass,
                                                          0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0) )
        {
          v40 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_1D0F300(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
          QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v40, 1, 0, 0, 0, 0, 1, 0, 0, 0);
          v42 = *p_questBoardListViewManager;
          if ( !*p_questBoardListViewManager )
            sub_1D0F30C(0, v41);
LABEL_30:
          QuestBoardListViewManager__DispBoardForQuestBoardEffect(v42, (int32_t)current[1].klass, v40, 0);
        }
      }
      else if ( !appearBoardType )
      {
        if ( !*p_questBoardListViewManager )
          sub_1D0F30C(0, v32);
        v35 = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                        *p_questBoardListViewManager,
                                        (int32_t)v48.fields._current[1].klass,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v35, 0, 0) )
        {
          monitor = current[1].monitor;
          if ( monitor
            && (naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment,
                *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)naturalAligment) )
          {
            if ( *(QuestBoardListEffectAppearComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) == QuestBoardListEffectAppearComponent_TypeInfo )
              v38 = (UnityEngine_Object_o *)current[1].monitor;
            else
              v38 = 0;
          }
          else
          {
            v38 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v38, 0, 0) )
          {
            if ( !*p_questBoardListViewManager )
              sub_1D0F30C(0, v43);
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              *p_questBoardListViewManager,
              (int32_t)current[1].klass,
              0,
              0);
            if ( !v38 )
              sub_1D0F30C(v44, v45);
            if ( !*p_questBoardListViewManager )
              sub_1D0F30C(0, v45);
            QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
              *p_questBoardListViewManager,
              1,
              1,
              0.0,
              (int32_t)v38[5].monitor,
              0,
              0);
            v40 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_1D0F300(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
            QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v40, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            v42 = *p_questBoardListViewManager;
            if ( !*p_questBoardListViewManager )
              sub_1D0F30C(0, v46);
            goto LABEL_30;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
}


void QuestBoardEffectController__OnDestroy(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *questBoardListViewManager; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct QuestBoardListViewManager_o *v6; // x8
  struct UIScrollView_o *scrollView; // x20
  UnityEngine_Object_o *verticalScrollBar; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct QuestBoardListViewManager_o *v15; // x8
  struct UIScrollBar_o *scrollBar; // x1

  if ( (byte_4E74174 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E74174 = 1;
  }
  questBoardListViewManager = (UnityEngine_Object_o *)this->fields.questBoardListViewManager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(questBoardListViewManager, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.questBoardListViewManager;
    if ( !v6 )
      goto LABEL_17;
    scrollView = v6->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scrollView, 0, 0);
    if ( v4 )
    {
      if ( !scrollView )
        goto LABEL_17;
      verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__op_Equality(verticalScrollBar, 0, 0);
      if ( v4 )
      {
        v15 = this->fields.questBoardListViewManager;
        if ( v15 )
        {
          scrollBar = v15->fields.scrollBar;
          scrollView->fields.verticalScrollBar = (struct UIProgressBar_o *)scrollBar;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&scrollView->fields.verticalScrollBar,
            (int32_t)scrollBar,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
          UIScrollView__UpdateScrollbars(scrollView, 0);
          return;
        }
LABEL_17:
        sub_1D0F30C(v4, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  UnityEngine_Object_o *mActionPanel; // x20
  __int64 v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x21
  struct QuestBoardListViewManager_o *v31; // x8
  AssetData_o *effectAssetData; // x22
  QuestBoardEffectController_c *v33; // x0
  System_String_o *BoardEffectMessage; // x23
  Il2CppObject *v35; // x0
  Il2CppObject *Object_object__52624444; // x22
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o **v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct ScrTerminalListTop_o *v45; // x8
  Il2CppObject *Component_object; // x19
  Il2CppObject *v47; // x21
  System_Action_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Action_o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  UnityEngine_GameObject_o *v62; // x19
  int32_t messageEffectPrefabId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E7417E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_AssetData_GetObject_GameObject____80369792);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_RewardEffectComponent___);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&QuestBoardEffectController_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass36_0__PlayMessageEffect_b__0__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass36_0_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass36_1__PlayMessageEffect_b__1__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass36_1_TypeInfo);
    byte_4E7417E = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_32;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callBack, v14, v15, v16, v17, v18, v19);
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_32;
  if ( !questBoardListViewManager->fields.effectAssetData )
    goto LABEL_26;
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_32;
  mActionPanel = (UnityEngine_Object_o *)scrTerminalListTop->fields.mActionPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mActionPanel, 0, 0) && this->fields.messageEffectPrefabId >= 1 )
  {
    v23 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass36_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    if ( !v23 )
      goto LABEL_32;
    *(_QWORD *)(v23 + 32) = v5;
    v30 = v23 + 32;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v23 + 32), v5, v24, v25, v26, v27, v28, v29);
    v31 = this->fields.questBoardListViewManager;
    if ( !v31 )
      goto LABEL_32;
    effectAssetData = v31->fields.effectAssetData;
    v33 = QuestBoardEffectController_TypeInfo;
    if ( !QuestBoardEffectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardEffectController_TypeInfo);
      v33 = QuestBoardEffectController_TypeInfo;
    }
    BoardEffectMessage = v33->static_fields->BoardEffectMessage;
    messageEffectPrefabId = this->fields.messageEffectPrefabId;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &messageEffectPrefabId);
    v6 = System_String__Format(BoardEffectMessage, v35, 0);
    if ( !effectAssetData )
      goto LABEL_32;
    Object_object__52624444 = AssetData__GetObject_object__52624444(
                                effectAssetData,
                                v6,
                                (const MethodInfo_322FC3C *)Method_AssetData_GetObject_GameObject____80369792);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (System_String_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__52624444, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v37 = UnityEngine_Object__Instantiate_object_(
              Object_object__52624444,
              (const MethodInfo_32DD2D0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *(_QWORD *)(v23 + 16) = v37;
      v38 = (UnityEngine_GameObject_o **)(v23 + 16);
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v23 + 16), (int32_t)v37, v39, v40, v41, v42, v43, v44);
      v45 = this->fields.scrTerminalListTop;
      if ( !v45 )
        goto LABEL_32;
      GameObjectExtensions__SetParent_37348928(*v38, v45->fields.mActionPanel, 0);
      GameObjectExtensions__ResetTransform(*v38, 0);
      v6 = (System_String_o *)*v38;
      if ( !*v38 )
        goto LABEL_32;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v6,
                           (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_RewardEffectComponent___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v47 = *(Il2CppObject **)(v23 + 32);
        v48 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          v48,
          v47,
          Method_QuestBoardEffectController___c__DisplayClass36_0__PlayMessageEffect_b__0__,
          0);
        *(_QWORD *)(v23 + 24) = v48;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v23 + 24), (int32_t)v48, v49, v50, v51, v52, v53, v54);
        v55 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          v55,
          (Il2CppObject *)v23,
          Method_QuestBoardEffectController___c__DisplayClass36_1__PlayMessageEffect_b__1__,
          0);
        if ( Component_object )
        {
          Component_object[14].monitor = v55;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&Component_object[14].monitor,
            (int32_t)v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          return;
        }
LABEL_32:
        sub_1D0F30C(v6, v7);
      }
      v62 = *v38;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_73359484((UnityEngine_Object_o *)v62, 0);
    }
    if ( !*(_QWORD *)v30 )
      goto LABEL_32;
    ActionExtensions__Call(*(System_Action_o **)(*(_QWORD *)v30 + 24LL), 0);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4E7417B & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController__ScrollBarDisabled_d__33_TypeInfo);
    byte_4E7417B = 1;
  }
  v7 = sub_1D0F300(QuestBoardEffectController__ScrollBarDisabled_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = obj;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)obj, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = effectInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)effectInfo, v20, v21, v22, v23, v24, v25);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  float *v21; // x8
  System_Collections_IEnumerator_o *v22; // x0
  float *v23; // x8
  float v24; // s8
  QuestBoardEffectController___c_c *v25; // x0
  System_Action_o *_9__37_0; // x22
  Il2CppObject *v27; // x23
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_IEnumerator_o *v35; // x0
  float v36; // s8
  System_Action_o *v37; // x21
  System_Collections_IEnumerator_o *v38; // x0
  float v39; // s8
  ScrTerminalListTop_o *v40; // x21
  float v41; // s9
  BgmManager_c *v42; // x0
  float DEFAULT_VOLUME; // s10
  System_Action_o *v44; // x22

  if ( (byte_4E7417F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&BgmManager_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__SetBgmParameter_b__37_0__);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__1__);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__2__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass37_0_TypeInfo);
    sub_1D0F0B4(&QuestBoardEffectController___c_TypeInfo);
    byte_4E7417F = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = questBoardListEffectComponent;
  v14 = v5 + 24;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)(v5 + 24),
    (int32_t)questBoardListEffectComponent,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = *(float **)(v5 + 24);
  if ( !v21 )
    goto LABEL_26;
  scrTerminalListTop = this->fields.scrTerminalListTop;
  this->fields.bgmFadeInTime = v21[28];
  if ( !scrTerminalListTop )
    goto LABEL_26;
  v22 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(scrTerminalListTop, v21[25], v21[26], v21[29], 0, 0);
  scrTerminalListTop = (ScrTerminalListTop_o *)UnityEngine_MonoBehaviour__StartCoroutine_73344676(
                                                 (UnityEngine_MonoBehaviour_o *)this,
                                                 v22,
                                                 0);
  v23 = *(float **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_26;
  if ( !this->fields.isFadeInRestartBgm )
  {
    v39 = v23[27];
    if ( v39 <= 0.0 || this->fields.messageEffectAfterFadeInBgm )
      return;
    this->fields.isDelayBgmFadeIn = 1;
    v40 = this->fields.scrTerminalListTop;
    v41 = v23[28];
    v42 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v42 = BgmManager_TypeInfo;
    }
    DEFAULT_VOLUME = v42->static_fields->DEFAULT_VOLUME;
    v44 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v44,
      (Il2CppObject *)v5,
      Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__2__,
      0);
    if ( v40 )
    {
      v38 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(v40, v39, v41, DEFAULT_VOLUME, v44, 0);
      goto LABEL_25;
    }
LABEL_26:
    sub_1D0F30C(scrTerminalListTop, v7);
  }
  v24 = v23[26];
  v25 = QuestBoardEffectController___c_TypeInfo;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    v25 = QuestBoardEffectController___c_TypeInfo;
  }
  _9__37_0 = v25->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = QuestBoardEffectController___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__37_0 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(_9__37_0, v27, Method_QuestBoardEffectController___c__SetBgmParameter_b__37_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = _9__37_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0,
      (int32_t)_9__37_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = BasicHelper__DelayCall(v24, _9__37_0, 1, 0);
  scrTerminalListTop = (ScrTerminalListTop_o *)UnityEngine_MonoBehaviour__StartCoroutine_73344676(
                                                 (UnityEngine_MonoBehaviour_o *)this,
                                                 v35,
                                                 0);
  if ( !*(_QWORD *)v14 )
    goto LABEL_26;
  v36 = *(float *)(*(_QWORD *)v14 + 108LL);
  if ( v36 > 0.0 && !this->fields.messageEffectAfterFadeInBgm )
  {
    this->fields.isDelayBgmFadeIn = 1;
    v37 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v5,
      Method_QuestBoardEffectController___c__DisplayClass37_0__SetBgmParameter_b__1__,
      0);
    v38 = BasicHelper__DelayCall(v36, v37, 1, 0);
LABEL_25:
    UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v38, 0);
  }
}


void QuestBoardEffectController__SetEffectEndSaveData(
        QuestBoardEffectController_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_String_o *PlayEffectName_k__BackingField; // x21
  EventMaster_o *Master_object; // x0
  __int64 v7; // x1
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  EventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7417C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7417C = 1;
  }
  entity = 0;
  PlayEffectName_k__BackingField = this->fields._PlayEffectName_k__BackingField;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(PlayEffectName_k__BackingField, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
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
    sub_1D0F30C(Master_object, v7);
  }
LABEL_11:
  ActionExtensions__Call(callBack, 0);
}


void QuestBoardEffectController__SetPlayEffectName(
        QuestBoardEffectController_o *this,
        System_String_o *playTerminalEffectName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PlayEffectName_k__BackingField = playTerminalEffectName;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)playTerminalEffectName,
    (int32_t)method,
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v22; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x2
  QuestBoardListViewManager_o *v29; // x24
  const MethodInfo *v30; // x3
  System_Collections_IEnumerator_o *v31; // x0
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  QuestBoardListViewManager_o *v39; // x23
  System_Action_o *v40; // x24
  System_Action_o *v41; // x25
  System_Collections_IEnumerator_o *v42; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v44; // x2

  if ( (byte_4E74178 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_1D0F0B4(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__0__);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__1__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
    byte_4E74178 = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_34;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_34;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_34;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_34;
    v22 = *(Il2CppObject **)(*(_QWORD *)v14 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( !v22 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !v22 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment;
    if ( v22->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v25 = v22;
      else
        v25 = 0;
LABEL_20:
      v26 = UnityEngine_Object__Instantiate_object__53335036(
              v25,
              transform,
              (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
      questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                   (UnityEngine_Object_o *)v26,
                                                                   0,
                                                                   0);
      if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
        return;
      if ( v26 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
        GameObjectExtensions__ResetTransform(gameObject, 0);
        QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v26, 0, 0.0, 0.0, v28);
        if ( *(_QWORD *)v14 )
        {
          questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
          if ( questBoardListViewManager )
          {
            v29 = this->fields.questBoardListViewManager;
            questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                         (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                         *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                                                                         0);
            if ( v29 )
            {
              QuestBoardListViewManager__SetCenterItem(
                v29,
                (int32_t)questBoardListViewManager,
                this->fields.isScrollAnim,
                *((float *)&v26[8].klass + 1),
                0);
              v31 = QuestBoardEffectController__ScrollBarDisabled(
                      this,
                      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
                      *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
                      v30);
              UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v31, 0);
              v32 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_1D0F300(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
              QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v32, 1, 0, 0, 0, 0, 0, 0, 0, 0);
              *(_QWORD *)(v5 + 32) = v32;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
              v39 = this->fields.questBoardListViewManager;
              v40 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v40,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__0__,
                0);
              v41 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v41,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass30_0__StartAddBoardAppearEffect_b__1__,
                0);
              if ( v39 )
              {
                QuestBoardListViewManager__PlayBoardEffect(v39, (QuestBoardListEffectComponent_o *)v26, v40, v41, 0);
                questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                if ( questBoardListViewManager )
                {
                  v42 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
                          (ScrTerminalListTop_o *)questBoardListViewManager,
                          0,
                          0,
                          *(float *)&v26[7].monitor,
                          *((float *)&v26[7].monitor + 1),
                          (int32_t)v26[8].klass,
                          0,
                          0);
                  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_73344676(
                                                                               (UnityEngine_MonoBehaviour_o *)this,
                                                                               v42,
                                                                               0);
                  if ( *(_QWORD *)v14 )
                  {
                    questBoardListViewManager = *(QuestBoardListViewManager_o **)(*(_QWORD *)v14 + 24LL);
                    if ( questBoardListViewManager )
                    {
                      Component_object = UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)questBoardListViewManager,
                                           (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                        QuestBoardEffectController__SetBgmParameter(this, (QuestBoardListEffectComponent_o *)v26, v44);
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
      sub_1D0F30C(questBoardListViewManager, v7);
    }
LABEL_16:
    v25 = 0;
    goto LABEL_20;
  }
}


void QuestBoardEffectController__StartBoardEffect(
        QuestBoardEffectController_o *this,
        System_String_o *playTerminalEffectName,
        bool inputIsScrollAnim,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v14; // x1
  void *effectInfoList; // x0
  __int64 v16; // x1
  char v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  char v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  char v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  char v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v46; // x21
  Il2CppObject *v47; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  char v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  _BOOL8 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  Il2CppObject *current; // x8
  int v59; // w9
  const MethodInfo *v60; // x1
  System_Collections_IEnumerator_o *v61; // x0
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E74176 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__StartBoardEffect_b__27_0__);
    sub_1D0F0B4(&QuestBoardEffectController___c_TypeInfo);
    byte_4E74176 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v12->static_fields->mInstance;
  v14 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.terminalSceneComponent,
    (int32_t)v14,
    inputIsScrollAnim,
    (int32_t)endCallBack,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_29;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.scrTerminalListTop,
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
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.endBoardEffectCallBack = endCallBack;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.endBoardEffectCallBack,
    (int32_t)endCallBack,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._PlayEffectName_k__BackingField = playTerminalEffectName;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)playTerminalEffectName,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.isScrollAnim = inputIsScrollAnim;
  effectInfoList = QuestBoardEffectController___c_TypeInfo;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    effectInfoList = QuestBoardEffectController___c_TypeInfo;
  }
  v46 = *(System_Action_o **)(*((_QWORD *)effectInfoList + 23) + 8LL);
  if ( !v46 )
  {
    if ( !*((_DWORD *)effectInfoList + 56) )
    {
      j_il2cpp_runtime_class_init_0(effectInfoList);
      effectInfoList = QuestBoardEffectController___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)effectInfoList + 23);
    v46 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v46, v47, Method_QuestBoardEffectController___c__StartBoardEffect_b__27_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = v46;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0, (int32_t)v46, v49, v50, v51, v52, v53, v54);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v46, 0, 1, 0, 0),
        (effectInfoList = this->fields.effectInfoList) == 0) )
  {
LABEL_29:
    sub_1D0F30C(effectInfoList, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v62,
    (System_Collections_Generic_List_object__o *)effectInfoList,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v62,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v55 )
      break;
    current = v62.fields._current;
    if ( !v62.fields._current )
      sub_1D0F30C(v55, v56);
    v59 = *(_DWORD *)((char *)&v62.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v62.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v59 )
    {
      if ( v59 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v57);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__HandleAppearEffect(this, (QuestBoardEffectController_BoardEffectInfo_o *)current, v57);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v62,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v61 = QuestBoardEffectController__CoOnEffectFinishAction(this, v60);
  UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v61, 0);
}


void QuestBoardEffectController__StartBoardFadeEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *fadePanel; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x8
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x9
  Il2CppObject *v16; // x21
  UnityEngine_Transform_o *transform; // x22
  QuestBoardListEffectComponent_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  QuestBoardListViewManager_o *v21; // x19
  System_Action_o *v22; // x22

  if ( (byte_4E7417A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass32_0__StartBoardFadeEffect_b__0__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass32_0_TypeInfo);
    byte_4E7417A = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)effectInfo, v8, v9, v10, v11, v12, v13);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  fadePanel = UnityEngine_Object__Instantiate_object__53335036(
                v16,
                transform,
                (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v18 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v18, 0, 0.0, 0.0, v20),
        v21 = this->fields.questBoardListViewManager,
        v22 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass32_0__StartBoardFadeEffect_b__0__,
          0),
        !v21) )
  {
LABEL_12:
    sub_1D0F30C(fadePanel, v7);
  }
  QuestBoardListViewManager__PlayBoardEffect(v21, v18, 0, v22, 0);
}


void QuestBoardEffectController__StartChangeBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x21
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v22; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x2
  QuestBoardListViewManager_o *v29; // x24
  const MethodInfo *v30; // x3
  System_Collections_IEnumerator_o *v31; // x0
  QuestBoardListViewItemDraw_QuestBoardDispOptions_o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  QuestBoardListViewManager_o *v39; // x23
  System_Action_o *v40; // x24
  System_Action_o *v41; // x25
  Il2CppObject *Component_object; // x20
  const MethodInfo *v43; // x2

  if ( (byte_4E74179 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_1D0F0B4(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
    sub_1D0F0B4(&QuestBoardListEffectBoardOpenComponent_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__0__);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__1__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass31_0_TypeInfo);
    byte_4E74179 = 1;
  }
  v5 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_33;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_33;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_33;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_33;
    v22 = *(Il2CppObject **)(*(_QWORD *)v14 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( !v22 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !v22 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectBoardOpenComponent_TypeInfo->_2.naturalAligment;
    if ( v22->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectBoardOpenComponent_c *)v22->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectBoardOpenComponent_TypeInfo )
        v25 = v22;
      else
        v25 = 0;
LABEL_20:
      v26 = UnityEngine_Object__Instantiate_object__53335036(
              v25,
              transform,
              (const MethodInfo_32DD3FC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
      questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                   (UnityEngine_Object_o *)v26,
                                                                   0,
                                                                   0);
      if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
        return;
      if ( v26 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
        GameObjectExtensions__ResetTransform(gameObject, 0);
        QuestBoardListEffectComponent__Init(
          (QuestBoardListEffectComponent_o *)v26,
          0,
          *(float *)&v26[8].monitor,
          *((float *)&v26[8].monitor + 1),
          v28);
        LODWORD(v26[4].monitor) = v26[9].klass;
        if ( *(_QWORD *)v14 )
        {
          questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
          if ( questBoardListViewManager )
          {
            v29 = this->fields.questBoardListViewManager;
            questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                         (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                         *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                                                                         0);
            if ( v29 )
            {
              QuestBoardListViewManager__SetCenterItem(
                v29,
                (int32_t)questBoardListViewManager,
                this->fields.isScrollAnim,
                *(float *)&v26[7].monitor,
                0);
              v31 = QuestBoardEffectController__ScrollBarDisabled(
                      this,
                      (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
                      *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
                      v30);
              UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v31, 0);
              v32 = (QuestBoardListViewItemDraw_QuestBoardDispOptions_o *)sub_1D0F300(QuestBoardListViewItemDraw_QuestBoardDispOptions_TypeInfo);
              QuestBoardListViewItemDraw_QuestBoardDispOptions___ctor(v32, 1, 0, 0, 0, 0, 0, 0, 0, 0);
              *(_QWORD *)(v5 + 32) = v32;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
              v39 = this->fields.questBoardListViewManager;
              v40 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v40,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__0__,
                0);
              v41 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v41,
                (Il2CppObject *)v5,
                Method_QuestBoardEffectController___c__DisplayClass31_0__StartChangeBoardAppearEffect_b__1__,
                0);
              if ( v39 )
              {
                QuestBoardListViewManager__PlayBoardEffect(v39, (QuestBoardListEffectComponent_o *)v26, v40, v41, 0);
                if ( *(_QWORD *)v14 )
                {
                  questBoardListViewManager = *(QuestBoardListViewManager_o **)(*(_QWORD *)v14 + 24LL);
                  if ( questBoardListViewManager )
                  {
                    Component_object = UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)questBoardListViewManager,
                                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                      QuestBoardEffectController__SetBgmParameter(this, (QuestBoardListEffectComponent_o *)v26, v43);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_1D0F30C(questBoardListViewManager, v7);
    }
LABEL_16:
    v25 = 0;
    goto LABEL_20;
  }
}


bool QuestBoardEffectController___CoOnEffectFinishAction_b__29_0(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_T__o *effectInfoList; // x19
  System_Func_object__bool__o *_9__29_3; // x20
  Il2CppObject *v6; // x21
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4E74182 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_1D0F0B4(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__29_3__);
    sub_1D0F0B4(&QuestBoardEffectController___c_TypeInfo);
    byte_4E74182 = 1;
  }
  v3 = QuestBoardEffectController___c_TypeInfo;
  effectInfoList = (System_Collections_Generic_List_T__o *)this->fields.effectInfoList;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    v3 = QuestBoardEffectController___c_TypeInfo;
  }
  _9__29_3 = (System_Func_object__bool__o *)v3->static_fields->__9__29_3;
  if ( !_9__29_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestBoardEffectController___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__29_3 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__29_3,
      v6,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__29_3__,
      0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__29_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__29_3;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__29_3, (int32_t)_9__29_3, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__29_3,
           (const MethodInfo_32382EC *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__29_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4E74183 & 1) == 0 )
  {
    sub_1D0F0B4(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_1D0F0B4(&StringLiteral_21301/*"isBgmPauseEnded"*/);
    byte_4E74183 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_21301/*"isBgmPauseEnded"*/, 0, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PlayEffectName_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t _1__state; // w8
  struct QuestBoardEffectController_o *_4__this; // x19
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  System_Action_o *v14; // x20
  TerminalSceneComponent_o *terminalSceneComponent; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  struct System_Action_o *scrollBar; // x1
  struct QuestBoardListViewManager_o *v25; // x8
  __int64 v26; // x20
  System_Action_object__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Action_object__o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Action_object__o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  ActionChain_o *v48; // x21
  __int64 v49; // x20
  System_Action_o *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7

  if ( (byte_4E74189 & 1) == 0 )
  {
    sub_1D0F0B4(&ActionChain_TypeInfo);
    sub_1D0F0B4(&System_Action___TypeInfo);
    sub_1D0F0B4(&System_Action_Action____TypeInfo);
    sub_1D0F0B4(&System_Action_Action__TypeInfo);
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&System_Func_bool__TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController_DispDialogMessage__);
    sub_1D0F0B4(&Method_QuestBoardEffectController_PlayMessageEffect__);
    sub_1D0F0B4(&Method_QuestBoardEffectController_SetEffectEndSaveData__);
    sub_1D0F0B4(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_0__);
    sub_1D0F0B4(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_1__);
    sub_1D0F0B4(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_2__);
    sub_1D0F0B4(&UnityEngine_WaitWhile_TypeInfo);
    byte_4E74189 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v14 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
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
                                                               v14,
                                                               0);
        if ( ((unsigned __int8)terminalSceneComponent & 1) == 0
          && !_4__this->fields.isDelayBgmFadeIn
          && !_4__this->fields.messageEffectAfterFadeInBgm )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_27;
          TerminalSceneComponent__playDefaultBgm(terminalSceneComponent, v14, _4__this->fields.bgmFadeInTime, 0);
        }
        questBoardListViewManager = _4__this->fields.questBoardListViewManager;
        if ( questBoardListViewManager )
        {
          terminalSceneComponent = (TerminalSceneComponent_o *)questBoardListViewManager->fields.scrollView;
          if ( terminalSceneComponent )
          {
            scrollBar = (struct System_Action_o *)questBoardListViewManager->fields.scrollBar;
            terminalSceneComponent->fields.TUTORIAL_SPOT_ARROW_POS = (struct UnityEngine_Vector2_o)scrollBar;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&terminalSceneComponent->fields.TUTORIAL_SPOT_ARROW_POS,
              (int32_t)scrollBar,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            v25 = _4__this->fields.questBoardListViewManager;
            if ( v25 )
            {
              terminalSceneComponent = (TerminalSceneComponent_o *)v25->fields.scrollView;
              if ( terminalSceneComponent )
              {
                UIScrollView__UpdateScrollbars((UIScrollView_o *)terminalSceneComponent, 0);
                v26 = sub_1D0F15C(System_Action_Action____TypeInfo, 3);
                v27 = (System_Action_object__o *)sub_1D0F300(System_Action_Action__TypeInfo);
                System_Action_object____ctor(
                  v27,
                  (Il2CppObject *)_4__this,
                  Method_QuestBoardEffectController_PlayMessageEffect__,
                  0);
                if ( v26 )
                {
                  if ( !*(_DWORD *)(v26 + 24) )
                    goto LABEL_28;
                  *(_QWORD *)(v26 + 32) = v27;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)v27, v28, v29, v30, v31, v32, v33);
                  v34 = (System_Action_object__o *)sub_1D0F300(System_Action_Action__TypeInfo);
                  System_Action_object____ctor(
                    v34,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController_SetEffectEndSaveData__,
                    0);
                  if ( *(_DWORD *)(v26 + 24) <= 1u )
                    goto LABEL_28;
                  *(_QWORD *)(v26 + 40) = v34;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 40), (int32_t)v34, v35, v36, v37, v38, v39, v40);
                  v41 = (System_Action_object__o *)sub_1D0F300(System_Action_Action__TypeInfo);
                  System_Action_object____ctor(
                    v41,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController_DispDialogMessage__,
                    0);
                  if ( *(_DWORD *)(v26 + 24) <= 2u )
                    goto LABEL_28;
                  *(_QWORD *)(v26 + 48) = v41;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v26 + 48), (int32_t)v41, v42, v43, v44, v45, v46, v47);
                  v48 = (ActionChain_o *)sub_1D0F300(ActionChain_TypeInfo);
                  ActionChain___ctor_50441276(v48, (System_Action_Action__array *)v26, 0);
                  v49 = sub_1D0F15C(System_Action___TypeInfo, 1);
                  v50 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                  System_Action___ctor(
                    v50,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_2__,
                    0);
                  if ( !v49 )
                    goto LABEL_27;
                  if ( !*(_DWORD *)(v49 + 24) )
LABEL_28:
                    sub_1D0F314(terminalSceneComponent);
                  *(_QWORD *)(v49 + 32) = v50;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v49 + 32), (int32_t)v50, v51, v52, v53, v54, v55, v56);
                  if ( v48 )
                  {
                    terminalSceneComponent = (TerminalSceneComponent_o *)ChainableActionBase__Final(
                                                                           (ChainableActionBase_o *)v48,
                                                                           (System_Action_array *)v49,
                                                                           0);
                    if ( terminalSceneComponent )
                    {
                      ChainableActionBase__Execute((ChainableActionBase_o *)terminalSceneComponent, 0);
                      return 0;
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
    sub_1D0F30C(terminalSceneComponent, v16);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1D0F300(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__29_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1D0F300(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__29_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
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
  int32_t _1__state; // w8
  UnityEngine_Component_o *_4__this; // x19
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v15; // x19

  v2 = this;
  if ( (byte_4E7418A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Func_bool__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController__DestroyObject_b__38_0__);
    this = (QuestBoardEffectController__DestroyObject_d__38_o *)sub_1D0F0B4(&UnityEngine_WaitWhile_TypeInfo);
    byte_4E7418A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = (UnityEngine_Component_o *)v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_15;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
      return 0;
    this = (QuestBoardEffectController__DestroyObject_d__38_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
    if ( !this )
LABEL_15:
      sub_1D0F30C(this, method);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(_4__this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_73359484(v15, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1D0F300(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__DestroyObject_b__38_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1D0F300(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    v2->fields.__2__current = (Il2CppObject *)v6;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
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

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestBoardEffectController__DestroyObject_d__38_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestBoardEffectController__ScrollBarDisabled_d__33_o *v8; // x19
  int32_t _1__state; // w8
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct QuestBoardListViewObject_o *obj; // x1
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitWhile_o *v19; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  bool result; // w0
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x9
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8

  v8 = this;
  if ( (byte_4E7418B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Func_bool__TypeInfo);
    sub_1D0F0B4(&Method_QuestBoardEffectController___c__DisplayClass33_0__ScrollBarDisabled_b__0__);
    sub_1D0F0B4(&QuestBoardEffectController___c__DisplayClass33_0_TypeInfo);
    this = (QuestBoardEffectController__ScrollBarDisabled_d__33_o *)sub_1D0F0B4(&UnityEngine_WaitWhile_TypeInfo);
    byte_4E7418B = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    effectInfo = v8->fields.effectInfo;
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !effectInfo )
      goto LABEL_14;
    if ( effectInfo->fields.isPlaying )
    {
      if ( !_4__this )
        goto LABEL_14;
      questBoardListViewManager = _4__this->fields.questBoardListViewManager;
      if ( !questBoardListViewManager )
        goto LABEL_14;
      this = (QuestBoardEffectController__ScrollBarDisabled_d__33_o *)questBoardListViewManager->fields.scrollView;
      if ( !this )
        goto LABEL_14;
      this[1].monitor = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this[1].monitor, 0, v2, v3, v4, v5, v6, v7);
    }
  }
  else if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v10 = sub_1D0F300(QuestBoardEffectController___c__DisplayClass33_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      obj = v8->fields.obj;
      *(_QWORD *)(v10 + 16) = obj;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)obj, v11, v12, v13, v14, v15, v16);
      v18 = (System_Func_bool__o *)sub_1D0F300(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v18,
        (Il2CppObject *)v10,
        Method_QuestBoardEffectController___c__DisplayClass33_0__ScrollBarDisabled_b__0__,
        0);
      v19 = (UnityEngine_WaitWhile_o *)sub_1D0F300(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v19, v18, 0);
      v8->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1D0F058(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_14:
    sub_1D0F30C(this, method);
  }
  return 0;
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

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestBoardEffectController__ScrollBarDisabled_d__33_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E74184 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController___c_TypeInfo);
    byte_4E74184 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)QuestBoardEffectController___c_TypeInfo->static_fields,
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
    sub_1D0F30C(this, 0);
  return effectInfo->fields.isPlaying;
}


void QuestBoardEffectController___c___SetBgmParameter_b__37_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_c *v2; // x0
  System_String_o *NoVolumeBgm; // x19

  if ( (byte_4E74185 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestBoardEffectController_TypeInfo);
    sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E74185 = 1;
  }
  v2 = QuestBoardEffectController_TypeInfo;
  if ( !QuestBoardEffectController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController_TypeInfo);
    v2 = QuestBoardEffectController_TypeInfo;
  }
  NoVolumeBgm = v2->static_fields->NoVolumeBgm;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(this, method);
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
    sub_1D0F30C(v3, v4);
  v6 = QuestBoardEffectController__DestroyObject(_4__this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)_4__this, v6, 0);
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

  v2 = this;
  if ( (byte_4E74186 & 1) == 0 )
  {
    sub_1D0F0B4(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass36_0_o *)sub_1D0F0B4(&StringLiteral_21301/*"isBgmPauseEnded"*/);
    byte_4E74186 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (terminalSceneComponent = _4__this->fields.terminalSceneComponent) == 0
    || (this = (QuestBoardEffectController___c__DisplayClass36_0_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_21301/*"isBgmPauseEnded"*/, 0, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
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
  QuestBoardEffectController___c__DisplayClass36_1_o *v2; // x19
  struct QuestBoardEffectController___c__DisplayClass36_0_o *CS___8__locals1; // x8
  struct QuestBoardEffectController_o *_4__this; // x8
  struct QuestBoardEffectController___c__DisplayClass36_0_o *v5; // x8
  struct QuestBoardEffectController_o *v6; // x8
  UnityEngine_Object_o *obj; // x20
  struct QuestBoardEffectController___c__DisplayClass36_0_o *v8; // x8

  v2 = this;
  if ( (byte_4E74187 & 1) == 0 )
  {
    this = (QuestBoardEffectController___c__DisplayClass36_1_o *)sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E74187 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
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
                                                                   v2->fields.unPauseBgm,
                                                                   0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v5 = v2->fields.CS___8__locals1;
      if ( !v5 )
        goto LABEL_16;
      v6 = v5->fields.__4__this;
      if ( !v6 )
        goto LABEL_16;
      this = (QuestBoardEffectController___c__DisplayClass36_1_o *)v6->fields.terminalSceneComponent;
      if ( !this )
        goto LABEL_16;
      TerminalSceneComponent__playDefaultBgm(
        (TerminalSceneComponent_o *)this,
        v2->fields.unPauseBgm,
        v6->fields.bgmFadeInTime,
        0);
    }
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_73359484(obj, 0);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
LABEL_16:
    sub_1D0F30C(this, method);
  ActionExtensions__Call(v8->fields.callBack, 0);
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
  QuestBoardEffectController___c__DisplayClass37_0_o *v2; // x19
  struct QuestBoardEffectController_o *_4__this; // x8
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  System_String_o *mPlayBgmName; // x20
  struct QuestBoardListEffectComponent_o *questBoardListEffectComponent; // x8
  float bgmFadeInTime; // s9
  float v8; // s8
  struct QuestBoardEffectController_o *v9; // x8

  v2 = this;
  if ( (byte_4E74188 & 1) == 0 )
  {
    sub_1D0F0B4(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass37_0_o *)sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E74188 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  terminalSceneComponent = _4__this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_12;
  mPlayBgmName = terminalSceneComponent->fields.mPlayBgmName;
  this = (QuestBoardEffectController___c__DisplayClass37_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass37_0_o *)BgmManager_TypeInfo;
  }
  questBoardListEffectComponent = v2->fields.questBoardListEffectComponent;
  if ( !questBoardListEffectComponent )
    goto LABEL_12;
  bgmFadeInTime = questBoardListEffectComponent->fields.bgmFadeInTime;
  v8 = *(float *)&this[5].fields.questBoardListEffectComponent->klass;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_42889060(mPlayBgmName, v8, bgmFadeInTime, 0);
  v9 = v2->fields.__4__this;
  if ( !v9 )
LABEL_12:
    sub_1D0F30C(this, method);
  v9->fields.isDelayBgmFadeIn = 0;
}


void QuestBoardEffectController___c__DisplayClass37_0___SetBgmParameter_b__2(
        QuestBoardEffectController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(this, method);
  _4__this->fields.isDelayBgmFadeIn = 0;
}