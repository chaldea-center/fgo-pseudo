void GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4DFF62E & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4DFF62E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4DFF623 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    byte_4DFF623 = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  if ( !switchSkillInfo )
    goto LABEL_10;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_10;
  size = switchSkillUIList->fields._size;
  v6 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo
    || (((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
          switchSkillInfo,
          *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
          0.0),
        (switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget) == 0) )
  {
LABEL_10:
    sub_1CE6958(switchSkillInfo, method);
  }
  ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
    switchSkillInfo,
    *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
    0.0);
}


void GrandServantListItemDraw__ClearRestriction(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionBase; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4DFF62B & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    byte_4DFF62B = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(restrictionBase, 0, 0) )
  {
    restrictionMaskMessageText = this->fields.restrictionBase;
    if ( restrictionMaskMessageText )
    {
      UnityEngine_GameObject__SetActive(restrictionMaskMessageText, 0, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.restrictionMaskSprite, 0, 0);
      restrictionMaskMessageText = (UnityEngine_GameObject_o *)this->fields.restrictionMaskMessageText;
      if ( restrictionMaskMessageText )
      {
        UILabel__set_text((UILabel_o *)restrictionMaskMessageText, string_TypeInfo->static_fields->Empty, 0);
        restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(restrictionWarningBase, 0, 0) )
          return;
        restrictionMaskMessageText = this->fields.restrictionWarningBase;
        if ( restrictionMaskMessageText )
        {
          UnityEngine_GameObject__SetActive(restrictionMaskMessageText, 0, 0);
          restrictionMaskMessageText = (UnityEngine_GameObject_o *)this->fields.restrictionWarningIcon;
          if ( restrictionMaskMessageText )
          {
            FlashingIconComponent__Clear((FlashingIconComponent_o *)restrictionMaskMessageText, 0);
            restrictionMaskMessageText = (UnityEngine_GameObject_o *)this->fields.restrictionWarningMessageLabel;
            if ( restrictionMaskMessageText )
            {
              UILabel__set_text((UILabel_o *)restrictionMaskMessageText, string_TypeInfo->static_fields->Empty, 0);
              return;
            }
          }
        }
      }
    }
    sub_1CE6958(restrictionMaskMessageText, v4);
  }
}


void GrandServantListItemDraw__Initialize(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandServantListItemDraw_o *v3; // x19
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  __int64 v5; // x20
  int max_length; // w9
  UISprite_o *restrictionMaskSprite; // x19

  v3 = this;
  if ( (byte_4DFF622 & 1) == 0 )
  {
    sub_1CE6700(&AtlasManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1CE6700(&StringLiteral_20700/*"img_frames_mask_grand_servantlist"*/);
    byte_4DFF622 = 1;
  }
  equipDraws = v3->fields.equipDraws;
  if ( !equipDraws )
LABEL_9:
    sub_1CE6958(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1CE6960(this);
    this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v5];
    if ( this )
    {
      GrandServantListItemEquipDraw__Initialize((GrandServantListItemEquipDraw_o *)this, v5, v2);
      equipDraws = v3->fields.equipDraws;
      ++v5;
      if ( equipDraws )
        continue;
    }
    goto LABEL_9;
  }
  restrictionMaskSprite = v3->fields.restrictionMaskSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(restrictionMaskSprite, (System_String_o *)StringLiteral_20700/*"img_frames_mask_grand_servantlist"*/, 0);
}


void GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_1CE6958(0, method);
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0);
}


void GrandServantListItemDraw__SetEventUpOther(
        GrandServantListItemDraw_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v5; // x23
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x2
  struct System_Int32_array *eventIdList; // x8
  ServantEntity_o *ServantEntity; // x19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x26
  Il2CppObject *v12; // x25
  System_Collections_Generic_List_object__o *v13; // x24
  struct EventUpValSetupInfo_o *v14; // x8
  struct System_Int32_array *v15; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x23
  __int64 v18; // x20
  __int64 v19; // x22
  int32_t eventSvtPoint; // w19
  int32_t v21; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v23; // w19
  EventMargeItemUpValInfo_o *v24; // x20
  EventPersonalMargeUpValInfo_o *v25; // x19
  QuestPhaseMaster_o *v26; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  GrandServantListItemDraw_o *v34; // x29
  unsigned __int64 v35; // x28
  Il2CppObject *v36; // x20
  __int64 v37; // x19
  _DWORD *monitor; // x8
  int v39; // w8
  GrandServantListItemDraw_o *v40; // x22
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x8
  struct QuestRestrictionInfo_o *v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *attackLabel; // x22
  System_Func_int__bool__o *v50; // x25
  System_Func_TSource__bool__o *v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  struct QuestRestrictionInfo_o *v56; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v58; // x1
  int32_t v59; // w22
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  GrandServantListItemDraw___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x19
  System_Func_object__bool__o *_9__30_0; // x20
  ServantLeaderInfo_o *v64; // x26
  Il2CppObject *v65; // x23
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  GrandServantListItemDraw___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x19
  System_Func_object__int__o *_9__30_1; // x20
  ServantLeaderInfo_o *v77; // x27
  Il2CppObject *v78; // x23
  struct GrandServantListItemDraw___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Int32_array *v87; // x19
  EventUpValIconComponent_o *eventUpValIcon; // x20
  GrandServantListItemDraw_o *v89; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *v90; // [xsp+10h] [xbp-A0h]
  EventServantPointRankMaster_o *v91; // [xsp+18h] [xbp-98h]
  ServantLeaderInfo_o *v92; // [xsp+20h] [xbp-90h]
  struct System_Int32_array *v93; // [xsp+28h] [xbp-88h]
  Il2CppObject *v94; // [xsp+30h] [xbp-80h]
  Il2CppObject *v95; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+40h] [xbp-70h]
  bool isDuplicate; // [xsp+44h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  v5 = servantLeaderInfo;
  v89 = this;
  if ( (byte_4DFF627 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_int____79945504);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
    sub_1CE6700(&EventMargeItemUpValInfo_TypeInfo);
    sub_1CE6700(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1CE6700(&System_Func_int__bool__TypeInfo);
    sub_1CE6700(&System_Func_EquipTargetInfo__bool__TypeInfo);
    sub_1CE6700(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__);
    sub_1CE6700(&GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1CE6700(&GrandServantListItemDraw___c_TypeInfo);
    byte_4DFF627 = 1;
  }
  eventUpVallInfo = 0;
  isDuplicate = 0;
  if ( !questData )
  {
LABEL_63:
    if ( !v5 )
      goto LABEL_81;
    goto LABEL_64;
  }
  EventSetupInfo_k__BackingField = questData->fields._EventSetupInfo_k__BackingField;
  if ( !EventSetupInfo_k__BackingField )
    goto LABEL_62;
  eventIdList = EventSetupInfo_k__BackingField->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_81;
  if ( !eventIdList->max_length )
  {
LABEL_62:
    questData = 0;
    goto LABEL_63;
  }
  if ( !v5 )
    goto LABEL_81;
  ServantLeaderInfo__getEventUpVal(v5, &eventUpVallInfo, EventSetupInfo_k__BackingField, 0, 0);
  ServantEntity = ServantLeaderInfo__GetServantEntity(v5, -1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventDetailMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_FunctionMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  v13 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v14 = questData->fields._EventSetupInfo_k__BackingField;
  if ( !v14 )
    goto LABEL_81;
  v15 = v14->fields.eventIdList;
  v90 = ServantEntity;
  v91 = (EventServantPointRankMaster_o *)v10;
  v92 = v5;
  if ( !v15 )
    goto LABEL_81;
  max_length = v15->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    v94 = Master_object;
    v95 = v12;
    v93 = v15;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_82;
      if ( !Master_object )
        goto LABEL_81;
      eventId = v15->m_Items[v17];
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                             eventId,
                                             (const MethodInfo_34E925C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !this
        || (this = (GrandServantListItemDraw_o *)EventDetailEntity__HasFlag(
                                                   (EventDetailEntity_o *)this,
                                                   0x800000000LL,
                                                   0),
            ((unsigned __int8)this & 1) == 0) )
      {
        if ( !v91 )
          goto LABEL_81;
        this = (GrandServantListItemDraw_o *)EventServantPointRankMaster__IsEnableEvent(v91, eventId, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v90 )
            goto LABEL_81;
          v19 = *(_QWORD *)&v90->fields.id.fields.currentCryptoKey;
          v18 = *(_QWORD *)&v90->fields.id.fields.fakeValue;
          eventSvtPoint = v92->fields.eventSvtPoint;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v99.fields.currentCryptoKey = v19;
          *(_QWORD *)&v99.fields.fakeValue = v18;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v99, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v91, eventId, eventSvtPoint, v21, 0);
          v23 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
          v24 = (EventMargeItemUpValInfo_o *)sub_1CE694C(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_42871760(v24, eventId, 0);
          if ( !v24 )
            goto LABEL_81;
          EventMargeItemUpValInfo__SetServantPointInfo(v24, v92->fields.eventSvtPoint, v23, 1, 0);
          if ( !v13 )
            goto LABEL_81;
          System_Collections_Generic_List_object___Insert(
            v13,
            0,
            (Il2CppObject *)v24,
            (const MethodInfo_3906D18 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        }
        v25 = (EventPersonalMargeUpValInfo_o *)sub_1CE694C(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v25, eventId, v90, 0);
        this = (GrandServantListItemDraw_o *)eventUpVallInfo;
        if ( !eventUpVallInfo )
          goto LABEL_81;
        this = (GrandServantListItemDraw_o *)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
        v26 = (QuestPhaseMaster_o *)v95;
        if ( !v25 )
          goto LABEL_81;
        EventPersonalMargeUpValInfo__Add(v25, (EventDropItemUpValInfo_array *)this, 0);
        this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__IsEmpty(v25, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__GetList(v25, 0);
          if ( !this )
            goto LABEL_81;
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v34 = this;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_57:
      v15 = v93;
      Master_object = v94;
      ++v17;
      LODWORD(max_length) = v93->max_length;
      if ( (__int64)v17 >= (int)max_length )
        goto LABEL_58;
    }
    v35 = 0;
    while ( v35 < (unsigned int)m_CancellationTokenSource )
    {
      v36 = (Il2CppObject *)*((_QWORD *)&v34->fields.backgroundSprite + v35);
      if ( !questData->fields._QuestRestriction_k__BackingField )
        goto LABEL_85;
      v37 = sub_1CE694C(GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v37, 0);
      if ( !v36 )
        goto LABEL_81;
      monitor = v36[2].monitor;
      if ( !monitor )
        goto LABEL_81;
      if ( !v11 )
        goto LABEL_81;
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                                             monitor[4],
                                             (const MethodInfo_34E925C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_81;
      v39 = (int)this->fields.m_CancellationTokenSource;
      v40 = this;
      if ( v39 == 1 || v39 == 16 )
        goto LABEL_86;
      QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
      if ( !QuestRestriction_k__BackingField )
        goto LABEL_81;
      if ( eventId == QuestRestriction_k__BackingField->fields.eventId )
      {
LABEL_86:
        v42 = questData->fields._QuestRestriction_k__BackingField;
        if ( !v42 )
          goto LABEL_81;
        if ( !v26 )
          goto LABEL_81;
        this = (GrandServantListItemDraw_o *)QuestPhaseMaster__GetEntity(
                                               v26,
                                               v42->fields.questId,
                                               v42->fields.questPhase,
                                               0);
        if ( !v37 )
          goto LABEL_81;
        *(_QWORD *)(v37 + 16) = this;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v37 + 16), (int32_t)this, v43, v44, v45, v46, v47, v48);
        attackLabel = (System_Collections_Generic_IEnumerable_TSource__o *)v40->fields.attackLabel;
        if ( !attackLabel )
          goto LABEL_81;
        if ( !attackLabel[1].monitor
          || (v50 = (System_Func_int__bool__o *)sub_1CE694C(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v50,
                (Il2CppObject *)v37,
                Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__,
                0),
              v51 = (System_Func_TSource__bool__o *)v50,
              v26 = (QuestPhaseMaster_o *)v95,
              this = (GrandServantListItemDraw_o *)System_Linq_Enumerable__Any_int__52501540(
                                                     attackLabel,
                                                     v51,
                                                     (const MethodInfo_3211C24 *)Method_System_Linq_Enumerable_Any_int____79945504),
              ((unsigned __int8)this & 1) != 0) )
        {
LABEL_85:
          if ( !v13 )
            goto LABEL_81;
          items = v13->fields._items;
          v53 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_81;
          size = v13->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              v36,
              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v55[4] = (Il2CppClass *)v36;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)v36, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v34->fields.m_CancellationTokenSource;
      if ( (__int64)++v35 >= (int)m_CancellationTokenSource )
        goto LABEL_57;
    }
LABEL_82:
    sub_1CE6960(this);
  }
LABEL_58:
  v56 = questData->fields._QuestRestriction_k__BackingField;
  this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
LABEL_81:
    sub_1CE6958(this, servantLeaderInfo);
  v5 = v92;
  if ( v56 )
  {
    AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                             (PartyOrganizationUtility_o *)this,
                             &isDuplicate,
                             (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v13,
                             0);
    this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_81;
    v58 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
  }
  else
  {
    v58 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v13;
  }
  questData = (GrandServantListQuestData_o *)PartyOrganizationUtility__GetAddUpValInfos(
                                               (PartyOrganizationUtility_o *)this,
                                               v58,
                                               0);
LABEL_64:
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(v5, 0);
  if ( !this )
    goto LABEL_81;
  v59 = (int32_t)this->fields.m_CancellationTokenSource;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v5, 0);
  v61 = GrandServantListItemDraw___c_TypeInfo;
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v61 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__bool__o *)v61->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    v64 = v5;
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = GrandServantListItemDraw___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v61->static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EquipTargetInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v65, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_EquipTargetInfo__bool__o *)_9__30_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
      (int32_t)_9__30_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    v5 = v64;
  }
  v73 = System_Linq_Enumerable__Where_object_(
          v62,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
  v74 = GrandServantListItemDraw___c_TypeInfo;
  v75 = v73;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v74 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_1 = (System_Func_object__int__o *)v74->static_fields->__9__30_1;
  if ( !_9__30_1 )
  {
    v77 = v5;
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v74 = GrandServantListItemDraw___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v74->static_fields->__9;
    _9__30_1 = (System_Func_object__int__o *)sub_1CE694C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_1, v78, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__, 0);
    v79 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v79->__9__30_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__30_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v79->__9__30_1, (int32_t)_9__30_1, v80, v81, v82, v83, v84, v85);
    v5 = v77;
  }
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v75,
                                                               (System_Func_TSource__TResult__o *)_9__30_1,
                                                               (const MethodInfo_3239D60 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
  v87 = System_Linq_Enumerable__ToArray_int_(
          v86,
          (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  eventUpValIcon = v89->fields.eventUpValIcon;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetServantId(v5, -1, 0);
  if ( !eventUpValIcon )
    goto LABEL_81;
  EventUpValIconComponent__Set_42027148(
    eventUpValIcon,
    (EventMargeItemUpValInfo_array *)questData,
    v87,
    (int32_t)this,
    v59,
    0);
}


void GrandServantListItemDraw__SetRestrictionMaskMessage(
        GrandServantListItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *restrictionMaskMessageText; // x0

  if ( (byte_4DFF62C & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFF62C = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(restrictionBase, 0, 0) )
  {
    restrictionMaskMessageText = this->fields.restrictionBase;
    if ( !restrictionMaskMessageText
      || (UnityEngine_GameObject__SetActive(restrictionMaskMessageText, 1, 0),
          BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.restrictionMaskSprite, 1, 0),
          (restrictionMaskMessageText = (UnityEngine_GameObject_o *)this->fields.restrictionMaskMessageText) == 0) )
    {
      sub_1CE6958(restrictionMaskMessageText, v6);
    }
    UILabel__set_text((UILabel_o *)restrictionMaskMessageText, message, 0);
  }
}


void GrandServantListItemDraw__SetRestrictionWarningMessage(
        GrandServantListItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *restrictionWarningIcon; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x21

  if ( (byte_4DFF62D & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFF62D = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(restrictionBase, 0, 0) )
  {
    restrictionWarningIcon = this->fields.restrictionBase;
    if ( restrictionWarningIcon )
    {
      UnityEngine_GameObject__SetActive(restrictionWarningIcon, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.restrictionMaskSprite, 1, 0);
      restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(restrictionWarningBase, 0, 0) )
        return;
      restrictionWarningIcon = this->fields.restrictionWarningBase;
      if ( restrictionWarningIcon )
      {
        UnityEngine_GameObject__SetActive(restrictionWarningIcon, 1, 0);
        restrictionWarningIcon = (UnityEngine_GameObject_o *)this->fields.restrictionWarningIcon;
        if ( restrictionWarningIcon )
        {
          FlashingIconComponent__SetFast((FlashingIconComponent_o *)restrictionWarningIcon, 0);
          restrictionWarningIcon = (UnityEngine_GameObject_o *)this->fields.restrictionWarningMessageLabel;
          if ( restrictionWarningIcon )
          {
            UILabel__set_text((UILabel_o *)restrictionWarningIcon, message, 0);
            return;
          }
        }
      }
    }
    sub_1CE6958(restrictionWarningIcon, v6);
  }
}


void GrandServantListItemDraw__SetUpEventUp(
        GrandServantListItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantEntity_array *equipUserServantEntities,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v10; // x21
  EventUpValSetupInfo_o *v11; // x26
  System_Array_o *v12; // x0
  System_RuntimeFieldHandle_o v13; // x1
  System_Array_o *v14; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x19
  UserServantEntity_o *v17; // x25
  __int64 v18; // x23
  __int64 v19; // x24
  __int128 v20; // q0
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_List_object__o *v22; // x22
  struct System_Int32_array *eventIdList; // x20
  il2cpp_array_size_t v24; // x8
  int64_t v25; // x23
  unsigned __int64 v26; // x21
  int32_t v27; // w26
  __int128 v28; // q0
  System_Array_o *v29; // x25
  int64_t v30; // x27
  __int64 v31; // x28
  __int64 v32; // x29
  int32_t v33; // w4
  int32_t BuddyPoint; // w27
  __int64 v35; // x28
  __int64 v36; // x29
  int32_t v37; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v39; // w29
  EventMargeItemUpValInfo_o *v40; // x28
  EventPersonalMargeUpValInfo_o *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int v48; // w8
  int64_t v49; // x26
  unsigned int v50; // w27
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  EventMargeItemUpValInfo_array *v55; // x22
  __int64 v56; // x23
  __int64 v57; // x24
  int32_t v58; // w23
  int32_t v59; // w20
  GrandServantListItemDraw___c_c *v60; // x0
  System_Predicate_long__o *_9__29_0; // x24
  Il2CppObject *v62; // x25
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  System_Int64_array *All_long; // x0
  GrandServantListItemDraw___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_long__int__o *_9__29_1; // x24
  Il2CppObject *v74; // x25
  struct GrandServantListItemDraw___c_StaticFields *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  GrandServantListItemDraw_o *v83; // [xsp+10h] [xbp-F0h]
  UserServantEntity_o *v84; // [xsp+18h] [xbp-E8h]
  UserEventServantPointMaster_o *v85; // [xsp+28h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+70h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_4DFF626 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_FindAll_long___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_Select_long__int___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1CE6700(&EventMargeItemUpValInfo_TypeInfo);
    sub_1CE6700(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1CE6700(&EventUpValSetupInfo_TypeInfo);
    sub_1CE6700(&System_Func_long__int__TypeInfo);
    sub_1CE6700(&long___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&System_Predicate_long__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__);
    sub_1CE6700(&GrandServantListItemDraw___c_TypeInfo);
    byte_4DFF626 = 1;
  }
  entity = 0;
  eventUpVallInfo = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v83 = this;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_82;
  v84 = userServantEntity;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v10 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (EventUpValSetupInfo_o *)sub_1CE694C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42890508(v11, v10, 0, 0, 0, 0);
  v12 = (System_Array_o *)sub_1CE67A8(long___TypeInfo, 3);
  v13.fields.value = Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65822052(v12, v13, 0);
  if ( !equipUserServantEntities )
    goto LABEL_82;
  max_length = equipUserServantEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    while ( v16 < (unsigned int)max_length )
    {
      v17 = equipUserServantEntities->m_Items[v16];
      if ( v17 )
      {
        v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v19;
        *(_QWORD *)&v91.fields.fakeValue = v18;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v91, 0);
        if ( (Instance & 0x80000000) == 0 )
        {
          v20 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v88;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v87, 0);
          if ( !v14 )
            goto LABEL_82;
          if ( v16 >= LODWORD(v14[1].monitor) )
            break;
          *((_QWORD *)&v14[2].klass + v16) = Instance;
        }
      }
      LODWORD(max_length) = equipUserServantEntities->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_83:
    sub_1CE6960(Instance);
  }
LABEL_19:
  if ( !v84 )
    goto LABEL_82;
  UserServantEntity__getEventUpVal_44304984(v84, &eventUpVallInfo, v11, (System_Int64_array *)v14, 0, 1, 0, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v85 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (int64_t)UserServantEntity__GetServantEntity(v84, -1, 0);
  if ( !v11 )
    goto LABEL_82;
  eventIdList = v11->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_82;
  v24 = eventIdList->max_length;
  v25 = Instance;
  if ( (int)v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
        goto LABEL_83;
      if ( !Master_object )
        goto LABEL_82;
      v27 = eventIdList->m_Items[v26];
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v27, 0) )
      {
        v28 = *(_OWORD *)&v84->fields.userId.fields.fakeValue;
        *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v84->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v88.fields.fakeValue = v28;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v29 = v14;
        v86 = v88;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v86, 0);
        if ( !v25 )
          goto LABEL_82;
        v30 = Instance;
        v32 = *(_QWORD *)(v25 + 16);
        v31 = *(_QWORD *)(v25 + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v92.fields.currentCryptoKey = v32;
        *(_QWORD *)&v92.fields.fakeValue = v31;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v92, 0);
        Instance = (int64_t)v85;
        if ( !v85 )
          goto LABEL_82;
        if ( UserEventServantPointMaster__TryGetEntity(v85, &entity, v30, v27, v33, 0) )
        {
          Instance = (int64_t)entity;
          if ( !entity )
            goto LABEL_82;
          BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
        }
        else
        {
          BuddyPoint = 0;
        }
        v36 = *(_QWORD *)(v25 + 16);
        v35 = *(_QWORD *)(v25 + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v93.fields.currentCryptoKey = v36;
        *(_QWORD *)&v93.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v93, 0);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)Master_object,
                         v27,
                         BuddyPoint,
                         v37,
                         0);
        v39 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
        v40 = (EventMargeItemUpValInfo_o *)sub_1CE694C(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_42871760(v40, v27, 0);
        if ( !v40 )
          goto LABEL_82;
        EventMargeItemUpValInfo__SetServantPointInfo(v40, BuddyPoint, v39, 0, 0);
        if ( !v22 )
          goto LABEL_82;
        System_Collections_Generic_List_object___Insert(
          v22,
          0,
          (Il2CppObject *)v40,
          (const MethodInfo_3906D18 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        v14 = v29;
      }
      v41 = (EventPersonalMargeUpValInfo_o *)sub_1CE694C(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v41, v27, (ServantEntity_o *)v25, 0);
      Instance = (int64_t)eventUpVallInfo;
      if ( !eventUpVallInfo )
        goto LABEL_82;
      Instance = (int64_t)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
      if ( !v41 )
        goto LABEL_82;
      EventPersonalMargeUpValInfo__Add(v41, (EventDropItemUpValInfo_array *)Instance, 0);
      Instance = EventPersonalMargeUpValInfo__IsEmpty(v41, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v41, 0);
        if ( !Instance )
          goto LABEL_82;
        v48 = *(_DWORD *)(Instance + 24);
        v49 = Instance;
        if ( v48 >= 1 )
          break;
      }
LABEL_62:
      LODWORD(v24) = eventIdList->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_63;
    }
    v50 = 0;
    while ( v50 < v48 )
    {
      v8 = *(_QWORD *)(v49 + 8LL * (int)v50 + 32);
      if ( !v8 )
        goto LABEL_82;
      if ( *(_DWORD *)(v8 + 60) != 111 )
      {
        if ( !v22 )
          goto LABEL_82;
        items = v22->fields._items;
        v52 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_82;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v8,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v8;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v54 + 4), v8, v42, v43, v44, v45, v46, v47);
        }
      }
      v48 = *(_DWORD *)(v49 + 24);
      if ( (int)++v50 >= v48 )
        goto LABEL_62;
    }
    goto LABEL_83;
  }
LABEL_63:
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)PartyOrganizationUtility__GetAddUpValInfos(
                        (PartyOrganizationUtility_o *)Instance,
                        (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v22,
                        0);
  if ( !v25 )
    goto LABEL_82;
  v55 = (EventMargeItemUpValInfo_array *)Instance;
  v57 = *(_QWORD *)(v25 + 16);
  v56 = *(_QWORD *)(v25 + 24);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v94.fields.currentCryptoKey = v57;
  *(_QWORD *)&v94.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v94, 0);
  Instance = (int64_t)UserServantEntity__GetOverwriteStatus(v84, 0, 0);
  if ( !Instance )
    goto LABEL_82;
  v59 = *(_DWORD *)(Instance + 24);
  v60 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v60 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_0 = v60->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = GrandServantListItemDraw___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__29_0 = (System_Predicate_long__o *)sub_1CE694C(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__29_0, v62, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
      (int32_t)_9__29_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  All_long = System_Array__FindAll_long_(
               (System_Int64_array *)v14,
               (System_Predicate_T__o *)_9__29_0,
               (const MethodInfo_33099C8 *)Method_System_Array_FindAll_long___);
  v71 = GrandServantListItemDraw___c_TypeInfo;
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)All_long;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v71 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_1 = v71->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = GrandServantListItemDraw___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__29_1 = (System_Func_long__int__o *)sub_1CE694C(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__29_1, v74, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__, 0);
    v75 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v75->__9__29_1 = _9__29_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v75->__9__29_1, (int32_t)_9__29_1, v76, v77, v78, v79, v80, v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v72,
                                                               (System_Func_TSource__TResult__o *)_9__29_1,
                                                               (const MethodInfo_3238B38 *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                        v82,
                        (const MethodInfo_3243710 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v83->fields.eventUpValIcon )
LABEL_82:
    sub_1CE6958(Instance, v8);
  EventUpValIconComponent__Set_42027148(v83->fields.eventUpValIcon, v55, (System_Int32_array *)Instance, v58, v59, 0);
}


void GrandServantListItemDraw__Setup(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        int8_t displayKind,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  int v8; // w22
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4

  v8 = (unsigned __int8)displayKind;
  GrandServantListItemDraw__Clear(this, (const MethodInfo *)slotData);
  if ( v8 )
    GrandServantListItemDraw__SetupOther(this, slotData, questData, v8 == 1, v10);
  else
    GrandServantListItemDraw__SetupMine(this, slotData, v9);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemDraw__SetupAtk(
        GrandServantListItemDraw_o *this,
        int32_t atk,
        bool isAtkBoost,
        const MethodInfo *method)
{
  float v6; // s1 OVERLAPPED
  UIWidget_o *attackLabel; // x0
  float v8; // s2
  float v9; // s0
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = atk;
  if ( (byte_4DFF628 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_397/*"#,0"*/);
    byte_4DFF628 = 1;
  }
  v6 = 0.92157;
  attackLabel = (UIWidget_o *)this->fields.attackLabel;
  if ( isAtkBoost )
    v8 = 0.015686;
  else
    v8 = 1.0;
  if ( !isAtkBoost )
    v6 = 1.0;
  if ( !attackLabel
    || (v9 = 1.0,
        v10 = 1.0,
        UIWidget__set_color(attackLabel, *(UnityEngine_Color_o *)(&v6 - 1), 0),
        v11 = this->fields.attackLabel,
        attackLabel = (UIWidget_o *)System_Int32__ToString_66631324(
                                      (int32_t)&v12,
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0),
        !v11) )
  {
    sub_1CE6958(attackLabel, *(_QWORD *)&atk);
  }
  UILabel__set_text(v11, (System_String_o *)attackLabel, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemDraw__SetupHp(
        GrandServantListItemDraw_o *this,
        int32_t hp,
        bool isHpBoost,
        const MethodInfo *method)
{
  float v6; // s1 OVERLAPPED
  UIWidget_o *hpLabel; // x0
  float v8; // s2
  float v9; // s0
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = hp;
  if ( (byte_4DFF629 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_397/*"#,0"*/);
    byte_4DFF629 = 1;
  }
  v6 = 0.92157;
  hpLabel = (UIWidget_o *)this->fields.hpLabel;
  if ( isHpBoost )
    v8 = 0.015686;
  else
    v8 = 1.0;
  if ( !isHpBoost )
    v6 = 1.0;
  if ( !hpLabel
    || (v9 = 1.0,
        v10 = 1.0,
        UIWidget__set_color(hpLabel, *(UnityEngine_Color_o *)(&v6 - 1), 0),
        v11 = this->fields.hpLabel,
        hpLabel = (UIWidget_o *)System_Int32__ToString_66631324((int32_t)&v12, (System_String_o *)StringLiteral_397/*"#,0"*/, 0),
        !v11) )
  {
    sub_1CE6958(hpLabel, *(_QWORD *)&hp);
  }
  UILabel__set_text(v11, (System_String_o *)hpLabel, 0);
}


void GrandServantListItemDraw__SetupMine(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        const MethodInfo *method)
{
  GrandServantListSlotData_o *v3; // x20
  GrandServantListItemDraw_o *v4; // x19
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  GrandServantListItemDraw_o *EquipUserServantEntities_k__BackingField; // x22
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x23
  intptr_t m_CachedPtr; // x25
  intptr_t v9; // x24
  struct System_Threading_CancellationTokenSource_o *v10; // x26
  GrandServantListItemDraw_o *v11; // x27
  int32_t FrameType; // w28
  const MethodInfo *SvtClassId; // x0
  int32_t v14; // w29
  GrandServantAssetSetting_o *Instance; // x0
  const MethodInfo *v16; // x4
  GrandServantAssetSetting_o *v17; // x0
  const MethodInfo *v18; // x4
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v20; // w24
  UILabel_o *levelLabel; // x23
  int m_CachedPtr_high; // w26
  int32_t AtkBoostValue; // w28
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  GrandServantListItemDraw___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x29
  System_Func_object__int__o *_9__27_0; // x23
  Il2CppObject *v28; // x24
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w0
  const MethodInfo *v37; // x3
  int v38; // w29
  int32_t HpBoostValue; // w27
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  GrandServantListItemDraw___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x28
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v44; // x24
  struct GrandServantListItemDraw___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w0
  const MethodInfo *v53; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x23
  SkillInfo_array *v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  intptr_t v62; // x8
  _QWORD *v63; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v65; // x8
  AppendSkillListComponent_o *appendSkillList; // x23
  SkillInfo_array *v67; // x24
  struct System_Threading_CancellationTokenSource_o *v68; // x26
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  intptr_t v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  intptr_t v78; // x24
  intptr_t v79; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  ServantCommandCardListComponent_o *svtCommandCardList; // x27
  int32_t v82; // w23
  int32_t v83; // w24
  const MethodInfo *v84; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  unsigned int v86; // w23
  unsigned int max_length; // w9
  unsigned int v88; // w10
  const MethodInfo *v89; // x3
  intptr_t value; // [xsp+8h] [xbp-98h]
  struct System_Threading_CancellationTokenSource_o *value_8; // [xsp+10h] [xbp-90h]
  struct System_Threading_CancellationTokenSource_o *v92; // [xsp+18h] [xbp-88h]
  SkillInfo_array *v93; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  v3 = slotData;
  v4 = this;
  if ( (byte_4DFF624 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1CE6700(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetupMine_b__27_0__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetupMine_b__27_1__);
    sub_1CE6700(&GrandServantListItemDraw___c_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1CE6700(&UserServantEntity___TypeInfo);
    byte_4DFF624 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v93 = 0;
  if ( !v3 )
    goto LABEL_72;
  UserServantEntity_k__BackingField = v3->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = (GrandServantListItemDraw_o *)v3->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    this = (GrandServantListItemDraw_o *)sub_1CE67A8(UserServantEntity___TypeInfo, 0);
    EquipUserServantEntities_k__BackingField = this;
  }
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_72;
  this = (GrandServantListItemDraw_o *)UserServantEntity__get_BaseServantEntity(UserServantEntity_k__BackingField, 0);
  if ( !this )
    goto LABEL_72;
  m_CachedPtr = this->fields.m_CachedPtr;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  this = (GrandServantListItemDraw_o *)UserServantEntity__GetServantEntity(UserServantEntity_k__BackingField, -1, 0);
  if ( !this )
    goto LABEL_72;
  v9 = this->fields.m_CachedPtr;
  v10 = this->fields.m_CancellationTokenSource;
  this = (GrandServantListItemDraw_o *)UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  lv = UserServantEntity_k__BackingField->fields.lv;
  if ( !this )
    goto LABEL_72;
  v11 = this;
  FrameType = UserServantEntity__GetFrameType(UserServantEntity_k__BackingField, (int32_t)this->fields.frameSprite, 0);
  SvtClassId = (const MethodInfo *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0);
  v14 = (int)SvtClassId;
  Instance = GrandServantAssetSetting__GetInstance(SvtClassId);
  if ( Instance )
    GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
      Instance,
      v4->fields.backgroundSprite,
      FrameType,
      v14,
      v16);
  value_8 = m_CancellationTokenSource;
  v17 = GrandServantAssetSetting__GetInstance((const MethodInfo *)Instance);
  if ( v17 )
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v17, v4->fields.frameSprite, FrameType, v14, v18);
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v9;
  *(_QWORD *)&v97.fields.fakeValue = v10;
  value = v9;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v97, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__GetCardImageLimitCountStageSealAfter(
                                         UserServantEntity_k__BackingField,
                                         -1,
                                         0,
                                         0,
                                         0);
  if ( !servantNarrowTexture )
    goto LABEL_72;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, v20, (int32_t)this, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_72;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v14, FrameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_72;
  v92 = v10;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v4->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_72;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  m_CachedPtr_high = HIDWORD(v11->fields.m_CachedPtr);
  AtkBoostValue = UserServantEntity__get_AtkBoostValue(UserServantEntity_k__BackingField, 0);
  v24 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_31EDE30 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v25 = GrandServantListItemDraw___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v25 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__27_0 = (System_Func_object__int__o *)v25->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = GrandServantListItemDraw___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__27_0 = (System_Func_object__int__o *)sub_1CE694C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_0, v28, Method_GrandServantListItemDraw___c__SetupMine_b__27_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_UserServantEntity__int__o *)_9__27_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
      (int32_t)_9__27_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__Sum_object_(
          v26,
          (System_Func_TSource__int__o *)_9__27_0,
          (const MethodInfo_3241ECC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(v4, v36 + m_CachedPtr_high, AtkBoostValue > 0, v37);
  v38 = v11->fields.m_CachedPtr;
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0);
  v40 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_31EDE30 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v41 = GrandServantListItemDraw___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v41 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__27_1 = (System_Func_object__int__o *)v41->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = GrandServantListItemDraw___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__27_1 = (System_Func_object__int__o *)sub_1CE694C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_1, v44, Method_GrandServantListItemDraw___c__SetupMine_b__27_1__, 0);
    v45 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v45->__9__27_1 = (struct System_Func_UserServantEntity__int__o *)_9__27_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v45->__9__27_1, (int32_t)_9__27_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__Sum_object_(
          v42,
          (System_Func_TSource__int__o *)_9__27_1,
          (const MethodInfo_3241ECC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(v4, v52 + v38, HpBoostValue > 0, v53);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = v4->fields.skillListTreasureDevice;
  v55 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42427444(v55, 0);
  if ( !tdInfo )
    goto LABEL_72;
  if ( !skillListTreasureDevice )
    goto LABEL_72;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)this,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0,
    0);
  this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_72;
  slotData = (GrandServantListSlotData_o *)v4->fields.skillInfoUiWidget;
  v62 = this->fields.m_CachedPtr;
  v63 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v62 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v62 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = v62 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v65 + 32) = slotData;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v65 + 32), (int32_t)slotData, v56, v57, v58, v59, v60, v61);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_44331936(UserServantEntity_k__BackingField, &v93, 0);
  if ( v93 && v93->max_length )
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_72;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v4->fields.appendSkillList;
    v67 = v93;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42427444(v67, 0);
    v68 = v92;
    if ( !appendSkillList )
      goto LABEL_72;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_72;
    slotData = (GrandServantListSlotData_o *)v4->fields.appendSkillInfoUiWidget;
    v75 = this->fields.m_CachedPtr;
    v76 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v75 )
      goto LABEL_72;
    v77 = SLODWORD(this->fields.m_CancellationTokenSource);
    v78 = m_CachedPtr;
    if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = v75 + 8 * v77;
      LODWORD(this->fields.m_CancellationTokenSource) = v77 + 1;
      *(_QWORD *)(v79 + 32) = slotData;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v79 + 32), (int32_t)slotData, v69, v70, v71, v72, v73, v74);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_72;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v78 = m_CachedPtr;
    v68 = v92;
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_72;
  switchSkillInfo = v4->fields.switchSkillInfo;
  this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)this,
                                         (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_72;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v4->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.fakeValue = value_8;
  *(_QWORD *)&v98.fields.currentCryptoKey = v78;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v98, 0);
  *(_QWORD *)&v99.fields.currentCryptoKey = value;
  *(_QWORD *)&v99.fields.fakeValue = v68;
  v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v99, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_72;
  ServantCommandCardListComponent__Set_42224868(svtCommandCardList, v82, v83, (System_Int32_array *)this, 2, 0, 0);
  equipDraws = v4->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_72;
  v86 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v86 >= (int)max_length )
      break;
    if ( v86 >= max_length )
      goto LABEL_75;
    if ( EquipUserServantEntities_k__BackingField )
    {
      v88 = (unsigned int)EquipUserServantEntities_k__BackingField->fields.m_CancellationTokenSource;
      this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v86];
      if ( (int)v86 >= (int)v88 )
      {
        slotData = 0;
      }
      else
      {
        if ( v86 >= v88 )
LABEL_75:
          sub_1CE6960(this);
        slotData = (GrandServantListSlotData_o *)*((_QWORD *)&EquipUserServantEntities_k__BackingField->fields.backgroundSprite
                                                 + (int)v86);
      }
      if ( this )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)this,
          (UserServantEntity_o *)slotData,
          v86 == 1,
          v3->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v84);
        equipDraws = v4->fields.equipDraws;
        ++v86;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_72;
  }
  this = (GrandServantListItemDraw_o *)v4->fields.pushIcon;
  if ( !this )
LABEL_72:
    sub_1CE6958(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetUpEventUp(
    v4,
    UserServantEntity_k__BackingField,
    (UserServantEntity_array *)EquipUserServantEntities_k__BackingField,
    v89);
}


void GrandServantListItemDraw__SetupOther(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        GrandServantListQuestData_o *questData,
        bool isSelectable,
        const MethodInfo *method)
{
  GrandServantListSlotData_o *v6; // x20
  GrandServantListItemDraw_o *v7; // x21
  ServantLeaderInfo_o *ServantLeaderInfo_k__BackingField; // x23
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x19
  intptr_t m_CachedPtr; // x27
  intptr_t v12; // x28
  GrandServantListItemDraw_o *v13; // x29
  int32_t FrameType; // w22
  const MethodInfo *SvtClassId; // x0
  int32_t v16; // w25
  GrandServantAssetSetting_o *Instance; // x0
  const MethodInfo *v18; // x4
  GrandServantAssetSetting_o *v19; // x0
  const MethodInfo *v20; // x4
  UINarrowFigureTexture_o *servantNarrowTexture; // x26
  int32_t v22; // w19
  UILabel_o *levelLabel; // x22
  int m_CachedPtr_high; // w28
  int32_t AtkBoostValue; // w22
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  GrandServantListItemDraw___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x25
  System_Func_object__int__o *_9__28_0; // x26
  Il2CppObject *v30; // x19
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w0
  const MethodInfo *v39; // x3
  int v40; // w29
  int32_t HpBoostValue; // w22
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  GrandServantListItemDraw___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x25
  System_Func_object__int__o *_9__28_1; // x26
  Il2CppObject *v46; // x19
  struct GrandServantListItemDraw___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w0
  const MethodInfo *v55; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x22
  SkillInfo_array *v57; // x19
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  intptr_t v64; // x8
  _QWORD *v65; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v67; // x8
  AppendSkillListComponent_o *appendSkillList; // x22
  SkillInfo_array *v69; // x19
  intptr_t v70; // x19
  intptr_t v71; // x26
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  intptr_t v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  intptr_t v81; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  ServantCommandCardListComponent_o *svtCommandCardList; // x22
  int32_t v84; // w0
  int32_t v85; // w25
  int32_t v86; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v88; // w27
  const MethodInfo *v89; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  int32_t v91; // w22
  int32_t max_length; // w9
  GrandServantListItemEquipDraw_o *v93; // x25
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x3
  GrandServantListQuestData_o *questDataa; // [xsp+8h] [xbp-A8h]
  struct System_Threading_CancellationTokenSource_o *v98; // [xsp+10h] [xbp-A0h]
  intptr_t v99; // [xsp+18h] [xbp-98h]
  struct System_Threading_CancellationTokenSource_o *value; // [xsp+28h] [xbp-88h]
  SkillInfo_array *v101; // [xsp+30h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+40h] [xbp-70h] BYREF
  int32_t lv; // [xsp+4Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  v6 = slotData;
  v7 = this;
  if ( (byte_4DFF625 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_1CE6700(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetupOther_b__28_0__);
    sub_1CE6700(&Method_GrandServantListItemDraw___c__SetupOther_b__28_1__);
    this = (GrandServantListItemDraw_o *)sub_1CE6700(&GrandServantListItemDraw___c_TypeInfo);
    byte_4DFF625 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v101 = 0;
  if ( !v6 )
    goto LABEL_69;
  ServantLeaderInfo_k__BackingField = v6->fields._ServantLeaderInfo_k__BackingField;
  if ( !ServantLeaderInfo_k__BackingField )
    goto LABEL_69;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v6->fields._ServantLeaderInfo_k__BackingField, 0);
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__get_BaseServantEntity(ServantLeaderInfo_k__BackingField, 0);
  if ( !this )
    goto LABEL_69;
  m_CachedPtr = this->fields.m_CachedPtr;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetServantEntity(ServantLeaderInfo_k__BackingField, -1, 0);
  if ( !this )
    goto LABEL_69;
  v12 = this->fields.m_CachedPtr;
  questDataa = questData;
  value = this->fields.m_CancellationTokenSource;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo_k__BackingField, 0);
  lv = ServantLeaderInfo_k__BackingField->fields.lv;
  if ( !this )
    goto LABEL_69;
  v13 = this;
  FrameType = ServantLeaderInfo__GetFrameType(ServantLeaderInfo_k__BackingField, (int32_t)this->fields.frameSprite, 0);
  SvtClassId = (const MethodInfo *)ServantLeaderInfo__GetSvtClassId(ServantLeaderInfo_k__BackingField, 0, 0, 0);
  v16 = (int)SvtClassId;
  Instance = GrandServantAssetSetting__GetInstance(SvtClassId);
  if ( Instance )
    GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
      Instance,
      v7->fields.backgroundSprite,
      FrameType,
      v16,
      v18);
  v19 = GrandServantAssetSetting__GetInstance((const MethodInfo *)Instance);
  if ( v19 )
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v19, v7->fields.frameSprite, FrameType, v16, v20);
  servantNarrowTexture = v7->fields.servantNarrowTexture;
  v98 = m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.fakeValue = value;
  *(_QWORD *)&v105.fields.currentCryptoKey = v12;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v105, 0);
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetCardImageLimitCountStageSealAfter(
                                         ServantLeaderInfo_k__BackingField,
                                         0);
  if ( !servantNarrowTexture )
    goto LABEL_69;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, v22, (int32_t)this, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_69;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v16, FrameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_69;
  v99 = v12;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v7->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_69;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  m_CachedPtr_high = HIDWORD(v13->fields.m_CachedPtr);
  AtkBoostValue = ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v26 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipTargetInfoList,
          (const MethodInfo_31EDE30 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v27 = GrandServantListItemDraw___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v27 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v27->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = GrandServantListItemDraw___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1CE694C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v30, Method_GrandServantListItemDraw___c__SetupOther_b__28_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Sum_object_(
          v28,
          (System_Func_TSource__int__o *)_9__28_0,
          (const MethodInfo_3241ECC *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupAtk(v7, v38 + m_CachedPtr_high, AtkBoostValue > 0, v39);
  v40 = v13->fields.m_CachedPtr;
  HpBoostValue = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v42 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipTargetInfoList,
          (const MethodInfo_31EDE30 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v43 = GrandServantListItemDraw___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v43 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v43->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = GrandServantListItemDraw___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1CE694C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v46, Method_GrandServantListItemDraw___c__SetupOther_b__28_1__, 0);
    v47 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v47->__9__28_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v47->__9__28_1, (int32_t)_9__28_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = System_Linq_Enumerable__Sum_object_(
          v44,
          (System_Func_TSource__int__o *)_9__28_1,
          (const MethodInfo_3241ECC *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupHp(v7, v54 + v40, HpBoostValue > 0, v55);
  ServantLeaderInfo__getSkillInfo(ServantLeaderInfo_k__BackingField, &skillInfoList, -1, 0);
  ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfo_k__BackingField, &tdInfo, -1, 0);
  skillListTreasureDevice = v7->fields.skillListTreasureDevice;
  v57 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42427444(v57, 0);
  if ( !tdInfo )
    goto LABEL_69;
  if ( !skillListTreasureDevice )
    goto LABEL_69;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)this,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0,
    0);
  this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_69;
  slotData = (GrandServantListSlotData_o *)v7->fields.skillInfoUiWidget;
  v64 = this->fields.m_CachedPtr;
  v65 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v64 )
    goto LABEL_69;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v64 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = v64 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v67 + 32) = slotData;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v67 + 32), (int32_t)slotData, v58, v59, v60, v61, v62, v63);
  }
  ServantLeaderInfo__GetAppendPassiveSkillInfo_44711028(ServantLeaderInfo_k__BackingField, &v101, 0, 0);
  if ( v101 && v101->max_length )
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_69;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v7->fields.appendSkillList;
    v69 = v101;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42427444(v69, 0);
    v71 = v99;
    v70 = m_CachedPtr;
    if ( !appendSkillList )
      goto LABEL_69;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_69;
    slotData = (GrandServantListSlotData_o *)v7->fields.appendSkillInfoUiWidget;
    v78 = this->fields.m_CachedPtr;
    v79 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v78 )
      goto LABEL_69;
    v80 = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
    }
    else
    {
      v81 = v78 + 8 * v80;
      LODWORD(this->fields.m_CancellationTokenSource) = v80 + 1;
      *(_QWORD *)(v81 + 32) = slotData;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v81 + 32), (int32_t)slotData, v72, v73, v74, v75, v76, v77);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_69;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v71 = v99;
    v70 = m_CachedPtr;
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_69;
  switchSkillInfo = v7->fields.switchSkillInfo;
  this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)this,
                                         (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_69;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v7->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v106.fields.fakeValue = v98;
  *(_QWORD *)&v106.fields.currentCryptoKey = v70;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v106, 0);
  *(_QWORD *)&v107.fields.fakeValue = value;
  v85 = v84;
  *(_QWORD *)&v107.fields.currentCryptoKey = v71;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v107, 0);
  commandCardParam = ServantLeaderInfo_k__BackingField->fields.commandCardParam;
  v88 = v86;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_69;
  ServantCommandCardListComponent__Set_42224604(
    svtCommandCardList,
    v85,
    v88,
    commandCardParam,
    (System_Int32_array *)this,
    2,
    0,
    0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_k__BackingField, 0);
  equipDraws = v7->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_69;
  v91 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( v91 >= max_length )
      break;
    if ( v91 >= (unsigned int)max_length )
      sub_1CE6960(this);
    if ( EquipTargetInfoList )
    {
      v93 = equipDraws->m_Items[v91];
      if ( v91 >= EquipTargetInfoList->fields._size )
      {
        slotData = 0;
      }
      else
      {
        this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)EquipTargetInfoList,
                                               v91,
                                               (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        slotData = (GrandServantListSlotData_o *)this;
      }
      if ( v93 )
      {
        GrandServantListItemEquipDraw__Setup_33883128(
          v93,
          (EquipTargetInfo_o *)slotData,
          v91 == 1,
          v6->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v89);
        equipDraws = v7->fields.equipDraws;
        ++v91;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_69;
  }
  this = (GrandServantListItemDraw_o *)v7->fields.pushIcon;
  if ( !this )
LABEL_69:
    sub_1CE6958(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetEventUpOther(v7, ServantLeaderInfo_k__BackingField, questDataa, v94);
  if ( questDataa && isSelectable )
    GrandServantListItemDraw__SetupRestriction(
      v7,
      v6->fields._ServantLeaderInfo_k__BackingField,
      questDataa->fields._QuestRestriction_k__BackingField,
      v95);
}


void GrandServantListItemDraw__SetupRestriction(
        GrandServantListItemDraw_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        QuestRestrictionInfo_o *questRestriction,
        const MethodInfo *method)
{
  bool v7; // w24
  _BOOL4 UniqueSvtRestriction; // w22
  _BOOL4 IsUniqueIndividualityRestriction; // w23
  bool IsSlotRestriction; // w0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  bool v13; // w25
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int klass; // w26
  char v17; // w27
  int32_t klass_high; // w24
  int32_t ServantId; // w0
  int32_t limitCount; // w25
  int32_t v21; // w26
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  bool IsRestrictionServantIndividuality; // w0
  System_String_o *v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_4DFF62A & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1CE6700(&StringLiteral_6504/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    byte_4DFF62A = 1;
  }
  GrandServantListItemDraw__ClearRestriction(this, (const MethodInfo *)servantLeaderInfo);
  if ( servantLeaderInfo && questRestriction )
  {
    v7 = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, questRestriction, 0);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(servantLeaderInfo, questRestriction, 0);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         questRestriction,
                                         0,
                                         0);
    IsSlotRestriction = ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, questRestriction, 0);
    if ( IsSlotRestriction )
      goto LABEL_25;
    v13 = IsSlotRestriction;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (klass = (int)Instance[5].klass,
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_1CE6958(Instance, v15);
    }
    v17 = v7 && !v13;
    if ( klass >= 1
      && (klass_high = HIDWORD(Instance[5].klass),
          v17 &= klass > 0,
          QuestRestrictionInfo__IsMyServantOrNpcRestriction_44572848(questRestriction, klass_high, 0)) )
    {
      ServantId = ServantLeaderInfo__GetServantId(servantLeaderInfo, -1, 0);
      limitCount = servantLeaderInfo->fields.limitCount;
      v21 = ServantId;
      DispLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                                servantLeaderInfo,
                                                -1,
                                                0);
      IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                            questRestriction,
                                            v21,
                                            limitCount,
                                            DispLimitCountStageSealAfterIndexZero,
                                            klass_high,
                                            1,
                                            0);
    }
    else
    {
      IsRestrictionServantIndividuality = 0;
    }
    if ( (v17 & 1) != 0 || IsRestrictionServantIndividuality )
    {
LABEL_25:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      GrandServantListItemDraw__SetRestrictionMaskMessage(this, v11, v12);
    }
    else if ( UniqueSvtRestriction || IsUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
      GrandServantListItemDraw__SetRestrictionWarningMessage(this, v24, v25);
    }
  }
}


void GrandServantListItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4DFF62F & 1) == 0 )
  {
    sub_1CE6700(&GrandServantListItemDraw___c_TypeInfo);
    byte_4DFF62F = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v1;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)GrandServantListItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantListItemDraw___c___ctor(GrandServantListItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantListItemDraw___c___SetEventUpOther_b__30_0(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4DFF630 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF630 = 1;
  }
  if ( !x )
    sub_1CE6958(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v7, 0) > 0;
}


int32_t GrandServantListItemDraw___c___SetEventUpOther_b__30_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4DFF631 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4DFF631 = 1;
  }
  if ( !x )
    sub_1CE6958(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v7, 0);
}


bool GrandServantListItemDraw___c___SetUpEventUp_b__29_0(
        GrandServantListItemDraw___c_o *this,
        int64_t e,
        const MethodInfo *method)
{
  return e >= 0;
}


int32_t GrandServantListItemDraw___c___SetUpEventUp_b__29_1(
        GrandServantListItemDraw___c_o *this,
        int64_t e,
        const MethodInfo *method)
{
  return e;
}


int32_t GrandServantListItemDraw___c___SetupMine_b__27_0(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupMine_b__27_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.hp;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_0(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1CE6958(this, 0);
  return e->fields.hp;
}


void GrandServantListItemDraw___c__DisplayClass30_0___ctor(
        GrandServantListItemDraw___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool GrandServantListItemDraw___c__DisplayClass30_0___SetEventUpOther_b__2(
        GrandServantListItemDraw___c__DisplayClass30_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  GrandServantListItemDraw___c__DisplayClass30_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4DFF632 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c__DisplayClass30_0_o *)sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4DFF632 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1CE6958(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
}