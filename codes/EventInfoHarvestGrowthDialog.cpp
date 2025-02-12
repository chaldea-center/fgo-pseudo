void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5CC0 & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB5CC0 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v16; // w21

  if ( (byte_4BB5CBD & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v3);
    sub_1C13D24(&StringLiteral_1/*""*/, v4);
    byte_4BB5CBD = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_14;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  dispObjList = this->fields.dispObjList;
  if ( !dispObjList )
    goto LABEL_14;
  max_length = dispObjList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C13F88(titleLabel, v5);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v16];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C13F80(titleLabel, v5);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoHarvestGrowthDialog__OnClickCloseButton(
        EventInfoHarvestGrowthDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BB5CBF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__, v3);
    sub_1C13D24(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v4);
    byte_4BB5CBF = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  void *Instance; // x0
  const MethodInfo *v38; // x1
  DataManager_o *v39; // x23
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v41; // x25
  System_String_o *v42; // x19
  _DWORD *v43; // x27
  System_Collections_Generic_List_GiftEntity__o *ListById; // x24
  System_Collections_Generic_List_GiftEntity__o *v45; // x25
  System_Collections_Generic_List_object__o *v46; // x23
  int64_t v47; // x29
  int64_t v48; // x19
  __int64 v49; // x27
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *current; // x1
  __int64 v59; // x26
  int64_t v60; // x25
  __int64 v61; // x1
  __int64 v62; // x0
  __int64 IconImageId; // x0
  __int64 v64; // x1
  System_Predicate_object__o *v65; // x21
  __int64 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int v86; // w19
  unsigned int v87; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v92; // x25
  int64_t v93; // x1
  UnityEngine_GameObject_o *v94; // x8
  struct UILabel_array *v95; // x20
  int32_t v96; // w8
  UILabel_o *v97; // x24
  __int64 v98; // x26
  ItemIconComponent_o *v99; // x28
  _DWORD *v100; // x29
  UILabel_o *v101; // x27
  int32_t v102; // w3
  System_String_o **v103; // x8
  System_Text_StringBuilder_o *v104; // x28
  System_String_o *v105; // x21
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  __int64 *v109; // x8
  System_String_o *v110; // x29
  long double inited; // q0
  _QWORD *v112; // x21
  __int64 v113; // x8
  __int64 v114; // x0
  __int64 v115; // x0
  System_String_o *v116; // x21
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  Il2CppObject *v120; // x0
  UILabel_o *messageLabel; // x21
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  UnityEngine_GameObject_o *v128; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v132; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BB5CBE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_1C13D24(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_1C13D24(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_1C13D24(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_1C13D24(&int_TypeInfo, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_1C13D24(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_1C13D24(&LocalizationManager_TypeInfo, v23);
    sub_1C13D24(&System_Predicate_GiftEntity__TypeInfo, v24);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v26);
    sub_1C13D24(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v27);
    sub_1C13D24(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v28);
    sub_1C13D24(&StringLiteral_5734/*"EVENT_HARVEST_CAUTION_TITLE"*/, v29);
    sub_1C13D24(&StringLiteral_20623/*"img_combine_10"*/, v30);
    sub_1C13D24(&StringLiteral_20202/*"gzip, deflate"*/, v31);
    sub_1C13D24(&StringLiteral_5733/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, v32);
    sub_1C13D24(&StringLiteral_5731/*"EVENT_FACTORY_GET_EP_RATE"*/, v33);
    sub_1C13D24(&StringLiteral_5735/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v34);
    sub_1C13D24(&StringLiteral_1/*""*/, v35);
    sub_1C13D24(&StringLiteral_5732/*"EVENT_FALSE"*/, v36);
    byte_4BB5CBE = 1;
  }
  memset(&v134, 0, sizeof(v134));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v39 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  v41 = DataManager__GetMasterData_object_(
          v39,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v39,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_20202/*"gzip, deflate"*/,
               0LL,
               0LL);
  if ( !MasterData_object )
    goto LABEL_97;
  v42 = (System_String_o *)Instance;
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.beforeQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  v132 = this;
  if ( !v41 )
    goto LABEL_97;
  v43 = Instance;
  ListById = GiftMaster__GetListById((GiftMaster_o *)v41, *((_DWORD *)Instance + 13), 0LL);
  Instance = QuestMaster__getQuestEntity(
               (QuestMaster_o *)MasterData_object,
               harvestGrowthInfo->fields.afterQuestId,
               0LL);
  if ( !Instance )
    goto LABEL_97;
  value = v42;
  v45 = GiftMaster__GetListById((GiftMaster_o *)v41, *((_DWORD *)Instance + 13), 0LL);
  Instance = DataManager__GetMasterData_object_(
               v39,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v43[12],
             (const MethodInfo_3238624 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v45 )
    goto LABEL_97;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v133,
    (System_Collections_Generic_List_object__o *)v45,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v47 = 0LL;
  v48 = 0LL;
  v134 = v133;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v134,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v49 = sub_1C13F70(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    if ( !v49 )
      sub_1C13F80(v50, v51);
    current = v134.fields._current;
    *(_QWORD *)(v49 + 16) = v134.fields._current;
    v59 = v49 + 16;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)current, v52, v53, v54, v55, v56, v57);
    v60 = sub_1C13F70(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v60, 0LL);
    v62 = *(_QWORD *)(v49 + 16);
    if ( !v62 )
      sub_1C13F80(0LL, v61);
    if ( !v60 )
      sub_1C13F80(v62, v61);
    *(_QWORD *)(v60 + 16) = *(_QWORD *)(v62 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v62, 0LL);
    *(_DWORD *)(v60 + 24) = IconImageId;
    if ( !*(_QWORD *)v59 )
      sub_1C13F80(IconImageId, v64);
    *(_DWORD *)(v60 + 28) = *(_DWORD *)(*(_QWORD *)v59 + 28LL);
    v65 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v65,
      (Il2CppObject *)v49,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0LL);
    if ( !ListById )
      sub_1C13F80(v66, v67);
    v68 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v65,
            (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( !v68 )
      v47 = v60;
    if ( v68 )
      v48 = v60;
    if ( v68 )
    {
      if ( !*(_QWORD *)v59 )
        sub_1C13F80(v68, v69);
      if ( !v48 )
LABEL_104:
        sub_1C13F80(v68, v69);
      *(_DWORD *)(v48 + 32) = *(_DWORD *)(*(_QWORD *)v59 + 28LL) - HIDWORD(v68[1].monitor);
    }
    else
    {
      if ( !v47 )
        goto LABEL_104;
      *(_DWORD *)(v47 + 32) = 0;
      if ( *(_DWORD *)(v60 + 16) == 1 )
        *(_BYTE *)(v60 + 36) = 1;
      else
        *(_BYTE *)(v60 + 37) = 1;
    }
    if ( !v46 )
      sub_1C13F80(v68, v69);
    items = v46->fields._items;
    v77 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v46->fields._version;
    if ( !items )
      sub_1C13F80(v68, v69);
    size = v46->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v60,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &items->obj.klass + size;
      v46->fields._size = size + 1;
      v79[4] = (Il2CppClass *)v60;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v79 + 4), v60, v70, v71, v72, v73, v74, v75);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v134,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v46 )
LABEL_97:
    sub_1C13F80(Instance, v38);
  v86 = v46->fields._size;
  if ( v86 <= 0 )
  {
LABEL_41:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v87 = v86 - 1;
  switch ( v86 )
  {
    case 1:
      p_countIconList01 = &v132->fields.countIconList01;
      p_countLabelList01 = &v132->fields.countLabelList01;
      goto LABEL_45;
    case 2:
      p_countIconList01 = &v132->fields.countIconList02;
      p_countLabelList01 = &v132->fields.countLabelList02;
      goto LABEL_45;
    case 3:
      p_countIconList01 = &v132->fields.countIconList03;
      p_countLabelList01 = &v132->fields.countLabelList03;
      goto LABEL_45;
    case 4:
      p_countIconList01 = &v132->fields.countIconList04;
      p_countLabelList01 = &v132->fields.countLabelList04;
LABEL_45:
      dispObjList = v132->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_97;
      if ( v87 >= dispObjList->max_length )
        goto LABEL_98;
      messageList = v132->fields.messageList;
      if ( !messageList )
        goto LABEL_97;
      if ( v87 >= messageList->max_length )
        goto LABEL_98;
      v92 = *p_countIconList01;
      v93 = (int64_t)messageList->m_Items[v87];
      v94 = dispObjList->m_Items[v87];
      v95 = *p_countLabelList01;
      v132->fields.messageLabel = (struct UILabel_o *)v93;
      v128 = v94;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v132->fields.messageLabel, v93, v80, v81, v82, v83, v84, v85);
      if ( !v92 )
        goto LABEL_97;
      v96 = 0;
      v97 = 0LL;
      break;
    default:
      goto LABEL_41;
  }
  do
  {
    if ( v96 >= v92->max_length )
      goto LABEL_98;
    v98 = v96;
    v99 = v92->m_Items[v96];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v46,
                 v96,
                 (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v95 )
      goto LABEL_97;
    if ( (unsigned int)v98 >= v95->max_length )
LABEL_98:
      sub_1C13F88(Instance, v38);
    v100 = Instance;
    if ( !Instance || !v99 )
      goto LABEL_97;
    v101 = v95->m_Items[v98];
    if ( *((int *)Instance + 7) <= 1 )
      v102 = -1;
    else
      v102 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_39286592(v99, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v102, 0, 0LL);
    v103 = (System_String_o **)&StringLiteral_20623/*"img_combine_10"*/;
    if ( v100[4] != 1 )
      v103 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v99, v100[4] == 1, *v103, 0LL);
    v104 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v104, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_FALSE"*/, 0LL);
    LODWORD(v133.fields._list) = v100[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v106, v107, v108);
    if ( !v104 )
      goto LABEL_97;
    System_Text_StringBuilder__AppendFormat(v104, v105, (Il2CppObject *)Instance, 0LL);
    if ( !*((_BYTE *)v100 + 36) )
      v97 = v101;
    if ( *((_BYTE *)v100 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v109 = &StringLiteral_5733/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/;
LABEL_74:
      v110 = LocalizationManager__Get((System_String_o *)*v109, 0LL);
      v112 = Method_System_Array_Empty_object___;
      v113 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v113 )
      {
        sub_1C65C5C(Method_System_Array_Empty_object___);
        v113 = v112[7];
      }
      v114 = *(_QWORD *)(v113 + 16);
      if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
        v114 = sub_1C65C00(inited);
      if ( !*(_DWORD *)(v114 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v114);
      v115 = *(_QWORD *)(v112[7] + 16LL);
      if ( (*(_BYTE *)(v115 + 309) & 1) == 0 )
        v115 = sub_1C65C00(inited);
      System_Text_StringBuilder__AppendFormat_62135636(v104, v110, **(System_Object_array ***)(v115 + 184), 0LL);
      goto LABEL_83;
    }
    if ( *((_BYTE *)v100 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v109 = &StringLiteral_5734/*"EVENT_HARVEST_CAUTION_TITLE"*/;
      goto LABEL_74;
    }
    v101 = v97;
    if ( (int)v100[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_FACTORY_GET_EP_RATE"*/, 0LL);
      LODWORD(v133.fields._list) = v100[8];
      v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v117, v118, v119);
      System_Text_StringBuilder__AppendFormat(v104, v116, v120, 0LL);
      v101 = v97;
    }
LABEL_83:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v104->klass->vtable._3_ToString.method)(
                         v104,
                         v104->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v101 )
      goto LABEL_97;
    UILabel__set_text(v101, (System_String_o *)Instance, 0LL);
    v96 = v98 + 1;
  }
  while ( v86 != (_DWORD)v98 + 1 );
  EventInfoHarvestGrowthDialog__Init(v132, v38);
  Instance = v128;
  if ( !v128 )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(v128, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v132, 0LL, 0, 0LL);
  Instance = v132->fields.titleLabel;
  v38 = (const MethodInfo *)value;
  if ( !Instance )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v132->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
  if ( !Entity )
    goto LABEL_97;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0LL);
  if ( !messageLabel )
    goto LABEL_97;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v132->fields.closeAction = closeAction;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v132->fields.closeAction,
    (int64_t)closeAction,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
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
    sub_1C13F80(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}