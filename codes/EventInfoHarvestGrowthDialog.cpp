void EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C444CE & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C444CE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v9; // w21

  if ( (byte_4C444CB & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C444CB = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C372BC(titleLabel);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v9];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      max_length = dispObjList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C372B4(titleLabel);
  }
LABEL_13:
  this->fields.closeAction = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v5, v6);
}


void EventInfoHarvestGrowthDialog__OnClickCloseButton(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C444CD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    sub_1C37058(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__);
    byte_4C444CD = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
  __int64 Instance; // x0
  DataManager_o *v7; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v9; // x25
  System_String_o *v10; // x19
  __int64 v11; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v13; // x25
  System_Collections_Generic_List_object__o *v14; // x23
  __int64 v15; // x29
  __int64 v16; // x19
  __int64 v17; // x27
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t current; // w1
  __int64 v22; // x26
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 IconImageId; // x0
  System_Predicate_object__o *v26; // x21
  __int64 v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int v37; // w19
  unsigned int v38; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v43; // x25
  struct UILabel_o *v44; // x1
  UnityEngine_GameObject_o *v45; // x8
  struct UILabel_array *v46; // x20
  int32_t v47; // w8
  __int64 v48; // x26
  ItemIconComponent_o *v49; // x28
  __int64 v50; // x29
  UILabel_o *v51; // x27
  int v52; // w8
  __int64 *v53; // x8
  System_Text_StringBuilder_o *v54; // x28
  System_String_o *v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x5
  __int64 v60; // x6
  __int64 v61; // x7
  __int64 *v62; // x8
  System_String_o *v63; // x29
  long double inited; // q0
  _QWORD *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x0
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  System_String_o *v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x5
  __int64 v75; // x6
  __int64 v76; // x7
  Il2CppObject *v77; // x0
  UILabel_o *messageLabel; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  UnityEngine_GameObject_o *v81; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v85; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C444CC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_object___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C37058(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__);
    sub_1C37058(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Predicate_GiftEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__);
    sub_1C37058(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    sub_1C37058(&StringLiteral_5613/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/);
    sub_1C37058(&StringLiteral_20364/*"img_common_frame01"*/);
    sub_1C37058(&StringLiteral_19938/*"harvestGrowthTitle"*/);
    sub_1C37058(&StringLiteral_5612/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/);
    sub_1C37058(&StringLiteral_5610/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/);
    sub_1C37058(&StringLiteral_5614/*"EVENT_HARVEST_GROWTH_MESSAGE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_5611/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/);
    byte_4C444CC = 1;
  }
  memset(&v87, 0, sizeof(v87));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v7 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  v9 = DataManager__GetMasterData_object_(
         v7,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_94;
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)QuestPhaseMaster__GetEntity(
                        (QuestPhaseMaster_o *)Instance,
                        harvestGrowthInfo->fields.questId,
                        harvestGrowthInfo->fields.phase,
                        0);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)QuestPhaseEntity__getScriptStr(
                        (QuestPhaseEntity_o *)Instance,
                        (System_String_o *)StringLiteral_19938/*"harvestGrowthTitle"*/,
                        0,
                        0);
  if ( !MasterData_object )
    goto LABEL_94;
  v10 = (System_String_o *)Instance;
  Instance = (__int64)QuestMaster__getQuestEntity(
                        (QuestMaster_o *)MasterData_object,
                        harvestGrowthInfo->fields.beforeQuestId,
                        0);
  if ( !Instance )
    goto LABEL_94;
  v85 = this;
  if ( !v9 )
    goto LABEL_94;
  v11 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v9, *(_DWORD *)(Instance + 52), 0);
  Instance = (__int64)QuestMaster__getQuestEntity(
                        (QuestMaster_o *)MasterData_object,
                        harvestGrowthInfo->fields.afterQuestId,
                        0);
  if ( !Instance )
    goto LABEL_94;
  value = v10;
  v13 = GiftMaster__GetListById((GiftMaster_o *)v9, *(_DWORD *)(Instance + 52), 0);
  Instance = (__int64)DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_94;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v11 + 48),
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v13 )
    goto LABEL_94;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_object__o *)v13,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v15 = 0;
  v16 = 0;
  v87 = v86;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v17 = sub_1C372A4(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0);
    if ( !v17 )
      sub_1C372B4(v18);
    current = (int32_t)v87.fields._current;
    *(_QWORD *)(v17 + 16) = v87.fields._current;
    v22 = v17 + 16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), current, v19, v20);
    v23 = sub_1C372A4(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    v24 = *(_QWORD *)(v17 + 16);
    if ( !v24 )
      sub_1C372B4(0);
    if ( !v23 )
      sub_1C372B4(v24);
    *(_QWORD *)(v23 + 16) = *(_QWORD *)(v24 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v24, 0);
    *(_DWORD *)(v23 + 24) = IconImageId;
    if ( !*(_QWORD *)v22 )
      sub_1C372B4(IconImageId);
    *(_DWORD *)(v23 + 28) = *(_DWORD *)(*(_QWORD *)v22 + 28LL);
    v26 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0);
    if ( !ListById )
      sub_1C372B4(v27);
    v28 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v26,
            (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( v28 )
      v16 = v23;
    else
      v15 = v23;
    if ( v28 )
    {
      if ( !*(_QWORD *)v22 )
        sub_1C372B4(v28);
      if ( !v16 )
LABEL_101:
        sub_1C372B4(v28);
      *(_DWORD *)(v16 + 32) = *(_DWORD *)(*(_QWORD *)v22 + 28LL) - HIDWORD(v28[1].monitor);
    }
    else
    {
      if ( !v15 )
        goto LABEL_101;
      *(_DWORD *)(v15 + 32) = 0;
      if ( *(_DWORD *)(v23 + 16) == 1 )
        *(_BYTE *)(v23 + 36) = 1;
      else
        *(_BYTE *)(v23 + 37) = 1;
    }
    if ( !v14 )
      sub_1C372B4(v28);
    items = v14->fields._items;
    v32 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1C372B4(v28);
    size = v14->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)v23,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v14->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v23;
      sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), v23, v29, v30);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v14 )
LABEL_94:
    sub_1C372B4(Instance);
  v37 = v14->fields._size;
  if ( v37 <= 0 )
  {
LABEL_40:
    ActionExtensions__Call(closeAction, 0);
    return;
  }
  v38 = v37 - 1;
  switch ( v37 )
  {
    case 1:
      p_countIconList01 = &v85->fields.countIconList01;
      p_countLabelList01 = &v85->fields.countLabelList01;
      goto LABEL_44;
    case 2:
      p_countIconList01 = &v85->fields.countIconList02;
      p_countLabelList01 = &v85->fields.countLabelList02;
      goto LABEL_44;
    case 3:
      p_countIconList01 = &v85->fields.countIconList03;
      p_countLabelList01 = &v85->fields.countLabelList03;
      goto LABEL_44;
    case 4:
      p_countIconList01 = &v85->fields.countIconList04;
      p_countLabelList01 = &v85->fields.countLabelList04;
LABEL_44:
      dispObjList = v85->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_94;
      if ( v38 >= LODWORD(dispObjList->max_length) )
        goto LABEL_95;
      messageList = v85->fields.messageList;
      if ( !messageList )
        goto LABEL_94;
      if ( v38 >= LODWORD(messageList->max_length) )
        goto LABEL_95;
      v43 = *p_countIconList01;
      v44 = messageList->m_Items[v38];
      v45 = dispObjList->m_Items[v38];
      v46 = *p_countLabelList01;
      v85->fields.messageLabel = v44;
      v81 = v45;
      sub_1C36FFC((CGThumbnailListItem_o *)&v85->fields.messageLabel, (int32_t)v44, v35, v36);
      if ( !v43 )
        goto LABEL_94;
      v47 = 0;
      break;
    default:
      goto LABEL_40;
  }
  do
  {
    if ( (unsigned int)v47 >= LODWORD(v43->max_length) )
      goto LABEL_95;
    v48 = v47;
    v49 = v43->m_Items[v47];
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          v14,
                          v47,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v46 )
      goto LABEL_94;
    if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
LABEL_95:
      sub_1C372BC(Instance);
    v50 = Instance;
    if ( !Instance || !v49 )
      goto LABEL_94;
    v51 = v46->m_Items[v48];
    if ( *(int *)(Instance + 28) <= 1 )
      v52 = -1;
    else
      v52 = *(_DWORD *)(Instance + 28);
    ItemIconComponent__SetGift_40921900(v49, *(_DWORD *)(Instance + 16), *(_DWORD *)(Instance + 20), v52, 0, 0);
    v53 = &StringLiteral_20364/*"img_common_frame01"*/;
    if ( *(_DWORD *)(v50 + 16) != 1 )
      v53 = &StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v49, *(_DWORD *)(v50 + 16) == 1, (System_String_o *)*v53, 0);
    v54 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v54, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5611/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0);
    LODWORD(v86.fields._list) = *(_DWORD *)(v50 + 28);
    Instance = j_il2cpp_value_box_0(int_TypeInfo, &v86, v56, v57, v58, v59, v60, v61);
    if ( !v54 )
      goto LABEL_94;
    System_Text_StringBuilder__AppendFormat(v54, v55, (Il2CppObject *)Instance, 0);
    if ( *(_BYTE *)(v50 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = &StringLiteral_5612/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_71:
      v63 = LocalizationManager__Get((System_String_o *)*v62, 0);
      v65 = Method_System_Array_Empty_object___;
      v66 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v66 )
      {
        sub_1C877C8(Method_System_Array_Empty_object___);
        v66 = v65[7];
      }
      v67 = *(_QWORD *)(v66 + 16);
      if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
        v67 = sub_1C8776C(inited);
      if ( !*(_DWORD *)(v67 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v67);
      v68 = *(_QWORD *)(v65[7] + 16LL);
      if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
        v68 = sub_1C8776C(inited);
      System_Text_StringBuilder__AppendFormat_63653260(v54, v63, **(System_Object_array ***)(v68 + 184), 0);
      goto LABEL_80;
    }
    if ( *(_BYTE *)(v50 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = &StringLiteral_5613/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_71;
    }
    if ( *(int *)(v50 + 32) >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_5610/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0);
      LODWORD(v86.fields._list) = *(_DWORD *)(v50 + 32);
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v71, v72, v73, v74, v75, v76);
      System_Text_StringBuilder__AppendFormat(v54, v70, v77, 0);
    }
LABEL_80:
    Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v54->klass->vtable._3_ToString.methodPtr)(
                 v54,
                 v54->klass->vtable._3_ToString.method);
    if ( !v51 )
      goto LABEL_94;
    UILabel__set_text(v51, (System_String_o *)Instance, 0);
    v47 = v48 + 1;
  }
  while ( v37 != (_DWORD)v48 + 1 );
  EventInfoHarvestGrowthDialog__Init(v85, v69);
  Instance = (__int64)v81;
  if ( !v81 )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(v81, 1, 0);
  BaseDialog__Open((BaseDialog_o *)v85, 0, 0, 0, 0);
  Instance = (__int64)v85->fields.titleLabel;
  if ( !Instance )
    goto LABEL_94;
  UILabel__set_text((UILabel_o *)Instance, value, 0);
  messageLabel = v85->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0);
  if ( !Entity )
    goto LABEL_94;
  Instance = (__int64)System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0);
  if ( !messageLabel )
    goto LABEL_94;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0);
  v85->fields.closeAction = closeAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&v85->fields.closeAction, (int32_t)closeAction, v79, v80);
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
    sub_1C372B4(this);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}