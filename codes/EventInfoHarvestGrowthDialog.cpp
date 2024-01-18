void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418865D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418865D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v16; // w21
  __int64 v17; // x0

  if ( (byte_418865A & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418865A = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v17 = sub_B2C460(titleLabel);
        sub_B2C400(v17, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v16];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(titleLabel, v5);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_418865C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418865C = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  void *Instance; // x0
  const MethodInfo *v39; // x1
  DataManager_o *v40; // x23
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  GiftMaster_o *v42; // x25
  System_String_o *v43; // x19
  _DWORD *v44; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v46; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x23
  __int64 v48; // x27
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **current; // x1
  GiftEntity_o **v58; // x26
  EventInfoHarvestGrowthDialog_GiftInfo_o *v59; // x25
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 IconImageId; // x0
  __int64 v63; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v64; // x28
  __int64 v65; // x0
  __int64 v66; // x1
  peRenderTexture_ChangeLayerObject_o *v67; // x0
  __int64 v68; // x1
  int32_t type; // w8
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int size; // w19
  il2cpp_array_size_t v77; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v82; // x25
  System_Int32_array **v83; // x1
  UnityEngine_GameObject_o *v84; // x8
  struct UILabel_array *v85; // x20
  __int64 v86; // x24
  System_String_o *v87; // x21
  Il2CppObject *v88; // x0
  unsigned int v89; // w21
  ItemIconComponent_o *v90; // x27
  __int64 v91; // x22
  UILabel_o *v92; // x26
  int32_t v93; // w3
  System_String_o **v94; // x8
  bool v95; // w1
  ItemIconComponent_o *v96; // x0
  System_Text_StringBuilder_o *v97; // x27
  System_String_o *v98; // x28
  __int64 *v99; // x8
  System_String_o *v100; // x28
  _QWORD **v101; // x22
  __int64 v102; // x21
  __int16 v103; // w8
  __int64 v104; // x21
  __int64 v105; // x21
  __int64 v106; // x21
  UILabel_o *messageLabel; // x21
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x0
  UnityEngine_GameObject_o *v115; // [xsp+8h] [xbp-B8h]
  WarEntity_o *Entity; // [xsp+18h] [xbp-A8h]
  System_String_o *value; // [xsp+20h] [xbp-A0h]
  EventInfoHarvestGrowthDialog_o *v119; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v121; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418865B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_B2C35C(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&Method_System_Predicate_GiftEntity___ctor__, v24);
    sub_B2C35C(&System_Predicate_GiftEntity__TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v27);
    sub_B2C35C(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v28);
    sub_B2C35C(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_5633/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v30);
    sub_B2C35C(&StringLiteral_19469/*"img_common_frame01"*/, v31);
    sub_B2C35C(&StringLiteral_19112/*"harvestGrowthTitle"*/, v32);
    sub_B2C35C(&StringLiteral_5632/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v33);
    sub_B2C35C(&StringLiteral_5630/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v34);
    sub_B2C35C(&StringLiteral_5634/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v35);
    sub_B2C35C(&StringLiteral_1/*""*/, v36);
    sub_B2C35C(&StringLiteral_5631/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v37);
    byte_418865B = 1;
  }
  memset(&v121, 0, sizeof(v121));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v40 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v42 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v40,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v40,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_99;
  if ( !Instance )
    goto LABEL_99;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_19112/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_99;
  v43 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v119 = this;
  if ( !v42 )
    goto LABEL_99;
  v44 = Instance;
  ListById = GiftMaster__GetListById(v42, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v46 = GiftMaster__GetListById(v42, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v40,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_99;
  value = v43;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v44[12],
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v46 )
    goto LABEL_99;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v120,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v46,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v121 = v120;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v121,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v48 = sub_B2C42C(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
      (EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *)v48,
      0LL);
    if ( !v48 )
      sub_B2C434(v49, v50);
    current = (System_Int32_array **)v121.fields.current;
    *(_QWORD *)(v48 + 16) = v121.fields.current;
    v58 = (GiftEntity_o **)(v48 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v48 + 16), current, v51, v52, v53, v54, v55, v56);
    v59 = (EventInfoHarvestGrowthDialog_GiftInfo_o *)sub_B2C42C(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    EventInfoHarvestGrowthDialog_GiftInfo___ctor(v59, 0LL);
    if ( !*(_QWORD *)(v48 + 16) )
      sub_B2C434(v60, v61);
    if ( !v59 )
      sub_B2C434(v60, v61);
    v59->fields.type = *(_DWORD *)(*(_QWORD *)(v48 + 16) + 20LL);
    if ( !*v58 )
      sub_B2C434(v60, v61);
    v59->fields.objectId = (*v58)->fields.objectId;
    if ( !*v58 )
      sub_B2C434(0LL, v61);
    IconImageId = GiftEntity__getIconImageId(*v58, 0LL);
    v59->fields.iconId = IconImageId;
    if ( !*v58 )
      sub_B2C434(IconImageId, v63);
    v59->fields.num = (*v58)->fields.num;
    v64 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v64,
      (Il2CppObject *)v48,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_GiftEntity___ctor__);
    if ( !ListById )
      sub_B2C434(v65, v66);
    v67 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ListById,
            (System_Predicate_T__o *)v64,
            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v67 )
    {
      if ( !*v58 )
        sub_B2C434(v67, v68);
      v59->fields.addNum = (*v58)->fields.num - HIDWORD(v67->fields.renderer);
      if ( !v47 )
LABEL_108:
        sub_B2C434(v67, v68);
    }
    else
    {
      type = v59->fields.type;
      v59->fields.addNum = 0;
      if ( type == 1 )
      {
        v59->fields.isGradeup = 1;
        if ( !v47 )
          goto LABEL_108;
      }
      else
      {
        v59->fields.isNew = 1;
        if ( !v47 )
          goto LABEL_108;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v47,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v121,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v47 )
LABEL_99:
    sub_B2C434(Instance, v39);
  size = v47->fields._size;
  if ( size <= 0 )
  {
LABEL_35:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v77 = size - 1;
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
      if ( v77 >= dispObjList->max_length )
        goto LABEL_100;
      messageList = this->fields.messageList;
      if ( !messageList )
        goto LABEL_99;
      if ( v77 >= messageList->max_length )
        goto LABEL_100;
      v82 = *p_countIconList01;
      v83 = (System_Int32_array **)messageList->m_Items[v77];
      v84 = dispObjList->m_Items[v77];
      v85 = *p_countLabelList01;
      v119->fields.messageLabel = (struct UILabel_o *)v83;
      v115 = v84;
      sub_B2C2F8((BattleServantConfConponent_o *)&v119->fields.messageLabel, v83, v70, v71, v72, v73, v74, v75);
      if ( !v82 )
        goto LABEL_99;
      v86 = 4LL;
      break;
    default:
      goto LABEL_35;
  }
  do
  {
    v89 = v86 - 4;
    if ( (unsigned int)(v86 - 4) >= v82->max_length )
    {
LABEL_100:
      v114 = sub_B2C460(Instance);
      sub_B2C400(v114, 0LL);
    }
    v90 = (ItemIconComponent_o *)*((_QWORD *)&v82->obj.klass + v86);
    if ( v47->fields._size <= v89 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v85 )
      goto LABEL_99;
    if ( v89 >= v85->max_length )
      goto LABEL_100;
    v91 = *((_QWORD *)&v47->fields._items->obj.klass + v86);
    if ( !v91 || !v90 )
      goto LABEL_99;
    v92 = (UILabel_o *)*((_QWORD *)&v85->obj.klass + v86);
    if ( *(int *)(v91 + 28) <= 1 )
      v93 = -1;
    else
      v93 = *(_DWORD *)(v91 + 28);
    ItemIconComponent__SetGift(
      *((ItemIconComponent_o **)&v82->obj.klass + v86),
      *(_DWORD *)(v91 + 16),
      *(_DWORD *)(v91 + 20),
      v93,
      0,
      0LL);
    if ( *(_DWORD *)(v91 + 16) == 1 )
    {
      v94 = (System_String_o **)&StringLiteral_19469/*"img_common_frame01"*/;
      v95 = 1;
      v96 = v90;
    }
    else
    {
      v94 = (System_String_o **)&StringLiteral_1/*""*/;
      v96 = v90;
      v95 = 0;
    }
    ItemIconComponent__setFrameSprite(v96, v95, *v94, 0LL);
    v97 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v97, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_5631/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v120.fields.list) = *(_DWORD *)(v91 + 28);
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
    if ( !v97 )
      goto LABEL_99;
    System_Text_StringBuilder__AppendFormat(v97, v98, (Il2CppObject *)Instance, 0LL);
    if ( *(_BYTE *)(v91 + 36) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = &StringLiteral_5632/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_77:
      v100 = LocalizationManager__Get((System_String_o *)*v99, 0LL);
      v101 = (_QWORD **)Method_System_Array_Empty_object___;
      v102 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v103 = *(_WORD *)(v102 + 306);
      if ( (v103 & 1) == 0 )
      {
        sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v103 = *(_WORD *)(v102 + 306);
      }
      if ( (v103 & 0x400) != 0 )
      {
        v104 = *v101[6];
        if ( (*(_BYTE *)(v104 + 306) & 1) == 0 )
          sub_AC505C(*v101[6]);
        if ( !*(_DWORD *)(v104 + 224) )
        {
          v105 = *v101[6];
          if ( (*(_BYTE *)(v105 + 306) & 1) == 0 )
            sub_AC505C(*v101[6]);
          j_il2cpp_runtime_class_init_0(v105);
        }
      }
      v106 = *v101[6];
      if ( (*(_BYTE *)(v106 + 306) & 1) == 0 )
        sub_AC505C(*v101[6]);
      System_Text_StringBuilder__AppendFormat_42415448(v97, v100, **(System_Object_array ***)(v106 + 184), 0LL);
      goto LABEL_89;
    }
    if ( *(_BYTE *)(v91 + 37) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = &StringLiteral_5633/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_77;
    }
    if ( *(int *)(v91 + 32) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_5630/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v120.fields.list) = *(_DWORD *)(v91 + 32);
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
      System_Text_StringBuilder__AppendFormat(v97, v87, v88, 0LL);
    }
LABEL_89:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                         v97,
                         v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v92 )
      goto LABEL_99;
    UILabel__set_text(v92, (System_String_o *)Instance, 0LL);
    ++v86;
  }
  while ( (int)v86 - 4 < size );
  EventInfoHarvestGrowthDialog__Init(v119, v39);
  Instance = v115;
  if ( !v115 )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(v115, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v119, 0LL, 0, 0LL);
  Instance = v119->fields.titleLabel;
  if ( !Instance )
    goto LABEL_99;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v119->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_99;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
  if ( !messageLabel )
    goto LABEL_99;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v119->fields.closeAction = closeAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v119->fields.closeAction,
    (System_Int32_array **)closeAction,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
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
    sub_B2C434(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}