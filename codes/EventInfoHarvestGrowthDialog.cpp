void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FA12A & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA12A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v18; // w21
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FA127 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FA127 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, v7, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(v8, v9, v10);
        sub_B170A0();
      }
      v19 = dispObjList->m_Items[v18];
      if ( !v19 )
        break;
      UnityEngine_GameObject__SetActive(v19, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v10, v11, v12, v13, v14, v15);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FA129 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA129 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  WebViewManager_o *Instance; // x0
  DataManager_o *v39; // x23
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  GiftMaster_o *v41; // x25
  QuestPhaseMaster_o *v42; // x0
  QuestPhaseEntity_o *Entity; // x0
  System_String_o *ScriptStr; // x0
  System_String_o *v45; // x19
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v47; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  QuestEntity_o *v49; // x0
  System_Collections_Generic_List_GiftEntity__o *v50; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x23
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x27
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **current; // x1
  GiftEntity_o **v69; // x26
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  EventInfoHarvestGrowthDialog_GiftInfo_o *v74; // x25
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v79; // x28
  peRenderTexture_ChangeLayerObject_o *v80; // x0
  int32_t type; // w8
  __int64 v82; // x0
  const MethodInfo *v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  int size; // w19
  il2cpp_array_size_t v91; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v96; // x25
  System_Int32_array **v97; // x1
  UnityEngine_GameObject_o *v98; // x8
  struct UILabel_array *v99; // x20
  __int64 v100; // x24
  System_String_o *v101; // x21
  Il2CppObject *v102; // x0
  unsigned int v103; // w21
  ItemIconComponent_o *v104; // x27
  __int64 v105; // x22
  UILabel_o *v106; // x26
  int32_t v107; // w3
  System_String_o **v108; // x8
  bool v109; // w1
  ItemIconComponent_o *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  System_Text_StringBuilder_o *v115; // x27
  System_String_o *v116; // x28
  Il2CppObject *v117; // x0
  __int64 *v118; // x8
  System_String_o *v119; // x28
  _QWORD **v120; // x22
  __int64 v121; // x21
  __int16 v122; // w8
  __int64 v123; // x21
  __int64 v124; // x21
  __int64 v125; // x21
  System_String_o *v126; // x0
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x21
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  UnityEngine_GameObject_o *v137; // [xsp+8h] [xbp-B8h]
  WarEntity_o *v138; // [xsp+18h] [xbp-A8h]
  System_String_o *value; // [xsp+20h] [xbp-A0h]
  EventInfoHarvestGrowthDialog_o *v141; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v142; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v143; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FA128 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_B16FFC(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&Method_System_Predicate_GiftEntity___ctor__, v24);
    sub_B16FFC(&System_Predicate_GiftEntity__TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v27);
    sub_B16FFC(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v28);
    sub_B16FFC(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v29);
    sub_B16FFC(&StringLiteral_5618/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v30);
    sub_B16FFC(&StringLiteral_19395/*"img_common_frame01"*/, v31);
    sub_B16FFC(&StringLiteral_19039/*"harvestGrowthTitle"*/, v32);
    sub_B16FFC(&StringLiteral_5617/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v33);
    sub_B16FFC(&StringLiteral_5615/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v34);
    sub_B16FFC(&StringLiteral_5619/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v35);
    sub_B16FFC(&StringLiteral_1/*""*/, v36);
    sub_B16FFC(&StringLiteral_5616/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v37);
    byte_40FA128 = 1;
  }
  memset(&v143, 0, sizeof(v143));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v39 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v41 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v39,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  v42 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v39,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_99;
  if ( !v42 )
    goto LABEL_99;
  Entity = QuestPhaseMaster__GetEntity(v42, harvestGrowthInfo->fields.questId, harvestGrowthInfo->fields.phase, 0LL);
  if ( !Entity )
    goto LABEL_99;
  ScriptStr = QuestPhaseEntity__getScriptStr(Entity, (System_String_o *)StringLiteral_19039/*"harvestGrowthTitle"*/, 0LL, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_99;
  v45 = ScriptStr;
  QuestEntity = QuestMaster__getQuestEntity(
                  MasterData_WarQuestSelectionMaster,
                  harvestGrowthInfo->fields.beforeQuestId,
                  0LL);
  if ( !QuestEntity )
    goto LABEL_99;
  v141 = this;
  if ( !v41 )
    goto LABEL_99;
  v47 = QuestEntity;
  ListById = GiftMaster__GetListById(v41, QuestEntity->fields.giftId, 0LL);
  v49 = QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, harvestGrowthInfo->fields.afterQuestId, 0LL);
  if ( !v49 )
    goto LABEL_99;
  v50 = GiftMaster__GetListById(v41, v49->fields.giftId, 0LL);
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v39,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !v51 )
    goto LABEL_99;
  value = v45;
  v138 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v51,
           v47->fields.spotId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo,
                                                                                                  v52,
                                                                                                  v53,
                                                                                                  v54,
                                                                                                  v55);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v50 )
    goto LABEL_99;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v142,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v50,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v143 = v142;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v143,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v61 = sub_B170CC(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v57, v58, v59, v60);
    EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
      (EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *)v61,
      0LL);
    if ( !v61 )
      sub_B170D4();
    current = (System_Int32_array **)v143.fields.current;
    *(_QWORD *)(v61 + 16) = v143.fields.current;
    v69 = (GiftEntity_o **)(v61 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v61 + 16), current, v62, v63, v64, v65, v66, v67);
    v74 = (EventInfoHarvestGrowthDialog_GiftInfo_o *)sub_B170CC(
                                                       EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo,
                                                       v70,
                                                       v71,
                                                       v72,
                                                       v73);
    EventInfoHarvestGrowthDialog_GiftInfo___ctor(v74, 0LL);
    if ( !*(_QWORD *)(v61 + 16) )
      sub_B170D4();
    if ( !v74 )
      sub_B170D4();
    v74->fields.type = *(_DWORD *)(*(_QWORD *)(v61 + 16) + 20LL);
    if ( !*v69 )
      sub_B170D4();
    v74->fields.objectId = (*v69)->fields.objectId;
    if ( !*v69 )
      sub_B170D4();
    v74->fields.iconId = GiftEntity__getIconImageId(*v69, 0LL);
    if ( !*v69 )
      sub_B170D4();
    v74->fields.num = (*v69)->fields.num;
    v79 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_GiftEntity__TypeInfo,
                                                                     v75,
                                                                     v76,
                                                                     v77,
                                                                     v78);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v79,
      (Il2CppObject *)v61,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_GiftEntity___ctor__);
    if ( !ListById )
      sub_B170D4();
    v80 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ListById,
            (System_Predicate_T__o *)v79,
            (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v80 )
    {
      if ( !*v69 )
        sub_B170D4();
      v74->fields.addNum = (*v69)->fields.num - HIDWORD(v80->fields.renderer);
      if ( !v56 )
LABEL_108:
        sub_B170D4();
    }
    else
    {
      type = v74->fields.type;
      v74->fields.addNum = 0;
      if ( type == 1 )
      {
        v74->fields.isGradeup = 1;
        if ( !v56 )
          goto LABEL_108;
      }
      else
      {
        v74->fields.isNew = 1;
        if ( !v56 )
          goto LABEL_108;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v143,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v56 )
LABEL_99:
    sub_B170D4();
  size = v56->fields._size;
  if ( size <= 0 )
  {
LABEL_35:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v91 = size - 1;
  switch ( size )
  {
    case 1:
      p_countIconList01 = &this->fields.countIconList01;
      p_countLabelList01 = &this->fields.countLabelList01;
      goto LABEL_39;
    case 2:
      p_countIconList01 = &this->fields.countIconList02;
      p_countLabelList01 = &this->fields.countLabelList02;
      goto LABEL_39;
    case 3:
      p_countIconList01 = &this->fields.countIconList03;
      p_countLabelList01 = &this->fields.countLabelList03;
      goto LABEL_39;
    case 4:
      p_countIconList01 = &this->fields.countIconList04;
      p_countLabelList01 = &this->fields.countLabelList04;
LABEL_39:
      dispObjList = this->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_99;
      if ( v91 >= dispObjList->max_length )
        goto LABEL_100;
      messageList = this->fields.messageList;
      if ( !messageList )
        goto LABEL_99;
      if ( v91 >= messageList->max_length )
        goto LABEL_100;
      v96 = *p_countIconList01;
      v97 = (System_Int32_array **)messageList->m_Items[v91];
      v98 = dispObjList->m_Items[v91];
      v99 = *p_countLabelList01;
      v141->fields.messageLabel = (struct UILabel_o *)v97;
      v137 = v98;
      sub_B16F98((BattleServantConfConponent_o *)&v141->fields.messageLabel, v97, v84, v85, v86, v87, v88, v89);
      if ( !v96 )
        goto LABEL_99;
      v100 = 4LL;
      break;
    default:
      goto LABEL_35;
  }
  do
  {
    v103 = v100 - 4;
    if ( (unsigned int)(v100 - 4) >= v96->max_length )
    {
LABEL_100:
      sub_B17100(v82, v83, v84);
      sub_B170A0();
    }
    v104 = (ItemIconComponent_o *)*((_QWORD *)&v96->obj.klass + v100);
    if ( v56->fields._size <= v103 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !v99 )
      goto LABEL_99;
    if ( v103 >= v99->max_length )
      goto LABEL_100;
    v105 = *((_QWORD *)&v56->fields._items->obj.klass + v100);
    if ( !v105 || !v104 )
      goto LABEL_99;
    v106 = (UILabel_o *)*((_QWORD *)&v99->obj.klass + v100);
    if ( *(int *)(v105 + 28) <= 1 )
      v107 = -1;
    else
      v107 = *(_DWORD *)(v105 + 28);
    ItemIconComponent__SetGift(
      *((ItemIconComponent_o **)&v96->obj.klass + v100),
      *(_DWORD *)(v105 + 16),
      *(_DWORD *)(v105 + 20),
      v107,
      0,
      0LL);
    if ( *(_DWORD *)(v105 + 16) == 1 )
    {
      v108 = (System_String_o **)&StringLiteral_19395/*"img_common_frame01"*/;
      v109 = 1;
      v110 = v104;
    }
    else
    {
      v108 = (System_String_o **)&StringLiteral_1/*""*/;
      v110 = v104;
      v109 = 0;
    }
    ItemIconComponent__setFrameSprite(v110, v109, *v108, 0LL);
    v115 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v111, v112, v113, v114);
    System_Text_StringBuilder___ctor(v115, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v116 = LocalizationManager__Get((System_String_o *)StringLiteral_5616/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v142.fields.list) = *(_DWORD *)(v105 + 28);
    v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
    if ( !v115 )
      goto LABEL_99;
    System_Text_StringBuilder__AppendFormat(v115, v116, v117, 0LL);
    if ( *(_BYTE *)(v105 + 36) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v118 = &StringLiteral_5617/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_77:
      v119 = LocalizationManager__Get((System_String_o *)*v118, 0LL);
      v120 = (_QWORD **)Method_System_Array_Empty_object___;
      v121 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v122 = *(_WORD *)(v121 + 306);
      if ( (v122 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v122 = *(_WORD *)(v121 + 306);
      }
      if ( (v122 & 0x400) != 0 )
      {
        v123 = *v120[6];
        if ( (*(_BYTE *)(v123 + 306) & 1) == 0 )
          sub_AAFCFC(*v120[6]);
        if ( !*(_DWORD *)(v123 + 224) )
        {
          v124 = *v120[6];
          if ( (*(_BYTE *)(v124 + 306) & 1) == 0 )
            sub_AAFCFC(*v120[6]);
          j_il2cpp_runtime_class_init_0(v124);
        }
      }
      v125 = *v120[6];
      if ( (*(_BYTE *)(v125 + 306) & 1) == 0 )
        sub_AAFCFC(*v120[6]);
      System_Text_StringBuilder__AppendFormat_41920988(v115, v119, **(System_Object_array ***)(v125 + 184), 0LL);
      goto LABEL_89;
    }
    if ( *(_BYTE *)(v105 + 37) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v118 = &StringLiteral_5618/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_77;
    }
    if ( *(int *)(v105 + 32) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v142.fields.list) = *(_DWORD *)(v105 + 32);
      v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
      System_Text_StringBuilder__AppendFormat(v115, v101, v102, 0LL);
    }
LABEL_89:
    v126 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v115->klass->vtable._3_ToString.method)(
                                v115,
                                v115->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v106 )
      goto LABEL_99;
    UILabel__set_text(v106, v126, 0LL);
    ++v100;
  }
  while ( (int)v100 - 4 < size );
  EventInfoHarvestGrowthDialog__Init(v141, v83);
  if ( !v137 )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(v137, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v141, 0LL, 0, 0LL);
  titleLabel = v141->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_99;
  UILabel__set_text(titleLabel, value, 0LL);
  messageLabel = v141->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !v138 )
    goto LABEL_99;
  v130 = System_String__Format(v129, (Il2CppObject *)v138->fields.name, 0LL);
  if ( !messageLabel )
    goto LABEL_99;
  UILabel__set_text(messageLabel, v130, 0LL);
  v141->fields.closeAction = closeAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v141->fields.closeAction,
    (System_Int32_array **)closeAction,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
}


void __fastcall EventInfoHarvestGrowthDialog___OnClickCloseButton_b__22_0(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  EventInfoHarvestGrowthDialog__Init(this, v3);
}


void __fastcall EventInfoHarvestGrowthDialog_GiftInfo___ctor(
        EventInfoHarvestGrowthDialog_GiftInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoHarvestGrowthDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !entity || (giftEntity = this->fields.giftEntity) == 0LL )
    sub_B170D4();
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}