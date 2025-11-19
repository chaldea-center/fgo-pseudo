void EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7805 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB7805 = 1;
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
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v10; // w21

  if ( (byte_4CB7802 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7802 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C6BC68(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v10];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C6BC60(titleLabel, v3);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void EventInfoHarvestGrowthDialog__OnClickCloseButton(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB7804 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    byte_4CB7804 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
  const MethodInfo *v22; // x3
  int32_t current; // w1
  __int64 v24; // x26
  __int64 v25; // x25
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 IconImageId; // x0
  __int64 v29; // x1
  System_Predicate_object__o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int v43; // w19
  unsigned int v44; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v49; // x25
  struct UILabel_o *v50; // x1
  UnityEngine_GameObject_o *v51; // x8
  struct UILabel_array *v52; // x20
  int32_t v53; // w8
  __int64 v54; // x26
  ItemIconComponent_o *v55; // x28
  _DWORD *v56; // x29
  UILabel_o *v57; // x27
  int v58; // w8
  __int64 *v59; // x8
  System_Text_StringBuilder_o *v60; // x28
  System_String_o *v61; // x21
  __int64 *v62; // x8
  System_String_o *v63; // x29
  long double inited; // q0
  _QWORD *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  System_String_o *v70; // x21
  Il2CppObject *v71; // x0
  UILabel_o *messageLabel; // x21
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UnityEngine_GameObject_o *v75; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v79; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4CB7803 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_object___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C6BA08(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Predicate_GiftEntity__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_1C6BA08(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5603/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_1C6BA08(&StringLiteral_20429/*"img_common_frame01"*/);
    sub_1C6BA08(&StringLiteral_20002/*"harvestGrowthTitle"*/);
    sub_1C6BA08(&StringLiteral_5602/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_1C6BA08(&StringLiteral_5600/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_1C6BA08(&StringLiteral_5604/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_5601/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_4CB7803 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v8 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  v10 = DataManager__GetMasterData_object_(
          v8,
          (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v8,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_20002/*"harvestGrowthTitle"*/,
               0,
               0);
  if ( !MasterData_object )
    goto LABEL_94;
  v11 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, harvestGrowthInfo->fields.beforeQuestId, 0);
  if ( !Instance )
    goto LABEL_94;
  v79 = this;
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
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_94;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v12[12],
             (const MethodInfo_33F90DC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v14 )
    goto LABEL_94;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)v14,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v16 = 0;
  v17 = 0;
  v81 = v80;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v18 = sub_1C6BC54(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    if ( !v18 )
      sub_1C6BC60(v19, v20);
    current = (int32_t)v81.fields._current;
    *(_QWORD *)(v18 + 16) = v81.fields._current;
    v24 = v18 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 16), current, v21, v22);
    v25 = sub_1C6BC54(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    v27 = *(_QWORD *)(v18 + 16);
    if ( !v27 )
      sub_1C6BC60(0, v26);
    if ( !v25 )
      sub_1C6BC60(v27, v26);
    *(_QWORD *)(v25 + 16) = *(_QWORD *)(v27 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v27, 0);
    *(_DWORD *)(v25 + 24) = IconImageId;
    if ( !*(_QWORD *)v24 )
      sub_1C6BC60(IconImageId, v29);
    *(_DWORD *)(v25 + 28) = *(_DWORD *)(*(_QWORD *)v24 + 28LL);
    v30 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v30,
      (Il2CppObject *)v18,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0);
    if ( !ListById )
      sub_1C6BC60(v31, v32);
    v33 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v30,
            (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v33 )
      v17 = v25;
    else
      v16 = v25;
    if ( v33 )
    {
      if ( !*(_QWORD *)v24 )
        sub_1C6BC60(v33, v34);
      if ( !v17 )
LABEL_101:
        sub_1C6BC60(v33, v34);
      *(_DWORD *)(v17 + 32) = *(_DWORD *)(*(_QWORD *)v24 + 28LL) - HIDWORD(v33[1].monitor);
    }
    else
    {
      if ( !v16 )
        goto LABEL_101;
      *(_DWORD *)(v16 + 32) = 0;
      if ( *(_DWORD *)(v25 + 16) == 1 )
        *(_BYTE *)(v25 + 36) = 1;
      else
        *(_BYTE *)(v25 + 37) = 1;
    }
    if ( !v15 )
      sub_1C6BC60(v33, v34);
    items = v15->fields._items;
    v38 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1C6BC60(v33, v34);
    size = v15->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v25,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v40[4] = (Il2CppClass *)v25;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), v25, v35, v36);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v15 )
LABEL_94:
    sub_1C6BC60(Instance, v7);
  v43 = v15->fields._size;
  if ( v43 <= 0 )
  {
LABEL_40:
    ActionExtensions__Call(closeAction, 0);
    return;
  }
  v44 = v43 - 1;
  switch ( v43 )
  {
    case 1:
      p_countIconList01 = &v79->fields.countIconList01;
      p_countLabelList01 = &v79->fields.countLabelList01;
      goto LABEL_44;
    case 2:
      p_countIconList01 = &v79->fields.countIconList02;
      p_countLabelList01 = &v79->fields.countLabelList02;
      goto LABEL_44;
    case 3:
      p_countIconList01 = &v79->fields.countIconList03;
      p_countLabelList01 = &v79->fields.countLabelList03;
      goto LABEL_44;
    case 4:
      p_countIconList01 = &v79->fields.countIconList04;
      p_countLabelList01 = &v79->fields.countLabelList04;
LABEL_44:
      dispObjList = v79->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_94;
      if ( v44 >= LODWORD(dispObjList->max_length) )
        goto LABEL_95;
      messageList = v79->fields.messageList;
      if ( !messageList )
        goto LABEL_94;
      if ( v44 >= LODWORD(messageList->max_length) )
        goto LABEL_95;
      v49 = *p_countIconList01;
      v50 = messageList->m_Items[v44];
      v51 = dispObjList->m_Items[v44];
      v52 = *p_countLabelList01;
      v79->fields.messageLabel = v50;
      v75 = v51;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v79->fields.messageLabel, (int32_t)v50, v41, v42);
      if ( !v49 )
        goto LABEL_94;
      v53 = 0;
      break;
    default:
      goto LABEL_40;
  }
  do
  {
    if ( (unsigned int)v53 >= LODWORD(v49->max_length) )
      goto LABEL_95;
    v54 = v53;
    v55 = v49->m_Items[v53];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v53,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v52 )
      goto LABEL_94;
    if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
LABEL_95:
      sub_1C6BC68(Instance);
    v56 = Instance;
    if ( !Instance || !v55 )
      goto LABEL_94;
    v57 = v52->m_Items[v54];
    if ( *((int *)Instance + 7) <= 1 )
      v58 = -1;
    else
      v58 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_41153640(v55, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v58, 0, 0);
    v59 = &StringLiteral_20429/*"img_common_frame01"*/;
    if ( v56[4] != 1 )
      v59 = &StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v55, v56[4] == 1, (System_String_o *)*v59, 0);
    v60 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v60, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_5601/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0);
    LODWORD(v80.fields._list) = v56[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    if ( !v60 )
      goto LABEL_94;
    System_Text_StringBuilder__AppendFormat(v60, v61, (Il2CppObject *)Instance, 0);
    if ( *((_BYTE *)v56 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = &StringLiteral_5602/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_71:
      v63 = LocalizationManager__Get((System_String_o *)*v62, 0);
      v65 = Method_System_Array_Empty_object___;
      v66 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v66 )
      {
        sub_1C41AF8(Method_System_Array_Empty_object___);
        v66 = v65[7];
      }
      v67 = *(_QWORD *)(v66 + 16);
      if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
        v67 = sub_1C41A9C(inited);
      if ( !*(_DWORD *)(v67 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v67);
      v68 = *(_QWORD *)(v65[7] + 16LL);
      if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
        v68 = sub_1C41A9C(inited);
      System_Text_StringBuilder__AppendFormat_64057292(v60, v63, **(System_Object_array ***)(v68 + 184), 0);
      goto LABEL_80;
    }
    if ( *((_BYTE *)v56 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = &StringLiteral_5603/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_71;
    }
    if ( (int)v56[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0);
      LODWORD(v80.fields._list) = v56[8];
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
      System_Text_StringBuilder__AppendFormat(v60, v70, v71, 0);
    }
LABEL_80:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v60->klass->vtable._3_ToString.methodPtr)(
                         v60,
                         v60->klass->vtable._3_ToString.method);
    if ( !v57 )
      goto LABEL_94;
    UILabel__set_text(v57, (System_String_o *)Instance, 0);
    v53 = v54 + 1;
  }
  while ( v43 != (_DWORD)v54 + 1 );
  EventInfoHarvestGrowthDialog__Init(v79, v69);
  Instance = v75;
  if ( !v75 )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(v75, 1, 0);
  BaseDialog__Open((BaseDialog_o *)v79, 0, 0, 0, 0);
  Instance = v79->fields.titleLabel;
  v7 = value;
  if ( !Instance )
    goto LABEL_94;
  UILabel__set_text((UILabel_o *)Instance, value, 0);
  messageLabel = v79->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0);
  if ( !Entity )
    goto LABEL_94;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0);
  if ( !messageLabel )
    goto LABEL_94;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  v79->fields.closeAction = closeAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v79->fields.closeAction, (int32_t)closeAction, v73, v74);
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
    sub_1C6BC60(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}