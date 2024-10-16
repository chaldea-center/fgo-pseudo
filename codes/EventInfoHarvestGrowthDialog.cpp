void __fastcall EventInfoHarvestGrowthDialog___ctor(EventInfoHarvestGrowthDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4AB72AF & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    byte_4AB72AF = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UnityEngine_GameObject_array *dispObjList; // x20
  int max_length; // w8
  unsigned int v12; // w21

  if ( (byte_4AB72AC & 1) == 0 )
  {
    sub_1BAB41C(&LocalizationManager_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    byte_4AB72AC = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
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
        sub_1BAB680(titleLabel, v5);
      titleLabel = (UILabel_o *)dispObjList->m_Items[v12];
      if ( !titleLabel )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      max_length = dispObjList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BAB678(titleLabel, v5);
  }
LABEL_13:
  this->fields.closeAction = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v8, v9);
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

  if ( (byte_4AB72AE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__, v3);
    sub_1BAB41C(&Method_EventInfoHarvestGrowthDialog__OnClickCloseButton_b__22_0__, v4);
    byte_4AB72AE = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_EventInfoHarvestGrowthDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
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
  __int64 v47; // x29
  __int64 v48; // x19
  __int64 v49; // x27
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t current; // w1
  __int64 v55; // x26
  __int64 v56; // x25
  __int64 v57; // x1
  __int64 v58; // x0
  __int64 IconImageId; // x0
  __int64 v60; // x1
  System_Predicate_object__o *v61; // x21
  __int64 v62; // x0
  __int64 v63; // x1
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  int v74; // w19
  unsigned int v75; // w8
  struct ItemIconComponent_array **p_countIconList01; // x9
  struct UILabel_array **p_countLabelList01; // x10
  struct UnityEngine_GameObject_array *dispObjList; // x11
  struct UILabel_array *messageList; // x12
  struct ItemIconComponent_array *v80; // x25
  struct UILabel_o *v81; // x1
  UnityEngine_GameObject_o *v82; // x8
  struct UILabel_array *v83; // x20
  int32_t v84; // w8
  UILabel_o *v85; // x24
  __int64 v86; // x26
  ItemIconComponent_o *v87; // x28
  _DWORD *v88; // x29
  UILabel_o *v89; // x27
  int32_t v90; // w3
  System_String_o **v91; // x8
  System_Text_StringBuilder_o *v92; // x28
  System_String_o *v93; // x21
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 *v97; // x8
  System_String_o *v98; // x29
  long double v99; // q0
  _QWORD *v100; // x21
  __int64 v101; // x8
  __int64 v102; // x0
  __int64 v103; // x0
  System_String_o *v104; // x21
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  UILabel_o *messageLabel; // x21
  int32_t v110; // w2
  int32_t v111; // w3
  UnityEngine_GameObject_o *v112; // [xsp+10h] [xbp-C0h]
  Il2CppObject *Entity; // [xsp+18h] [xbp-B8h]
  System_String_o *value; // [xsp+20h] [xbp-B0h]
  EventInfoHarvestGrowthDialog_o *v116; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4AB72AD & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_object___, harvestGrowthInfo);
    sub_1BAB41C(&Method_DataManager_GetMasterData_GiftMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SpotMaster___, v9);
    sub_1BAB41C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GiftEntity__get_Current__, v13);
    sub_1BAB41C(&EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo, v14);
    sub_1BAB41C(&int_TypeInfo, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GiftEntity__Find__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__, v18);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__, v19);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Count__, v20);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__, v21);
    sub_1BAB41C(&System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo, v22);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v23);
    sub_1BAB41C(&System_Predicate_GiftEntity__TypeInfo, v24);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BAB41C(&System_Text_StringBuilder_TypeInfo, v26);
    sub_1BAB41C(&Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__, v27);
    sub_1BAB41C(&EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo, v28);
    sub_1BAB41C(&StringLiteral_5627/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/, v29);
    sub_1BAB41C(&StringLiteral_20322/*"img_common_frame01"*/, v30);
    sub_1BAB41C(&StringLiteral_19912/*"harvestGrowthTitle"*/, v31);
    sub_1BAB41C(&StringLiteral_5626/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/, v32);
    sub_1BAB41C(&StringLiteral_5624/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, v33);
    sub_1BAB41C(&StringLiteral_5628/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, v34);
    sub_1BAB41C(&StringLiteral_1/*""*/, v35);
    sub_1BAB41C(&StringLiteral_5625/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, v36);
    byte_4AB72AD = 1;
  }
  memset(&v118, 0, sizeof(v118));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_97;
  v39 = (DataManager_o *)Instance;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
  v41 = DataManager__GetMasterData_object_(
          v39,
          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_GiftMaster___);
  Instance = DataManager__GetMasterData_object_(
               v39,
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
               (System_String_o *)StringLiteral_19912/*"harvestGrowthTitle"*/,
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
  v116 = this;
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
               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_97;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v43[12],
             (const MethodInfo_3163D90 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo___ctor__);
  if ( !v45 )
    goto LABEL_97;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v117,
    (System_Collections_Generic_List_object__o *)v45,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GiftEntity__GetEnumerator__);
  v47 = 0LL;
  v48 = 0LL;
  v118 = v117;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v118,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__MoveNext__) )
  {
    v49 = sub_1BAB668(EventInfoHarvestGrowthDialog___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    if ( !v49 )
      sub_1BAB678(v50, v51);
    current = (int32_t)v118.fields._current;
    *(_QWORD *)(v49 + 16) = v118.fields._current;
    v55 = v49 + 16;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v49 + 16), current, v52, v53);
    v56 = sub_1BAB668(EventInfoHarvestGrowthDialog_GiftInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v56, 0LL);
    v58 = *(_QWORD *)(v49 + 16);
    if ( !v58 )
      sub_1BAB678(0LL, v57);
    if ( !v56 )
      sub_1BAB678(v58, v57);
    *(_QWORD *)(v56 + 16) = *(_QWORD *)(v58 + 20);
    IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)v58, 0LL);
    *(_DWORD *)(v56 + 24) = IconImageId;
    if ( !*(_QWORD *)v55 )
      sub_1BAB678(IconImageId, v60);
    *(_DWORD *)(v56 + 28) = *(_DWORD *)(*(_QWORD *)v55 + 28LL);
    v61 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_GiftEntity__TypeInfo);
    System_Predicate_object____ctor(
      v61,
      (Il2CppObject *)v49,
      Method_EventInfoHarvestGrowthDialog___c__DisplayClass21_0__Open_b__0__,
      0LL);
    if ( !ListById )
      sub_1BAB678(v62, v63);
    v64 = System_Collections_Generic_List_object___Find(
            (System_Collections_Generic_List_object__o *)ListById,
            (System_Predicate_T__o *)v61,
            (const MethodInfo_354DF24 *)Method_System_Collections_Generic_List_GiftEntity__Find__);
    if ( !v64 )
      v47 = v56;
    if ( v64 )
      v48 = v56;
    if ( v64 )
    {
      if ( !*(_QWORD *)v55 )
        sub_1BAB678(v64, v65);
      if ( !v48 )
LABEL_104:
        sub_1BAB678(v64, v65);
      *(_DWORD *)(v48 + 32) = *(_DWORD *)(*(_QWORD *)v55 + 28LL) - HIDWORD(v64[1].monitor);
    }
    else
    {
      if ( !v47 )
        goto LABEL_104;
      *(_DWORD *)(v47 + 32) = 0;
      if ( *(_DWORD *)(v56 + 16) == 1 )
        *(_BYTE *)(v56 + 36) = 1;
      else
        *(_BYTE *)(v56 + 37) = 1;
    }
    if ( !v46 )
      sub_1BAB678(v64, v65);
    items = v46->fields._items;
    v69 = Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__Add__;
    ++v46->fields._version;
    if ( !items )
      sub_1BAB678(v64, v65);
    size = v46->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v46,
        (Il2CppObject *)v56,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = &items->obj.klass + size;
      v46->fields._size = size + 1;
      v71[4] = (Il2CppClass *)v56;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v71 + 4), v56, v66, v67);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v118,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GiftEntity__Dispose__);
  if ( !v46 )
LABEL_97:
    sub_1BAB678(Instance, v38);
  v74 = v46->fields._size;
  if ( v74 <= 0 )
  {
LABEL_41:
    ActionExtensions__Call(closeAction, 0LL);
    return;
  }
  v75 = v74 - 1;
  switch ( v74 )
  {
    case 1:
      p_countIconList01 = &v116->fields.countIconList01;
      p_countLabelList01 = &v116->fields.countLabelList01;
      goto LABEL_45;
    case 2:
      p_countIconList01 = &v116->fields.countIconList02;
      p_countLabelList01 = &v116->fields.countLabelList02;
      goto LABEL_45;
    case 3:
      p_countIconList01 = &v116->fields.countIconList03;
      p_countLabelList01 = &v116->fields.countLabelList03;
      goto LABEL_45;
    case 4:
      p_countIconList01 = &v116->fields.countIconList04;
      p_countLabelList01 = &v116->fields.countLabelList04;
LABEL_45:
      dispObjList = v116->fields.dispObjList;
      if ( !dispObjList )
        goto LABEL_97;
      if ( v75 >= dispObjList->max_length )
        goto LABEL_98;
      messageList = v116->fields.messageList;
      if ( !messageList )
        goto LABEL_97;
      if ( v75 >= messageList->max_length )
        goto LABEL_98;
      v80 = *p_countIconList01;
      v81 = messageList->m_Items[v75];
      v82 = dispObjList->m_Items[v75];
      v83 = *p_countLabelList01;
      v116->fields.messageLabel = v81;
      v112 = v82;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v116->fields.messageLabel, (int32_t)v81, v72, v73);
      if ( !v80 )
        goto LABEL_97;
      v84 = 0;
      v85 = 0LL;
      break;
    default:
      goto LABEL_41;
  }
  do
  {
    if ( v84 >= v80->max_length )
      goto LABEL_98;
    v86 = v84;
    v87 = v80->m_Items[v84];
    Instance = System_Collections_Generic_List_object___get_Item(
                 v46,
                 v84,
                 (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_EventInfoHarvestGrowthDialog_GiftInfo__get_Item__);
    if ( !v83 )
      goto LABEL_97;
    if ( (unsigned int)v86 >= v83->max_length )
LABEL_98:
      sub_1BAB680(Instance, v38);
    v88 = Instance;
    if ( !Instance || !v87 )
      goto LABEL_97;
    v89 = v83->m_Items[v86];
    if ( *((int *)Instance + 7) <= 1 )
      v90 = -1;
    else
      v90 = *((_DWORD *)Instance + 7);
    ItemIconComponent__SetGift_38524704(v87, *((_DWORD *)Instance + 4), *((_DWORD *)Instance + 5), v90, 0, 0LL);
    v91 = (System_String_o **)&StringLiteral_20322/*"img_common_frame01"*/;
    if ( v88[4] != 1 )
      v91 = (System_String_o **)&StringLiteral_1/*""*/;
    ItemIconComponent__setFrameSprite(v87, v88[4] == 1, *v91, 0LL);
    v92 = (System_Text_StringBuilder_o *)sub_1BAB668(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v92, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v93 = LocalizationManager__Get((System_String_o *)StringLiteral_5625/*"EVENT_HARVEST_GROWTH_ITEM_FORMAT"*/, 0LL);
    LODWORD(v117.fields._list) = v88[7];
    Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v94, v95, v96);
    if ( !v92 )
      goto LABEL_97;
    System_Text_StringBuilder__AppendFormat(v92, v93, (Il2CppObject *)Instance, 0LL);
    if ( !*((_BYTE *)v88 + 36) )
      v85 = v89;
    if ( *((_BYTE *)v88 + 36) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = &StringLiteral_5626/*"EVENT_HARVEST_GROWTH_ITEM_GRADEUP"*/;
LABEL_74:
      v98 = LocalizationManager__Get((System_String_o *)*v97, 0LL);
      v100 = Method_System_Array_Empty_object___;
      v101 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v101 )
      {
        sub_1BFD354(Method_System_Array_Empty_object___);
        v101 = v100[7];
      }
      v102 = *(_QWORD *)(v101 + 16);
      if ( (*(_BYTE *)(v102 + 309) & 1) == 0 )
        v102 = sub_1BFD2F8(v99);
      if ( !*(_DWORD *)(v102 + 224) )
        *(__n128 *)&v99 = j_il2cpp_runtime_class_init_0(v102);
      v103 = *(_QWORD *)(v100[7] + 16LL);
      if ( (*(_BYTE *)(v103 + 309) & 1) == 0 )
        v103 = sub_1BFD2F8(v99);
      System_Text_StringBuilder__AppendFormat_61216564(v92, v98, **(System_Object_array ***)(v103 + 184), 0LL);
      goto LABEL_83;
    }
    if ( *((_BYTE *)v88 + 37) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = &StringLiteral_5627/*"EVENT_HARVEST_GROWTH_ITEM_NEW"*/;
      goto LABEL_74;
    }
    v89 = v85;
    if ( (int)v88[8] >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_5624/*"EVENT_HARVEST_GROWTH_ITEM_ADD_FORMAT"*/, 0LL);
      LODWORD(v117.fields._list) = v88[8];
      v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v117, v105, v106, v107);
      System_Text_StringBuilder__AppendFormat(v92, v104, v108, 0LL);
      v89 = v85;
    }
LABEL_83:
    Instance = (void *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v92->klass->vtable._3_ToString.method)(
                         v92,
                         v92->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    if ( !v89 )
      goto LABEL_97;
    UILabel__set_text(v89, (System_String_o *)Instance, 0LL);
    v84 = v86 + 1;
  }
  while ( v74 != (_DWORD)v86 + 1 );
  EventInfoHarvestGrowthDialog__Init(v116, v38);
  Instance = v112;
  if ( !v112 )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(v112, 1, 0LL);
  BaseDialog__Open((BaseDialog_o *)v116, 0LL, 0, 0LL);
  Instance = v116->fields.titleLabel;
  v38 = (const MethodInfo *)value;
  if ( !Instance )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)Instance, value, 0LL);
  messageLabel = v116->fields.messageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5628/*"EVENT_HARVEST_GROWTH_MESSAGE"*/, 0LL);
  if ( !Entity )
    goto LABEL_97;
  Instance = System_String__Format((System_String_o *)Instance, (Il2CppObject *)Entity[2].klass, 0LL);
  if ( !messageLabel )
    goto LABEL_97;
  UILabel__set_text(messageLabel, (System_String_o *)Instance, 0LL);
  v116->fields.closeAction = closeAction;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v116->fields.closeAction, (int32_t)closeAction, v110, v111);
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
    sub_1BAB678(this, entity);
  return entity->fields.type == giftEntity->fields.type && entity->fields.objectId == giftEntity->fields.objectId;
}