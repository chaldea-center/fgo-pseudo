void EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5971CCB & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5971CCB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  UILabel_o *closeLabel; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  __int64 v15; // x21

  if ( (byte_5971CC8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971CC8 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_2213CE4(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v15];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v7, v8, v9, v10, v11, v12);
}


void EventInfoHarvestGrowthDialog__OnClickCloseButton(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5971CCA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    sub_2213A60(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    byte_5971CCA = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoHarvestGrowthDialog__Open(
        EventInfoHarvestGrowthDialog_o *this,
        EventHarvestGrowthInfo_o *harvestGrowthInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v7; // x1
  DataManager_o *v8; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v10; // x25
  System_String_o *v11; // x19
  _DWORD *v12; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v14; // x25
  System_Collections_Generic_List_object__o *v15; // x23
  __int64 v16; // x27
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t current; // w1
  __int64 v26; // x26
  __int64 v27; // x25
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 IconImageId; // x0
  __int64 v31; // x1
  System_Predicate_GiftEntity__c *v32; // x0
  System_Predicate_object__o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int v44; // w8
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int v55; // w19
  struct ItemIconComponent_array **p_countIconList01; // x8
  struct UILabel_array **p_countLabelList01; // x9
  struct UnityEngine_GameObject_array *dispObjList; // x10
  __int64 v59; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v61; // x25
  struct UILabel_array *v62; // x20
  struct UILabel_o *v63; // x1
  UnityEngine_GameObject_o *v64; // x8
  __int64 v65; // x26
  ItemIconComponent_o *v66; // x28
  _DWORD *v67; // x29
  int v68; // w8
  UILabel_o *v69; // x27
  System_String_o **v70; // x8
  System_Text_StringBuilder_o *v71; // x28
  __int64 v72; // x1
  System_String_o *v73; // x21
  __int64 v74; // x1
  __int64 *v75; // x8
  __int64 v76; // x1
  System_String_o *v77; // x29
  long double v78; // q0
  _QWORD *v79; // x21
  __int64 v80; // x8
  __int64 v81; // x0
  __int64 v82; // x0
  const MethodInfo *v83; // x1
  System_String_o *v84; // x21
  Il2CppObject *v85; // x0
  __int64 v86; // x1
  UILabel_o *messageLabel; // x21
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  UnityEngine_GameObject_o *v94; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v98; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5971CC9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_2213A60(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_2213A60(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Predicate_GiftEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_2213A60(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&StringLiteral_5813/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_2213A60(&StringLiteral_21347/*"img_common_frame01"*/);
    sub_2213A60(&StringLiteral_20881/*"harvestGrowthTitle"*/);
    sub_2213A60(&StringLiteral_5812/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_2213A60(&StringLiteral_5810/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_2213A60(&StringLiteral_5814/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_5811/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_5971CC9 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  v8 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = DataManager__GetMasterData_object_(
          v8,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_91;
  if ( !Instance )
    goto LABEL_91;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0);
  if ( !Instance )
    goto LABEL_91;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_20881/*"harvestGrowthTitle"*/,
               0,
               0);
  if ( !MasterData_object )
    goto LABEL_91;
  v11 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, harvestGrowthInfo->fields.beforeQuestId, 0);
  if ( !Instance )
    goto LABEL_91;
  v98 = this;
  if ( !v10 )
    goto LABEL_91;
  v12 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0);
  Instance = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, harvestGrowthInfo->fields.afterQuestId, 0);
  if ( !Instance )
    goto LABEL_91;
  value = v11;
  v14 = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_91;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v12[12],
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v14 )
    goto LABEL_91;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v99,
    (System_Collections_Generic_List_object__o *)v14,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v100 = v99;
  v99.fields._list = 0;
  *(_QWORD *)&v99.fields._index = &v100;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v100,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v16 = sub_2213CCC(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( !v16 )
      sub_2213CDC(v17, v18);
    current = (int32_t)v100.fields._current;
    *(_QWORD *)(v16 + 16) = v100.fields._current;
    v26 = v16 + 16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 16), current, v19, v20, v21, v22, v23, v24);
    v27 = sub_2213CCC(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    v29 = *(_QWORD *)(v16 + 16);
    if ( !v29 )
      sub_2213CDC(0, v28);
    if ( !v27 )
      sub_2213CDC(v29, v28);
    *(_QWORD *)(v27 + 16) = *(_QWORD *)(v29 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v29, 0);
    *(_DWORD *)(v27 + 24) = IconImageId;
    if ( !*(_QWORD *)v26 )
      sub_2213CDC(IconImageId, v31);
    v32 = System_Predicate_GiftEntity__TypeInfo;
    *(_DWORD *)(v27 + 28) = *(_DWORD *)(*(_QWORD *)v26 + 28LL);
    v33 = (System_Predicate_object__o *)sub_2213CCC(v32);
    System_Predicate_object____ctor(
      v33,
      (Il2CppObject *)v16,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0);
    if ( !ListById )
      sub_2213CDC(v34, v35);
    v36 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v33,
            (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v36 )
    {
      if ( !*(_QWORD *)v26 )
        sub_2213CDC(v36, v37);
      *(_DWORD *)(v27 + 32) = *(_DWORD *)(*(_QWORD *)v26 + 28LL) - HIDWORD(v36[1].monitor);
    }
    else
    {
      v44 = *(_DWORD *)(v27 + 16);
      *(_DWORD *)(v27 + 32) = 0;
      if ( v44 == 1 )
        *(_BYTE *)(v27 + 36) = 1;
      else
        *(_BYTE *)(v27 + 37) = 1;
    }
    if ( !v15
      || (items = v15->fields._items,
          v46 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__,
          ++v15->fields._version,
          !items) )
    {
      sub_2213CDC(v36, v37);
    }
    size = v15->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v27,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v48 + 4), v27, v38, v39, v40, v41, v42, v43);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v100,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v15 )
    goto LABEL_91;
  v55 = v15->fields._size;
  if ( v55 <= 0 )
    goto LABEL_39;
  if ( v55 <= 2 )
  {
    if ( v55 == 1 )
    {
      p_countIconList01 = &v98->fields.countIconList01;
      p_countLabelList01 = &v98->fields.countLabelList01;
    }
    else
    {
      p_countIconList01 = &v98->fields.countIconList02;
      p_countLabelList01 = &v98->fields.countLabelList02;
    }
    goto LABEL_42;
  }
  if ( v55 == 3 )
  {
    p_countIconList01 = &v98->fields.countIconList03;
    p_countLabelList01 = &v98->fields.countLabelList03;
    goto LABEL_42;
  }
  if ( v55 != 4 )
  {
LABEL_39:
    ActionExtensions__Call(closeAction, 0);
    return;
  }
  p_countIconList01 = &v98->fields.countIconList04;
  p_countLabelList01 = &v98->fields.countLabelList04;
LABEL_42:
  dispObjList = v98->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_91;
  v59 = (unsigned int)(v55 - 1);
  if ( (unsigned int)v59 >= LODWORD(dispObjList->max_length) )
    goto LABEL_93;
  messageList = v98->fields.messageList;
  if ( !messageList )
    goto LABEL_91;
  if ( (unsigned int)v59 >= LODWORD(messageList->max_length) )
LABEL_93:
    sub_2213CE4(Instance);
  v61 = *p_countIconList01;
  v62 = *p_countLabelList01;
  v63 = messageList->m_Items[v59];
  v64 = dispObjList->m_Items[v59];
  v98->fields.messageLabel = v63;
  v94 = v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v98->fields.messageLabel, (int32_t)v63, v49, v50, v51, v52, v53, v54);
  if ( !v61 )
LABEL_91:
    sub_2213CDC(Instance, v7);
  v65 = 0;
  do
  {
    if ( (unsigned int)v65 >= LODWORD(v61->max_length) )
      goto LABEL_93;
    v66 = v61->m_Items[v65];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v65,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v62 )
      goto LABEL_91;
    if ( (unsigned int)v65 >= LODWORD(v62->max_length) )
      goto LABEL_93;
    v67 = Instance;
    if ( !Instance || !v66 )
      goto LABEL_91;
    v68 = *((_DWORD *)Instance + 7);
    v69 = v62->m_Items[v65];
    if ( v68 <= 1 )
      v68 = -1;
    ItemIconComponent__SetGift_47884936(v66, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v68, 0, 0);
    v70 = (System_String_o **)&StringLiteral_21347/*"img_common_frame01"*/;
    if ( v67[4] != 1 )
      v70 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v66, v67[4] == 1, *v70, 0);
    v71 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v71, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0);
    LODWORD(v99.fields._list) = v67[7];
    Instance = (void *)j_il2cpp_value_box_0(qword_5984348, &v99);
    if ( !v71 )
      goto LABEL_91;
    System_Text_StringBuilder__AppendFormat(v71, v73, (Il2CppObject *)Instance, 0);
    if ( *((_BYTE *)v67 + 36) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
      v75 = &StringLiteral_5812/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_68:
      v77 = LocalizationManager__Get((System_String_o *)*v75, 0);
      v79 = Method_System_Array_Empty_object___;
      v80 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v80 )
      {
        sub_224B964(Method_System_Array_Empty_object___);
        v80 = v79[7];
      }
      v81 = *(_QWORD *)(v80 + 16);
      if ( (*(_WORD *)(v81 + 309) & 1) == 0 )
        v81 = sub_224B908(v78);
      if ( !*(_DWORD *)(v81 + 228) )
        *(__n128 *)&v78 = j_il2cpp_runtime_class_init_0(v81, v76);
      v82 = *(_QWORD *)(v79[7] + 16LL);
      if ( (*(_WORD *)(v82 + 309) & 1) == 0 )
        v82 = sub_224B908(v78);
      System_Text_StringBuilder__AppendFormat_75741460(v71, v77, **(System_Object_array ***)(v82 + 184), 0);
      goto LABEL_77;
    }
    if ( *((_BYTE *)v67 + 37) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
      v75 = &StringLiteral_5813/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_68;
    }
    if ( (int)v67[8] >= 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5810/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0);
      LODWORD(v99.fields._list) = v67[8];
      v85 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v99);
      System_Text_StringBuilder__AppendFormat(v71, v84, v85, 0);
    }
LABEL_77:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v71->klass->vtable._3_ToString.methodPtr)(
                         v71,
                         v71->klass->vtable._3_ToString.method);
    if ( !v69 )
      goto LABEL_91;
    UILabel__set_text(v69, (System_String_o *)Instance, 0);
    ++v65;
  }
  while ( v55 != (_DWORD)v65 );
  EventInfoHarvestGrowthDialog__Init(v98, v83);
  Instance = v94;
  if ( !v94 )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive(v94, 1, 0);
  BaseDialog__Open((BaseDialog_o *)v98, 0, 0, 0, 0);
  Instance = v98->fields.titleLabel;
  v7 = value;
  if ( !Instance )
    goto LABEL_91;
  UILabel__set_text((UILabel_o *)Instance, value, 0);
  messageLabel = v98->fields.messageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5814/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0);
  if ( !Entity )
    goto LABEL_91;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0);
  if ( !messageLabel )
    goto LABEL_91;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  v98->fields.closeAction = closeAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v98->fields.closeAction,
    (int32_t)closeAction,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
}


void EventInfoHarvestGrowthDialog___OnClickCloseButton_b__22_0(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0);
  EventInfoHarvestGrowthDialog__Init(this, v3);
}


void EventInfoHarvestGrowthDialog_GiftInfo___ctor(
        EventInfoHarvestGrowthDialog_GiftInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoHarvestGrowthDialog___c__DisplayClass21_0___ctor(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoHarvestGrowthDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoHarvestGrowthDialog___c__DisplayClass21_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !entity || (giftEntity = this->fields.giftEntity) == 0 )
    sub_2213CDC(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}