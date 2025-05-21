void __fastcall QuestBoardEffectController___ctor(QuestBoardEffectController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall QuestBoardEffectController__CoOnEffectFinishAction(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B41763 & 1) == 0 )
  {
    sub_1BDB878(&QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo, method);
    byte_4B41763 = 1;
  }
  v3 = sub_1BDBAC4(QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall QuestBoardEffectController__StartBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x22
  Il2CppObject *v23; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  QuestBoardListViewManager_o *v31; // x23
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x7
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x8
  QuestBoardListViewManager_o *v37; // x21
  const MethodInfo *v38; // x3
  struct QuestBoardListViewManager_o *v39; // x24
  System_Action_o *v40; // x21
  System_Action_o *v41; // x23
  const MethodInfo *v42; // x4
  System_Collections_IEnumerator_o *v43; // x0
  System_Collections_IEnumerator_o *v44; // x1

  if ( (byte_4B41764 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, effectInfo);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&QuestBoardListEffectAppearComponent_TypeInfo, v7);
    sub_1BDB878(&ScrTerminalListTop_TypeInfo, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__, v10);
    sub_1BDB878(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__, v11);
    sub_1BDB878(&QuestBoardEffectController___c__DisplayClass13_0_TypeInfo, v12);
    byte_4B41764 = 1;
  }
  v13 = sub_1BDBAC4(QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_45;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = effectInfo;
  v18 = v13 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)effectInfo, v19, v20);
  if ( !*(_QWORD *)(v13 + 24) )
    goto LABEL_45;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_45;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v13 + 24) + 16LL),
                                                    v21);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0LL,
                                                               0LL);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v18 || !QuestBoardObjForWarId )
      goto LABEL_45;
    v23 = *(Il2CppObject **)(*(_QWORD *)v18 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0LL);
    if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      if ( !v23 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !v23 )
        goto LABEL_16;
    }
    methodPtr_low = LOBYTE(QuestBoardListEffectAppearComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v26 = v23;
      else
        v26 = 0LL;
      goto LABEL_20;
    }
LABEL_16:
    v26 = 0LL;
LABEL_20:
    v27 = UnityEngine_Object__Instantiate_object__51108816(
            v26,
            transform,
            (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v27,
                                                                 0LL,
                                                                 0LL);
    if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
      return;
    if ( v27 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
      GameObjectExtensions__ResetTransform(gameObject, 0LL);
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v27, 0, 0.0, 0.0, v29);
      v31 = this->fields.questBoardListViewManager;
      questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop_TypeInfo;
      if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      if ( v31 )
      {
        QuestBoardListViewManager__SetScrollViewPanelDepth(
          v31,
          ScrTerminalListTop_TypeInfo->static_fields->TERMINAL_EFFECT_APPEAR_PLAYING_LIST_DEPTH,
          0,
          v30);
        if ( *(_QWORD *)v18 )
        {
          questBoardListViewManager = this->fields.questBoardListViewManager;
          if ( questBoardListViewManager )
          {
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              questBoardListViewManager,
              *(_DWORD *)(*(_QWORD *)v18 + 16LL),
              0,
              v32);
            questBoardListViewManager = this->fields.questBoardListViewManager;
            if ( questBoardListViewManager )
            {
              QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
                questBoardListViewManager,
                1,
                1,
                0.0,
                HIDWORD(v27[6].monitor),
                0LL,
                v33);
              if ( *(_QWORD *)v18 )
              {
                questBoardListViewManager = this->fields.questBoardListViewManager;
                if ( questBoardListViewManager )
                {
                  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
                    questBoardListViewManager,
                    0,
                    *(_DWORD *)(*(_QWORD *)v18 + 16LL),
                    0,
                    0,
                    0,
                    0,
                    v34);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4B417DD )
                  {
                    sub_1BDB878(&TerminalPramsManager_TypeInfo, v15);
                    byte_4B417DD = 1;
                  }
                  v35 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v35 = TerminalPramsManager_TypeInfo;
                  }
                  v35->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
                  questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.titleInfoControl;
                  if ( questBoardListViewManager )
                  {
                    TitleInfoControl__setTitleImg((TitleInfoControl_o *)questBoardListViewManager, 1, 1, 0, 0LL);
                    v36 = *(_QWORD *)v18;
                    if ( *(_QWORD *)v18 )
                    {
                      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                      if ( questBoardListViewManager )
                      {
                        v37 = this->fields.questBoardListViewManager;
                        questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                                     (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                                     *(_DWORD *)(v36 + 16),
                                                                                     0LL);
                        if ( v37 )
                        {
                          QuestBoardListViewManager__SetCenterItem(
                            v37,
                            (int32_t)questBoardListViewManager,
                            0,
                            *(float *)&v27[7].klass,
                            v38);
                          v39 = this->fields.questBoardListViewManager;
                          v40 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v40,
                            (Il2CppObject *)v13,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__,
                            0LL);
                          v41 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                          System_Action___ctor(
                            v41,
                            (Il2CppObject *)v13,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__,
                            0LL);
                          if ( v39 )
                          {
                            QuestBoardListViewManager__PlayBoardEffect(
                              questBoardListViewManager,
                              (QuestBoardListEffectComponent_o *)v27,
                              v40,
                              v41,
                              v42);
                            questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                            if ( questBoardListViewManager )
                            {
                              v43 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
                                      (ScrTerminalListTop_o *)questBoardListViewManager,
                                      0,
                                      0,
                                      *((float *)&v27[6].klass + 1),
                                      *(float *)&v27[6].monitor,
                                      HIDWORD(v27[6].monitor),
                                      0LL,
                                      0LL);
                              UnityEngine_MonoBehaviour__StartCoroutine_70269772(
                                (UnityEngine_MonoBehaviour_o *)this,
                                v43,
                                0LL);
                              questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                              if ( questBoardListViewManager )
                              {
                                v44 = ScrTerminalListTop__CallTerminalTopEffectFadeOutBgm(
                                        (ScrTerminalListTop_o *)questBoardListViewManager,
                                        *((float *)&v27[7].klass + 1),
                                        *(float *)&v27[7].monitor,
                                        0LL,
                                        0LL);
                                UnityEngine_MonoBehaviour__StartCoroutine_70269772(
                                  (UnityEngine_MonoBehaviour_o *)this,
                                  v44,
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
      }
    }
LABEL_45:
    sub_1BDBAD4(questBoardListViewManager, v15);
  }
}


void __fastcall QuestBoardEffectController__StartBoardEffect(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o **p_mInstance; // x8
  struct TerminalSceneComponent_o *v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  struct QuestBoardListViewManager_o *mQuestBoardListViewManager; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct TerminalSceneComponent_o *v28; // x8
  struct TitleInfoControl_o *mTitleInfo; // x1
  const MethodInfo *v30; // x6
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v32; // x21
  Il2CppObject *v33; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _BOOL8 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  QuestBoardEffectController_BoardEffectInfo_o *current; // x8
  int klass; // w9
  const MethodInfo *v42; // x1
  System_Collections_IEnumerator_o *v43; // x0
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B41762 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__,
      v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__,
      v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__,
      v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__, v8);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, v10);
    sub_1BDB878(&Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__, v11);
    sub_1BDB878(&QuestBoardEffectController___c_TypeInfo, v12);
    byte_4B41762 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B3EEEF )
  {
    sub_1BDB878(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3EEEF = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  p_mInstance = &v13->static_fields->mInstance;
  v15 = *p_mInstance;
  this->fields.terminalSceneComponent = *p_mInstance;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.terminalSceneComponent, (int32_t)v15, v2, v3);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_31;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.scrTerminalListTop, (int32_t)mTerminalList, v18, v19);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_31;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v22,
    v23);
  v28 = this->fields.terminalSceneComponent;
  if ( !v28 )
    goto LABEL_31;
  mTitleInfo = v28->fields.mTitleInfo;
  this->fields.titleInfoControl = mTitleInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.titleInfoControl, (int32_t)mTitleInfo, v26, v27);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  Instance = QuestBoardEffectController___c_TypeInfo;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    Instance = QuestBoardEffectController___c_TypeInfo;
  }
  v32 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestBoardEffectController___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v32 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v32, v33, Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__, 0LL);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = v32;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v32, v35, v36);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v32, 0, 1, 0, v30),
        (Instance = this->fields.effectInfoList) == 0LL) )
  {
LABEL_31:
    sub_1BDBAD4(Instance, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v37 )
      break;
    current = (QuestBoardEffectController_BoardEffectInfo_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1BDBAD4(v37, v38);
    klass = (int)v44.fields._current[2].klass;
    BYTE4(v44.fields._current[2].klass) = 1;
    if ( klass )
    {
      if ( klass == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(this, current, v39);
      else
        current->fields.isPlaying = 0;
    }
    else
    {
      QuestBoardEffectController__StartBoardAppearEffect(this, current, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v43 = QuestBoardEffectController__CoOnEffectFinishAction(this, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
}


void __fastcall QuestBoardEffectController__StartBoardFadeEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *fadePanel; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x9
  Il2CppObject *v16; // x21
  UnityEngine_Transform_o *transform; // x22
  QuestBoardListEffectComponent_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x2
  struct QuestBoardListViewManager_o *v21; // x24
  System_Action_o *v22; // x19
  const MethodInfo *v23; // x4

  if ( (byte_4B41765 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, effectInfo);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__, v7);
    sub_1BDB878(&QuestBoardEffectController___c__DisplayClass14_0_TypeInfo, v8);
    byte_4B41765 = 1;
  }
  v9 = sub_1BDBAC4(QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = effectInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)effectInfo, v12, v13);
  v14 = *(_QWORD *)(v9 + 16);
  if ( !v14 )
    goto LABEL_12;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_12;
  fadePanel = (Il2CppObject *)questBoardListViewManager->fields.fadePanel;
  if ( !fadePanel )
    goto LABEL_12;
  v16 = *(Il2CppObject **)(v14 + 24);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fadePanel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  fadePanel = UnityEngine_Object__Instantiate_object__51108816(
                v16,
                transform,
                (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v18 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0LL),
        GameObjectExtensions__ResetTransform(gameObject, 0LL),
        QuestBoardListEffectComponent__Init(v18, 0, 0.0, 0.0, v20),
        v21 = this->fields.questBoardListViewManager,
        v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v9,
          Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__,
          0LL),
        !v21) )
  {
LABEL_12:
    sub_1BDBAD4(fadePanel, v11);
  }
  QuestBoardListViewManager__PlayBoardEffect((QuestBoardListViewManager_o *)fadePanel, v18, 0LL, v22, v23);
}


bool __fastcall QuestBoardEffectController___CoOnEffectFinishAction_b__12_0(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  QuestBoardEffectController___c_c *v6; // x0
  System_Collections_Generic_List_T__o *effectInfoList; // x19
  System_Func_object__bool__o *_9__12_3; // x20
  Il2CppObject *v9; // x21
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B41766 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___, method);
    sub_1BDB878(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo, v3);
    sub_1BDB878(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__, v4);
    sub_1BDB878(&QuestBoardEffectController___c_TypeInfo, v5);
    byte_4B41766 = 1;
  }
  v6 = QuestBoardEffectController___c_TypeInfo;
  effectInfoList = (System_Collections_Generic_List_T__o *)this->fields.effectInfoList;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    v6 = QuestBoardEffectController___c_TypeInfo;
  }
  _9__12_3 = (System_Func_object__bool__o *)v6->static_fields->__9__12_3;
  if ( !_9__12_3 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = QuestBoardEffectController___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__12_3 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_3,
      v9,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__,
      0LL);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__12_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__12_3, (int32_t)_9__12_3, v11, v12);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__12_3,
           (const MethodInfo_301CDFC *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void __fastcall QuestBoardEffectController___CoOnEffectFinishAction_b__12_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  __int64 v3; // x1
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4B41767 & 1) == 0 )
  {
    sub_1BDB878(&BgmManager_TypeInfo, method);
    this = (QuestBoardEffectController_o *)sub_1BDB878(&StringLiteral_20917/*"isBgmPauseEnded"*/, v3);
    byte_4B41767 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0LL )
  {
    sub_1BDBAD4(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_20917/*"isBgmPauseEnded"*/, 0, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall QuestBoardEffectController___CoOnEffectFinishAction_b__12_2(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  QuestBoardListViewManager_o *questBoardListViewManager; // x0
  ScrTerminalListTop_o *scrTerminalListTop; // x20
  System_Action_o *v7; // x21
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4B41768 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__, v4);
    byte_4B41768 = 1;
  }
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetScrollBarEnable(questBoardListViewManager, 1, v2),
        scrTerminalListTop = this->fields.scrTerminalListTop,
        v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v7,
          (Il2CppObject *)this,
          Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__,
          0LL),
        !scrTerminalListTop) )
  {
    sub_1BDBAD4(questBoardListViewManager, method);
  }
  v8 = ScrTerminalListTop__CoWaitEffectWhileNotification(scrTerminalListTop, v7, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


void __fastcall QuestBoardEffectController___CoOnEffectFinishAction_b__12_4(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B41769 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    byte_4B41769 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MissionNotifyManager__CancelPause(Instance, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(v7, 0LL);
      return;
    }
LABEL_11:
    sub_1BDBAD4(Instance, v5);
  }
}


void __fastcall QuestBoardEffectController_BoardEffectInfo___ctor(
        QuestBoardEffectController_BoardEffectInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardEffectController_DialogParameter___ctor(
        QuestBoardEffectController_DialogParameter_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardEffectController__CoOnEffectFinishAction_d__12___ctor(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestBoardEffectController__CoOnEffectFinishAction_d__12__MoveNext(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
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
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct QuestBoardEffectController_o *_4__this; // x19
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  System_Action_o *v19; // x20
  TerminalSceneComponent_o *terminalSceneComponent; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  System_String_o *playTerminalTopEffectName; // x20
  System_Action_o *v25; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v27; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v29; // x8

  if ( (byte_4B4176B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&System_Func_bool__TypeInfo, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__, v5);
    sub_1BDB878(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__, v6);
    sub_1BDB878(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&UnityEngine_WaitWhile_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B4176B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__,
      0LL);
    if ( _4__this )
    {
      terminalSceneComponent = _4__this->fields.terminalSceneComponent;
      if ( terminalSceneComponent )
      {
        if ( !TerminalSceneComponent__TryPlayGrandBgm(terminalSceneComponent, v19, 0LL) )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_25;
          TerminalSceneComponent__playDefaultBgm(terminalSceneComponent, v19, 0LL);
        }
        terminalSceneComponent = (TerminalSceneComponent_o *)_4__this->fields.questBoardListViewManager;
        if ( terminalSceneComponent )
        {
          QuestBoardListViewManager__SetScrollViewPanelDepth(
            (QuestBoardListViewManager_o *)terminalSceneComponent,
            0,
            1,
            v22);
          scrTerminalListTop = _4__this->fields.scrTerminalListTop;
          if ( scrTerminalListTop )
          {
            playTerminalTopEffectName = scrTerminalListTop->fields.playTerminalTopEffectName;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(playTerminalTopEffectName, 0LL);
            terminalSceneComponent = (TerminalSceneComponent_o *)_4__this->fields.scrTerminalListTop;
            if ( terminalSceneComponent )
            {
              ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)terminalSceneComponent, 1, 0LL, 0LL);
              v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(
                v25,
                (Il2CppObject *)_4__this,
                Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__,
                0LL);
              if ( !_4__this->fields.isDisplayDialogAfterEffectFinish )
              {
                ActionExtensions__Call(v25, 0LL);
                return 0;
              }
              terminalSceneComponent = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              dialogParameterAfterEffectFinish = _4__this->fields.dialogParameterAfterEffectFinish;
              if ( dialogParameterAfterEffectFinish )
              {
                v27 = (CommonUI_o *)terminalSceneComponent;
                messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                terminalSceneComponent = (TerminalSceneComponent_o *)LocalizationManager__Get(
                                                                       messageLocalizationKey,
                                                                       0LL);
                v29 = _4__this->fields.dialogParameterAfterEffectFinish;
                if ( v29 )
                {
                  if ( v27 )
                  {
                    CommonUI__OpenNotificationDialog_30834564(
                      v27,
                      (System_String_o *)StringLiteral_1/*""*/,
                      (System_String_o *)terminalSceneComponent,
                      v25,
                      v29->fields.messagePosY,
                      v29->fields.buttonPosY,
                      -1,
                      0,
                      0,
                      0,
                      v29->fields.canMaskTouchClose,
                      v29->fields.messageFontSize,
                      v29->fields.onClickOkSeKind,
                      0,
                      0,
                      0LL,
                      0LL);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BDBAD4(terminalSceneComponent, v21);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v14 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v14,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__,
      0LL);
    v15 = (UnityEngine_WaitWhile_o *)sub_1BDBAC4(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v15, v14, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v15, v16, v17);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__12_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestBoardEffectController__CoOnEffectFinishAction_d__12__System_IDisposable_Dispose(
        QuestBoardEffectController__CoOnEffectFinishAction_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4176A & 1) == 0 )
  {
    sub_1BDB878(&QuestBoardEffectController___c_TypeInfo, v1);
    byte_4B4176A = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)QuestBoardEffectController___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestBoardEffectController___c___ctor(QuestBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardEffectController___c___CoOnEffectFinishAction_b__12_3(
        QuestBoardEffectController___c_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  if ( !effectInfo )
    sub_1BDBAD4(this, 0LL);
  return effectInfo->fields.isPlaying;
}


void __fastcall QuestBoardEffectController___c___StartBoardEffect_b__11_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0LL);
}


void __fastcall QuestBoardEffectController___c__DisplayClass13_0___ctor(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardEffectController___c__DisplayClass13_0___StartBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  struct QuestBoardEffectController_o *_4__this; // x9
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0LL
    || (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)_4__this->fields.questBoardListViewManager) == 0LL )
  {
    sub_1BDBAD4(this, method);
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


void __fastcall QuestBoardEffectController___c__DisplayClass13_0___StartBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct QuestBoardEffectController_o *_4__this; // x8
  QuestBoardEffectController___c__DisplayClass13_0_o *v4; // x19
  struct QuestBoardEffectController_o *v5; // x8
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this,
        (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)_4__this->fields.questBoardListViewManager) == 0LL)
    || (QuestBoardListViewManager__InitListObject((QuestBoardListViewManager_o *)this, 3, v2),
        (v5 = v4->fields.__4__this) == 0LL)
    || (this = (QuestBoardEffectController___c__DisplayClass13_0_o *)v5->fields.questBoardListViewManager) == 0LL
    || (QuestBoardListViewManager__SetupDisp((QuestBoardListViewManager_o *)this, method),
        (effectInfo = v4->fields.effectInfo) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  effectInfo->fields.isPlaying = 0;
}


void __fastcall QuestBoardEffectController___c__DisplayClass14_0___ctor(
        QuestBoardEffectController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardEffectController___c__DisplayClass14_0___StartBoardFadeEffect_b__0(
        QuestBoardEffectController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_1BDBAD4(this, method);
  effectInfo->fields.isPlaying = 0;
}