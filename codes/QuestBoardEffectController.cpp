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

  if ( (byte_4C3FC32 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
    byte_4C3FC32 = 1;
  }
  v3 = sub_1C372A4(QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void QuestBoardEffectController__StartBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x22
  Il2CppObject *v14; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  QuestBoardListViewManager_o *v22; // x23
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x7
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x8
  QuestBoardListViewManager_o *v28; // x21
  const MethodInfo *v29; // x3
  struct QuestBoardListViewManager_o *v30; // x24
  System_Action_o *v31; // x21
  System_Action_o *v32; // x23
  const MethodInfo *v33; // x4
  System_Collections_IEnumerator_o *v34; // x0
  System_Collections_IEnumerator_o *v35; // x1

  if ( (byte_4C3FC33 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1C37058(&ScrTerminalListTop_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__);
    sub_1C37058(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__);
    sub_1C37058(&QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
    byte_4C3FC33 = 1;
  }
  v5 = sub_1C372A4(QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_45;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v9 = v5 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)effectInfo, v10, v11);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_45;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_45;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    v12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v9 || !QuestBoardObjForWarId )
      goto LABEL_45;
    v14 = *(Il2CppObject **)(*(_QWORD *)v9 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( !v14 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !v14 )
        goto LABEL_16;
    }
    naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment;
    if ( v14->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v17 = v14;
      else
        v17 = 0;
      goto LABEL_20;
    }
LABEL_16:
    v17 = 0;
LABEL_20:
    v18 = UnityEngine_Object__Instantiate_object__51855596(
            v17,
            transform,
            (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v18,
                                                                 0,
                                                                 0);
    if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
      return;
    if ( v18 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
      GameObjectExtensions__ResetTransform(gameObject, 0);
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v18, 0, 0.0, 0.0, v20);
      v22 = this->fields.questBoardListViewManager;
      questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( v22 )
      {
        QuestBoardListViewManager__SetScrollViewPanelDepth(
          v22,
          ScrTerminalListTop_TypeInfo->static_fields->TERMINAL_EFFECT_APPEAR_PLAYING_LIST_DEPTH,
          0,
          v21);
        if ( *(_QWORD *)v9 )
        {
          questBoardListViewManager = this->fields.questBoardListViewManager;
          if ( questBoardListViewManager )
          {
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              questBoardListViewManager,
              *(_DWORD *)(*(_QWORD *)v9 + 16LL),
              0,
              v23);
            questBoardListViewManager = this->fields.questBoardListViewManager;
            if ( questBoardListViewManager )
            {
              QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
                questBoardListViewManager,
                1,
                1,
                0.0,
                HIDWORD(v18[6].monitor),
                0,
                v24);
              if ( *(_QWORD *)v9 )
              {
                questBoardListViewManager = this->fields.questBoardListViewManager;
                if ( questBoardListViewManager )
                {
                  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
                    questBoardListViewManager,
                    0,
                    *(_DWORD *)(*(_QWORD *)v9 + 16LL),
                    0,
                    0,
                    0,
                    0,
                    v25);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4C3FCAD )
                  {
                    sub_1C37058(&TerminalPramsManager_TypeInfo);
                    byte_4C3FCAD = 1;
                  }
                  v26 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v26 = TerminalPramsManager_TypeInfo;
                  }
                  v26->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
                  questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.titleInfoControl;
                  if ( questBoardListViewManager )
                  {
                    TitleInfoControl__setTitleImg((TitleInfoControl_o *)questBoardListViewManager, 1, 1, 0, 0);
                    v27 = *(_QWORD *)v9;
                    if ( *(_QWORD *)v9 )
                    {
                      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                      if ( questBoardListViewManager )
                      {
                        v28 = this->fields.questBoardListViewManager;
                        questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                                     (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                                     *(_DWORD *)(v27 + 16),
                                                                                     0);
                        if ( v28 )
                        {
                          QuestBoardListViewManager__SetCenterItem(
                            v28,
                            (int32_t)questBoardListViewManager,
                            0,
                            *(float *)&v18[7].klass,
                            v29);
                          v30 = this->fields.questBoardListViewManager;
                          v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v31,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__,
                            0);
                          v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v32,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__,
                            0);
                          if ( v30 )
                          {
                            QuestBoardListViewManager__PlayBoardEffect(
                              questBoardListViewManager,
                              (QuestBoardListEffectComponent_o *)v18,
                              v31,
                              v32,
                              v33);
                            questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                            if ( questBoardListViewManager )
                            {
                              v34 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
                                      (ScrTerminalListTop_o *)questBoardListViewManager,
                                      0,
                                      0,
                                      *((float *)&v18[6].klass + 1),
                                      *(float *)&v18[6].monitor,
                                      HIDWORD(v18[6].monitor),
                                      0,
                                      0);
                              UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                (UnityEngine_MonoBehaviour_o *)this,
                                v34,
                                0);
                              questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                              if ( questBoardListViewManager )
                              {
                                v35 = ScrTerminalListTop__CallTerminalTopEffectFadeOutBgm(
                                        (ScrTerminalListTop_o *)questBoardListViewManager,
                                        *((float *)&v18[7].klass + 1),
                                        *(float *)&v18[7].monitor,
                                        0,
                                        0);
                                UnityEngine_MonoBehaviour__StartCoroutine_71252324(
                                  (UnityEngine_MonoBehaviour_o *)this,
                                  v35,
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
    sub_1C372B4(questBoardListViewManager);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct TerminalSceneComponent_o *v19; // x8
  struct TitleInfoControl_o *mTitleInfo; // x1
  const MethodInfo *v21; // x6
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v23; // x21
  Il2CppObject *v24; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  Il2CppObject *current; // x8
  int v31; // w9
  const MethodInfo *v32; // x1
  System_Collections_IEnumerator_o *v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3FC31 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__);
    sub_1C37058(&QuestBoardEffectController___c_TypeInfo);
    byte_4C3FC31 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.terminalSceneComponent, (int32_t)v7, v2, v3);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_31;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.scrTerminalListTop, (int32_t)mTerminalList, v9, v10);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_31;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v13,
    v14);
  v19 = this->fields.terminalSceneComponent;
  if ( !v19 )
    goto LABEL_31;
  mTitleInfo = v19->fields.mTitleInfo;
  this->fields.titleInfoControl = mTitleInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.titleInfoControl, (int32_t)mTitleInfo, v17, v18);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v23 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestBoardEffectController___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v23, v24, Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = v23;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v23, v26, v27);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v23, 0, 1, 0, v21),
        (Instance = this->fields.effectInfoList) == 0) )
  {
LABEL_31:
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v28 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1C372B4(v28);
    v31 = *(_DWORD *)((char *)&v34.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v34.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v31 )
    {
      if ( v31 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v29);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__StartBoardAppearEffect(
        this,
        (QuestBoardEffectController_BoardEffectInfo_o *)current,
        v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v33 = QuestBoardEffectController__CoOnEffectFinishAction(this, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v33, 0);
}


void QuestBoardEffectController__StartBoardFadeEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *fadePanel; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x9
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *transform; // x22
  QuestBoardListEffectComponent_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  struct QuestBoardListViewManager_o *v16; // x24
  System_Action_o *v17; // x19
  const MethodInfo *v18; // x4

  if ( (byte_4C3FC34 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__);
    sub_1C37058(&QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
    byte_4C3FC34 = 1;
  }
  v5 = sub_1C372A4(QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)effectInfo, v7, v8);
  v9 = *(_QWORD *)(v5 + 16);
  if ( !v9 )
    goto LABEL_12;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_12;
  fadePanel = (Il2CppObject *)questBoardListViewManager->fields.fadePanel;
  if ( !fadePanel )
    goto LABEL_12;
  v11 = *(Il2CppObject **)(v9 + 24);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fadePanel, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  fadePanel = UnityEngine_Object__Instantiate_object__51855596(
                v11,
                transform,
                (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v13 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v13, 0, 0.0, 0.0, v15),
        v16 = this->fields.questBoardListViewManager,
        v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__,
          0),
        !v16) )
  {
LABEL_12:
    sub_1C372B4(fadePanel);
  }
  QuestBoardListViewManager__PlayBoardEffect((QuestBoardListViewManager_o *)fadePanel, v13, 0, v17, v18);
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

  if ( (byte_4C3FC35 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_1C37058(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__);
    sub_1C37058(&QuestBoardEffectController___c_TypeInfo);
    byte_4C3FC35 = 1;
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
    _9__12_3 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_3,
      v6,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__,
      0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__12_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__12_3, (int32_t)_9__12_3, v8, v9);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__12_3,
           (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4C3FC36 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_1C37058(&StringLiteral_20907/*"isBgmPauseEnded"*/);
    byte_4C3FC36 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1C372B4(this);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_20907/*"isBgmPauseEnded"*/, 0, 0);
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

  if ( (byte_4C3FC37 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__);
    byte_4C3FC37 = 1;
  }
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetScrollBarEnable(questBoardListViewManager, 1, v2),
        scrTerminalListTop = this->fields.scrTerminalListTop,
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__,
          0),
        !scrTerminalListTop) )
  {
    sub_1C372B4(questBoardListViewManager);
  }
  v7 = ScrTerminalListTop__CoWaitEffectWhileNotification(scrTerminalListTop, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_4(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4C3FC38 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3FC38 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
      v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v5, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(Instance);
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
  const MethodInfo *v12; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  System_String_o *playTerminalTopEffectName; // x20
  struct ScrTerminalListTop_o *v15; // x8
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  System_Action_o *v18; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v20; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v22; // x8
  EventEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4C3FC3A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__);
    sub_1C37058(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__);
    sub_1C37058(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FC3A = 1;
  }
  entity = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
            v12);
          scrTerminalListTop = _4__this->fields.scrTerminalListTop;
          if ( scrTerminalListTop )
          {
            playTerminalTopEffectName = scrTerminalListTop->fields.playTerminalTopEffectName;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(playTerminalTopEffectName, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            terminalSceneComponent = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
            v15 = _4__this->fields.scrTerminalListTop;
            if ( v15 )
            {
              if ( terminalSceneComponent )
              {
                if ( EventMaster__TryGetEntityByBannerEffectName(
                       (EventMaster_o *)terminalSceneComponent,
                       &entity,
                       v15->fields.playTerminalTopEffectName,
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
                  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v18,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__,
                    0);
                  if ( !_4__this->fields.isDisplayDialogAfterEffectFinish )
                  {
                    ActionExtensions__Call(v18, 0);
                    return 0;
                  }
                  terminalSceneComponent = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  dialogParameterAfterEffectFinish = _4__this->fields.dialogParameterAfterEffectFinish;
                  if ( dialogParameterAfterEffectFinish )
                  {
                    v20 = (CommonUI_o *)terminalSceneComponent;
                    messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    terminalSceneComponent = (TerminalSceneComponent_o *)LocalizationManager__Get(
                                                                           messageLocalizationKey,
                                                                           0);
                    v22 = _4__this->fields.dialogParameterAfterEffectFinish;
                    if ( v22 )
                    {
                      if ( v20 )
                      {
                        CommonUI__OpenNotificationDialog_31209248(
                          v20,
                          (System_String_o *)StringLiteral_1/*""*/,
                          (System_String_o *)terminalSceneComponent,
                          v18,
                          v22->fields.messagePosY,
                          v22->fields.buttonPosY,
                          -1,
                          0,
                          0,
                          0,
                          v22->fields.canMaskTouchClose,
                          v22->fields.messageFontSize,
                          v22->fields.onClickOkSeKind,
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
    sub_1C372B4(terminalSceneComponent);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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

  if ( (byte_4C3FC39 & 1) == 0 )
  {
    sub_1C37058(&QuestBoardEffectController___c_TypeInfo);
    byte_4C3FC39 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestBoardEffectController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  effectInfo->fields.isPlaying = 0;
}