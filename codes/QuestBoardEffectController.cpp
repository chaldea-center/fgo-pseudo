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
  const MethodInfo *v5; // x3

  if ( (byte_4CB2F1F & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
    byte_4CB2F1F = 1;
  }
  v3 = sub_1C6BC54(QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void QuestBoardEffectController__StartBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x22
  Il2CppObject *v15; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  QuestBoardListViewManager_o *v23; // x23
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x7
  TerminalPramsManager_c *v27; // x0
  __int64 v28; // x8
  QuestBoardListViewManager_o *v29; // x21
  const MethodInfo *v30; // x3
  struct QuestBoardListViewManager_o *v31; // x24
  System_Action_o *v32; // x21
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x4
  System_Collections_IEnumerator_o *v35; // x0
  System_Collections_IEnumerator_o *v36; // x1

  if ( (byte_4CB2F20 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1C6BA08(&ScrTerminalListTop_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__);
    sub_1C6BA08(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__);
    sub_1C6BA08(&QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
    byte_4CB2F20 = 1;
  }
  v5 = sub_1C6BC54(QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_45;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v10 = v5 + 24;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)effectInfo, v11, v12);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_45;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_45;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    v13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v10 || !QuestBoardObjForWarId )
      goto LABEL_45;
    v15 = *(Il2CppObject **)(*(_QWORD *)v10 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( !v15 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !v15 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v18 = v15;
      else
        v18 = 0;
      goto LABEL_20;
    }
LABEL_16:
    v18 = 0;
LABEL_20:
    v19 = UnityEngine_Object__Instantiate_object__52199488(
            v18,
            transform,
            (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v19,
                                                                 0,
                                                                 0);
    if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
      return;
    if ( v19 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      GameObjectExtensions__ResetTransform(gameObject, 0);
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v19, 0, 0.0, 0.0, v21);
      v23 = this->fields.questBoardListViewManager;
      questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( v23 )
      {
        QuestBoardListViewManager__SetScrollViewPanelDepth(
          v23,
          ScrTerminalListTop_TypeInfo->static_fields->TERMINAL_EFFECT_APPEAR_PLAYING_LIST_DEPTH,
          0,
          v22);
        if ( *(_QWORD *)v10 )
        {
          questBoardListViewManager = this->fields.questBoardListViewManager;
          if ( questBoardListViewManager )
          {
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              questBoardListViewManager,
              *(_DWORD *)(*(_QWORD *)v10 + 16LL),
              0,
              v24);
            questBoardListViewManager = this->fields.questBoardListViewManager;
            if ( questBoardListViewManager )
            {
              QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
                questBoardListViewManager,
                1,
                1,
                0.0,
                HIDWORD(v19[6].monitor),
                0,
                v25);
              if ( *(_QWORD *)v10 )
              {
                questBoardListViewManager = this->fields.questBoardListViewManager;
                if ( questBoardListViewManager )
                {
                  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
                    questBoardListViewManager,
                    0,
                    *(_DWORD *)(*(_QWORD *)v10 + 16LL),
                    0,
                    0,
                    0,
                    0,
                    v26);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4CB2F9A )
                  {
                    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                    byte_4CB2F9A = 1;
                  }
                  v27 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v27 = TerminalPramsManager_TypeInfo;
                  }
                  v27->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
                  questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.titleInfoControl;
                  if ( questBoardListViewManager )
                  {
                    TitleInfoControl__setTitleImg((TitleInfoControl_o *)questBoardListViewManager, 1, 1, 0, 0);
                    v28 = *(_QWORD *)v10;
                    if ( *(_QWORD *)v10 )
                    {
                      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                      if ( questBoardListViewManager )
                      {
                        v29 = this->fields.questBoardListViewManager;
                        questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                                     (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                                     *(_DWORD *)(v28 + 16),
                                                                                     0);
                        if ( v29 )
                        {
                          QuestBoardListViewManager__SetCenterItem(
                            v29,
                            (int32_t)questBoardListViewManager,
                            0,
                            *(float *)&v19[7].klass,
                            v30);
                          v31 = this->fields.questBoardListViewManager;
                          v32 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                          System_Action___ctor(
                            v32,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__,
                            0);
                          v33 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                          System_Action___ctor(
                            v33,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__,
                            0);
                          if ( v31 )
                          {
                            QuestBoardListViewManager__PlayBoardEffect(
                              questBoardListViewManager,
                              (QuestBoardListEffectComponent_o *)v19,
                              v32,
                              v33,
                              v34);
                            questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                            if ( questBoardListViewManager )
                            {
                              v35 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
                                      (ScrTerminalListTop_o *)questBoardListViewManager,
                                      0,
                                      0,
                                      *((float *)&v19[6].klass + 1),
                                      *(float *)&v19[6].monitor,
                                      HIDWORD(v19[6].monitor),
                                      0,
                                      0);
                              UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                (UnityEngine_MonoBehaviour_o *)this,
                                v35,
                                0);
                              questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                              if ( questBoardListViewManager )
                              {
                                v36 = ScrTerminalListTop__CallTerminalTopEffectFadeOutBgm(
                                        (ScrTerminalListTop_o *)questBoardListViewManager,
                                        *((float *)&v19[7].klass + 1),
                                        *(float *)&v19[7].monitor,
                                        0,
                                        0);
                                UnityEngine_MonoBehaviour__StartCoroutine_71644868(
                                  (UnityEngine_MonoBehaviour_o *)this,
                                  v36,
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
      }
    }
LABEL_45:
    sub_1C6BC60(questBoardListViewManager, v7);
  }
}


void QuestBoardEffectController__StartBoardEffect(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TerminalSceneComponent_c *v5; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct TerminalSceneComponent_o *v20; // x8
  struct TitleInfoControl_o *mTitleInfo; // x1
  const MethodInfo *v22; // x6
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v24; // x21
  Il2CppObject *v25; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  Il2CppObject *current; // x8
  int v33; // w9
  const MethodInfo *v34; // x1
  System_Collections_IEnumerator_o *v35; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB2F1E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__);
    sub_1C6BA08(&QuestBoardEffectController___c_TypeInfo);
    byte_4CB2F1E = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v5->static_fields->mInstance;
  v7 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.terminalSceneComponent, (int32_t)v7, v2, v3);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_31;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scrTerminalListTop, (int32_t)mTerminalList, v10, v11);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_31;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v14,
    v15);
  v20 = this->fields.terminalSceneComponent;
  if ( !v20 )
    goto LABEL_31;
  mTitleInfo = v20->fields.mTitleInfo;
  this->fields.titleInfoControl = mTitleInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.titleInfoControl, (int32_t)mTitleInfo, v18, v19);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  Instance = QuestBoardEffectController___c_TypeInfo;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    Instance = QuestBoardEffectController___c_TypeInfo;
  }
  v24 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestBoardEffectController___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v24 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v24, v25, Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v24, v27, v28);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v24, 0, 1, 0, v22),
        (Instance = this->fields.effectInfoList) == 0) )
  {
LABEL_31:
    sub_1C6BC60(Instance, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v29 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1C6BC60(v29, v30);
    v33 = *(_DWORD *)((char *)&v36.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v36.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v33 )
    {
      if ( v33 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v31);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__StartBoardAppearEffect(
        this,
        (QuestBoardEffectController_BoardEffectInfo_o *)current,
        v31);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v35 = QuestBoardEffectController__CoOnEffectFinishAction(this, v34);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v35, 0);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x9
  Il2CppObject *v12; // x21
  UnityEngine_Transform_o *transform; // x22
  QuestBoardListEffectComponent_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  struct QuestBoardListViewManager_o *v17; // x24
  System_Action_o *v18; // x19
  const MethodInfo *v19; // x4

  if ( (byte_4CB2F21 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__);
    sub_1C6BA08(&QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
    byte_4CB2F21 = 1;
  }
  v5 = sub_1C6BC54(QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)effectInfo, v8, v9);
  v10 = *(_QWORD *)(v5 + 16);
  if ( !v10 )
    goto LABEL_12;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_12;
  fadePanel = (Il2CppObject *)questBoardListViewManager->fields.fadePanel;
  if ( !fadePanel )
    goto LABEL_12;
  v12 = *(Il2CppObject **)(v10 + 24);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fadePanel, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  fadePanel = UnityEngine_Object__Instantiate_object__52199488(
                v12,
                transform,
                (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v14 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v14, 0, 0.0, 0.0, v16),
        v17 = this->fields.questBoardListViewManager,
        v18 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__,
          0),
        !v17) )
  {
LABEL_12:
    sub_1C6BC60(fadePanel, v7);
  }
  QuestBoardListViewManager__PlayBoardEffect((QuestBoardListViewManager_o *)fadePanel, v14, 0, v18, v19);
}


bool QuestBoardEffectController___CoOnEffectFinishAction_b__12_0(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_T__o *effectInfoList; // x19
  System_Func_object__bool__o *_9__12_3; // x20
  Il2CppObject *v6; // x21
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB2F22 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_1C6BA08(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__);
    sub_1C6BA08(&QuestBoardEffectController___c_TypeInfo);
    byte_4CB2F22 = 1;
  }
  v3 = QuestBoardEffectController___c_TypeInfo;
  effectInfoList = (System_Collections_Generic_List_T__o *)this->fields.effectInfoList;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    v3 = QuestBoardEffectController___c_TypeInfo;
  }
  _9__12_3 = (System_Func_object__bool__o *)v3->static_fields->__9__12_3;
  if ( !_9__12_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestBoardEffectController___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__12_3 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_3,
      v6,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__,
      0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__12_3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_3, (int32_t)_9__12_3, v8, v9);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__12_3,
           (const MethodInfo_3124430 *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4CB2F23 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_1C6BA08(&StringLiteral_20972/*"isBgmPauseEnded"*/);
    byte_4CB2F23 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_20972/*"isBgmPauseEnded"*/, 0, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_2(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  ScrTerminalListTop_o *scrTerminalListTop; // x20
  System_Action_o *v6; // x21
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4CB2F24 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__);
    byte_4CB2F24 = 1;
  }
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetScrollBarEnable(questBoardListViewManager, 1, v2),
        scrTerminalListTop = this->fields.scrTerminalListTop,
        v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__,
          0),
        !scrTerminalListTop) )
  {
    sub_1C6BC60(questBoardListViewManager, method);
  }
  v7 = ScrTerminalListTop__CoWaitEffectWhileNotification(scrTerminalListTop, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_4(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4CB2F25 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CB2F25 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__CancelPause(Instance, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
  {
    Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v6, 0);
      return;
    }
LABEL_11:
    sub_1C6BC60(Instance, v4);
  }
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


void QuestBoardEffectController__CoOnEffectFinishAction_d__12___ctor(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__CoOnEffectFinishAction_d__12__MoveNext(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct QuestBoardEffectController_o *_4__this; // x19
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitWhile_o *v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  System_Action_o *v10; // x20
  TerminalSceneComponent_o *terminalSceneComponent; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  System_String_o *playTerminalTopEffectName; // x20
  struct ScrTerminalListTop_o *v16; // x8
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  System_Action_o *v19; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v21; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v23; // x8
  EventEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4CB2F27 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__);
    sub_1C6BA08(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__);
    sub_1C6BA08(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2F27 = 1;
  }
  entity = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__,
      0);
    if ( _4__this )
    {
      terminalSceneComponent = _4__this->fields.terminalSceneComponent;
      if ( terminalSceneComponent )
      {
        if ( !TerminalSceneComponent__TryPlayGrandBgm(terminalSceneComponent, v10, 0) )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_32;
          TerminalSceneComponent__playDefaultBgm(terminalSceneComponent, v10, 0);
        }
        terminalSceneComponent = (TerminalSceneComponent_o *)_4__this->fields.questBoardListViewManager;
        if ( terminalSceneComponent )
        {
          QuestBoardListViewManager__SetScrollViewPanelDepth(
            (QuestBoardListViewManager_o *)terminalSceneComponent,
            0,
            1,
            v13);
          scrTerminalListTop = _4__this->fields.scrTerminalListTop;
          if ( scrTerminalListTop )
          {
            playTerminalTopEffectName = scrTerminalListTop->fields.playTerminalTopEffectName;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(playTerminalTopEffectName, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            terminalSceneComponent = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
            v16 = _4__this->fields.scrTerminalListTop;
            if ( v16 )
            {
              if ( terminalSceneComponent )
              {
                if ( EventMaster__TryGetEntityByBannerEffectName(
                       (EventMaster_o *)terminalSceneComponent,
                       &entity,
                       v16->fields.playTerminalTopEffectName,
                       0) )
                {
                  terminalSceneComponent = (TerminalSceneComponent_o *)entity;
                  if ( !entity )
                    goto LABEL_32;
                  id = entity->fields.id;
                  BannerEffectEventTutorialFlag = EventEntity__GetBannerEffectEventTutorialFlag(entity, 0);
                  EventTutorialMaster__RequestTutorialEventSet(id, BannerEffectEventTutorialFlag, 0, 0);
                }
                terminalSceneComponent = (TerminalSceneComponent_o *)_4__this->fields.scrTerminalListTop;
                if ( terminalSceneComponent )
                {
                  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)terminalSceneComponent, 1, 0, 0);
                  v19 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v19,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__,
                    0);
                  if ( !_4__this->fields.isDisplayDialogAfterEffectFinish )
                  {
                    ActionExtensions__Call(v19, 0);
                    return 0;
                  }
                  terminalSceneComponent = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  dialogParameterAfterEffectFinish = _4__this->fields.dialogParameterAfterEffectFinish;
                  if ( dialogParameterAfterEffectFinish )
                  {
                    v21 = (CommonUI_o *)terminalSceneComponent;
                    messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    terminalSceneComponent = (TerminalSceneComponent_o *)LocalizationManager__Get(
                                                                           messageLocalizationKey,
                                                                           0);
                    v23 = _4__this->fields.dialogParameterAfterEffectFinish;
                    if ( v23 )
                    {
                      if ( v21 )
                      {
                        CommonUI__OpenNotificationDialog_31418656(
                          v21,
                          (System_String_o *)StringLiteral_1/*""*/,
                          (System_String_o *)terminalSceneComponent,
                          v19,
                          v23->fields.messagePosY,
                          v23->fields.buttonPosY,
                          -1,
                          0,
                          0,
                          0,
                          v23->fields.canMaskTouchClose,
                          v23->fields.messageFontSize,
                          v23->fields.onClickOkSeKind,
                          0,
                          0,
                          0,
                          0);
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
    }
LABEL_32:
    sub_1C6BC60(terminalSceneComponent, v12);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_IDisposable_Dispose(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB2F26 & 1) == 0 )
  {
    sub_1C6BA08(&QuestBoardEffectController___c_TypeInfo);
    byte_4CB2F26 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestBoardEffectController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestBoardEffectController___c___ctor(QuestBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardEffectController___c___CoOnEffectFinishAction_b__12_3(
        QuestBoardEffectController___c_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  if ( !effectInfo )
    sub_1C6BC60(this, 0);
  return effectInfo->fields.isPlaying;
}


void QuestBoardEffectController___c___StartBoardEffect_b__11_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
}


void QuestBoardEffectController___c__DisplayClass13_0___ctor(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass13_0___StartBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  struct QuestBoardEffectController_o *_4__this; // x9
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0
    || (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)_4__this->fields.questBoardListViewManager) == 0 )
  {
    sub_1C6BC60(this, method);
  }
  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
    (QuestBoardListViewManager_o *)this,
    1,
    effectInfo->fields.targetBoardWarId,
    0,
    0,
    0,
    0,
    v2);
}


void QuestBoardEffectController___c__DisplayClass13_0___StartBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardEffectController_o *_4__this; // x8
  QuestBoardEffectController___c__DisplayClass13_0_o *v4; // x19
  const MethodInfo *v5; // x2
  struct QuestBoardEffectController_o *v6; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)_4__this->fields.questBoardListViewManager) == 0)
    || (QuestBoardListViewManager__InitListObject((QuestBoardListViewManager_o *)this, 3, v2),
        (v6 = v4->fields.__4__this) == 0)
    || (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)v6->fields.questBoardListViewManager) == 0
    || (QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, 0, v5),
        (effectInfo = v4->fields.effectInfo) == 0) )
  {
    sub_1C6BC60(this, method);
  }
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass14_0___ctor(
        QuestBoardEffectController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass14_0___StartBoardFadeEffect_b__0(
        QuestBoardEffectController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_1C6BC60(this, method);
  effectInfo->fields.isPlaying = 0;
}