void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FDBAB & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FDBAB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestGrowthDialog__Init(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v12; // w21

  if ( (byte_49FDBA8 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FDBA8 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B6432C(titleLabel, v7);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v12];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(titleLabel);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v8, v9);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FDBAA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__, v3);
    sub_1B640C8(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v4);
    byte_49FDBAA = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
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
  void *Instance; // x0
  DataManager_o *v38; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v40; // x25
  System_String_o *v41; // x19
  _DWORD *v42; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v44; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_List_object__o *v47; // x23
  __int64 v48; // x29
  __int64 v49; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x27
  __int64 v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t current; // w1
  __int64 v57; // x26
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x25
  __int64 v61; // x0
  __int64 IconImageId; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  System_Predicate_object__o *v65; // x21
  __int64 v66; // x0
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  const MethodInfo *v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  int v77; // w19
  unsigned int v78; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v83; // x25
  struct UILabel_o *v84; // x1
  UnityEngine_GameObject_o *v85; // x8
  struct UILabel_array *v86; // x20
  int32_t v87; // w8
  UILabel_o *v88; // x24
  __int64 v89; // x26
  ItemIconComponent_o *v90; // x28
  _DWORD *v91; // x29
  UILabel_o *v92; // x27
  int32_t v93; // w3
  System_String_o **v94; // x8
  __int64 v95; // x1
  __int64 v96; // x2
  System_Text_StringBuilder_o *v97; // x28
  System_String_o *v98; // x21
  __int64 *v99; // x8
  System_String_o *v100; // x29
  _QWORD *v101; // x21
  __int64 v102; // x8
  __int64 v103; // x0
  __int64 v104; // x0
  System_String_o *v105; // x21
  Il2CppObject *v106; // x0
  UILabel_o *messageLabel; // x21
  int32_t v108; // w2
  int32_t v109; // w3
  UnityEngine_GameObject_o *v110; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v114; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49FDBA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_1B640C8(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&System_Predicate_GiftEntity__TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v26);
    sub_1B640C8(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v27);
    sub_1B640C8(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_5599/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v29);
    sub_1B640C8(&StringLiteral_20211/*"img_common_frame01"*/, v30);
    sub_1B640C8(&StringLiteral_19803/*"harvestGrowthTitle"*/, v31);
    sub_1B640C8(&StringLiteral_5598/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v32);
    sub_1B640C8(&StringLiteral_5596/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v33);
    sub_1B640C8(&StringLiteral_5600/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v34);
    sub_1B640C8(&StringLiteral_1/*""*/, v35);
    sub_1B640C8(&StringLiteral_5597/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v36);
    byte_49FDBA9 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v38 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  v40 = DataManager__GetMasterData_object_(
          v38,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v38,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !harvestGrowthInfo )
    goto LABEL_97;
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)Instance,
               harvestGrowthInfo->fields.questId,
               harvestGrowthInfo->fields.phase,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  Instance = QuestPhaseEntity__getScriptStr(
               (QuestPhaseEntity_o *)Instance,
               (System_String_o *)StringLiteral_19803/*"harvestGrowthTitle"*/,
               0LL,
               0LL);
  if ( !MasterData_object )
    goto LABEL_97;
  v41 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  v114 = this;
  if ( !v40 )
    goto LABEL_97;
  v42 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v40, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  value = v41;
  v44 = GiftMaster__GetListById((GiftMaster_o *)v40, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_object_(
               v38,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v42[12],
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v47 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo,
                                                       v45,
                                                       v46);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v44 )
    goto LABEL_97;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_object__o *)v44,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v48 = 0LL;
  v49 = 0LL;
  v116 = v115;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v52 = sub_1B64314(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v50, v51);
    System_Object___ctor((Il2CppObject *)v52, 0LL);
    if ( !v52 )
      sub_1B64324(v53);
    current = (int32_t)v116.fields._current;
    *(_QWORD *)(v52 + 16) = v116.fields._current;
    v57 = v52 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 16), current, v54, v55);
    v60 = sub_1B64314(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v58, v59);
    System_Object___ctor((Il2CppObject *)v60, 0LL);
    v61 = *(_QWORD *)(v52 + 16);
    if ( !v61 )
      sub_1B64324(0LL);
    if ( !v60 )
      sub_1B64324(v61);
    *(_QWORD *)(v60 + 16) = *(_QWORD *)(v61 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v61, 0LL);
    *(_DWORD *)(v60 + 24) = IconImageId;
    if ( !*(_QWORD *)v57 )
      sub_1B64324(IconImageId);
    *(_DWORD *)(v60 + 28) = *(_DWORD *)(*(_QWORD *)v57 + 28LL);
    v65 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_GiftEntity__TypeInfo, v63, v64);
    System_Predicate_object____ctor(
      v65,
      (Il2CppObject *)v52,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0LL);
    if ( !ListById )
      sub_1B64324(v66);
    v67 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v65,
            (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( !v67 )
      v48 = v60;
    if ( v67 )
      v49 = v60;
    if ( v67 )
    {
      if ( !*(_QWORD *)v57 )
        sub_1B64324(v67);
      if ( !v49 )
LABEL_104:
        sub_1B64324(v67);
      *(_DWORD *)(v49 + 32) = *(_DWORD *)(*(_QWORD *)v57 + 28LL) - HIDWORD(v67[1].monitor);
    }
    else
    {
      if ( !v48 )
        goto LABEL_104;
      *(_DWORD *)(v48 + 32) = 0;
      if ( *(_DWORD *)(v60 + 16) == 1 )
        *(_BYTE *)(v60 + 36) = 1;
      else
        *(_BYTE *)(v60 + 37) = 1;
    }
    if ( !v47 )
      sub_1B64324(v67);
    items = v47->fields._items;
    v71 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v47->fields._version;
    if ( !items )
      sub_1B64324(v67);
    size = v47->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v47,
        (Il2CppObject *)v60,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &items->obj.klass + size;
      v47->fields._size = size + 1;
      v73[4] = (Il2CppClass *)v60;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 4), v60, v68, v69);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v47 )
LABEL_97:
    sub_1B64324(Instance);
  v77 = v47->fields._size;
  if ( v77 <= 0 )
  {
LABEL_41:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v78 = v77 - 1;
  switch ( v77 )
  {
    case 1:
      p_countIconList01 = &v114->fields.countIconList01;
      p_countLabelList01 = &v114->fields.countLabelList01;
      goto LABEL_45;
    case 2:
      p_countIconList01 = &v114->fields.countIconList02;
      p_countLabelList01 = &v114->fields.countLabelList02;
      goto LABEL_45;
    case 3:
      p_countIconList01 = &v114->fields.countIconList03;
      p_countLabelList01 = &v114->fields.countLabelList03;
      goto LABEL_45;
    case 4:
      p_countIconList01 = &v114->fields.countIconList04;
      p_countLabelList01 = &v114->fields.countLabelList04;
LABEL_45:
      dispObjList = v114->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_97;
      if ( v78 >= dispObjList->max_length )
        goto LABEL_98;
      messageList = v114->fields.messageList;
      if ( !messageList )
        goto LABEL_97;
      if ( v78 >= messageList->max_length )
        goto LABEL_98;
      v83 = *p_countIconList01;
      v84 = messageList->m_Items[v78];
      v85 = dispObjList->m_Items[v78];
      v86 = *p_countLabelList01;
      v114->fields.messageLabel = v84;
      v110 = v85;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v114->fields.messageLabel, (int32_t)v84, v75, v76);
      if ( !v83 )
        goto LABEL_97;
      v87 = 0;
      v88 = 0LL;
      break;
    default:
      goto LABEL_41;
  }
  do
  {
    if ( v87 >= v83->max_length )
      goto LABEL_98;
    v89 = v87;
    v90 = v83->m_Items[v87];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v47,
                 v87,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v86 )
      goto LABEL_97;
    if ( (unsigned int)v89 >= v86->max_length )
LABEL_98:
      sub_1B6432C(Instance, v74);
    v91 = Instance;
    if ( !Instance || !v90 )
      goto LABEL_97;
    v92 = v86->m_Items[v89];
    if ( *((int *)Instance + 7) <= 1 )
      v93 = -1;
    else
      v93 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_37829292(v90, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v93, 0, 0LL);
    v94 = (System_String_o **)&StringLiteral_20211/*"img_common_frame01"*/;
    if ( v91[4] != 1 )
      v94 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v90, v91[4] == 1, *v94, 0LL);
    v97 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v95, v96);
    System_Text_StringBuilder___ctor(v97, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v115.fields._list) = v91[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
    if ( !v97 )
      goto LABEL_97;
    System_Text_StringBuilder__AppendFormat(v97, v98, (Il2CppObject *)Instance, 0LL);
    if ( !*((_BYTE *)v91 + 36) )
      v88 = v92;
    if ( *((_BYTE *)v91 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v99 = &StringLiteral_5598/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_74:
      v100 = LocalizationManager__Get((System_String_o *)*v99, 0LL);
      v101 = Method_System_Array_Empty_object___;
      v102 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v102 )
      {
        sub_1BB6000(Method_System_Array_Empty_object___);
        v102 = v101[7];
      }
      v103 = *(_QWORD *)(v102 + 16);
      if ( (*(_BYTE *)(v103 + 309) & 1) == 0 )
        v103 = sub_1BB5FA4(v103);
      if ( !*(_DWORD *)(v103 + 224) )
        j_il2cpp_runtime_class_init_0(v103);
      v104 = *(_QWORD *)(v101[7] + 16LL);
      if ( (*(_BYTE *)(v104 + 309) & 1) == 0 )
        v104 = sub_1BB5FA4(v104);
      System_Text_StringBuilder__AppendFormat_60543088(v97, v100, **(System_Object_array ***)(v104 + 184), 0LL);
      goto LABEL_83;
    }
    if ( *((_BYTE *)v91 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v99 = &StringLiteral_5599/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_74;
    }
    v92 = v88;
    if ( (int)v91[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_5596/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v115.fields._list) = v91[8];
      v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v115);
      System_Text_StringBuilder__AppendFormat(v97, v105, v106, 0LL);
      v92 = v88;
    }
LABEL_83:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v97->klass->vtable._3_ToString.method)(
                         v97,
                         v97->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v92 )
      goto LABEL_97;
    UILabel__set_text(v92, (System_String_o *)Instance, 0LL);
    v87 = v89 + 1;
  }
  while ( v77 != (_DWORD)v89 + 1 );
  EventInfoHarvestGrowthDialog__Init(v114, v74);
  Instance = v110;
  if ( !v110 )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(v110, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v114, 0LL, 0, 0LL);
  Instance = v114->fields.titleLabel;
  if ( !Instance )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v114->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5600/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_97;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0LL);
  if ( !messageLabel )
    goto LABEL_97;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v114->fields.closeAction = closeAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v114->fields.closeAction, (int32_t)closeAction, v108, v109);
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
    sub_1B64324(this);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}