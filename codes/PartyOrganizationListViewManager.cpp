void __fastcall PartyOrganizationListViewManager___ctor(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__CreateList(
        PartyOrganizationListViewManager_o *this,
        int32_t menuKind,
        PartyListViewItem_o *partyItem,
        PartyListViewItem_o *basePartyItem,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  PartyListViewItem_o **p_partyItem; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v31; // x22
  ListViewDropObject_o *v32; // x8
  __int64 v33; // x11
  ListViewDropObject_o *v34; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct ListViewManager_o **p_manager; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **dropDragPrefab; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_GameObject_o *explanationBase; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UILabel_o *explanationLabel; // x21
  __int64 *v53; // x8
  System_String_array *PartyOrganizationServantSwapExplanationFixedServantText; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_String_array *v59; // x22
  System_Text_StringBuilder_o *v60; // x21
  System_Text_StringBuilder_o *appended; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x8
  unsigned __int64 i; // x23
  System_String_o *v66; // x0
  struct UILabel_o *v67; // x22
  System_String_o *v68; // x0
  System_String_o *v69; // x23
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x1
  UILabel_o *v73; // x0
  System_String_o *v74; // x0
  bool IsOverScope; // w0
  int32_t v76; // w1
  UnityEngine_GameObject_o *titleExplanationBase; // x0
  UnityEngine_GameObject_o *v78; // x0
  UIRangeLabel_o *titleExplanationLabel; // x20
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  System_String_o *message; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F769D & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, *(_QWORD *)&menuKind);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v15);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_10329, v17);
    sub_B16FFC(&StringLiteral_10388, v18);
    sub_B16FFC(&StringLiteral_10390, v19);
    sub_B16FFC(&StringLiteral_10387, v20);
    sub_B16FFC(&StringLiteral_10389, v21);
    sub_B16FFC(&StringLiteral_10217, v22);
    byte_40F769D = 1;
  }
  message = 0LL;
  this->fields.menuKind = menuKind;
  this->fields.basePartyItem = basePartyItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.basePartyItem,
    (System_Int32_array **)basePartyItem,
    (System_String_array **)partyItem,
    (System_String_array **)basePartyItem,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  p_partyItem = &this->fields.partyItem;
  this->fields.partyItem = partyItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)partyItem,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_17;
  v31 = 0LL;
  while ( (__int64)v31 < dropObjectList->fields._size )
  {
    if ( v31 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v32 = dropObjectList->fields._items->m_Items[v31];
    if ( v32
      && (v33 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
          *(&v32->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
    {
      if ( (PartyOrganizationListViewDropObject_c *)v32->klass->_2.typeHierarchy[v33 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        v34 = dropObjectList->fields._items->m_Items[v31];
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    if ( *p_partyItem )
    {
      Member = PartyListViewItem__GetMember(*p_partyItem, v31, 0LL);
      if ( v34 )
      {
        ((void (__fastcall *)(ListViewDropObject_o *, PartyOrganizationListViewItem_o *, Il2CppMethodPointer))v34->klass->vtable._5_SetItem.method)(
          v34,
          Member,
          v34->klass->vtable._6_SetItem.methodPtr);
        v34->fields.manager = (struct ListViewManager_o *)this;
        p_manager = &v34->fields.manager;
        sub_B16F98((BattleServantConfConponent_o *)p_manager, (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
        dropDragPrefab = (System_Int32_array **)this->fields.dropDragPrefab;
        p_manager[1] = (struct ListViewManager_o *)dropDragPrefab;
        sub_B16F98((BattleServantConfConponent_o *)(p_manager + 1), dropDragPrefab, v44, v45, v46, v47, v48, v49);
        dropObjectList = this->fields.dropObjectList;
        ++v31;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_17;
  }
  explanationBase = this->fields.explanationBase;
  if ( !explanationBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(explanationBase, 1, 0LL);
  if ( !partyItem )
    goto LABEL_17;
  questRestrictionInfo = partyItem->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_45;
  if ( QuestRestrictionInfo__IsFixedSupportPosition(questRestrictionInfo, 0LL) )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_10390;
LABEL_49:
    v74 = LocalizationManager__Get((System_String_o *)*v53, 0LL);
    if ( !explanationLabel )
      goto LABEL_17;
    v72 = v74;
    v73 = explanationLabel;
    goto LABEL_51;
  }
  if ( !QuestRestrictionInfo__IsFixedServantPosition(questRestrictionInfo, 0LL) )
  {
LABEL_45:
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_10387;
    goto LABEL_49;
  }
  PartyOrganizationServantSwapExplanationFixedServantText = QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
                                                              questRestrictionInfo,
                                                              0LL);
  if ( !PartyOrganizationServantSwapExplanationFixedServantText )
  {
    explanationLabel = this->fields.explanationLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = &StringLiteral_10388;
    goto LABEL_49;
  }
  v59 = PartyOrganizationServantSwapExplanationFixedServantText;
  v60 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v55, v56, v57, v58);
  System_Text_StringBuilder___ctor(v60, 0LL);
  v64 = *(_QWORD *)&v59->max_length;
  if ( (int)v64 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v64; ++i )
    {
      if ( i )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_10217, 0LL);
        if ( !v60 )
          goto LABEL_17;
        appended = System_Text_StringBuilder__Append_41914240(v60, v66, 0LL);
        LODWORD(v64) = v59->max_length;
      }
      if ( i >= (unsigned int)v64 )
      {
        sub_B17100(appended, v62, v63);
        sub_B170A0();
      }
      if ( !v60 )
        goto LABEL_17;
      appended = System_Text_StringBuilder__Append_41914240(v60, v59->m_Items[i], 0LL);
      LODWORD(v64) = v59->max_length;
    }
  }
  v67 = this->fields.explanationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_10389, 0LL);
  if ( !v60 )
    goto LABEL_17;
  v69 = v68;
  v70 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v60->klass->vtable._3_ToString.method)(
                          v60,
                          v60->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  v71 = System_String__Format(v69, v70, 0LL);
  if ( !v67 )
    goto LABEL_17;
  v72 = v71;
  v73 = v67;
LABEL_51:
  UILabel__set_text(v73, v72, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsOverScope = FSUtility__IsOverScope(0LL);
  if ( !this->fields.explanationLabel )
    goto LABEL_17;
  v76 = IsOverScope ? 930 : 700;
  UILabel__SetCondensedScale(this->fields.explanationLabel, v76, 0LL);
  titleExplanationBase = this->fields.titleExplanationBase;
  if ( !titleExplanationBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(titleExplanationBase, 0, 0LL);
  if ( questRestrictionInfo && QuestRestrictionInfo__GetExplanationMessage(questRestrictionInfo, &message, 0LL) )
  {
    v78 = this->fields.titleExplanationBase;
    if ( v78 )
    {
      UnityEngine_GameObject__SetActive(v78, 1, 0LL);
      titleExplanationLabel = this->fields.titleExplanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_10329, 0LL);
      v81 = System_String__Concat_43743732(v80, message, 0LL);
      if ( titleExplanationLabel )
      {
        UIRangeLabel__Set(titleExplanationLabel, v81, 0LL, 1, 0, 0LL);
        goto LABEL_67;
      }
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_67:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PartyOrganizationListViewManager__DestroyList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  __int64 v15; // x11
  Il2CppObject *current; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F769E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v13);
    byte_40F769E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      dropObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      if ( v23.fields.current
        && (v15 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1),
            *(&v23.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
      {
        if ( (PartyOrganizationListViewDropObject_c *)v23.fields.current->klass->_2.typeHierarchy[v15 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
          current = v23.fields.current;
        else
          current = 0LL;
      }
      else
      {
        current = 0LL;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        PartyOrganizationListViewDropObject__ReleaseItem((PartyOrganizationListViewDropObject_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
  this->fields.basePartyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.basePartyItem, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.partyItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.partyItem, 0LL, v17, v18, v19, v20, v21, v22);
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowServant(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.initMode = 2;
}


void __fastcall PartyOrganizationListViewManager__EndCloseShowServantQuestJump(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F76AB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F76AB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowEquip(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F76AD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndCloseShowEquip__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F76AD = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServant(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21

  if ( (byte_40F76A9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndCloseShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40F76A9 = 1;
  }
  if ( isDecide )
    PartyOrganizationListViewManager__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__EndShowServantWithQuest(
        PartyOrganizationListViewManager_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40F76AA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40F76AA = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationListViewManager__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_PartyOrganizationListViewManager_EndCloseShowServantQuestJump__,
      0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__EndSwapEquip(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 3, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewManager__GetItem(
        PartyOrganizationListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40F769F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_40F769F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


PartyListViewItem_o *__fastcall PartyOrganizationListViewManager__GetPartyItem(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


bool __fastcall PartyOrganizationListViewManager__IsCanDrag(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.initMode == 2;
}


bool __fastcall PartyOrganizationListViewManager__IsDropDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_Component_o *ListViewObject; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *v9; // x8
  UnityEngine_Object_o *v10; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40F76AF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___, info);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F76AF = 1;
  }
  if ( !info )
    goto LABEL_22;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  ListViewObject = (UnityEngine_Component_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !ListViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              ListViewObject,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewDropObject___);
  v9 = info->fields.dropSurfaceObject;
  if ( !v9 )
    goto LABEL_22;
  v10 = (UnityEngine_Object_o *)Component_WebViewObject;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    return 0;
  if ( !v10 )
LABEL_22:
    sub_B170D4();
  return PartyOrganizationListViewDropObject__GetItem((PartyOrganizationListViewDropObject_o *)v10, 0LL) != 0;
}


bool __fastcall PartyOrganizationListViewManager__IsItemDropSurface(
        PartyOrganizationListViewManager_o *this,
        ListViewDropInfo_o *info,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dropSurfaceObject; // x20
  UnityEngine_Component_o *ListViewObject; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *v9; // x8
  UnityEngine_Object_o *v10; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v12; // x1

  if ( (byte_40F76AE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___, info);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F76AE = 1;
  }
  if ( !info )
    goto LABEL_22;
  dropSurfaceObject = (UnityEngine_Object_o *)info->fields.dropSurfaceObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(dropSurfaceObject, 0LL, 0LL) )
    return 0;
  ListViewObject = (UnityEngine_Component_o *)ListViewDropInfo__get_ListViewObject(info, 0LL);
  if ( !ListViewObject )
    goto LABEL_22;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              ListViewObject,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewObject___);
  v9 = info->fields.dropSurfaceObject;
  if ( !v9 )
    goto LABEL_22;
  v10 = (UnityEngine_Object_o *)Component_WebViewObject;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationUIDragDropListViewSurface___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    return 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
    return 0;
  if ( !v10 )
LABEL_22:
    sub_B170D4();
  return PartyOrganizationListViewObject__GetItem((PartyOrganizationListViewObject_o *)v10, v12) != 0;
}


void __fastcall PartyOrganizationListViewManager__ItemDragEnd(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  if ( this->fields.initMode == 8 )
  {
    this->fields.initMode = 2;
    ListViewManager__ItemDragEnd((ListViewManager_o *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__ItemDragStart(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  if ( this->fields.initMode == 2 )
  {
    this->fields.initMode = 8;
    ListViewManager__ItemDragStart((ListViewManager_o *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewManager__ModifyItem(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *basePartyItem; // x0
  PartyListViewItem_o *partyItem; // x0
  PartyListViewItem_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  basePartyItem = this->fields.basePartyItem;
  if ( !basePartyItem
    || (PartyListViewItem__Modify(basePartyItem, 0LL), (partyItem = this->fields.partyItem) == 0LL)
    || (PartyListViewItem__Modify(partyItem, 0LL), (v5 = this->fields.partyItem) == 0LL) )
  {
    sub_B170D4();
  }
  PartyListViewItem__CheckRestriction(v5, 0LL);
  PartyOrganizationListViewManager__RequestListObject_20188984(this, 9, v6);
  PartyOrganizationListViewManager__RequestDropObject_20189412(this, 10, v7);
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquip(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B170D4();
      Index = ListViewObject__get_Index(obj, 0LL);
      PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 2, Index, 0LL);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropEquipDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v11; // x10
  CommonUI_o *v12; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ServantStatusDialog_EndDelegate_o *v18; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  ServantLeaderInfo_o *v21; // x0
  bool IsNpc; // w22
  CommonUI_o *Instance; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  ServantStatusDialog_EndDelegate_o *v29; // x23
  int32_t v30; // w1

  if ( (byte_40F76AC & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndShowEquip__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    byte_40F76AC = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = obj->fields.linkItem;
      if ( !linkItem )
        goto LABEL_8;
      v11 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        goto LABEL_8;
      }
      if ( PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL) < 1 )
      {
        if ( !PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)linkItem, 0LL) )
        {
LABEL_8:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
          return;
        }
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(
                          (PartyOrganizationListViewItem_o *)linkItem,
                          0LL);
        if ( ServantLeader )
        {
          if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
            goto LABEL_8;
          EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)linkItem, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(EquipSvtId, 0LL) < 1 )
            goto LABEL_8;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this->fields.initMode = 7;
          v21 = PartyOrganizationListViewItem__get_ServantLeader((PartyOrganizationListViewItem_o *)linkItem, 0LL);
          if ( v21 )
          {
            IsNpc = ServantLeaderInfo__IsNpc(v21, 0LL);
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(
                             (PartyOrganizationListViewItem_o *)linkItem,
                             0LL);
            v29 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v25,
                                                         v26,
                                                         v27,
                                                         v28);
            ServantStatusDialog_EndDelegate___ctor(
              v29,
              (Il2CppObject *)this,
              Method_PartyOrganizationListViewManager_EndShowEquip__,
              0LL);
            if ( Instance )
            {
              if ( IsNpc )
                v30 = 19;
              else
                v30 = 14;
              CommonUI__OpenServantEquipStatusDialog_18252676(Instance, v30, EquipTarget1, v29, 0LL, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this->fields.initMode = 7;
        v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(
                           (PartyOrganizationListViewItem_o *)linkItem,
                           0LL);
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16,
                                                     v17);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_PartyOrganizationListViewManager_EndShowEquip__,
          0LL);
        if ( v12 )
        {
          CommonUI__OpenServantEquipStatusDialog(v12, 11, EquipUserSvtId, 1, v18, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServant(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationListViewManager_CallbackFunc_o *callbackFunc; // x19
  int32_t Index; // w2

  if ( this->fields.initMode == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      if ( !obj )
        sub_B170D4();
      Index = ListViewObject__get_Index(obj, 0LL);
      PartyOrganizationListViewManager_CallbackFunc__Invoke(callbackFunc, 1, Index, 0LL);
    }
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListDropServantDetail(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  PartyOrganizationListViewItem_o *linkItem; // x20
  __int64 v13; // x10
  struct PartyListViewItem_o *partyItem; // x8
  int32_t menuKind; // w22
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  PartyListViewItem_o *v21; // x21
  int32_t index; // w20
  bool v23; // zf
  CommonUI_o *v24; // x22
  ServantStatusDialog_FormationEndDelegate_o *v25; // x23
  FollowerInfo_o *followerInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CommonUI_o *v28; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantStatusDialog_EndDelegate_o *v34; // x22
  ServantStatusDialog_EndDelegate_o *v35; // x23

  if ( (byte_40F76A8 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, obj);
    sub_B16FFC(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndShowServantWithQuest__, v8);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_EndShowServant__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40F76A8 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    if ( obj )
    {
      linkItem = (PartyOrganizationListViewItem_o *)obj->fields.linkItem;
      if ( !linkItem
        || (v13 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v13)
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
LABEL_8:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        return;
      }
      if ( linkItem->fields.userServantEntity )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        partyItem = this->fields.partyItem;
        this->fields.initMode = 6;
        if ( partyItem )
        {
          menuKind = partyItem->fields.menuKind;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v21 = this->fields.partyItem;
          index = linkItem->fields.index;
          v23 = menuKind == 8;
          v24 = (CommonUI_o *)Instance;
          if ( v23 )
          {
            v25 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B170CC(
                                                                  ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                  v17,
                                                                  v18,
                                                                  v19,
                                                                  v20);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v25,
              (Il2CppObject *)this,
              Method_PartyOrganizationListViewManager_EndShowServantWithQuest__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog_18246812(v24, 1, v21, index, v25, 0LL);
              return;
            }
          }
          else
          {
            v35 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v17,
                                                         v18,
                                                         v19,
                                                         v20);
            ServantStatusDialog_EndDelegate___ctor(
              v35,
              (Il2CppObject *)this,
              Method_PartyOrganizationListViewManager_EndShowServant__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog(v24, 1, v21, index, v35, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        followerInfo = linkItem->fields.followerInfo;
        if ( !followerInfo || FollowerInfo__get_IsNpc(followerInfo, 0LL) )
          goto LABEL_8;
        SvtId = PartyOrganizationListViewItem__get_SvtId(linkItem, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(SvtId, 0LL) < 1 )
          goto LABEL_8;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this->fields.initMode = 6;
        v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(linkItem, 0LL);
        v34 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v30,
                                                     v31,
                                                     v32,
                                                     v33);
        ServantStatusDialog_EndDelegate___ctor(
          v34,
          (Il2CppObject *)this,
          Method_PartyOrganizationListViewManager_EndShowServant__,
          0LL);
        if ( v28 )
        {
          CommonUI__OpenServantStatusDialog_18250312(v28, 5, ServantLeader, v34, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall PartyOrganizationListViewManager__OnClickListView(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationListViewManager__OnMoveEnd(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40F76A7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F76A7 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v16; // x9
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x22
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F76A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v12);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v13);
    byte_40F76A4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      dropObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v23.fields.current;
      if ( v23.fields.current )
      {
        v16 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (PartyOrganizationListViewDropObject_c *)v23.fields.current->klass->_2.typeHierarchy[v16 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          sub_B173C8(v23.fields.current);
LABEL_18:
          sub_B170D4();
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
        System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_32302580(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v21,
          delay,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestDropObject_20189412(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropObjectList; // x0
  Il2CppObject *current; // x21
  __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x22
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F76A5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v10);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v11);
    byte_40F76A5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  dropObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.dropObjectList;
  if ( dropObjectList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      dropObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
    {
      current = v21.fields.current;
      if ( v21.fields.current )
      {
        v14 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (PartyOrganizationListViewDropObject_c *)v21.fields.current->klass->_2.typeHierarchy[v14 - 1] != PartyOrganizationListViewDropObject_TypeInfo )
        {
          sub_B173C8(v21.fields.current);
LABEL_18:
          sub_B170D4();
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
        if ( !current )
          goto LABEL_18;
        PartyOrganizationListViewDropObject__Init_32302688(
          (PartyOrganizationListViewDropObject_o *)current,
          mode,
          v19,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestInto(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  PartyOrganizationListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F76A6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v4);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v5);
    sub_B16FFC(&StringLiteral_10004, v6);
    byte_40F76A6 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ObjectList = PartyOrganizationListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v13, 4, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *current; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F76A2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v11);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v12);
    byte_40F76A2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v20,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__RequestListObject_20188984(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F76A3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_40F76A3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PartyOrganizationListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(
        (PartyOrganizationListViewObject_o *)current,
        mode,
        v18,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_PartyOrganizationListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetDispSwapGuide(
        PartyOrganizationListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x23
  unsigned __int64 v8; // x21
  bool v9; // w20
  ListViewDropObject_o *v10; // x8
  __int64 v11; // x11
  __int64 v12; // x11
  PartyOrganizationListViewDropObject_o *v13; // x0

  if ( (byte_40F76B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, isDisp);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v5);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v6);
    byte_40F76B0 = 1;
  }
  dropObjectList = this->fields.dropObjectList;
  if ( !dropObjectList )
LABEL_17:
    sub_B170D4();
  v8 = 0LL;
  v9 = isDisp;
  while ( (__int64)v8 < dropObjectList->fields._size )
  {
    if ( v8 >= (unsigned int)dropObjectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = dropObjectList->fields._items->m_Items[v8];
    if ( v10 )
    {
      v11 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (PartyOrganizationListViewDropObject_c *)v10->klass->_2.typeHierarchy[v11 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
      {
        v12 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
          v13 = (PartyOrganizationListViewDropObject_c *)v10->klass->_2.typeHierarchy[v12 - 1] == PartyOrganizationListViewDropObject_TypeInfo
              ? (PartyOrganizationListViewDropObject_o *)dropObjectList->fields._items->m_Items[v8]
              : 0LL;
        else
          v13 = 0LL;
        PartyOrganizationListViewDropObject__SetDispSwapGuide(v13, v9, 0LL);
        dropObjectList = this->fields.dropObjectList;
        ++v8;
        if ( dropObjectList )
          continue;
      }
    }
    goto LABEL_17;
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        PartyOrganizationListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_20192356(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetMode_20192356(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  int32_t v15; // w1
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *ClippingObjectList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int size; // w8
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v22; // x20
  int v23; // w8
  __int64 v24; // x23
  PartyOrganizationListViewObject_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v28; // x20
  unsigned __int64 v29; // x21
  ListViewDropObject_o *v30; // x25
  System_Action_o *v31; // x20
  __int64 v32; // x10
  __int64 v33; // x10
  PartyOrganizationListViewDropObject_o *v34; // x0
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int v40; // w8
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v41; // x20
  int v42; // w8
  __int64 v43; // x23
  PartyOrganizationListViewObject_o *v44; // x21
  System_Action_o *v45; // x22
  const MethodInfo *v46; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v47; // x20
  unsigned __int64 v48; // x21
  ListViewDropObject_o *v49; // x25
  System_Action_o *v50; // x20
  __int64 v51; // x10
  __int64 v52; // x10
  PartyOrganizationListViewDropObject_o *v53; // x0
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int v59; // w8
  System_Collections_Generic_List_PartyOrganizationListViewObject__o *v60; // x20
  int v61; // w8
  __int64 v62; // x23
  PartyOrganizationListViewObject_o *v63; // x21
  System_Action_o *v64; // x22
  const MethodInfo *v65; // x3
  struct System_Collections_Generic_List_ListViewDropObject__o *v66; // x20
  unsigned __int64 v67; // x21
  ListViewDropObject_o *v68; // x25
  System_Action_o *v69; // x20
  __int64 v70; // x10
  __int64 v71; // x10
  PartyOrganizationListViewDropObject_o *v72; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F76A1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewDropObject__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__get_Item__, v8);
    sub_B16FFC(&PartyOrganizationListViewDropObject_TypeInfo, v9);
    sub_B16FFC(&Method_PartyOrganizationListViewManager_OnMoveEnd__, v10);
    byte_40F76A1 = 1;
  }
  if ( mode == 9 )
  {
    PartyOrganizationListViewManager__ModifyItem(this, *(const MethodInfo **)&mode);
  }
  else
  {
    dropObjectList = this->fields.dropObjectList;
    this->fields.initMode = mode;
    if ( !dropObjectList )
      goto LABEL_78;
    this->fields.callbackCount = dropObjectList->fields._size;
    ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
    switch ( mode )
    {
      case 1:
        PartyOrganizationListViewManager__RequestListObject_20188984(this, 2, v13);
        v15 = 2;
        goto LABEL_9;
      case 2:
        PartyOrganizationListViewManager__RequestListObject_20188984(this, 3, v13);
        v15 = 4;
LABEL_9:
        PartyOrganizationListViewManager__RequestDropObject_20189412(this, v15, v14);
        return;
      case 3:
        ClippingObjectList = PartyOrganizationListViewManager__get_ClippingObjectList(this, v12);
        if ( !ClippingObjectList )
          goto LABEL_78;
        size = ClippingObjectList->fields._size;
        v22 = ClippingObjectList;
        if ( size < 1 )
          goto LABEL_18;
        this->fields.callbackCount += size;
        v23 = ClippingObjectList->fields._size;
        if ( v23 < 1 )
          goto LABEL_18;
        v24 = 0LL;
        do
        {
          if ( v23 <= (unsigned int)v24 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v25 = v22->fields._items->m_Items[v24];
          v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
          System_Action___ctor(v26, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v25 )
            goto LABEL_78;
          zero = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v25, 4, v26, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v27);
          v23 = v22->fields._size;
          ++v24;
        }
        while ( (int)v24 < v23 );
LABEL_18:
        v28 = this->fields.dropObjectList;
        if ( !v28 )
          goto LABEL_78;
        v29 = 0LL;
        while ( (__int64)v29 < v28->fields._size )
        {
          if ( v29 >= (unsigned int)v28->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v30 = v28->fields._items->m_Items[v29];
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
          System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v30 )
          {
            v32 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v32
              && (PartyOrganizationListViewDropObject_c *)v30->klass->_2.typeHierarchy[v32 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v33 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v33 )
                v34 = (PartyOrganizationListViewDropObject_c *)v30->klass->_2.typeHierarchy[v33 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v30
                    : 0LL;
              else
                v34 = 0LL;
              PartyOrganizationListViewDropObject__Init_32302580(v34, 2, v31, 0.1, 0LL);
              v28 = this->fields.dropObjectList;
              ++v29;
              if ( v28 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 4:
        v35 = PartyOrganizationListViewManager__get_ClippingObjectList(this, v12);
        if ( !v35 )
          goto LABEL_78;
        v40 = v35->fields._size;
        v41 = v35;
        if ( v40 < 1 )
          goto LABEL_41;
        this->fields.callbackCount += v40;
        v42 = v35->fields._size;
        if ( v42 < 1 )
          goto LABEL_41;
        v43 = 0LL;
        do
        {
          if ( v42 <= (unsigned int)v43 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v44 = v41->fields._items->m_Items[v43];
          v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
          System_Action___ctor(v45, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( !v44 )
            goto LABEL_78;
          v74 = UnityEngine_Vector3__get_zero(0LL);
          PartyOrganizationListViewObject__Init(v44, 5, v45, 0.1, *(UnityEngine_Vector3_o *)&v74.fields.y, v46);
          v42 = v41->fields._size;
          ++v43;
        }
        while ( (int)v43 < v42 );
LABEL_41:
        v47 = this->fields.dropObjectList;
        if ( !v47 )
          goto LABEL_78;
        v48 = 0LL;
        while ( (__int64)v48 < v47->fields._size )
        {
          if ( v48 >= (unsigned int)v47->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v49 = v47->fields._items->m_Items[v48];
          v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
          System_Action___ctor(v50, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
          if ( v49 )
          {
            v51 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v49->klass->_2.bitflags2 + 1) >= (unsigned int)v51
              && (PartyOrganizationListViewDropObject_c *)v49->klass->_2.typeHierarchy[v51 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
            {
              v52 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
              if ( *(&v49->klass->_2.bitflags2 + 1) >= (unsigned int)v52 )
                v53 = (PartyOrganizationListViewDropObject_c *)v49->klass->_2.typeHierarchy[v52 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                    ? (PartyOrganizationListViewDropObject_o *)v49
                    : 0LL;
              else
                v53 = 0LL;
              PartyOrganizationListViewDropObject__Init_32302580(v53, 2, v50, 0.1, 0LL);
              v47 = this->fields.dropObjectList;
              ++v48;
              if ( v47 )
                continue;
            }
          }
          goto LABEL_78;
        }
        return;
      case 5:
        v54 = PartyOrganizationListViewManager__get_ClippingObjectList(this, v12);
        if ( !v54 )
          goto LABEL_78;
        v59 = v54->fields._size;
        v60 = v54;
        if ( v59 < 1 )
          goto LABEL_64;
        this->fields.callbackCount += v59;
        v61 = v54->fields._size;
        if ( v61 < 1 )
          goto LABEL_64;
        v62 = 0LL;
        break;
      default:
        return;
    }
    do
    {
      if ( v61 <= (unsigned int)v62 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v63 = v60->fields._items->m_Items[v62];
      v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
      System_Action___ctor(v64, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( !v63 )
        goto LABEL_78;
      v75 = UnityEngine_Vector3__get_zero(0LL);
      PartyOrganizationListViewObject__Init(v63, 6, v64, 0.1, *(UnityEngine_Vector3_o *)&v75.fields.y, v65);
      v61 = v60->fields._size;
      ++v62;
    }
    while ( (int)v62 < v61 );
LABEL_64:
    v66 = this->fields.dropObjectList;
    if ( !v66 )
LABEL_78:
      sub_B170D4();
    v67 = 0LL;
    while ( (__int64)v67 < v66->fields._size )
    {
      if ( v67 >= (unsigned int)v66->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v68 = v66->fields._items->m_Items[v67];
      v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_PartyOrganizationListViewManager_OnMoveEnd__, 0LL);
      if ( v68 )
      {
        v70 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v68->klass->_2.bitflags2 + 1) >= (unsigned int)v70
          && (PartyOrganizationListViewDropObject_c *)v68->klass->_2.typeHierarchy[v70 - 1] == PartyOrganizationListViewDropObject_TypeInfo )
        {
          v71 = *(&PartyOrganizationListViewDropObject_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v68->klass->_2.bitflags2 + 1) >= (unsigned int)v71 )
            v72 = (PartyOrganizationListViewDropObject_c *)v68->klass->_2.typeHierarchy[v71 - 1] == PartyOrganizationListViewDropObject_TypeInfo
                ? (PartyOrganizationListViewDropObject_o *)v68
                : 0LL;
          else
            v72 = 0LL;
          PartyOrganizationListViewDropObject__Init_32302580(v72, 2, v69, 0.1, 0LL);
          v66 = this->fields.dropObjectList;
          ++v67;
          if ( v66 )
            continue;
        }
      }
      goto LABEL_78;
    }
  }
}


void __fastcall PartyOrganizationListViewManager__SetMode_20194000(
        PartyOrganizationListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  PartyOrganizationListViewManager__SetMode_20192356(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager__SetObjectItem(
        PartyOrganizationListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x10
  int32_t initMode; // w19
  const MethodInfo *v9; // x3
  int v10; // s1
  int32_t v13; // w1

  v4 = obj;
  if ( (byte_40F76A0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, obj);
    sub_B16FFC(&PartyOrganizationListViewObject_TypeInfo, v6);
    byte_40F76A0 = 1;
  }
  if ( v4 )
  {
    v7 = *(&PartyOrganizationListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      if ( (PartyOrganizationListViewObject_c *)v4->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
  {
    if ( !v4 )
      sub_B170D4();
    initMode = this->fields.initMode;
    *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Vector3__get_zero(0LL);
    if ( initMode == 2 )
      v13 = 3;
    else
      v13 = 2;
    PartyOrganizationListViewObject__Init(
      (PartyOrganizationListViewObject_o *)v4,
      v13,
      0LL,
      0.0,
      *(UnityEngine_Vector3_o *)&v10,
      v9);
  }
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F7697 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F7697 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B173C8(v7);
  PartyOrganizationListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__add_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F7699 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F7699 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B173C8(v7);
  PartyOrganizationListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ClippingObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  PartyOrganizationListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F769C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F769C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (PartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)current,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)PartyOrganizationListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v14;
}


System_Collections_Generic_List_PartyOrganizationListViewObject__o *__fastcall PartyOrganizationListViewManager__get_ObjectList(
        PartyOrganizationListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F769B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F769B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_PartyOrganizationListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_PartyOrganizationListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_PartyOrganizationListViewObject__o *)v14;
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc(
        PartyOrganizationListViewManager_o *this,
        PartyOrganizationListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F7698 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewManager_CallbackFunc_TypeInfo, value);
    byte_40F7698 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationListViewManager_CallbackFunc_c *)v7->klass != PartyOrganizationListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B173C8(v7);
  PartyOrganizationListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall PartyOrganizationListViewManager__remove_callbackFunc2(
        PartyOrganizationListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F769A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F769A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyOrganizationListViewManager_o *)sub_B173C8(v7);
  PartyOrganizationListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager_CallbackFunc___ctor(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationListViewManager_CallbackFunc__BeginInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_40F837A & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&PartyOrganizationListViewManager_ResultKind_TypeInfo, v9);
    byte_40F837A = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall PartyOrganizationListViewManager_CallbackFunc__EndInvoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewManager_CallbackFunc__Invoke(
        PartyOrganizationListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}