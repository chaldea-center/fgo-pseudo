void QuestBoardEffectController___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CEB234 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBoardEffectController_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2919/*"BGM_MAP_22"*/);
    byte_4CEB234 = 1;
  }
  QuestBoardEffectController_TypeInfo->static_fields->NoVolumeBgm = (struct System_String_o *)StringLiteral_2919/*"BGM_MAP_22"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)QuestBoardEffectController_TypeInfo->static_fields,
    StringLiteral_2919/*"BGM_MAP_22"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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

  if ( (byte_4CEB22F & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBoardEffectController__CoOnEffectFinishAction_d__26_TypeInfo);
    byte_4CEB22F = 1;
  }
  v3 = sub_1C7BD34(QuestBoardEffectController__CoOnEffectFinishAction_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
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
  const MethodInfo *v33; // x2
  Il2CppObject *current; // x26
  int32_t appearBoardType; // w8
  UnityEngine_Object_o *v36; // x21
  void *monitor; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Object_o *QuestBoardObjForWarId; // x21
  __int64 v41; // x1
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x5
  __int64 v47; // x1
  const MethodInfo *v48; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4CEB22D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEB22D = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.terminalSceneComponent, (int32_t)v11, v2, v3, v4, v5, v6, v7);
  terminalSceneComponent = this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_46;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1C7BA8C(
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
        sub_1C7BA8C(
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
    sub_1C7BD40(effectInfoList, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    effectInfoList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v31 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1C7BD40(v31, v32);
    if ( !LODWORD(v50.fields._current[2].klass) )
    {
      appearBoardType = this->fields.appearBoardType;
      if ( appearBoardType == 1 )
      {
        if ( !*p_questBoardListViewManager )
          sub_1C7BD40(0, v32);
        QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                          *p_questBoardListViewManager,
                                                          (int32_t)v50.fields._current[1].klass,
                                                          v33);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0) )
        {
          if ( !*p_questBoardListViewManager )
            sub_1C7BD40(0, v41);
          QuestBoardListViewManager__DispBoardForQuestBoardEffect(
            *p_questBoardListViewManager,
            1,
            (int32_t)current[1].klass,
            0,
            0,
            0,
            0,
            1,
            0,
            v48);
        }
      }
      else if ( !appearBoardType )
      {
        if ( !*p_questBoardListViewManager )
          sub_1C7BD40(0, v32);
        v36 = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                        *p_questBoardListViewManager,
                                        (int32_t)v50.fields._current[1].klass,
                                        v33);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v36, 0, 0) )
        {
          monitor = current[1].monitor;
          if ( monitor
            && (naturalAligment = QuestBoardListEffectAppearComponent_TypeInfo->_2.naturalAligment,
                *(unsigned __int8 *)(*(_QWORD *)monitor + 304LL) >= (unsigned int)naturalAligment) )
          {
            if ( *(QuestBoardListEffectAppearComponent_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) == QuestBoardListEffectAppearComponent_TypeInfo )
              v39 = (UnityEngine_Object_o *)current[1].monitor;
            else
              v39 = 0;
          }
          else
          {
            v39 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(v39, 0, 0) )
          {
            if ( !*p_questBoardListViewManager )
              sub_1C7BD40(0, v42);
            QuestBoardListViewManager__SetTerminalTopEffectPlay(
              *p_questBoardListViewManager,
              (int32_t)current[1].klass,
              0,
              v43);
            if ( !v39 )
              sub_1C7BD40(v44, v45);
            if ( !*p_questBoardListViewManager )
              sub_1C7BD40(0, v45);
            QuestBoardListViewManager__MoveBoardForTerminalTopEffect(
              *p_questBoardListViewManager,
              1,
              1,
              0.0,
              HIDWORD(v39[4].monitor),
              0,
              v46);
            if ( !*p_questBoardListViewManager )
              sub_1C7BD40(0, v47);
            QuestBoardListViewManager__DispBoardForQuestBoardEffect(
              *p_questBoardListViewManager,
              0,
              (int32_t)current[1].klass,
              0,
              0,
              0,
              0,
              0,
              0,
              v48);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
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

  if ( (byte_4CEB22C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB22C = 1;
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
          sub_1C7BA8C(
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
        sub_1C7BD40(v4, v5);
      }
    }
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

  if ( (byte_4CEB233 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBoardEffectController__ScrollBarDisabled_d__30_TypeInfo);
    byte_4CEB233 = 1;
  }
  v7 = sub_1C7BD34(QuestBoardEffectController__ScrollBarDisabled_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = obj;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)obj, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = effectInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)effectInfo, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
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
  sub_1C7BA8C(
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
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v23; // x24
  UnityEngine_Transform_o *transform; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x2
  QuestBoardListViewManager_o *v30; // x24
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *v33; // x0
  struct QuestBoardListViewManager_o *v34; // x26
  System_Action_o *v35; // x23
  System_Action_o *v36; // x24
  const MethodInfo *v37; // x4
  System_Collections_IEnumerator_o *v38; // x0
  Il2CppObject *Component_object; // x20
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_4CEB230 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestBoardListEffectAppearComponent_TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass27_0__StartAddBoardAppearEffect_b__0__);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass27_0__StartAddBoardAppearEffect_b__1__);
    sub_1C7BAE8(&QuestBoardEffectController___c__DisplayClass27_0_TypeInfo);
    byte_4CEB230 = 1;
  }
  v5 = sub_1C7BD34(QuestBoardEffectController___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_35;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_35;
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
      goto LABEL_35;
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
    v27 = UnityEngine_Object__Instantiate_object__52412380(
            v26,
            transform,
            (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectAppearComponent___);
    questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_Object__op_Equality(
                                                                 (UnityEngine_Object_o *)v27,
                                                                 0,
                                                                 0);
    if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
    {
      if ( !v27 )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0);
      GameObjectExtensions__ResetTransform(gameObject, 0);
      QuestBoardListEffectComponent__Init((QuestBoardListEffectComponent_o *)v27, 0, 0.0, 0.0, v29);
      if ( !*(_QWORD *)v14 )
        goto LABEL_35;
      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
      if ( !questBoardListViewManager )
        goto LABEL_35;
      v30 = this->fields.questBoardListViewManager;
      questBoardListViewManager = (QuestBoardListViewManager_o *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                                                   (ScrTerminalListTop_o *)questBoardListViewManager,
                                                                   *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                                                                   0);
      if ( !v30 )
        goto LABEL_35;
      QuestBoardListViewManager__SetCenterItem(
        v30,
        (int32_t)questBoardListViewManager,
        this->fields.isScrollAnim,
        *(float *)&v27[7].klass,
        v31);
      v33 = QuestBoardEffectController__ScrollBarDisabled(
              this,
              (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
              *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
              v32);
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v33, 0);
      v34 = this->fields.questBoardListViewManager;
      v35 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)v5,
        Method_QuestBoardEffectController___c__DisplayClass27_0__StartAddBoardAppearEffect_b__0__,
        0);
      v36 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)v5,
        Method_QuestBoardEffectController___c__DisplayClass27_0__StartAddBoardAppearEffect_b__1__,
        0);
      if ( !v34 )
        goto LABEL_35;
      QuestBoardListViewManager__PlayBoardEffect(
        questBoardListViewManager,
        (QuestBoardListEffectComponent_o *)v27,
        v35,
        v36,
        v37);
      questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
      if ( !questBoardListViewManager )
        goto LABEL_35;
      v38 = ScrTerminalListTop__CallTerminalTopEffectMoveBoard(
              (ScrTerminalListTop_o *)questBoardListViewManager,
              0,
              0,
              *((float *)&v27[6].klass + 1),
              *(float *)&v27[6].monitor,
              HIDWORD(v27[6].monitor),
              0,
              0);
      questBoardListViewManager = (QuestBoardListViewManager_o *)UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                                                                   (UnityEngine_MonoBehaviour_o *)this,
                                                                   v38,
                                                                   0);
      if ( !*(_QWORD *)v14 )
        goto LABEL_35;
      questBoardListViewManager = *(QuestBoardListViewManager_o **)(*(_QWORD *)v14 + 24LL);
      if ( !questBoardListViewManager )
        goto LABEL_35;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)questBoardListViewManager,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        questBoardListViewManager = (QuestBoardListViewManager_o *)this->fields.scrTerminalListTop;
        if ( questBoardListViewManager )
        {
          v40 = ScrTerminalListTop__CallTerminalTopEffectFadeOutBgm(
                  (ScrTerminalListTop_o *)questBoardListViewManager,
                  *((float *)&v27[7].klass + 1),
                  *(float *)&v27[7].monitor,
                  0,
                  0);
          UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v40, 0);
          return;
        }
LABEL_35:
        sub_1C7BD40(questBoardListViewManager, v7);
      }
    }
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
  struct TerminalSceneComponent_o *v39; // x8
  struct TitleInfoControl_o *mTitleInfo; // x1
  char v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  char v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  const MethodInfo *v53; // x6
  QuestBoardListViewManager_o *questBoardListViewManager; // x20
  System_Action_o *v55; // x21
  Il2CppObject *v56; // x22
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  char v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  _BOOL8 v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x2
  Il2CppObject *current; // x8
  int v68; // w9
  const MethodInfo *v69; // x1
  System_Collections_IEnumerator_o *v70; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEB22E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__StartBoardEffect_b__24_0__);
    sub_1C7BAE8(&QuestBoardEffectController___c_TypeInfo);
    byte_4CEB22E = 1;
  }
  memset(&v71, 0, sizeof(v71));
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  sub_1C7BA8C(
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
    goto LABEL_30;
  mTerminalList = terminalSceneComponent->fields.mTerminalList;
  this->fields.scrTerminalListTop = mTerminalList;
  sub_1C7BA8C(
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
    goto LABEL_30;
  mQuestBoardListViewManager = scrTerminalListTop->fields.mQuestBoardListViewManager;
  this->fields.questBoardListViewManager = mQuestBoardListViewManager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questBoardListViewManager,
    (int32_t)mQuestBoardListViewManager,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v39 = this->fields.terminalSceneComponent;
  if ( !v39 )
    goto LABEL_30;
  mTitleInfo = v39->fields.mTitleInfo;
  this->fields.titleInfoControl = mTitleInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleInfoControl,
    (int32_t)mTitleInfo,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endBoardEffectCallBack = endCallBack;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.endBoardEffectCallBack,
    (int32_t)endCallBack,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._PlayEffectName_k__BackingField = playTerminalEffectName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlayEffectName_k__BackingField,
    (int32_t)playTerminalEffectName,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.isScrollAnim = inputIsScrollAnim;
  effectInfoList = QuestBoardEffectController___c_TypeInfo;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    effectInfoList = QuestBoardEffectController___c_TypeInfo;
  }
  v55 = *(System_Action_o **)(*((_QWORD *)effectInfoList + 23) + 8LL);
  if ( !v55 )
  {
    if ( !*((_DWORD *)effectInfoList + 56) )
    {
      j_il2cpp_runtime_class_init_0(effectInfoList);
      effectInfoList = QuestBoardEffectController___c_TypeInfo;
    }
    v56 = (Il2CppObject *)**((_QWORD **)effectInfoList + 23);
    v55 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v55, v56, Method_QuestBoardEffectController___c__StartBoardEffect_b__24_0__, 0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = v55;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0, (int32_t)v55, v58, v59, v60, v61, v62, v63);
  }
  if ( !questBoardListViewManager
    || (QuestBoardListViewManager__SetMode(questBoardListViewManager, 3, v55, 0, 1, 0, v53),
        (effectInfoList = this->fields.effectInfoList) == 0) )
  {
LABEL_30:
    sub_1C7BD40(effectInfoList, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)effectInfoList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_QuestBoardEffectController_BoardEffectInfo__GetEnumerator__);
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v71,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__MoveNext__);
    if ( !v64 )
      break;
    current = v71.fields._current;
    if ( !v71.fields._current )
      sub_1C7BD40(v64, v65);
    v68 = *(_DWORD *)((char *)&v71.fields._current->klass + (unsigned __int64)&qword_20);
    *((_BYTE *)&v71.fields._current->klass + (unsigned __int64)&qword_20 + 4) = 1;
    if ( v68 )
    {
      if ( v68 == 1 )
        QuestBoardEffectController__StartBoardFadeEffect(
          this,
          (QuestBoardEffectController_BoardEffectInfo_o *)current,
          v66);
      else
        *((_BYTE *)&qword_20 + (_QWORD)current + 4) = 0;
    }
    else
    {
      QuestBoardEffectController__HandleAppearEffect(this, (QuestBoardEffectController_BoardEffectInfo_o *)current, v66);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_QuestBoardEffectController_BoardEffectInfo__Dispose__);
  v70 = QuestBoardEffectController__CoOnEffectFinishAction(this, v69);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v70, 0);
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

  if ( (byte_4CEB232 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass29_0__StartBoardFadeEffect_b__0__);
    sub_1C7BAE8(&QuestBoardEffectController___c__DisplayClass29_0_TypeInfo);
    byte_4CEB232 = 1;
  }
  v5 = sub_1C7BD34(QuestBoardEffectController___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = effectInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)effectInfo, v8, v9, v10, v11, v12, v13);
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
  fadePanel = UnityEngine_Object__Instantiate_object__52412380(
                v16,
                transform,
                (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectComponent___);
  if ( !fadePanel
    || (v18 = (QuestBoardListEffectComponent_o *)fadePanel,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fadePanel, 0),
        GameObjectExtensions__ResetTransform(gameObject, 0),
        QuestBoardListEffectComponent__Init(v18, 0, 0.0, 0.0, v20),
        v21 = this->fields.questBoardListViewManager,
        v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_QuestBoardEffectController___c__DisplayClass29_0__StartBoardFadeEffect_b__0__,
          0),
        !v21) )
  {
LABEL_12:
    sub_1C7BD40(fadePanel, v7);
  }
  QuestBoardListViewManager__PlayBoardEffect((QuestBoardListViewManager_o *)fadePanel, v18, 0, v22, v23);
}


void QuestBoardEffectController__StartChangeBoardAppearEffect(
        QuestBoardEffectController_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *questBoardListViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *QuestBoardObjForWarId; // x23
  Il2CppObject *v23; // x24
  UnityEngine_Transform_o *transform; // x21
  __int64 naturalAligment; // x10
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  __int64 v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x2
  QuestBoardListViewManager_o *v37; // x24
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  System_Collections_IEnumerator_o *v40; // x0
  struct QuestBoardListViewManager_o *v41; // x28
  QuestBoardListEffectComponent_o *v42; // x23
  System_Action_o *v43; // x24
  System_Action_o *v44; // x25
  const MethodInfo *v45; // x4
  Il2CppObject *Component_object; // x22
  System_Collections_IEnumerator_o *v47; // x0
  float v48; // s8
  QuestBoardEffectController___c_c *v49; // x0
  System_Action_o *_9__28_2; // x22
  Il2CppObject *v51; // x23
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_IEnumerator_o *v59; // x0
  float v60; // s8
  System_Action_o *v61; // x21
  System_Collections_IEnumerator_o *v62; // x0
  __int64 v63; // x8
  ScrTerminalListTop_o *scrTerminalListTop; // x20
  float v65; // s8
  float v66; // s9

  if ( (byte_4CEB231 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestBoardListEffectBoardOpenComponent_TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__StartChangeBoardAppearEffect_b__28_2__);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__0__);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__1__);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__3__);
    sub_1C7BAE8(&QuestBoardEffectController___c__DisplayClass28_0_TypeInfo);
    sub_1C7BAE8(&QuestBoardEffectController___c_TypeInfo);
    byte_4CEB231 = 1;
  }
  v5 = sub_1C7BD34(QuestBoardEffectController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_53;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = effectInfo;
  v14 = v5 + 24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)effectInfo, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_53;
  questBoardListViewManager = this->fields.questBoardListViewManager;
  if ( !questBoardListViewManager )
    goto LABEL_53;
  QuestBoardObjForWarId = (UnityEngine_Object_o *)QuestBoardListViewManager__GetQuestBoardObjForWarId(
                                                    (QuestBoardListViewManager_o *)questBoardListViewManager,
                                                    *(_DWORD *)(*(_QWORD *)(v5 + 24) + 16LL),
                                                    v21);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  questBoardListViewManager = (void *)UnityEngine_Object__op_Equality(QuestBoardObjForWarId, 0, 0);
  if ( ((unsigned __int8)questBoardListViewManager & 1) == 0 )
  {
    if ( !*(_QWORD *)v14 || !QuestBoardObjForWarId )
      goto LABEL_53;
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
    naturalAligment = QuestBoardListEffectBoardOpenComponent_TypeInfo->_2.naturalAligment;
    if ( v23->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (QuestBoardListEffectBoardOpenComponent_c *)v23->klass->_2.typeHierarchy[naturalAligment - 1] == QuestBoardListEffectBoardOpenComponent_TypeInfo )
        v26 = v23;
      else
        v26 = 0;
      goto LABEL_20;
    }
LABEL_16:
    v26 = 0;
LABEL_20:
    v27 = UnityEngine_Object__Instantiate_object__52412380(
            v26,
            transform,
            (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_QuestBoardListEffectBoardOpenComponent___);
    *(_QWORD *)(v5 + 32) = v27;
    v28 = v5 + 32;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v27, v29, v30, v31, v32, v33, v34);
    if ( !UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v5 + 32), 0, 0) )
    {
      questBoardListViewManager = *(void **)v28;
      if ( !*(_QWORD *)v28 )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)questBoardListViewManager, 0);
      GameObjectExtensions__ResetTransform(gameObject, 0);
      questBoardListViewManager = *(void **)v28;
      if ( !*(_QWORD *)v28 )
        goto LABEL_53;
      QuestBoardListEffectComponent__Init(
        (QuestBoardListEffectComponent_o *)questBoardListViewManager,
        0,
        *((float *)questBoardListViewManager + 29),
        *((float *)questBoardListViewManager + 30),
        v36);
      if ( !*(_QWORD *)v28 )
        goto LABEL_53;
      *(_DWORD *)(*(_QWORD *)v28 + 72LL) = *(_DWORD *)(*(_QWORD *)v28 + 124LL);
      if ( !*(_QWORD *)v14 )
        goto LABEL_53;
      questBoardListViewManager = this->fields.scrTerminalListTop;
      if ( !questBoardListViewManager )
        goto LABEL_53;
      v37 = this->fields.questBoardListViewManager;
      questBoardListViewManager = (void *)ScrTerminalListTop__GetTopLastIndexForWarId(
                                            (ScrTerminalListTop_o *)questBoardListViewManager,
                                            *(_DWORD *)(*(_QWORD *)v14 + 16LL),
                                            0);
      if ( !*(_QWORD *)v28 )
        goto LABEL_53;
      if ( !v37 )
        goto LABEL_53;
      QuestBoardListViewManager__SetCenterItem(
        v37,
        (int32_t)questBoardListViewManager,
        this->fields.isScrollAnim,
        *(float *)(*(_QWORD *)v28 + 100LL),
        v38);
      v40 = QuestBoardEffectController__ScrollBarDisabled(
              this,
              (QuestBoardListViewObject_o *)QuestBoardObjForWarId,
              *(QuestBoardEffectController_BoardEffectInfo_o **)(v5 + 24),
              v39);
      UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v40, 0);
      v41 = this->fields.questBoardListViewManager;
      v42 = *(QuestBoardListEffectComponent_o **)(v5 + 32);
      v43 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)v5,
        Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__0__,
        0);
      v44 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)v5,
        Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__1__,
        0);
      if ( !v41 )
        goto LABEL_53;
      QuestBoardListViewManager__PlayBoardEffect(
        (QuestBoardListViewManager_o *)questBoardListViewManager,
        v42,
        v43,
        v44,
        v45);
      if ( !*(_QWORD *)v14 )
        goto LABEL_53;
      questBoardListViewManager = *(void **)(*(_QWORD *)v14 + 24LL);
      if ( !questBoardListViewManager )
        goto LABEL_53;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)questBoardListViewManager,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_EffectSoundPlayerComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      questBoardListViewManager = (void *)UnityEngine_Object__op_Equality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
      if ( ((unsigned __int8)questBoardListViewManager & 1) != 0 )
      {
        if ( *(_QWORD *)v28 )
        {
          questBoardListViewManager = this->fields.scrTerminalListTop;
          if ( questBoardListViewManager )
          {
            v47 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(
                    (ScrTerminalListTop_o *)questBoardListViewManager,
                    *(float *)(*(_QWORD *)v28 + 136LL),
                    *(float *)(*(_QWORD *)v28 + 140LL),
                    *(float *)(*(_QWORD *)v28 + 152LL),
                    0,
                    0);
            questBoardListViewManager = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                                          (UnityEngine_MonoBehaviour_o *)this,
                                          v47,
                                          0);
            if ( this->fields.isFadeInRestartBgm )
            {
              if ( *(_QWORD *)v28 )
              {
                v48 = *(float *)(*(_QWORD *)v28 + 140LL);
                v49 = QuestBoardEffectController___c_TypeInfo;
                if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
                  v49 = QuestBoardEffectController___c_TypeInfo;
                }
                _9__28_2 = v49->static_fields->__9__28_2;
                if ( !_9__28_2 )
                {
                  if ( !v49->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v49);
                    v49 = QuestBoardEffectController___c_TypeInfo;
                  }
                  v51 = (Il2CppObject *)v49->static_fields->__9;
                  _9__28_2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__28_2,
                    v51,
                    Method_QuestBoardEffectController___c__StartChangeBoardAppearEffect_b__28_2__,
                    0);
                  static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
                  static_fields->__9__28_2 = _9__28_2;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_2,
                    (int32_t)_9__28_2,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                }
                v59 = BasicHelper__DelayCall(v48, _9__28_2, 1, 0);
                questBoardListViewManager = UnityEngine_MonoBehaviour__StartCoroutine_71855340(
                                              (UnityEngine_MonoBehaviour_o *)this,
                                              v59,
                                              0);
                if ( *(_QWORD *)v28 )
                {
                  v60 = *(float *)(*(_QWORD *)v28 + 144LL);
                  v61 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                  System_Action___ctor(
                    v61,
                    (Il2CppObject *)v5,
                    Method_QuestBoardEffectController___c__DisplayClass28_0__StartChangeBoardAppearEffect_b__3__,
                    0);
                  v62 = BasicHelper__DelayCall(v60, v61, 1, 0);
LABEL_52:
                  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, v62, 0);
                  return;
                }
              }
            }
            else
            {
              v63 = *(_QWORD *)v28;
              if ( *(_QWORD *)v28 )
              {
                scrTerminalListTop = this->fields.scrTerminalListTop;
                v66 = *(float *)(v63 + 144);
                v65 = *(float *)(v63 + 148);
                questBoardListViewManager = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( scrTerminalListTop )
                {
                  v62 = ScrTerminalListTop__CallTerminalTopEffectFadeBgm(
                          scrTerminalListTop,
                          v66,
                          v65,
                          BgmManager_TypeInfo->static_fields->DEFAULT_VOLUME,
                          0,
                          0);
                  goto LABEL_52;
                }
              }
            }
          }
        }
LABEL_53:
        sub_1C7BD40(questBoardListViewManager, v7);
      }
    }
  }
}


bool QuestBoardEffectController___CoOnEffectFinishAction_b__26_0(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_T__o *effectInfoList; // x19
  System_Func_object__bool__o *_9__26_3; // x20
  Il2CppObject *v6; // x21
  struct QuestBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEB235 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
    sub_1C7BAE8(&System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__26_3__);
    sub_1C7BAE8(&QuestBoardEffectController___c_TypeInfo);
    byte_4CEB235 = 1;
  }
  v3 = QuestBoardEffectController___c_TypeInfo;
  effectInfoList = (System_Collections_Generic_List_T__o *)this->fields.effectInfoList;
  if ( !QuestBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardEffectController___c_TypeInfo);
    v3 = QuestBoardEffectController___c_TypeInfo;
  }
  _9__26_3 = (System_Func_object__bool__o *)v3->static_fields->__9__26_3;
  if ( !_9__26_3 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestBoardEffectController___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__26_3 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_QuestBoardEffectController_BoardEffectInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__26_3,
      v6,
      Method_QuestBoardEffectController___c__CoOnEffectFinishAction_b__26_3__,
      0);
    static_fields = QuestBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__26_3 = (struct System_Func_QuestBoardEffectController_BoardEffectInfo__bool__o *)_9__26_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__26_3, (int32_t)_9__26_3, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object_(
           effectInfoList,
           (System_Func_T__bool__o *)_9__26_3,
           (const MethodInfo_3159728 *)Method_BasicHelper_Any_QuestBoardEffectController_BoardEffectInfo___);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__26_1(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_o *v2; // x19
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8

  v2 = this;
  if ( (byte_4CEB236 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController_o *)sub_1C7BAE8(&StringLiteral_21080/*"isBgmPauseEnded"*/);
    byte_4CEB236 = 1;
  }
  terminalSceneComponent = v2->fields.terminalSceneComponent;
  if ( !terminalSceneComponent
    || (this = (QuestBoardEffectController_o *)terminalSceneComponent->fields.mTerminalList) == 0 )
  {
    sub_1C7BD40(this, method);
  }
  ScrTerminalListTop__SetFsmValueBool((ScrTerminalListTop_o *)this, (System_String_o *)StringLiteral_21080/*"isBgmPauseEnded"*/, 0, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
}


void QuestBoardEffectController___CoOnEffectFinishAction_b__26_2(
        QuestBoardEffectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4CEB237 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB237 = 1;
  }
  ActionExtensions__Call(this->fields.endBoardEffectCallBack, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(gameObject, 0, 0) )
  {
    v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v4 )
      sub_1C7BD40(0, v5);
    UnityEngine_GameObject__SetActive(v4, 0, 0);
    v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v6, 0);
  }
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
  sub_1C7BA8C(
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


void QuestBoardEffectController__CoOnEffectFinishAction_d__26___ctor(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__CoOnEffectFinishAction_d__26__MoveNext(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
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
  void *terminalSceneComponent; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct QuestBoardListViewManager_o *questBoardListViewManager; // x8
  struct UIScrollBar_o *scrollBar; // x1
  struct QuestBoardListViewManager_o *v25; // x8
  System_String_o *PlayEffectName_k__BackingField; // x20
  int32_t id; // w20
  int32_t BannerEffectEventTutorialFlag; // w0
  System_Action_o *v29; // x20
  struct QuestBoardEffectController_DialogParameter_o *dialogParameterAfterEffectFinish; // x8
  CommonUI_o *v31; // x21
  System_String_o *messageLocalizationKey; // x22
  struct QuestBoardEffectController_DialogParameter_o *v33; // x8
  EventEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4CEB23B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_0__);
    sub_1C7BAE8(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_1__);
    sub_1C7BAE8(&Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_2__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_WaitWhile_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEB23B = 1;
  }
  entity = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v14 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_1__,
      0);
    if ( _4__this )
    {
      terminalSceneComponent = _4__this->fields.terminalSceneComponent;
      if ( terminalSceneComponent )
      {
        terminalSceneComponent = (void *)TerminalSceneComponent__TryPlayGrandBgm(
                                           (TerminalSceneComponent_o *)terminalSceneComponent,
                                           v14,
                                           0);
        if ( ((unsigned __int8)terminalSceneComponent & 1) == 0 )
        {
          terminalSceneComponent = _4__this->fields.terminalSceneComponent;
          if ( !terminalSceneComponent )
            goto LABEL_32;
          TerminalSceneComponent__playDefaultBgm((TerminalSceneComponent_o *)terminalSceneComponent, v14, 0);
        }
        questBoardListViewManager = _4__this->fields.questBoardListViewManager;
        if ( questBoardListViewManager )
        {
          terminalSceneComponent = questBoardListViewManager->fields.scrollView;
          if ( terminalSceneComponent )
          {
            scrollBar = questBoardListViewManager->fields.scrollBar;
            *((_QWORD *)terminalSceneComponent + 8) = scrollBar;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)((char *)terminalSceneComponent + 64),
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
              terminalSceneComponent = v25->fields.scrollView;
              if ( terminalSceneComponent )
              {
                UIScrollView__UpdateScrollbars((UIScrollView_o *)terminalSceneComponent, 0);
                PlayEffectName_k__BackingField = _4__this->fields._PlayEffectName_k__BackingField;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(PlayEffectName_k__BackingField, 0);
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                terminalSceneComponent = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMaster___);
                if ( terminalSceneComponent )
                {
                  if ( EventMaster__TryGetEntityByBannerEffectName(
                         (EventMaster_o *)terminalSceneComponent,
                         &entity,
                         _4__this->fields._PlayEffectName_k__BackingField,
                         0) )
                  {
                    terminalSceneComponent = entity;
                    if ( !entity )
                      goto LABEL_32;
                    id = entity->fields.id;
                    BannerEffectEventTutorialFlag = EventEntity__GetBannerEffectEventTutorialFlag(entity, 0);
                    EventTutorialMaster__RequestTutorialEventSet(id, BannerEffectEventTutorialFlag, 0, 0);
                  }
                  v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                  System_Action___ctor(
                    v29,
                    (Il2CppObject *)_4__this,
                    Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_2__,
                    0);
                  if ( !_4__this->fields.isDisplayDialogAfterEffectFinish )
                  {
                    ActionExtensions__Call(v29, 0);
                    return 0;
                  }
                  terminalSceneComponent = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  dialogParameterAfterEffectFinish = _4__this->fields.dialogParameterAfterEffectFinish;
                  if ( dialogParameterAfterEffectFinish )
                  {
                    v31 = (CommonUI_o *)terminalSceneComponent;
                    messageLocalizationKey = dialogParameterAfterEffectFinish->fields.messageLocalizationKey;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    terminalSceneComponent = LocalizationManager__Get(messageLocalizationKey, 0);
                    v33 = _4__this->fields.dialogParameterAfterEffectFinish;
                    if ( v33 )
                    {
                      if ( v31 )
                      {
                        CommonUI__OpenNotificationDialog_31483940(
                          v31,
                          (System_String_o *)StringLiteral_1/*""*/,
                          (System_String_o *)terminalSceneComponent,
                          v29,
                          v33->fields.messagePosY,
                          v33->fields.buttonPosY,
                          -1,
                          0,
                          0,
                          0,
                          v33->fields.canMaskTouchClose,
                          v33->fields.messageFontSize,
                          v33->fields.onClickOkSeKind,
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
    sub_1C7BD40(terminalSceneComponent, v16);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v5,
      (Il2CppObject *)_4__this,
      Method_QuestBoardEffectController__CoOnEffectFinishAction_b__26_0__,
      0);
    v6 = (UnityEngine_WaitWhile_o *)sub_1C7BD34(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v6, v5, 0);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__CoOnEffectFinishAction_d__26__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_QuestBoardEffectController__CoOnEffectFinishAction_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *QuestBoardEffectController__CoOnEffectFinishAction_d__26__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__CoOnEffectFinishAction_d__26__System_IDisposable_Dispose(
        QuestBoardEffectController__CoOnEffectFinishAction_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestBoardEffectController__ScrollBarDisabled_d__30___ctor(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestBoardEffectController__ScrollBarDisabled_d__30__MoveNext(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestBoardEffectController__ScrollBarDisabled_d__30_o *v8; // x19
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
  if ( (byte_4CEB23C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&Method_QuestBoardEffectController___c__DisplayClass30_0__ScrollBarDisabled_b__0__);
    sub_1C7BAE8(&QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
    this = (QuestBoardEffectController__ScrollBarDisabled_d__30_o *)sub_1C7BAE8(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CEB23C = 1;
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
      this = (QuestBoardEffectController__ScrollBarDisabled_d__30_o *)questBoardListViewManager->fields.scrollView;
      if ( !this )
        goto LABEL_14;
      this[1].monitor = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this[1].monitor, 0, v2, v3, v4, v5, v6, v7);
    }
  }
  else if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v10 = sub_1C7BD34(QuestBoardEffectController___c__DisplayClass30_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      obj = v8->fields.obj;
      *(_QWORD *)(v10 + 16) = obj;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)obj, v11, v12, v13, v14, v15, v16);
      v18 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v18,
        (Il2CppObject *)v10,
        Method_QuestBoardEffectController___c__DisplayClass30_0__ScrollBarDisabled_b__0__,
        0);
      v19 = (UnityEngine_WaitWhile_o *)sub_1C7BD34(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v19, v18, 0);
      v8->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C7BA8C(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
LABEL_14:
    sub_1C7BD40(this, method);
  }
  return 0;
}


Il2CppObject *QuestBoardEffectController__ScrollBarDisabled_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestBoardEffectController__ScrollBarDisabled_d__30__System_Collections_IEnumerator_Reset(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_QuestBoardEffectController__ScrollBarDisabled_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *QuestBoardEffectController__ScrollBarDisabled_d__30__System_Collections_IEnumerator_get_Current(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestBoardEffectController__ScrollBarDisabled_d__30__System_IDisposable_Dispose(
        QuestBoardEffectController__ScrollBarDisabled_d__30_o *this,
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

  if ( (byte_4CEB238 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBoardEffectController___c_TypeInfo);
    byte_4CEB238 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(QuestBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardEffectController___c_TypeInfo->static_fields->__9 = (struct QuestBoardEffectController___c_o *)v1;
  sub_1C7BA8C(
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


bool QuestBoardEffectController___c___CoOnEffectFinishAction_b__26_3(
        QuestBoardEffectController___c_o *this,
        QuestBoardEffectController_BoardEffectInfo_o *effectInfo,
        const MethodInfo *method)
{
  if ( !effectInfo )
    sub_1C7BD40(this, 0);
  return effectInfo->fields.isPlaying;
}


void QuestBoardEffectController___c___StartBoardEffect_b__24_0(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  MainMenuBar__SetMenuBtnColliderEnable(1, 0, 0);
}


void QuestBoardEffectController___c___StartChangeBoardAppearEffect_b__28_2(
        QuestBoardEffectController___c_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController_c *v2; // x0
  System_String_o *NoVolumeBgm; // x19

  if ( (byte_4CEB239 & 1) == 0 )
  {
    sub_1C7BAE8(&QuestBoardEffectController_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEB239 = 1;
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


void QuestBoardEffectController___c__DisplayClass27_0___ctor(
        QuestBoardEffectController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass27_0___StartAddBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x9
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0
    || (this = (QuestBoardEffectController___c__DisplayClass27_0_o *)_4__this->fields.questBoardListViewManager) == 0 )
  {
    sub_1C7BD40(this, method);
  }
  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
    (QuestBoardListViewManager_o *)this,
    1,
    effectInfo->fields.targetBoardWarId,
    0,
    0,
    0,
    0,
    0,
    0,
    v4);
}


void QuestBoardEffectController___c__DisplayClass27_0___StartAddBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_1C7BD40(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass28_0___ctor(
        QuestBoardEffectController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass28_0___StartChangeBoardAppearEffect_b__0(
        QuestBoardEffectController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_o *_4__this; // x9
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8
  const MethodInfo *v4; // [xsp+8h] [xbp-18h]

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (effectInfo = this->fields.effectInfo) == 0
    || (this = (QuestBoardEffectController___c__DisplayClass28_0_o *)_4__this->fields.questBoardListViewManager) == 0 )
  {
    sub_1C7BD40(this, method);
  }
  QuestBoardListViewManager__DispBoardForQuestBoardEffect(
    (QuestBoardListViewManager_o *)this,
    1,
    effectInfo->fields.targetBoardWarId,
    0,
    0,
    0,
    0,
    0,
    0,
    v4);
}


void QuestBoardEffectController___c__DisplayClass28_0___StartChangeBoardAppearEffect_b__1(
        QuestBoardEffectController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_1C7BD40(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass28_0___StartChangeBoardAppearEffect_b__3(
        QuestBoardEffectController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  QuestBoardEffectController___c__DisplayClass28_0_o *v2; // x19
  struct QuestBoardEffectController_o *_4__this; // x8
  struct TerminalSceneComponent_o *terminalSceneComponent; // x8
  System_String_o *mPlayBgmName; // x20
  struct QuestBoardListEffectBoardOpenComponent_o *effectAppearComponent; // x8
  float bgmFadeInTime; // s9
  float v8; // s8

  v2 = this;
  if ( (byte_4CEB23A & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass28_0_o *)sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEB23A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  terminalSceneComponent = _4__this->fields.terminalSceneComponent;
  if ( !terminalSceneComponent )
    goto LABEL_11;
  mPlayBgmName = terminalSceneComponent->fields.mPlayBgmName;
  this = (QuestBoardEffectController___c__DisplayClass28_0_o *)BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    this = (QuestBoardEffectController___c__DisplayClass28_0_o *)BgmManager_TypeInfo;
  }
  effectAppearComponent = v2->fields.effectAppearComponent;
  if ( !effectAppearComponent )
LABEL_11:
    sub_1C7BD40(this, method);
  bgmFadeInTime = effectAppearComponent->fields.bgmFadeInTime;
  v8 = *(float *)&this[4].fields.effectInfo->klass;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_42089860(mPlayBgmName, v8, bgmFadeInTime, 0);
}


void QuestBoardEffectController___c__DisplayClass29_0___ctor(
        QuestBoardEffectController___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestBoardEffectController___c__DisplayClass29_0___StartBoardFadeEffect_b__0(
        QuestBoardEffectController___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardEffectController_BoardEffectInfo_o *effectInfo; // x8

  effectInfo = this->fields.effectInfo;
  if ( !effectInfo )
    sub_1C7BD40(this, method);
  effectInfo->fields.isPlaying = 0;
}


void QuestBoardEffectController___c__DisplayClass30_0___ctor(
        QuestBoardEffectController___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardEffectController___c__DisplayClass30_0___ScrollBarDisabled_b__0(
        QuestBoardEffectController___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewObject_o *obj; // x8

  obj = this->fields.obj;
  if ( !obj )
    sub_1C7BD40(this, method);
  return obj->fields.isBusy;
}