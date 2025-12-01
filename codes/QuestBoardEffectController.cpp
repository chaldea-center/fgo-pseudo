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

  if ( (byte_4CC4034 & 1) == 0 )
  {
    sub_1C713B0(&QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
    byte_4CC4034 = 1;
  }
  v3 = sub_1C715FC(QuestBoardEffectController__CoOnEffectFinishAction_d__12_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x22
  Il2CppObject *v23; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
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

  if ( (byte_4CC4035 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1C713B0(&ScrTerminalListTop_TypeInfo);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__);
    sub_1C713B0(&Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__);
    sub_1C713B0(&QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
    byte_4CC4035 = 1;
  }
  v5 = sub_1C715FC(QuestBoardEffectController___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_45;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_45;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_45;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    v21);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                               QuestBoardObjForWarId,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_45;
    v23 = *(Il2CppObject **)(*(_QWORD *)v14 + 24LL);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)QuestBoardObjForWarId, 0);
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
    naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment;
    if ( v23->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectAppearComponent_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectAppearComponent_TypeInfo )
        v26 = v23;
      else
        v26 = 0;
      goto LABEL_20;
    }
LABEL_16:
    v26 = 0;
LABEL_20:
    v27 = UnityEngine_Object__Instantiate_object__52264420(
            v26,
            transform,
            (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v27,
                                                                 0,
                                                                 0);
    if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
      return;
    if ( v27 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0);
      GameObjectExtensions__ResetTransform(gameObject, 0);
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
        if ( *(_QWORD *)v14 )
        {
          questBoardListViewManager = this->fields.questBoardListViewManager;
          if ( questBoardListViewManager )
          {
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              questBoardListViewManager,
              *(_DWORD *)(*(_QWORD *)v14 + 16LL),
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
                0,
                v33);
              if ( *(_QWORD *)v14 )
              {
                questBoardListViewManager = this->fields.questBoardListViewManager;
                if ( questBoardListViewManager )
                {
                  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
                    questBoardListViewManager,
                    0,
                    *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                    0,
                    0,
                    0,
                    0,
                    v34);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4CC40AE )
                  {
                    sub_1C713B0(&TerminalPramsManager_TypeInfo);
                    byte_4CC40AE = 1;
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
                    TitleInfoControl__setTitleImg((TitleInfoControl_o *)questBoardListViewManager, 1, 1, 0, 0);
                    v36 = *(_QWORD *)v14;
                    if ( *(_QWORD *)v14 )
                    {
                      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                      if ( questBoardListViewManager )
                      {
                        v37 = this->fields.questBoardListViewManager;
                        questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                                     (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                                     *(_DWORD *)(v36 + 16),
                                                                                     0);
                        if ( v37 )
                        {
                          QuestBoardListViewManager__SetCenterItem(
                            v37,
                            (int32_t)questBoardListViewManager,
                            0,
                            *(float *)&v27[7].klass,
                            v38);
                          v39 = this->fields.questBoardListViewManager;
                          v40 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v40,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__0__,
                            0);
                          v41 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v41,
                            (Il2CppObject *)v5,
                            Method_QuestBoardEffectController___c__DisplayClass13_0__StartBoardAppearEffect_b__1__,
                            0);
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
                                      0,
                                      0);
                              UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                                (UnityEngine_MonoBehaviour_o *)this,
                                v43,
                                0);
                              questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
                              if ( questBoardListViewManager )
                              {
                                v44 = ScrTerminalListTop__CallTerminalTopEffectFadeOutBgm(
                                        (ScrTerminalListTop_o *)questBoardListViewManager,
                                        *((float *)&v27[7].klass + 1),
                                        *(float *)&v27[7].monitor,
                                        0,
                                        0);
                                UnityEngine_MonoBehaviour__StartCoroutine_71709800(
                                  (UnityEngine_MonoBehaviour_o *)this,
                                  v44,
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
    sub_1C71608(questBoardListViewManager, v7);
  }
}


void QuestBoardEffectController__StartBoardEffect(QuestBoardEffectController_o *this, const MethodInfo *method)
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
  void *Instance; // x0
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
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct TerminalSceneComponent_o *v36; // x8
  struct TitleInfoControl_o *mTitleInfo; // x1
  const MethodInfo *v38; // x6
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v40; // x21
  Il2CppObject *v41; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  _BOOL8 v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  Il2CppObject *current; // x8
  int v53; // w9
  const MethodInfo *v54; // x1
  System_Collections_IEnumerator_o *v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC4033 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__);
    sub_1C713B0(&QuestBoardEffectController___c_TypeInfo);
    byte_4CC4033 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.terminalSceneComponent, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_31;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.scrTerminalListTop,
    (int32_t)mTerminalList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  scrTerminalListTop = this->fields.scrTerminalListTop;
  if ( !scrTerminalListTop )
    goto LABEL_31;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v36 = this->fields.terminalSceneComponent;
  if ( !v36 )
    goto LABEL_31;
  mTitleInfo = v36->fields.mTitleInfo;
  this->fields.titleInfoControl = mTitleInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleInfoControl,
    (int32_t)mTitleInfo,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v40 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = QuestBoardEffectController___c_TypeInfo;
    }
    v41 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v40 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v40, v41, Method_QuestBoardEffectController___c__StartBoardEffect_b__11_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = v40;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0, (int32_t)v40, v43, v44, v45, v46, v47, v48);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v40, 0, 1, 0, v38),
        (Instance = this->fields.effectInfoList) == 0) )
  {
LABEL_31:
    sub_1C71608(Instance, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v49 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_1C71608(v49, v50);
    v53 = *(_DWORD *)((char *)&v56.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v56.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v53 )
    {
      if ( v53 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v51);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__StartBoardAppearEffect(
        this,
        (QuestBoardEffectController_BoardEffectInfo_o *)current,
        v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v55 = QuestBoardEffectController__CoOnEffectFinishAction(this, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v55, 0);
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
  struct QuestBoardListViewManager_o *v21; // x24
  System_Action_o *v22; // x19
  const MethodInfo *v23; // x4

  if ( (byte_4CC4036 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__);
    sub_1C713B0(&QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
    byte_4CC4036 = 1;
  }
  v5 = sub_1C715FC(QuestBoardEffectController___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)effectInfo, v8, v9, v10, v11, v12, v13);
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
  fadePanel = UnityEngine_Object__Instantiate_object__52264420(
                v16,
                transform,
                (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v18 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v18, 0, 0.0, 0.0, v20),
        v21 = this->fields.questBoardListViewManager,
        v22 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass14_0__StartBoardFadeEffect_b__0__,
          0),
        !v21) )
  {
LABEL_12:
    sub_1C71608(fadePanel, v7);
  }
  QuestBoardListViewManager__PlayBoardEffect((QuestBoardListViewManager_o *)fadePanel, v18, 0, v22, v23);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC4037 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_1C713B0(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__);
    sub_1C713B0(&QuestBoardEffectController___c_TypeInfo);
    byte_4CC4037 = 1;
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
    _9__12_3 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__12_3,
      v6,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__12_3__,
      0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__12_3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_3, (int32_t)_9__12_3, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__12_3,
           (const MethodInfo_31341D4 *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4CC4038 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_1C713B0(&StringLiteral_20986/*"isBgmPauseEnded"*/);
    byte_4CC4038 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1C71608(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_20986/*"isBgmPauseEnded"*/, 0, 0);
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

  if ( (byte_4CC4039 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__);
    byte_4CC4039 = 1;
  }
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetScrollBarEnable(questBoardListViewManager, 1, v2),
        scrTerminalListTop = this->fields.scrTerminalListTop,
        v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v6,
          (Il2CppObject *)this,
          Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_4__,
          0),
        !scrTerminalListTop) )
  {
    sub_1C71608(questBoardListViewManager, method);
  }
  v7 = ScrTerminalListTop__CoWaitEffectWhileNotification(scrTerminalListTop, v6, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__12_4(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4CC403A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CC403A = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
      UnityEngine_Object__Destroy_71724608(v6, 0);
      return;
    }
LABEL_11:
    sub_1C71608(Instance, v4);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  bool result; // w0
  System_Action_o *v14; // x20
  TerminalSceneComponent_o *terminalSceneComponent; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  struct ScrTerminalListTop_o *scrTerminalListTop; // x8
  System_String_o *playTerminalTopEffectName; // x20
  struct ScrTerminalListTop_o *v20; // x8
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  System_Action_o *v23; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v25; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v27; // x8
  EventEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4CC403C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__);
    sub_1C713B0(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__);
    sub_1C713B0(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC403C = 1;
  }
  entity = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_1__,
      0);
    if ( _4__this )
    {
      terminalSceneComponent = _4__this->fields.terminalSceneComponent;
      if ( terminalSceneComponent )
      {
        if ( !TerminalSceneComponent__TryPlayGrandBgm(terminalSceneComponent, v14, 0) )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_32;
          TerminalSceneComponent__playDefaultBgm(terminalSceneComponent, v14, 0);
        }
        terminalSceneComponent = (TerminalSceneComponent_o *)_4__this->fields.questBoardListViewManager;
        if ( terminalSceneComponent )
        {
          QuestBoardListViewManager__SetScrollViewPanelDepth(
            (QuestBoardListViewManager_o *)terminalSceneComponent,
            0,
            1,
            v17);
          scrTerminalListTop = _4__this->fields.scrTerminalListTop;
          if ( scrTerminalListTop )
          {
            playTerminalTopEffectName = scrTerminalListTop->fields.playTerminalTopEffectName;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(playTerminalTopEffectName, 0);
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            terminalSceneComponent = (TerminalSceneComponent_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
            v20 = _4__this->fields.scrTerminalListTop;
            if ( v20 )
            {
              if ( terminalSceneComponent )
              {
                if ( EventMaster__TryGetEntityByBannerEffectName(
                       (EventMaster_o *)terminalSceneComponent,
                       &entity,
                       v20->fields.playTerminalTopEffectName,
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
                  v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v23,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_2__,
                    0);
                  if ( !_4__this->fields.isDisplayDialogAfterEffectFinish )
                  {
                    ActionExtensions__Call(v23, 0);
                    return 0;
                  }
                  terminalSceneComponent = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  dialogParameterAfterEffectFinish = _4__this->fields.dialogParameterAfterEffectFinish;
                  if ( dialogParameterAfterEffectFinish )
                  {
                    v25 = (CommonUI_o *)terminalSceneComponent;
                    messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    terminalSceneComponent = (TerminalSceneComponent_o *)LocalizationManager__Get(
                                                                           messageLocalizationKey,
                                                                           0);
                    v27 = _4__this->fields.dialogParameterAfterEffectFinish;
                    if ( v27 )
                    {
                      if ( v25 )
                      {
                        CommonUI__OpenNotificationDialog_31441608(
                          v25,
                          (System_String_o *)StringLiteral_1/*""*/,
                          (System_String_o *)terminalSceneComponent,
                          v23,
                          v27->fields.messagePosY,
                          v27->fields.buttonPosY,
                          -1,
                          0,
                          0,
                          0,
                          v27->fields.canMaskTouchClose,
                          v27->fields.messageFontSize,
                          v27->fields.onClickOkSeKind,
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
    sub_1C71608(terminalSceneComponent, v16);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__12_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C715FC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__12_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC403B & 1) == 0 )
  {
    sub_1C713B0(&QuestBoardEffectController___c_TypeInfo);
    byte_4CC403B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_1C71354(
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


bool QuestBoardEffectController___c___CoOnEffectFinishAction_b__12_3(
        QuestBoardEffectController___c_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  if ( !effectInfo )
    sub_1C71608(this, 0);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
  effectInfo->fields.isPlaying = 0;
}