void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94DF & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94DF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v22; // w21
  __int64 v23; // x0

  if ( (byte_42E94DC & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E94DC = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_15;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_15;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v23 = sub_B5D6C8(titleLabel);
        sub_B5D668(v23, 0LL);
      }
      titleLabel = (UILabel_o *)dispObjList->m_Items[v22];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(titleLabel, v11);
  }
LABEL_14:
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E94DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E94DE = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  void *Instance; // x0
  const MethodInfo *v103; // x1
  DataManager_o *v104; // x23
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x26
  GiftMaster_o *v106; // x25
  System_String_o *v107; // x19
  _DWORD *v108; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v110; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x23
  __int64 v112; // x27
  __int64 v113; // x0
  __int64 v114; // x1
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **current; // x1
  GiftEntity_o **v122; // x26
  EventInfoHarvestGrowthDialog_GiftInfo_o *v123; // x25
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 IconImageId; // x0
  __int64 v127; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v128; // x28
  __int64 v129; // x0
  __int64 v130; // x1
  peRenderTexture_ChangeLayerObject_o *v131; // x0
  __int64 v132; // x1
  int32_t type; // w8
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  int size; // w19
  il2cpp_array_size_t v141; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v146; // x25
  System_Int32_array **v147; // x1
  UnityEngine_GameObject_o *v148; // x8
  struct UILabel_array *v149; // x20
  __int64 v150; // x24
  System_String_o *v151; // x21
  Il2CppObject *v152; // x0
  unsigned int v153; // w21
  ItemIconComponent_o *v154; // x27
  __int64 v155; // x22
  UILabel_o *v156; // x26
  int32_t v157; // w3
  System_String_o **v158; // x8
  bool v159; // w1
  ItemIconComponent_o *v160; // x0
  System_Text_StringBuilder_o *v161; // x27
  System_String_o *v162; // x28
  __int64 *v163; // x8
  System_String_o *v164; // x28
  _QWORD **v165; // x22
  __int64 v166; // x21
  __int16 v167; // w8
  __int64 v168; // x21
  __int64 v169; // x21
  __int64 v170; // x21
  UILabel_o *messageLabel; // x21
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  __int64 v178; // x0
  UnityEngine_GameObject_o *v179; // [xsp+8h] [xbp-B8h]
  WarEntity_o *Entity; // [xsp+18h] [xbp-A8h]
  System_String_o *value; // [xsp+20h] [xbp-A0h]
  EventInfoHarvestGrowthDialog_o *v183; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v184; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v185; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E94DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_object___, (_DWORD)harvestGrowthInfo, (_DWORD)closeAction, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v27, v28, v29);
    sub_B5D5C4(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&int_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Find__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v45, v46, v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_System_Predicate_GiftEntity___ctor__, v60, v61, v62);
    sub_B5D5C4(&System_Predicate_GiftEntity__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v72, v73, v74);
    sub_B5D5C4(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_5710/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_19714/*"img_common_frame01"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_19352/*"harvestGrowthTitle"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_5709/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_5707/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_5711/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_1/*""*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_5708/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v99, v100, v101);
    byte_42E94DD = 1;
  }
  memset(&v185, 0, sizeof(v185));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v104 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  v106 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           v104,
                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v104,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_19352/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_99;
  v107 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v183 = this;
  if ( !v106 )
    goto LABEL_99;
  v108 = Instance;
  ListById = GiftMaster__GetListById(v106, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               MasterData_WarQuestSelectionMaster,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_99;
  v110 = GiftMaster__GetListById(v106, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v104,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_99;
  value = v107;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v108[12],
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v111,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v110 )
    goto LABEL_99;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v184,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v110,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v185 = v184;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v185,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v112 = sub_B5D694(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
      (EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *)v112,
      0LL);
    if ( !v112 )
      sub_B5D69C(v113, v114);
    current = (System_Int32_array **)v185.fields.current;
    *(_QWORD *)(v112 + 16) = v185.fields.current;
    v122 = (GiftEntity_o **)(v112 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v112 + 16), current, v115, v116, v117, v118, v119, v120);
    v123 = (EventInfoHarvestGrowthDialog_GiftInfo_o *)sub_B5D694(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    EventInfoHarvestGrowthDialog_GiftInfo___ctor(v123, 0LL);
    if ( !*(_QWORD *)(v112 + 16) )
      sub_B5D69C(v124, v125);
    if ( !v123 )
      sub_B5D69C(v124, v125);
    v123->fields.type = *(_DWORD *)(*(_QWORD *)(v112 + 16) + 20LL);
    if ( !*v122 )
      sub_B5D69C(v124, v125);
    v123->fields.objectId = (*v122)->fields.objectId;
    if ( !*v122 )
      sub_B5D69C(0LL, v125);
    IconImageId = GiftEntity__getIconImageId(*v122, 0LL);
    v123->fields.iconId = IconImageId;
    if ( !*v122 )
      sub_B5D69C(IconImageId, v127);
    v123->fields.num = (*v122)->fields.num;
    v128 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v128,
      (Il2CppObject *)v112,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_GiftEntity___ctor__);
    if ( !ListById )
      sub_B5D69C(v129, v130);
    v131 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
             (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ListById,
             (System_Predicate_T__o *)v128,
             (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v131 )
    {
      if ( !*v122 )
        sub_B5D69C(v131, v132);
      v123->fields.addNum = (*v122)->fields.num - HIDWORD(v131->fields.renderer);
      if ( !v111 )
LABEL_108:
        sub_B5D69C(v131, v132);
    }
    else
    {
      type = v123->fields.type;
      v123->fields.addNum = 0;
      if ( type == 1 )
      {
        v123->fields.isGradeup = 1;
        if ( !v111 )
          goto LABEL_108;
      }
      else
      {
        v123->fields.isNew = 1;
        if ( !v111 )
          goto LABEL_108;
      }
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v111,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v185,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v111 )
LABEL_99:
    sub_B5D69C(Instance, v103);
  size = v111->fields._size;
  if ( size <= 0 )
  {
LABEL_35:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v141 = size - 1;
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
      if ( v141 >= dispObjList->max_length )
        goto LABEL_100;
      messageList = this->fields.messageList;
      if ( !messageList )
        goto LABEL_99;
      if ( v141 >= messageList->max_length )
        goto LABEL_100;
      v146 = *p_countIconList01;
      v147 = (System_Int32_array **)messageList->m_Items[v141];
      v148 = dispObjList->m_Items[v141];
      v149 = *p_countLabelList01;
      v183->fields.messageLabel = (struct UILabel_o *)v147;
      v179 = v148;
      sub_B5D560((BattleServantConfConponent_o *)&v183->fields.messageLabel, v147, v134, v135, v136, v137, v138, v139);
      if ( !v146 )
        goto LABEL_99;
      v150 = 4LL;
      break;
    default:
      goto LABEL_35;
  }
  do
  {
    v153 = v150 - 4;
    if ( (unsigned int)(v150 - 4) >= v146->max_length )
    {
LABEL_100:
      v178 = sub_B5D6C8(Instance);
      sub_B5D668(v178, 0LL);
    }
    v154 = (ItemIconComponent_o *)*((_QWORD *)&v146->obj.klass + v150);
    if ( v111->fields._size <= v153 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v149 )
      goto LABEL_99;
    if ( v153 >= v149->max_length )
      goto LABEL_100;
    v155 = *((_QWORD *)&v111->fields._items->obj.klass + v150);
    if ( !v155 || !v154 )
      goto LABEL_99;
    v156 = (UILabel_o *)*((_QWORD *)&v149->obj.klass + v150);
    if ( *(int *)(v155 + 28) <= 1 )
      v157 = -1;
    else
      v157 = *(_DWORD *)(v155 + 28);
    ItemIconComponent__SetGift(
      *((ItemIconComponent_o **)&v146->obj.klass + v150),
      *(_DWORD *)(v155 + 16),
      *(_DWORD *)(v155 + 20),
      v157,
      0,
      0LL);
    if ( *(_DWORD *)(v155 + 16) == 1 )
    {
      v158 = (System_String_o **)&StringLiteral_19714/*"img_common_frame01"*/;
      v159 = 1;
      v160 = v154;
    }
    else
    {
      v158 = (System_String_o **)&StringLiteral_1/*""*/;
      v160 = v154;
      v159 = 0;
    }
    ItemIconComponent__setFrameSprite(v160, v159, *v158, 0LL);
    v161 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v161, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v162 = LocalizationManager__Get((System_String_o *)StringLiteral_5708/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v184.fields.list) = *(_DWORD *)(v155 + 28);
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
    if ( !v161 )
      goto LABEL_99;
    System_Text_StringBuilder__AppendFormat(v161, v162, (Il2CppObject *)Instance, 0LL);
    if ( *(_BYTE *)(v155 + 36) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v163 = &StringLiteral_5709/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_77:
      v164 = LocalizationManager__Get((System_String_o *)*v163, 0LL);
      v165 = (_QWORD **)Method_System_Array_Empty_object___;
      v166 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
      v167 = *(_WORD *)(v166 + 306);
      if ( (v167 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
        v167 = *(_WORD *)(v166 + 306);
      }
      if ( (v167 & 0x400) != 0 )
      {
        v168 = *v165[6];
        if ( (*(_BYTE *)(v168 + 306) & 1) == 0 )
          sub_AF52C4(*v165[6]);
        if ( !*(_DWORD *)(v168 + 224) )
        {
          v169 = *v165[6];
          if ( (*(_BYTE *)(v169 + 306) & 1) == 0 )
            sub_AF52C4(*v165[6]);
          j_il2cpp_runtime_class_init_0(v169);
        }
      }
      v170 = *v165[6];
      if ( (*(_BYTE *)(v170 + 306) & 1) == 0 )
        sub_AF52C4(*v165[6]);
      System_Text_StringBuilder__AppendFormat_42960492(v161, v164, **(System_Object_array ***)(v170 + 184), 0LL);
      goto LABEL_89;
    }
    if ( *(_BYTE *)(v155 + 37) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v163 = &StringLiteral_5710/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_77;
    }
    if ( *(int *)(v155 + 32) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v151 = LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v184.fields.list) = *(_DWORD *)(v155 + 32);
      v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184);
      System_Text_StringBuilder__AppendFormat(v161, v151, v152, 0LL);
    }
LABEL_89:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v161->klass->vtable._3_ToString.method)(
                         v161,
                         v161->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v156 )
      goto LABEL_99;
    UILabel__set_text(v156, (System_String_o *)Instance, 0LL);
    ++v150;
  }
  while ( (int)v150 - 4 < size );
  EventInfoHarvestGrowthDialog__Init(v183, v103);
  Instance = v179;
  if ( !v179 )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(v179, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v183, 0LL, 0, 0LL);
  Instance = v183->fields.titleLabel;
  if ( !Instance )
    goto LABEL_99;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v183->fields.messageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5711/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_99;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity->fields.name, 0LL);
  if ( !messageLabel )
    goto LABEL_99;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v183->fields.closeAction = closeAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v183->fields.closeAction,
    (System_Int32_array **)closeAction,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
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
    sub_B5D69C(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}