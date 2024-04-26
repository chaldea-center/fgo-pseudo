void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4352A1A & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4352A1A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21
  __int64 v15; // x0

  if ( (byte_4352A17 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352A17 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v15 = sub_B70798(titleLabel);
        sub_B70738(v15, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(titleLabel, v3);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4352A19 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352A19 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v7; // x1
  DataManager_o *v8; // x23
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  GiftMaster_o *v10; // x25
  System_String_o *v11; // x19
  _DWORD *v12; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v14; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  __int64 v16; // x27
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **current; // x1
  GiftEntity_o **v26; // x26
  EventInfoHarvestGrowthDialog_GiftInfo_o *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 IconImageId; // x0
  __int64 v31; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v32; // x28
  __int64 v33; // x0
  __int64 v34; // x1
  peRenderTexture_ChangeLayerObject_o *v35; // x0
  __int64 v36; // x1
  int32_t type; // w8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int size; // w19
  il2cpp_array_size_t v45; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v50; // x25
  System_Int32_array **v51; // x1
  UnityEngine_GameObject_o *v52; // x8
  struct UILabel_array *v53; // x20
  __int64 v54; // x24
  System_String_o *v55; // x21
  __int64 v56; // x2
  Il2CppObject *v57; // x0
  unsigned int v58; // w21
  ItemIconComponent_o *v59; // x27
  __int64 v60; // x22
  UILabel_o *v61; // x26
  int32_t v62; // w3
  System_String_o **v63; // x8
  bool v64; // w1
  ItemIconComponent_o *v65; // x0
  System_Text_StringBuilder_o *v66; // x27
  System_String_o *v67; // x28
  __int64 v68; // x2
  __int64 *v69; // x8
  System_String_o *v70; // x28
  _QWORD **v71; // x22
  __int64 v72; // x21
  __int16 v73; // w8
  __int64 v74; // x21
  __int64 v75; // x21
  __int64 v76; // x21
  UILabel_o *messageLabel; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  UnityEngine_GameObject_o *v85; // [xsp+8h] [xbp-B8h]
  WarEntity_o *Entity; // [xsp+18h] [xbp-A8h]
  System_String_o *value; // [xsp+20h] [xbp-A0h]
  EventInfoHarvestGrowthDialog_o *v89; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4352A18 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_object___);
    sub_B70694(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B70694(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_B70694(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_System_Predicate_GiftEntity___ctor__);
    sub_B70694(&System_Predicate_GiftEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_B70694(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_B70694(&StringLiteral_5721/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_B70694(&StringLiteral_19773/*"img_common_frame01"*/);
    sub_B70694(&StringLiteral_19410/*"harvestGrowthTitle"*/);
    sub_B70694(&StringLiteral_5720/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_B70694(&StringLiteral_5718/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_B70694(&StringLiteral_5722/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_5719/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_4352A18 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v8 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v8,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v8,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_19410/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_99;
  v11 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v89 = this;
  if ( !v10 )
    goto LABEL_99;
  v12 = Instance;
  ListById = GiftMaster__GetListById(v10, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v14 = GiftMaster__GetListById(v10, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v8,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_99;
  value = v11;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v12[12],
             (const MethodInfo_21C0440 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v14 )
    goto LABEL_99;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v90,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v91 = v90;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v16 = sub_B70764(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
      (EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *)v16,
      0LL);
    if ( !v16 )
      sub_B7076C(v17, v18);
    current = (System_Int32_array **)v91.fields.current;
    *(_QWORD *)(v16 + 16) = v91.fields.current;
    v26 = (GiftEntity_o **)(v16 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v16 + 16), current, v19, v20, v21, v22, v23, v24);
    v27 = (EventInfoHarvestGrowthDialog_GiftInfo_o *)sub_B70764(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    EventInfoHarvestGrowthDialog_GiftInfo___ctor(v27, 0LL);
    if ( !*(_QWORD *)(v16 + 16) )
      sub_B7076C(v28, v29);
    if ( !v27 )
      sub_B7076C(v28, v29);
    v27->fields.type = *(_DWORD *)(*(_QWORD *)(v16 + 16) + 20LL);
    if ( !*v26 )
      sub_B7076C(v28, v29);
    v27->fields.objectId = (*v26)->fields.objectId;
    if ( !*v26 )
      sub_B7076C(0LL, v29);
    IconImageId = GiftEntity__getIconImageId(*v26, 0LL);
    v27->fields.iconId = IconImageId;
    if ( !*v26 )
      sub_B7076C(IconImageId, v31);
    v27->fields.num = (*v26)->fields.num;
    v32 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v32,
      (Il2CppObject *)v16,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_GiftEntity___ctor__);
    if ( !ListById )
      sub_B7076C(v33, v34);
    v35 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ListById,
            (System_Predicate_T__o *)v32,
            (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v35 )
    {
      if ( !*v26 )
        sub_B7076C(v35, v36);
      v27->fields.addNum = (*v26)->fields.num - HIDWORD(v35->fields.renderer);
      if ( !v15 )
LABEL_108:
        sub_B7076C(v35, v36);
    }
    else
    {
      type = v27->fields.type;
      v27->fields.addNum = 0;
      if ( type == 1 )
      {
        v27->fields.isGradeup = 1;
        if ( !v15 )
          goto LABEL_108;
      }
      else
      {
        v27->fields.isNew = 1;
        if ( !v15 )
          goto LABEL_108;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v15 )
LABEL_99:
    sub_B7076C(Instance, v7);
  size = v15->fields._size;
  if ( size <= 0 )
  {
LABEL_35:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v45 = size - 1;
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
      if ( v45 >= dispObjList->max_length )
        goto LABEL_100;
      messageList = this->fields.messageList;
      if ( !messageList )
        goto LABEL_99;
      if ( v45 >= messageList->max_length )
        goto LABEL_100;
      v50 = *p_countIconList01;
      v51 = (System_Int32_array **)messageList->m_Items[v45];
      v52 = dispObjList->m_Items[v45];
      v53 = *p_countLabelList01;
      v89->fields.messageLabel = (struct UILabel_o *)v51;
      v85 = v52;
      sub_B70630((BattleServantConfConponent_o *)&v89->fields.messageLabel, v51, v38, v39, v40, v41, v42, v43);
      if ( !v50 )
        goto LABEL_99;
      v54 = 4LL;
      break;
    default:
      goto LABEL_35;
  }
  do
  {
    v58 = v54 - 4;
    if ( (unsigned int)(v54 - 4) >= v50->max_length )
    {
LABEL_100:
      v84 = sub_B70798(Instance);
      sub_B70738(v84, 0LL);
    }
    v59 = (ItemIconComponent_o *)*((_QWORD *)&v50->obj.klass + v54);
    if ( v15->fields._size <= v58 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( !v53 )
      goto LABEL_99;
    if ( v58 >= v53->max_length )
      goto LABEL_100;
    v60 = *((_QWORD *)&v15->fields._items->obj.klass + v54);
    if ( !v60 || !v59 )
      goto LABEL_99;
    v61 = (UILabel_o *)*((_QWORD *)&v53->obj.klass + v54);
    if ( *(int *)(v60 + 28) <= 1 )
      v62 = -1;
    else
      v62 = *(_DWORD *)(v60 + 28);
    ItemIconComponent__SetGift(
      *((ItemIconComponent_o **)&v50->obj.klass + v54),
      *(_DWORD *)(v60 + 16),
      *(_DWORD *)(v60 + 20),
      v62,
      0,
      0LL);
    if ( *(_DWORD *)(v60 + 16) == 1 )
    {
      v63 = (System_String_o **)&StringLiteral_19773/*"img_common_frame01"*/;
      v64 = 1;
      v65 = v59;
    }
    else
    {
      v63 = (System_String_o **)&StringLiteral_1/*""*/;
      v65 = v59;
      v64 = 0;
    }
    ItemIconComponent__setFrameSprite(v65, v64, *v63, 0LL);
    v66 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v66, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5719/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v90.fields.list) = *(_DWORD *)(v60 + 28);
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v68);
    if ( !v66 )
      goto LABEL_99;
    System_Text_StringBuilder__AppendFormat(v66, v67, (Il2CppObject *)Instance, 0LL);
    if ( *(_BYTE *)(v60 + 36) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_5720/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_77:
      v70 = LocalizationManager__Get((System_String_o *)*v69, 0LL);
      v71 = (_QWORD **)Method_System_Array_Empty_object___;
      v72 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v73 = *(_WORD *)(v72 + 306);
      if ( (v73 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v73 = *(_WORD *)(v72 + 306);
      }
      if ( (v73 & 0x400) != 0 )
      {
        v74 = *v71[6];
        if ( (*(_BYTE *)(v74 + 306) & 1) == 0 )
          sub_B08394(*v71[6]);
        if ( !*(_DWORD *)(v74 + 224) )
        {
          v75 = *v71[6];
          if ( (*(_BYTE *)(v75 + 306) & 1) == 0 )
            sub_B08394(*v71[6]);
          j_il2cpp_runtime_class_init_0(v75);
        }
      }
      v76 = *v71[6];
      if ( (*(_BYTE *)(v76 + 306) & 1) == 0 )
        sub_B08394(*v71[6]);
      System_Text_StringBuilder__AppendFormat_42608728(v66, v70, **(System_Object_array ***)(v76 + 184), 0LL);
      goto LABEL_89;
    }
    if ( *(_BYTE *)(v60 + 37) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = &StringLiteral_5721/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_77;
    }
    if ( *(int *)(v60 + 32) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5718/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v90.fields.list) = *(_DWORD *)(v60 + 32);
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90, v56);
      System_Text_StringBuilder__AppendFormat(v66, v55, v57, 0LL);
    }
LABEL_89:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v66->klass->vtable._3_ToString.method)(
                         v66,
                         v66->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v61 )
      goto LABEL_99;
    UILabel__set_text(v61, (System_String_o *)Instance, 0LL);
    ++v54;
  }
  while ( (int)v54 - 4 < size );
  EventInfoHarvestGrowthDialog__Init(v89, v7);
  Instance = v85;
  if ( !v85 )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(v85, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v89, 0LL, 0, 0LL);
  Instance = v89->fields.titleLabel;
  if ( !Instance )
    goto LABEL_99;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v89->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5722/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_99;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
  if ( !messageLabel )
    goto LABEL_99;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v89->fields.closeAction = closeAction;
  sub_B70630(
    (BattleServantConfConponent_o *)&v89->fields.closeAction,
    (System_Int32_array **)closeAction,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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
    sub_B7076C(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}