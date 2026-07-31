void ExRoomStateQuest___ctor(ExRoomStateQuest_o *this, ExRoomRootComponent_o *exRoom, const MethodInfo *method)
{
  ExRoomStateQuest_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = this;
  *(_QWORD *)&this->fields.titleBackKind = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.root = exRoom;
  v4 = (ExRoomStateQuest_o *)((char *)v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v4, (int32_t)exRoom, v5, v6, v7, v8, v9, v10);
  v4->fields.root = (struct ExRoomRootComponent_o *)0x7400000065LL;
}


void ExRoomStateQuest__OnClickBack(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  ExRoomRootComponent_o *background; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *TerminalScene; // x20
  const MethodInfo *v10; // x2

  if ( (byte_5932D97 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D97 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  background = (ExRoomRootComponent_o *)UnityEngine_Object__op_Equality(root, 0, 0);
  if ( ((unsigned __int8)background & 1) == 0 )
  {
    if ( !this->fields.root )
      goto LABEL_19;
    TerminalScene = (UnityEngine_Object_o *)ExRoomRootComponent__get_TerminalScene(background, v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    background = (ExRoomRootComponent_o *)UnityEngine_Object__op_Inequality(TerminalScene, 0, 0);
    if ( ((unsigned __int8)background & 1) != 0 )
    {
      if ( !this->fields.root )
        goto LABEL_19;
      background = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(background, v6);
      if ( !background )
        goto LABEL_19;
      background = (ExRoomRootComponent_o *)TerminalSceneComponent__QuestInfoShowing(
                                              (TerminalSceneComponent_o *)background,
                                              0);
      if ( (int)background >= 1 )
      {
        if ( !this->fields.root )
          goto LABEL_19;
        background = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(background, v6);
        if ( !background )
          goto LABEL_19;
        background = (ExRoomRootComponent_o *)background[2].fields.background;
        if ( !background )
          goto LABEL_19;
        QuestInformationComponent__CloseWindow((QuestInformationComponent_o *)background, 0, 0);
      }
    }
    background = this->fields.root;
    if ( background )
    {
      ExRoomRootComponent__ChangeState(background, 1, v10);
      return;
    }
LABEL_19:
    sub_21FFECC(background, v6);
  }
}


void ExRoomStateQuest__OnEnter(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  ExRoomQuestComponent_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ExRoomRootComponent_o *v8; // x8
  UnityEngine_Object_o *QuestDisp_k__BackingField; // x20
  const MethodInfo *v10; // x3
  struct ExRoomRootComponent_o *v11; // x8
  UnityEngine_MonoBehaviour_o *v12; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  struct ExRoomRootComponent_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  const MethodInfo *v18; // x2
  struct ExRoomRootComponent_o *v19; // x8

  if ( (byte_5932D95 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateQuest__OnEnter_b__2_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932D95 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (ExRoomQuestComponent_o *)UnityEngine_Object__op_Equality(root, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    goto LABEL_10;
  v8 = this->fields.root;
  if ( !v8 )
    goto LABEL_35;
  QuestDisp_k__BackingField = (UnityEngine_Object_o *)v8->fields._QuestDisp_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v5 = (ExRoomQuestComponent_o *)UnityEngine_Object__op_Equality(QuestDisp_k__BackingField, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
LABEL_10:
    this->fields._OnEndEnter_k__BackingField = 1;
    return;
  }
  v11 = this->fields.root;
  if ( !v11
    || (v5 = v11->fields._QuestDisp_k__BackingField) == 0
    || (ExRoomQuestComponent__Init(v5, v11->fields.actionPanel, v11->fields._ResourceCatalog_k__BackingField, v10),
        v12 = (UnityEngine_MonoBehaviour_o *)this->fields.root,
        v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_ExRoomStateQuest__OnEnter_b__2_0__, 0),
        v5 = (ExRoomQuestComponent_o *)BasicHelper__DelayCall_51090016(1, v13, 0),
        !v12) )
  {
LABEL_35:
    sub_21FFECC(v5, v6);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(v12, (System_Collections_IEnumerator_o *)v5, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
  if ( !byte_5932E00 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932E00 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v15, v6, v14);
    if ( !byte_5932E01 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932E01 = 1;
    }
    v5 = (ExRoomQuestComponent_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
      v5 = (ExRoomQuestComponent_o *)TerminalPramsManager_TypeInfo;
    }
    v16 = this->fields.root;
    BYTE4(v5[1].fields.missionListViewPanel[1].fields.itemList) = 0;
    if ( !v16 )
      goto LABEL_35;
    v17 = (UnityEngine_Object_o *)v16->fields._QuestDisp_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v14);
    v5 = (ExRoomQuestComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v19 = this->fields.root;
      if ( v19 )
      {
        v5 = v19->fields._QuestDisp_k__BackingField;
        if ( v5 )
        {
          ExRoomQuestComponent__OpenMasterMission(v5, -1, v18);
          return;
        }
      }
      goto LABEL_35;
    }
  }
}


void ExRoomStateQuest__OnEnterPlayVoice(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  ExRoomServant_o *servant; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  struct ExRoomRootComponent_o *root; // x8
  struct ExRoomRootComponent_o *v7; // x8

  if ( (byte_5932D94 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6540/*"ExRoom_QuestWinShowStarted"*/);
    byte_5932D94 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_6540/*"ExRoom_QuestWinShowStarted"*/, 0);
  root = this->fields.root;
  if ( !root )
    goto LABEL_9;
  if ( root->fields.exRoomFromOutsideMainMenuType == 3 )
  {
    servant = root->fields.servant;
    if ( servant )
    {
      ExRoomServant__PlayVoice(servant, 5, 1, v5);
      v7 = this->fields.root;
      if ( v7 )
      {
        v7->fields.exRoomFromOutsideMainMenuType = 0;
        return;
      }
    }
LABEL_9:
    sub_21FFECC(servant, v4);
  }
  ExRoomStateBase__OnEnterPlayVoice((ExRoomStateBase_o *)this, v4);
}


void ExRoomStateQuest__OnExit(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ExRoomRootComponent_o *v8; // x8
  UnityEngine_Object_o *QuestDisp_k__BackingField; // x20
  struct ExRoomRootComponent_o *v10; // x8
  ExRoomQuestComponent_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_5932D96 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateQuest__OnExit_b__3_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D96 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(root, 0, 0);
  if ( !v5 )
  {
    v8 = this->fields.root;
    if ( !v8 )
      goto LABEL_14;
    QuestDisp_k__BackingField = (UnityEngine_Object_o *)v8->fields._QuestDisp_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = UnityEngine_Object__op_Inequality(QuestDisp_k__BackingField, 0, 0);
    if ( v5 )
    {
      v10 = this->fields.root;
      if ( v10 )
      {
        v11 = v10->fields._QuestDisp_k__BackingField;
        v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ExRoomStateQuest__OnExit_b__3_0__, 0);
        if ( v11 )
        {
          ExRoomQuestComponent__SlideOut(v11, v12, v13);
          return;
        }
      }
LABEL_14:
      sub_21FFECC(v5, v6);
    }
  }
  this->fields._OnEndExit_k__BackingField = 1;
}


void ExRoomStateQuest___OnEnter_b__2_0(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  struct ExRoomRootComponent_o *root; // x8
  ExRoomStateQuest_o *v3; // x19

  root = this->fields.root;
  if ( !root || (v3 = this, (this = (ExRoomStateQuest_o *)root->fields._QuestDisp_k__BackingField) == 0) )
    sub_21FFECC(this, method);
  ExRoomQuestComponent__SlideIn((ExRoomQuestComponent_o *)this, method);
  v3->fields._OnEndEnter_k__BackingField = 1;
}


void ExRoomStateQuest___OnExit_b__3_0(ExRoomStateQuest_o *this, const MethodInfo *method)
{
  this->fields._OnEndExit_k__BackingField = 1;
}