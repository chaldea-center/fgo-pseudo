void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42155C3 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42155C3 = 1;
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v15; // w21
  __int64 v16; // x0

  if ( (byte_42155C0 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42155C0 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v16 = sub_B0D9A8(titleLabel);
        sub_B0D948(v16, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v15];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B0D97C(titleLabel);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_42155C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_42155C2 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  DataManager_o *v39; // x23
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  GiftMaster_o *v41; // x25
  System_String_o *v42; // x19
  _DWORD *v43; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v45; // x25
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x27
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **current; // x1
  GiftEntity_o **v60; // x26
  __int64 v61; // x1
  __int64 v62; // x2
  EventInfoHarvestGrowthDialog_GiftInfo_o *v63; // x25
  __int64 v64; // x0
  __int64 IconImageId; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x28
  __int64 v69; // x0
  peRenderTexture_ChangeLayerObject_o *v70; // x0
  int32_t type; // w8
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  int size; // w19
  il2cpp_array_size_t v79; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v84; // x25
  System_Int32_array **v85; // x1
  UnityEngine_GameObject_o *v86; // x8
  struct UILabel_array *v87; // x20
  __int64 v88; // x24
  System_String_o *v89; // x21
  Il2CppObject *v90; // x0
  unsigned int v91; // w21
  ItemIconComponent_o *v92; // x27
  __int64 v93; // x22
  UILabel_o *v94; // x26
  int32_t v95; // w3
  System_String_o **v96; // x8
  bool v97; // w1
  ItemIconComponent_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  System_Text_StringBuilder_o *v101; // x27
  System_String_o *v102; // x28
  __int64 *v103; // x8
  System_String_o *v104; // x28
  _QWORD **v105; // x22
  __int64 v106; // x21
  __int16 v107; // w8
  __int64 v108; // x21
  __int64 v109; // x21
  __int64 v110; // x21
  const MethodInfo *v111; // x1
  UILabel_o *messageLabel; // x21
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  __int64 v119; // x0
  UnityEngine_GameObject_o *v120; // [xsp+8h] [xbp-B8h]
  WarEntity_o *Entity; // [xsp+18h] [xbp-A8h]
  System_String_o *value; // [xsp+20h] [xbp-A0h]
  EventInfoHarvestGrowthDialog_o *v124; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v125; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v126; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42155C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_B0D8A4(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&Method_System_Predicate_GiftEntity___ctor__, v24);
    sub_B0D8A4(&System_Predicate_GiftEntity__TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v27);
    sub_B0D8A4(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v28);
    sub_B0D8A4(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_5649/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v30);
    sub_B0D8A4(&StringLiteral_19531/*"img_common_frame01"*/, v31);
    sub_B0D8A4(&StringLiteral_19170/*"harvestGrowthTitle"*/, v32);
    sub_B0D8A4(&StringLiteral_5648/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v33);
    sub_B0D8A4(&StringLiteral_5646/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v34);
    sub_B0D8A4(&StringLiteral_5650/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v35);
    sub_B0D8A4(&StringLiteral_1/*""*/, v36);
    sub_B0D8A4(&StringLiteral_5647/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v37);
    byte_42155C1 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v39 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v41 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v39,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v39,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_19170/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_99;
  v42 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v124 = this;
  if ( !v41 )
    goto LABEL_99;
  v43 = Instance;
  ListById = GiftMaster__GetListById(v41, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v45 = GiftMaster__GetListById(v41, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v39,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_99;
  value = v42;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v43[12],
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v45 )
    goto LABEL_99;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v125,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v45,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v126,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v51 = sub_B0D974(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v49, v50);
    EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
      (EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *)v51,
      0LL);
    if ( !v51 )
      sub_B0D97C(v52);
    current = (System_Int32_array **)v126.fields.current;
    *(_QWORD *)(v51 + 16) = v126.fields.current;
    v60 = (GiftEntity_o **)(v51 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v51 + 16), current, v53, v54, v55, v56, v57, v58);
    v63 = (EventInfoHarvestGrowthDialog_GiftInfo_o *)sub_B0D974(
                                                       EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo,
                                                       v61,
                                                       v62);
    EventInfoHarvestGrowthDialog_GiftInfo___ctor(v63, 0LL);
    if ( !*(_QWORD *)(v51 + 16) )
      sub_B0D97C(v64);
    if ( !v63 )
      sub_B0D97C(v64);
    v63->fields.type = *(_DWORD *)(*(_QWORD *)(v51 + 16) + 20LL);
    if ( !*v60 )
      sub_B0D97C(v64);
    v63->fields.objectId = (*v60)->fields.objectId;
    if ( !*v60 )
      sub_B0D97C(0LL);
    IconImageId = GiftEntity__getIconImageId(*v60, 0LL);
    v63->fields.iconId = IconImageId;
    if ( !*v60 )
      sub_B0D97C(IconImageId);
    v63->fields.num = (*v60)->fields.num;
    v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_GiftEntity__TypeInfo,
                                                                     v66,
                                                                     v67);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v68,
      (Il2CppObject *)v51,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_GiftEntity___ctor__);
    if ( !ListById )
      sub_B0D97C(v69);
    v70 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ListById,
            (System_Predicate_T__o *)v68,
            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v70 )
    {
      if ( !*v60 )
        sub_B0D97C(v70);
      v63->fields.addNum = (*v60)->fields.num - HIDWORD(v70->fields.renderer);
      if ( !v48 )
LABEL_108:
        sub_B0D97C(v70);
    }
    else
    {
      type = v63->fields.type;
      v63->fields.addNum = 0;
      if ( type == 1 )
      {
        v63->fields.isGradeup = 1;
        if ( !v48 )
          goto LABEL_108;
      }
      else
      {
        v63->fields.isNew = 1;
        if ( !v48 )
          goto LABEL_108;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v48,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v126,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v48 )
LABEL_99:
    sub_B0D97C(Instance);
  size = v48->fields._size;
  if ( size <= 0 )
  {
LABEL_35:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v79 = size - 1;
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
      if ( v79 >= dispObjList->max_length )
        goto LABEL_100;
      messageList = this->fields.messageList;
      if ( !messageList )
        goto LABEL_99;
      if ( v79 >= messageList->max_length )
        goto LABEL_100;
      v84 = *p_countIconList01;
      v85 = (System_Int32_array **)messageList->m_Items[v79];
      v86 = dispObjList->m_Items[v79];
      v87 = *p_countLabelList01;
      v124->fields.messageLabel = (struct UILabel_o *)v85;
      v120 = v86;
      sub_B0D840((BattleServantConfConponent_o *)&v124->fields.messageLabel, v85, v72, v73, v74, v75, v76, v77);
      if ( !v84 )
        goto LABEL_99;
      v88 = 4LL;
      break;
    default:
      goto LABEL_35;
  }
  do
  {
    v91 = v88 - 4;
    if ( (unsigned int)(v88 - 4) >= v84->max_length )
    {
LABEL_100:
      v119 = sub_B0D9A8(Instance);
      sub_B0D948(v119, 0LL);
    }
    v92 = (ItemIconComponent_o *)*((_QWORD *)&v84->obj.klass + v88);
    if ( v48->fields._size <= v91 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !v87 )
      goto LABEL_99;
    if ( v91 >= v87->max_length )
      goto LABEL_100;
    v93 = *((_QWORD *)&v48->fields._items->obj.klass + v88);
    if ( !v93 || !v92 )
      goto LABEL_99;
    v94 = (UILabel_o *)*((_QWORD *)&v87->obj.klass + v88);
    if ( *(int *)(v93 + 28) <= 1 )
      v95 = -1;
    else
      v95 = *(_DWORD *)(v93 + 28);
    ItemIconComponent__SetGift(
      *((ItemIconComponent_o **)&v84->obj.klass + v88),
      *(_DWORD *)(v93 + 16),
      *(_DWORD *)(v93 + 20),
      v95,
      0,
      0LL);
    if ( *(_DWORD *)(v93 + 16) == 1 )
    {
      v96 = (System_String_o **)&StringLiteral_19531/*"img_common_frame01"*/;
      v97 = 1;
      v98 = v92;
    }
    else
    {
      v96 = (System_String_o **)&StringLiteral_1/*""*/;
      v98 = v92;
      v97 = 0;
    }
    ItemIconComponent__setFrameSprite(v98, v97, *v96, 0LL);
    v101 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v99, v100);
    System_Text_StringBuilder___ctor(v101, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v102 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v125.fields.list) = *(_DWORD *)(v93 + 28);
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
    if ( !v101 )
      goto LABEL_99;
    System_Text_StringBuilder__AppendFormat(v101, v102, (Il2CppObject *)Instance, 0LL);
    if ( *(_BYTE *)(v93 + 36) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v103 = &StringLiteral_5648/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_77:
      v104 = LocalizationManager__Get((System_String_o *)*v103, 0LL);
      v105 = (_QWORD **)Method_System_Array_Empty_object___;
      v106 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v107 = *(_WORD *)(v106 + 306);
      if ( (v107 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v107 = *(_WORD *)(v106 + 306);
      }
      if ( (v107 & 0x400) != 0 )
      {
        v108 = *v105[6];
        if ( (*(_BYTE *)(v108 + 306) & 1) == 0 )
          sub_AA65A4(*v105[6]);
        if ( !*(_DWORD *)(v108 + 224) )
        {
          v109 = *v105[6];
          if ( (*(_BYTE *)(v109 + 306) & 1) == 0 )
            sub_AA65A4(*v105[6]);
          j_il2cpp_runtime_class_init_0(v109);
        }
      }
      v110 = *v105[6];
      if ( (*(_BYTE *)(v110 + 306) & 1) == 0 )
        sub_AA65A4(*v105[6]);
      System_Text_StringBuilder__AppendFormat_42162148(v101, v104, **(System_Object_array ***)(v110 + 184), 0LL);
      goto LABEL_89;
    }
    if ( *(_BYTE *)(v93 + 37) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v103 = &StringLiteral_5649/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_77;
    }
    if ( *(int *)(v93 + 32) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_5646/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v125.fields.list) = *(_DWORD *)(v93 + 32);
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
      System_Text_StringBuilder__AppendFormat(v101, v89, v90, 0LL);
    }
LABEL_89:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v101->klass->vtable._3_ToString.method)(
                         v101,
                         v101->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v94 )
      goto LABEL_99;
    UILabel__set_text(v94, (System_String_o *)Instance, 0LL);
    ++v88;
  }
  while ( (int)v88 - 4 < size );
  EventInfoHarvestGrowthDialog__Init(v124, v111);
  Instance = v120;
  if ( !v120 )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(v120, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v124, 0LL, 0, 0LL);
  Instance = v124->fields.titleLabel;
  if ( !Instance )
    goto LABEL_99;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v124->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5650/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_99;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
  if ( !messageLabel )
    goto LABEL_99;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v124->fields.closeAction = closeAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v124->fields.closeAction,
    (System_Int32_array **)closeAction,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
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
    sub_B0D97C(this);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}