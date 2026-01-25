void EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFA5D & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEFA5D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v14; // w21

  if ( (byte_4CEFA5A & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFA5A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C7BD48(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v14];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C7BD40(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.closeAction, 0, v6, v7, v8, v9, v10, v11);
}


void EventInfoHarvestGrowthDialog__OnClickCloseButton(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CEFA5C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    sub_1C7BAE8(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    byte_4CEFA5C = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  __int64 v16; // x29
  __int64 v17; // x19
  __int64 v18; // x27
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t current; // w1
  __int64 v28; // x26
  __int64 v29; // x25
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 IconImageId; // x0
  __int64 v33; // x1
  System_Predicate_object__o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int v55; // w19
  unsigned int v56; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v61; // x25
  struct UILabel_o *v62; // x1
  UnityEngine_GameObject_o *v63; // x8
  struct UILabel_array *v64; // x20
  int32_t v65; // w8
  __int64 v66; // x26
  ItemIconComponent_o *v67; // x28
  _DWORD *v68; // x29
  UILabel_o *v69; // x27
  int v70; // w8
  __int64 *v71; // x8
  System_Text_StringBuilder_o *v72; // x28
  System_String_o *v73; // x21
  __int64 *v74; // x8
  System_String_o *v75; // x29
  long double inited; // q0
  _QWORD *v77; // x21
  __int64 v78; // x8
  __int64 v79; // x0
  __int64 v80; // x0
  const MethodInfo *v81; // x1
  System_String_o *v82; // x21
  Il2CppObject *v83; // x0
  UILabel_o *messageLabel; // x21
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  UnityEngine_GameObject_o *v91; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v95; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4CEFA5B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_object___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C7BAE8(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Predicate_GiftEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_1C7BAE8(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5620/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_1C7BAE8(&StringLiteral_20531/*"img_common_frame01"*/);
    sub_1C7BAE8(&StringLiteral_20098/*"harvestGrowthTitle"*/);
    sub_1C7BAE8(&StringLiteral_5619/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_1C7BAE8(&StringLiteral_5617/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_5621/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_5618/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_4CEFA5B = 1;
  }
  memset(&v97, 0, sizeof(v97));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v8 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = DataManager__GetMasterData_object_(
          v8,
          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_94;
  if ( !Instance )
    goto LABEL_94;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0);
  if ( !Instance )
    goto LABEL_94;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_20098/*"harvestGrowthTitle"*/,
               0,
               0);
  if ( !MasterData_object )
    goto LABEL_94;
  v11 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, harvestGrowthInfo->fields.beforeQuestId, 0);
  if ( !Instance )
    goto LABEL_94;
  v95 = this;
  if ( !v10 )
    goto LABEL_94;
  v12 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0);
  Instance = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, harvestGrowthInfo->fields.afterQuestId, 0);
  if ( !Instance )
    goto LABEL_94;
  value = v11;
  v14 = GiftMaster__GetListById((GiftMaster_o *)v10, *((_DWORD *)Instance + 13), 0);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_94;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v12[12],
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v14 )
    goto LABEL_94;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    (System_Collections_Generic_List_object__o *)v14,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v16 = 0;
  v17 = 0;
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v18 = sub_1C7BD34(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    if ( !v18 )
      sub_1C7BD40(v19, v20);
    current = (int32_t)v97.fields._current;
    *(_QWORD *)(v18 + 16) = v97.fields._current;
    v28 = v18 + 16;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 16), current, v21, v22, v23, v24, v25, v26);
    v29 = sub_1C7BD34(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    v31 = *(_QWORD *)(v18 + 16);
    if ( !v31 )
      sub_1C7BD40(0, v30);
    if ( !v29 )
      sub_1C7BD40(v31, v30);
    *(_QWORD *)(v29 + 16) = *(_QWORD *)(v31 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v31, 0);
    *(_DWORD *)(v29 + 24) = IconImageId;
    if ( !*(_QWORD *)v28 )
      sub_1C7BD40(IconImageId, v33);
    *(_DWORD *)(v29 + 28) = *(_DWORD *)(*(_QWORD *)v28 + 28LL);
    v34 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v34,
      (Il2CppObject *)v18,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0);
    if ( !ListById )
      sub_1C7BD40(v35, v36);
    v37 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v34,
            (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v37 )
      v17 = v29;
    else
      v16 = v29;
    if ( v37 )
    {
      if ( !*(_QWORD *)v28 )
        sub_1C7BD40(v37, v38);
      if ( !v17 )
LABEL_101:
        sub_1C7BD40(v37, v38);
      *(_DWORD *)(v17 + 32) = *(_DWORD *)(*(_QWORD *)v28 + 28LL) - HIDWORD(v37[1].monitor);
    }
    else
    {
      if ( !v16 )
        goto LABEL_101;
      *(_DWORD *)(v16 + 32) = 0;
      if ( *(_DWORD *)(v29 + 16) == 1 )
        *(_BYTE *)(v29 + 36) = 1;
      else
        *(_BYTE *)(v29 + 37) = 1;
    }
    if ( !v15 )
      sub_1C7BD40(v37, v38);
    items = v15->fields._items;
    v46 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1C7BD40(v37, v38);
    size = v15->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v29,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v48[4] = (Il2CppClass *)v29;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v48 + 4), v29, v39, v40, v41, v42, v43, v44);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v15 )
LABEL_94:
    sub_1C7BD40(Instance, v7);
  v55 = v15->fields._size;
  if ( v55 <= 0 )
  {
LABEL_40:
    ActionExtensions__Call(closeAction, 0);
    return;
  }
  v56 = v55 - 1;
  switch ( v55 )
  {
    case 1:
      p_countIconList01 = &v95->fields.countIconList01;
      p_countLabelList01 = &v95->fields.countLabelList01;
      goto LABEL_44;
    case 2:
      p_countIconList01 = &v95->fields.countIconList02;
      p_countLabelList01 = &v95->fields.countLabelList02;
      goto LABEL_44;
    case 3:
      p_countIconList01 = &v95->fields.countIconList03;
      p_countLabelList01 = &v95->fields.countLabelList03;
      goto LABEL_44;
    case 4:
      p_countIconList01 = &v95->fields.countIconList04;
      p_countLabelList01 = &v95->fields.countLabelList04;
LABEL_44:
      dispObjList = v95->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_94;
      if ( v56 >= LODWORD(dispObjList->max_length) )
        goto LABEL_95;
      messageList = v95->fields.messageList;
      if ( !messageList )
        goto LABEL_94;
      if ( v56 >= LODWORD(messageList->max_length) )
        goto LABEL_95;
      v61 = *p_countIconList01;
      v62 = messageList->m_Items[v56];
      v63 = dispObjList->m_Items[v56];
      v64 = *p_countLabelList01;
      v95->fields.messageLabel = v62;
      v91 = v63;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v95->fields.messageLabel, (int32_t)v62, v49, v50, v51, v52, v53, v54);
      if ( !v61 )
        goto LABEL_94;
      v65 = 0;
      break;
    default:
      goto LABEL_40;
  }
  do
  {
    if ( (unsigned int)v65 >= LODWORD(v61->max_length) )
      goto LABEL_95;
    v66 = v65;
    v67 = v61->m_Items[v65];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v65,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v64 )
      goto LABEL_94;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
LABEL_95:
      sub_1C7BD48(Instance);
    v68 = Instance;
    if ( !Instance || !v67 )
      goto LABEL_94;
    v69 = v64->m_Items[v66];
    if ( *((int *)Instance + 7) <= 1 )
      v70 = -1;
    else
      v70 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_41487788(v67, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v70, 0, 0);
    v71 = &StringLiteral_20531/*"img_common_frame01"*/;
    if ( v68[4] != 1 )
      v71 = &StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v67, v68[4] == 1, (System_String_o *)*v71, 0);
    v72 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v72, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0);
    LODWORD(v96.fields._list) = v68[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
    if ( !v72 )
      goto LABEL_94;
    System_Text_StringBuilder__AppendFormat(v72, v73, (Il2CppObject *)Instance, 0);
    if ( *((_BYTE *)v68 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = &StringLiteral_5619/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_71:
      v75 = LocalizationManager__Get((System_String_o *)*v74, 0);
      v77 = Method_System_Array_Empty_object___;
      v78 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v78 )
      {
        sub_1C51BD8(Method_System_Array_Empty_object___);
        v78 = v77[7];
      }
      v79 = *(_QWORD *)(v78 + 16);
      if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
        v79 = sub_1C51B7C(inited);
      if ( !*(_DWORD *)(v79 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v79);
      v80 = *(_QWORD *)(v77[7] + 16LL);
      if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
        v80 = sub_1C51B7C(inited);
      System_Text_StringBuilder__AppendFormat_64267412(v72, v75, **(System_Object_array ***)(v80 + 184), 0);
      goto LABEL_80;
    }
    if ( *((_BYTE *)v68 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = &StringLiteral_5620/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_71;
    }
    if ( (int)v68[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0);
      LODWORD(v96.fields._list) = v68[8];
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
      System_Text_StringBuilder__AppendFormat(v72, v82, v83, 0);
    }
LABEL_80:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v72->klass->vtable._3_ToString.methodPtr)(
                         v72,
                         v72->klass->vtable._3_ToString.method);
    if ( !v69 )
      goto LABEL_94;
    UILabel__set_text(v69, (System_String_o *)Instance, 0);
    v65 = v66 + 1;
  }
  while ( v55 != (_DWORD)v66 + 1 );
  EventInfoHarvestGrowthDialog__Init(v95, v81);
  Instance = v91;
  if ( !v91 )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(v91, 1, 0);
  BaseDialog__Open((BaseDialog_o *)v95, 0, 0, 0, 0);
  Instance = v95->fields.titleLabel;
  v7 = value;
  if ( !Instance )
    goto LABEL_94;
  UILabel__set_text((UILabel_o *)Instance, value, 0);
  messageLabel = v95->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0);
  if ( !Entity )
    goto LABEL_94;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0);
  if ( !messageLabel )
    goto LABEL_94;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  v95->fields.closeAction = closeAction;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v95->fields.closeAction,
    (int32_t)closeAction,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
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
    sub_1C7BD40(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}