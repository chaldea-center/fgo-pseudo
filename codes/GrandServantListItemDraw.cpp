void GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B32D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_596B32D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_596B322 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    byte_596B322 = 1;
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
    || (((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, double))switchSkillInfo->klass[1]._1.byval_arg.data)(
          switchSkillInfo,
          *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
          0.0),
        (switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget) == 0) )
  {
LABEL_10:
    sub_2213CDC(switchSkillInfo, method);
  }
  ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, double))switchSkillInfo->klass[1]._1.byval_arg.data)(
    switchSkillInfo,
    *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
    0.0);
}


void GrandServantListItemDraw__ClearRestriction(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *restrictionBase; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *restrictionMaskMessageText; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_596B32A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B32A = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
        UILabel__set_text((UILabel_o *)restrictionMaskMessageText, **(System_String_o ***)(qword_5984390 + 184), 0);
        restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
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
              UILabel__set_text(
                (UILabel_o *)restrictionMaskMessageText,
                **(System_String_o ***)(qword_5984390 + 184),
                0);
              return;
            }
          }
        }
      }
    }
    sub_2213CDC(restrictionMaskMessageText, v5);
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
  if ( (byte_596B321 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_2213A60(&StringLiteral_21388/*"img_frames_mask_grand_servantlist"*/);
    byte_596B321 = 1;
  }
  equipDraws = v3->fields.equipDraws;
  if ( !equipDraws )
LABEL_9:
    sub_2213CDC(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_2213CE4(this);
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
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetGrandServantListImage(restrictionMaskSprite, (System_String_o *)StringLiteral_21388/*"img_frames_mask_grand_servantlist"*/, 0);
}


void GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_2213CDC(0, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEntity_o *ServantEntity; // x19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x26
  Il2CppObject *v14; // x25
  System_Collections_Generic_List_object__o *v15; // x24
  struct EventUpValSetupInfo_o *v16; // x8
  struct System_Int32_array *v17; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x23
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x22
  int32_t eventSvtPoint; // w19
  int32_t v24; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v26; // w20
  EventMargeItemUpValInfo_o *v27; // x19
  EventPersonalMargeUpValInfo_o *v28; // x19
  QuestPhaseMaster_o *v29; // x25
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  GrandServantListItemDraw_o *v37; // x29
  unsigned __int64 v38; // x28
  Il2CppObject *v39; // x20
  __int64 v40; // x19
  _DWORD *monitor; // x8
  int v42; // w8
  GrandServantListItemDraw_o *v43; // x22
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x8
  struct QuestRestrictionInfo_o *v45; // x8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_TSource__o *attackLabel; // x22
  System_Func_int__bool__o *v53; // x25
  System_Func_TSource__bool__o *v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  struct QuestRestrictionInfo_o *v59; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v61; // x1
  int32_t v62; // w22
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  GrandServantListItemDraw___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x19
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__30_0; // x20
  ServantLeaderInfo_o *v70; // x26
  Il2CppObject *v71; // x23
  struct GrandServantListItemDraw___c_StaticFields *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  GrandServantListItemDraw___c_c *v82; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x19
  struct GrandServantListItemDraw___c_StaticFields *v84; // x9
  System_Func_object__int__o *_9__30_1; // x20
  ServantLeaderInfo_o *v86; // x27
  Il2CppObject *v87; // x23
  struct GrandServantListItemDraw___c_StaticFields *v88; // x0
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Int32_array *v96; // x19
  EventUpValIconComponent_o *eventUpValIcon; // x20
  GrandServantListItemDraw_o *v98; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *v99; // [xsp+10h] [xbp-A0h]
  EventServantPointRankMaster_o *v100; // [xsp+18h] [xbp-98h]
  ServantLeaderInfo_o *v101; // [xsp+20h] [xbp-90h]
  struct System_Int32_array *v102; // [xsp+28h] [xbp-88h]
  Il2CppObject *v103; // [xsp+30h] [xbp-80h]
  Il2CppObject *v104; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+40h] [xbp-70h]
  bool isDuplicate; // [xsp+44h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v5 = servantLeaderInfo;
  v98 = this;
  if ( (byte_596B326 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_int____91750072);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&System_Func_EquipTargetInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__);
    sub_2213A60(&GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_2213A60(&GrandServantListItemDraw___c_TypeInfo);
    byte_596B326 = 1;
  }
  eventUpVallInfo = 0;
  isDuplicate = 0;
  if ( !questData )
  {
LABEL_63:
    if ( !v5 )
      goto LABEL_82;
    goto LABEL_64;
  }
  EventSetupInfo_k__BackingField = questData->fields._EventSetupInfo_k__BackingField;
  if ( !EventSetupInfo_k__BackingField )
    goto LABEL_62;
  eventIdList = EventSetupInfo_k__BackingField->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_82;
  if ( !eventIdList->max_length )
  {
LABEL_62:
    questData = 0;
    goto LABEL_63;
  }
  if ( !v5 )
    goto LABEL_82;
  ServantLeaderInfo__getEventUpVal(v5, &eventUpVallInfo, EventSetupInfo_k__BackingField, 0, 0);
  ServantEntity = ServantLeaderInfo__GetServantEntity(v5, -1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v16 = questData->fields._EventSetupInfo_k__BackingField;
  if ( !v16
    || (v17 = v16->fields.eventIdList, v99 = ServantEntity, v100 = (EventServantPointRankMaster_o *)v12, v101 = v5, !v17) )
  {
LABEL_82:
    sub_2213CDC(this, servantLeaderInfo);
  }
  max_length = v17->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    v103 = Master_object;
    v104 = v14;
    v102 = v17;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        goto LABEL_83;
      if ( !Master_object )
        goto LABEL_82;
      eventId = v17->m_Items[v19];
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                             eventId,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !this
        || (this = (GrandServantListItemDraw_o *)EventDetailEntity__HasFlag(
                                                   (EventDetailEntity_o *)this,
                                                   0x800000000LL,
                                                   0),
            ((unsigned __int8)this & 1) == 0) )
      {
        if ( !v100 )
          goto LABEL_82;
        this = (GrandServantListItemDraw_o *)EventServantPointRankMaster__IsEnableEvent(v100, eventId, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v99 )
            goto LABEL_82;
          v21 = *(_QWORD *)&v99->fields.id.fields.currentCryptoKey;
          v22 = *(_QWORD *)&v99->fields.id.fields.fakeValue;
          eventSvtPoint = v101->fields.eventSvtPoint;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
              servantLeaderInfo,
              v20);
          *(_QWORD *)&v108.fields.currentCryptoKey = v21;
          *(_QWORD *)&v108.fields.fakeValue = v22;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v100, eventId, eventSvtPoint, v24, 0);
          v26 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
          v27 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_48723060(v27, eventId, 0);
          if ( !v27 )
            goto LABEL_82;
          EventMargeItemUpValInfo__SetServantPointInfo(v27, v101->fields.eventSvtPoint, v26, 1, 0);
          if ( !v15 )
            goto LABEL_82;
          System_Collections_Generic_List_object___Insert(
            v15,
            0,
            (Il2CppObject *)v27,
            (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        }
        v28 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v28, eventId, v99, 0);
        this = (GrandServantListItemDraw_o *)eventUpVallInfo;
        if ( !eventUpVallInfo )
          goto LABEL_82;
        this = (GrandServantListItemDraw_o *)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
        v29 = (QuestPhaseMaster_o *)v104;
        if ( !v28 )
          goto LABEL_82;
        EventPersonalMargeUpValInfo__Add(v28, (EventDropItemUpValInfo_array *)this, 0);
        this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__IsEmpty(v28, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__GetList(v28, 0);
          if ( !this )
            goto LABEL_82;
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v37 = this;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_57:
      v17 = v102;
      Master_object = v103;
      ++v19;
      LODWORD(max_length) = v102->max_length;
      if ( (__int64)v19 >= (int)max_length )
        goto LABEL_58;
    }
    v38 = 0;
    while ( v38 < (unsigned int)m_CancellationTokenSource )
    {
      v39 = (Il2CppObject *)*((_QWORD *)&v37->fields.backgroundSprite + v38);
      if ( !questData->fields._QuestRestriction_k__BackingField )
        goto LABEL_86;
      v40 = sub_2213CCC(GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0);
      if ( !v39 )
        goto LABEL_82;
      monitor = v39[2].monitor;
      if ( !monitor )
        goto LABEL_82;
      if ( !v13 )
        goto LABEL_82;
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                             monitor[4],
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_82;
      v42 = (int)this->fields.m_CancellationTokenSource;
      v43 = this;
      if ( v42 == 1 || v42 == 16 )
        goto LABEL_87;
      QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
      if ( !QuestRestriction_k__BackingField )
        goto LABEL_82;
      if ( eventId == QuestRestriction_k__BackingField->fields.eventId )
      {
LABEL_87:
        v45 = questData->fields._QuestRestriction_k__BackingField;
        if ( !v45 )
          goto LABEL_82;
        if ( !v29 )
          goto LABEL_82;
        this = (GrandServantListItemDraw_o *)QuestPhaseMaster__GetEntity(
                                               v29,
                                               v45->fields.questId,
                                               v45->fields.questPhase,
                                               0);
        if ( !v40 )
          goto LABEL_82;
        *(_QWORD *)(v40 + 16) = this;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 16), (int32_t)this, v46, v47, v48, v49, v50, v51);
        attackLabel = (System_Collections_Generic_IEnumerable_TSource__o *)v43->fields.attackLabel;
        if ( !attackLabel )
          goto LABEL_82;
        if ( !attackLabel[1].monitor
          || (v53 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v53,
                (Il2CppObject *)v40,
                Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__,
                0),
              v54 = (System_Func_TSource__bool__o *)v53,
              v29 = (QuestPhaseMaster_o *)v104,
              this = (GrandServantListItemDraw_o *)System_Linq_Enumerable__Any_int__59144800(
                                                     attackLabel,
                                                     v54,
                                                     (const MethodInfo_3867A60 *)Method_System_Linq_Enumerable_Any_int____91750072),
              ((unsigned __int8)this & 1) != 0) )
        {
LABEL_86:
          if ( !v15 )
            goto LABEL_82;
          items = v15->fields._items;
          v56 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_82;
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v39,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v39;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v58 + 4), (int32_t)v39, v30, v31, v32, v33, v34, v35);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v37->fields.m_CancellationTokenSource;
      if ( (__int64)++v38 >= (int)m_CancellationTokenSource )
        goto LABEL_57;
    }
LABEL_83:
    sub_2213CE4(this);
  }
LABEL_58:
  v59 = questData->fields._QuestRestriction_k__BackingField;
  this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( v59 )
  {
    v5 = v101;
    if ( !this )
      goto LABEL_82;
    AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                             (PartyOrganizationUtility_o *)this,
                             &isDuplicate,
                             (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v15,
                             0);
    this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_82;
    v61 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
  }
  else
  {
    v5 = v101;
    if ( !this )
      goto LABEL_82;
    v61 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v15;
  }
  questData = (GrandServantListQuestData_o *)PartyOrganizationUtility__GetAddUpValInfos(
                                               (PartyOrganizationUtility_o *)this,
                                               v61,
                                               0);
LABEL_64:
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(v5, 0);
  if ( !this )
    goto LABEL_82;
  v62 = (int32_t)this->fields.m_CancellationTokenSource;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v5, 0);
  v66 = GrandServantListItemDraw___c_TypeInfo;
  v67 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v64, v65);
    v66 = GrandServantListItemDraw___c_TypeInfo;
  }
  static_fields = v66->static_fields;
  _9__30_0 = (System_Func_object__bool__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    v70 = v5;
    if ( !*(&v66->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v66, v64, v65);
      static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EquipTargetInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v71, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__, 0);
    v72 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v72->__9__30_0 = (struct System_Func_EquipTargetInfo__bool__o *)_9__30_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v72->__9__30_0, (int32_t)_9__30_0, v73, v74, v75, v76, v77, v78);
    v5 = v70;
  }
  v79 = System_Linq_Enumerable__Where_object_(
          v67,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
  v82 = GrandServantListItemDraw___c_TypeInfo;
  v83 = v79;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v80, v81);
    v82 = GrandServantListItemDraw___c_TypeInfo;
  }
  v84 = v82->static_fields;
  _9__30_1 = (System_Func_object__int__o *)v84->__9__30_1;
  if ( !_9__30_1 )
  {
    v86 = v5;
    if ( !*(&v82->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v82, v80, v81);
      v84 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v87 = (Il2CppObject *)v84->__9;
    _9__30_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_1, v87, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__, 0);
    v88 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v88->__9__30_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__30_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v88->__9__30_1, (int32_t)_9__30_1, v89, v90, v91, v92, v93, v94);
    v5 = v86;
  }
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v83,
                                                               (System_Func_TSource__TResult__o *)_9__30_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
  v96 = System_Linq_Enumerable__ToArray_int_(
          v95,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  eventUpValIcon = v98->fields.eventUpValIcon;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetServantId(v5, -1, 0);
  if ( !eventUpValIcon )
    goto LABEL_82;
  EventUpValIconComponent__Set_47847584(
    eventUpValIcon,
    (EventMargeItemUpValInfo_array *)questData,
    v96,
    (int32_t)this,
    v62,
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

  if ( (byte_596B32B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B32B = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, method);
  if ( !UnityEngine_Object__op_Equality(restrictionBase, 0, 0) )
  {
    restrictionMaskMessageText = this->fields.restrictionBase;
    if ( !restrictionMaskMessageText
      || (UnityEngine_GameObject__SetActive(restrictionMaskMessageText, 1, 0),
          BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.restrictionMaskSprite, 1, 0),
          (restrictionMaskMessageText = (UnityEngine_GameObject_o *)this->fields.restrictionMaskMessageText) == 0) )
    {
      sub_2213CDC(restrictionMaskMessageText, v6);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *restrictionWarningBase; // x21

  if ( (byte_596B32C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B32C = 1;
  }
  restrictionBase = (UnityEngine_Object_o *)this->fields.restrictionBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, message, method);
  if ( !UnityEngine_Object__op_Equality(restrictionBase, 0, 0) )
  {
    restrictionWarningIcon = this->fields.restrictionBase;
    if ( restrictionWarningIcon )
    {
      UnityEngine_GameObject__SetActive(restrictionWarningIcon, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.restrictionMaskSprite, 1, 0);
      restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
    sub_2213CDC(restrictionWarningIcon, v6);
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
  System_Array_o *v14; // x29
  __int64 v15; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x19
  UserServantEntity_o *v18; // x25
  __int64 v19; // x23
  __int64 v20; // x24
  __int128 v21; // q1
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Master_object; // x24
  System_Collections_Generic_List_object__o *v25; // x23
  struct System_Int32_array *eventIdList; // x21
  il2cpp_array_size_t v27; // x8
  int64_t v28; // x22
  unsigned __int64 v29; // x19
  int32_t v30; // w26
  __int64 v31; // x1
  __int64 v32; // x2
  __int128 v33; // q1
  System_Array_o *v34; // x21
  UserServantEntity_o *v35; // x25
  __int64 v36; // x2
  int64_t v37; // x27
  __int64 v38; // x28
  __int64 v39; // x29
  int32_t v40; // w4
  __int64 v41; // x2
  int32_t BuddyPoint; // w27
  __int64 v43; // x28
  __int64 v44; // x29
  int32_t v45; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v47; // w29
  EventMargeItemUpValInfo_o *v48; // x28
  EventPersonalMargeUpValInfo_o *v49; // x27
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int v56; // w8
  int64_t v57; // x26
  unsigned int v58; // w27
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x2
  EventMargeItemUpValInfo_array *v64; // x23
  __int64 v65; // x22
  __int64 v66; // x24
  int32_t v67; // w22
  __int64 v68; // x2
  int32_t v69; // w20
  GrandServantListItemDraw___c_c *v70; // x0
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x8
  System_Predicate_long__o *_9__29_0; // x24
  Il2CppObject *v73; // x25
  struct GrandServantListItemDraw___c_StaticFields *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_Int64_array *All_long; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  GrandServantListItemDraw___c_c *v84; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x21
  struct GrandServantListItemDraw___c_StaticFields *v86; // x9
  System_Func_long__int__o *_9__29_1; // x24
  Il2CppObject *v88; // x25
  struct GrandServantListItemDraw___c_StaticFields *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  GrandServantListItemDraw_o *v97; // [xsp+8h] [xbp-E8h]
  struct System_Int32_array *v98; // [xsp+10h] [xbp-E0h]
  UserEventServantPointMaster_o *v99; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+60h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_596B325 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_long___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_long__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&System_Func_long__int__TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&System_Predicate_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__);
    sub_2213A60(&GrandServantListItemDraw___c_TypeInfo);
    byte_596B325 = 1;
  }
  entity = 0;
  eventUpVallInfo = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v97 = this;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_82;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v10 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v11, v10, 0, 0, 0, 0);
  v12 = (System_Array_o *)sub_2213B20(long___TypeInfo, 3);
  v13.fields.value = Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v12, v13, 0);
  if ( !equipUserServantEntities )
    goto LABEL_82;
  max_length = equipUserServantEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < (unsigned int)max_length )
    {
      v18 = equipUserServantEntities->m_Items[v17];
      if ( v18 )
      {
        v19 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v15);
        *(_QWORD *)&v105.fields.currentCryptoKey = v19;
        *(_QWORD *)&v105.fields.fakeValue = v20;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v105, 0);
        if ( (Instance & 0x80000000) == 0 )
        {
          v21 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
          *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v102.fields.fakeValue = v21;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v15);
          v101 = v102;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v101, 0);
          if ( !v14 )
            goto LABEL_82;
          if ( v17 >= LODWORD(v14[1].monitor) )
            break;
          *((_QWORD *)&v14[2].klass + v17) = Instance;
        }
      }
      LODWORD(max_length) = equipUserServantEntities->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_83:
    sub_2213CE4(Instance);
  }
LABEL_19:
  if ( !userServantEntity )
    goto LABEL_82;
  UserServantEntity__getEventUpVal_50186428(
    userServantEntity,
    &eventUpVallInfo,
    v11,
    (System_Int64_array *)v14,
    0,
    1,
    0,
    1,
    0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v99 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (int64_t)UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  if ( !v11 )
    goto LABEL_82;
  eventIdList = v11->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_82;
  v27 = eventIdList->max_length;
  v28 = Instance;
  if ( (int)v27 >= 1 )
  {
    v29 = 0;
    v98 = v11->fields.eventIdList;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
        goto LABEL_83;
      if ( !Master_object )
        goto LABEL_82;
      v30 = eventIdList->m_Items[v29];
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v30, 0) )
      {
        v33 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
        *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v102.fields.fakeValue = v33;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
        v34 = v14;
        v35 = userServantEntity;
        v100 = v102;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v100, 0);
        if ( !v28 )
          goto LABEL_82;
        v37 = Instance;
        v38 = *(_QWORD *)(v28 + 16);
        v39 = *(_QWORD *)(v28 + 24);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v36);
        *(_QWORD *)&v106.fields.currentCryptoKey = v38;
        *(_QWORD *)&v106.fields.fakeValue = v39;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v106, 0);
        Instance = (int64_t)v99;
        if ( !v99 )
          goto LABEL_82;
        if ( UserEventServantPointMaster__TryGetEntity(v99, &entity, v37, v30, v40, 0) )
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
        v43 = *(_QWORD *)(v28 + 16);
        v44 = *(_QWORD *)(v28 + 24);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v41);
        *(_QWORD *)&v107.fields.currentCryptoKey = v43;
        *(_QWORD *)&v107.fields.fakeValue = v44;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v107, 0);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)Master_object,
                         v30,
                         BuddyPoint,
                         v45,
                         0);
        v47 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
        v48 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_48723060(v48, v30, 0);
        if ( !v48 )
          goto LABEL_82;
        EventMargeItemUpValInfo__SetServantPointInfo(v48, BuddyPoint, v47, 0, 0);
        if ( !v25 )
          goto LABEL_82;
        System_Collections_Generic_List_object___Insert(
          v25,
          0,
          (Il2CppObject *)v48,
          (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        userServantEntity = v35;
        v14 = v34;
        eventIdList = v98;
      }
      v49 = (EventPersonalMargeUpValInfo_o *)sub_2213CCC(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v49, v30, (ServantEntity_o *)v28, 0);
      Instance = (int64_t)eventUpVallInfo;
      if ( !eventUpVallInfo )
        goto LABEL_82;
      Instance = (int64_t)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
      if ( !v49 )
        goto LABEL_82;
      EventPersonalMargeUpValInfo__Add(v49, (EventDropItemUpValInfo_array *)Instance, 0);
      Instance = EventPersonalMargeUpValInfo__IsEmpty(v49, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v49, 0);
        if ( !Instance )
          goto LABEL_82;
        v56 = *(_DWORD *)(Instance + 24);
        v57 = Instance;
        if ( v56 >= 1 )
          break;
      }
LABEL_62:
      LODWORD(v27) = eventIdList->max_length;
      if ( (__int64)++v29 >= (int)v27 )
        goto LABEL_63;
    }
    v58 = 0;
    while ( v58 < v56 )
    {
      v8 = *(_QWORD *)(v57 + 8LL * (int)v58 + 32);
      if ( !v8 )
        goto LABEL_82;
      if ( *(_DWORD *)(v8 + 60) != 111 )
      {
        if ( !v25 )
          goto LABEL_82;
        items = v25->fields._items;
        v60 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_82;
        size = v25->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)v8,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v62[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v62 + 4), v8, v50, v51, v52, v53, v54, v55);
        }
      }
      v56 = *(_DWORD *)(v57 + 24);
      if ( (int)++v58 >= v56 )
        goto LABEL_62;
    }
    goto LABEL_83;
  }
LABEL_63:
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (int64_t)PartyOrganizationUtility__GetAddUpValInfos(
                        (PartyOrganizationUtility_o *)Instance,
                        (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v25,
                        0);
  if ( !v28 )
    goto LABEL_82;
  v64 = (EventMargeItemUpValInfo_array *)Instance;
  v66 = *(_QWORD *)(v28 + 16);
  v65 = *(_QWORD *)(v28 + 24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v63);
  *(_QWORD *)&v108.fields.currentCryptoKey = v66;
  *(_QWORD *)&v108.fields.fakeValue = v65;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v108, 0);
  Instance = (int64_t)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  if ( !Instance )
    goto LABEL_82;
  v69 = *(_DWORD *)(Instance + 24);
  v70 = GrandServantListItemDraw___c_TypeInfo;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v8, v68);
    v70 = GrandServantListItemDraw___c_TypeInfo;
  }
  static_fields = v70->static_fields;
  _9__29_0 = static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !*(&v70->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v70, v8, v68);
      static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v73 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Predicate_long__o *)sub_2213CCC(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__29_0, v73, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__, 0);
    v74 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v74->__9__29_0 = _9__29_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v74->__9__29_0, (int32_t)_9__29_0, v75, v76, v77, v78, v79, v80);
  }
  All_long = System_Array__FindAll_long_(
               (System_Int64_array *)v14,
               (System_Predicate_T__o *)_9__29_0,
               (const MethodInfo_39A9530 *)Method_System_Array_FindAll_long___);
  v84 = GrandServantListItemDraw___c_TypeInfo;
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)All_long;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v82, v83);
    v84 = GrandServantListItemDraw___c_TypeInfo;
  }
  v86 = v84->static_fields;
  _9__29_1 = v86->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !*(&v84->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v84, v82, v83);
      v86 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v88 = (Il2CppObject *)v86->__9;
    _9__29_1 = (System_Func_long__int__o *)sub_2213CCC(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__29_1, v88, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__, 0);
    v89 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v89->__9__29_1 = _9__29_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v89->__9__29_1, (int32_t)_9__29_1, v90, v91, v92, v93, v94, v95);
  }
  v96 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v85,
                                                               (System_Func_TSource__TResult__o *)_9__29_1,
                                                               (const MethodInfo_388F1F0 *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                        v96,
                        (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v97->fields.eventUpValIcon )
LABEL_82:
    sub_2213CDC(Instance, v8);
  EventUpValIconComponent__Set_47847584(v97->fields.eventUpValIcon, v64, (System_Int32_array *)Instance, v67, v69, 0);
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
  UIWidget_o *attackLabel; // x0
  float v7; // s0 OVERLAPPED
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = atk;
  if ( (byte_596B327 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_596B327 = 1;
  }
  attackLabel = (UIWidget_o *)this->fields.attackLabel;
  if ( !attackLabel )
    goto LABEL_8;
  v7 = 1.0;
  v8 = 0.92157;
  v9 = 0.015686;
  v10 = 1.0;
  if ( !isAtkBoost )
  {
    v8 = 1.0;
    v9 = 1.0;
  }
  UIWidget__set_color(attackLabel, *(UnityEngine_Color_o *)&v7, 0);
  v11 = this->fields.attackLabel;
  attackLabel = (UIWidget_o *)System_Int32__ToString_77138656((int32_t)&v12, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  if ( !v11 )
LABEL_8:
    sub_2213CDC(attackLabel, *(_QWORD *)&atk);
  UILabel__set_text(v11, (System_String_o *)attackLabel, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemDraw__SetupHp(
        GrandServantListItemDraw_o *this,
        int32_t hp,
        bool isHpBoost,
        const MethodInfo *method)
{
  UIWidget_o *hpLabel; // x0
  float v7; // s0 OVERLAPPED
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = hp;
  if ( (byte_596B328 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    byte_596B328 = 1;
  }
  hpLabel = (UIWidget_o *)this->fields.hpLabel;
  if ( !hpLabel )
    goto LABEL_8;
  v7 = 1.0;
  v8 = 0.92157;
  v9 = 0.015686;
  v10 = 1.0;
  if ( !isHpBoost )
  {
    v8 = 1.0;
    v9 = 1.0;
  }
  UIWidget__set_color(hpLabel, *(UnityEngine_Color_o *)&v7, 0);
  v11 = this->fields.hpLabel;
  hpLabel = (UIWidget_o *)System_Int32__ToString_77138656((int32_t)&v12, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  if ( !v11 )
LABEL_8:
    sub_2213CDC(hpLabel, *(_QWORD *)&hp);
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
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x4
  UINarrowFigureTexture_o *servantNarrowTexture; // x23
  int32_t v22; // w24
  UILabel_o *levelLabel; // x23
  int m_CachedPtr_high; // w26
  int32_t AtkBoostValue; // w28
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  GrandServantListItemDraw___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x29
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__27_0; // x23
  Il2CppObject *v33; // x24
  struct GrandServantListItemDraw___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w0
  const MethodInfo *v42; // x3
  int v43; // w29
  int32_t HpBoostValue; // w27
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  GrandServantListItemDraw___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x28
  struct GrandServantListItemDraw___c_StaticFields *v50; // x9
  System_Func_object__int__o *_9__27_1; // x23
  Il2CppObject *v52; // x24
  struct GrandServantListItemDraw___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w0
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x23
  SkillInfo_array *v65; // x24
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  intptr_t v72; // x8
  _QWORD *v73; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v75; // x8
  __int64 v76; // x1
  __int64 v77; // x2
  AppendSkillListComponent_o *appendSkillList; // x23
  SkillInfo_array *v79; // x24
  struct System_Threading_CancellationTokenSource_o *v80; // x26
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  intptr_t v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  intptr_t v90; // x24
  intptr_t v91; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  ServantCommandCardListComponent_o *svtCommandCardList; // x27
  int32_t v96; // w23
  int32_t v97; // w24
  const MethodInfo *v98; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  unsigned int v100; // w23
  unsigned int max_length; // w9
  unsigned int v102; // w10
  const MethodInfo *v103; // x3
  intptr_t value; // [xsp+8h] [xbp-98h]
  struct System_Threading_CancellationTokenSource_o *value_8; // [xsp+10h] [xbp-90h]
  struct System_Threading_CancellationTokenSource_o *v106; // [xsp+18h] [xbp-88h]
  SkillInfo_array *v107; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  v3 = slotData;
  v4 = this;
  if ( (byte_596B323 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_2213A60(&System_Func_UserServantEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetupMine_b__27_0__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetupMine_b__27_1__);
    sub_2213A60(&GrandServantListItemDraw___c_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_2213A60(&UserServantEntity___TypeInfo);
    byte_596B323 = 1;
  }
  lv = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v107 = 0;
  if ( !v3 )
    goto LABEL_72;
  UserServantEntity_k__BackingField = v3->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = (GrandServantListItemDraw_o *)v3->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    this = (GrandServantListItemDraw_o *)sub_2213B20(UserServantEntity___TypeInfo, 0);
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
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v17, v4->fields.frameSprite, FrameType, v14, v20);
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
  *(_QWORD *)&v111.fields.currentCryptoKey = v9;
  *(_QWORD *)&v111.fields.fakeValue = v10;
  value = v9;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v111, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__GetCardImageLimitCountStageSealAfter(
                                         UserServantEntity_k__BackingField,
                                         -1,
                                         0,
                                         0,
                                         0);
  if ( !servantNarrowTexture )
    goto LABEL_72;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, v22, (int32_t)this, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_72;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v14, FrameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_72;
  v106 = v10;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v4->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_72;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  m_CachedPtr_high = HIDWORD(v11->fields.m_CachedPtr);
  AtkBoostValue = UserServantEntity__get_AtkBoostValue(UserServantEntity_k__BackingField, 0);
  v26 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v29 = GrandServantListItemDraw___c_TypeInfo;
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v27, v28);
    v29 = GrandServantListItemDraw___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__27_0 = (System_Func_object__int__o *)static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, v27, v28);
      static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_0, v33, Method_GrandServantListItemDraw___c__SetupMine_b__27_0__, 0);
    v34 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v34->__9__27_0 = (struct System_Func_UserServantEntity__int__o *)_9__27_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->__9__27_0, (int32_t)_9__27_0, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__Sum_object_(
          v30,
          (System_Func_TSource__int__o *)_9__27_0,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(v4, v41 + m_CachedPtr_high, AtkBoostValue > 0, v42);
  v43 = v11->fields.m_CachedPtr;
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0);
  v45 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v48 = GrandServantListItemDraw___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v46, v47);
    v48 = GrandServantListItemDraw___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__27_1 = (System_Func_object__int__o *)v50->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v46, v47);
      v50 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__27_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_1, v52, Method_GrandServantListItemDraw___c__SetupMine_b__27_1__, 0);
    v53 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v53->__9__27_1 = (struct System_Func_UserServantEntity__int__o *)_9__27_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__27_1, (int32_t)_9__27_1, v54, v55, v56, v57, v58, v59);
  }
  v60 = System_Linq_Enumerable__Sum_object_(
          v49,
          (System_Func_TSource__int__o *)_9__27_1,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(v4, v60 + v43, HpBoostValue > 0, v61);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = v4->fields.skillListTreasureDevice;
  v65 = skillInfoList;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62, v63);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_48251096(v65, 0);
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
  v72 = this->fields.m_CachedPtr;
  slotData = (GrandServantListSlotData_o *)v4->fields.skillInfoUiWidget;
  v73 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v72 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v72 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = v72 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v75 + 32) = slotData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 32), (int32_t)slotData, v66, v67, v68, v69, v70, v71);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_50215100(UserServantEntity_k__BackingField, &v107, 0);
  if ( v107 && v107->max_length )
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_72;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v4->fields.appendSkillList;
    v79 = v107;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76, v77);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_48251096(v79, 0);
    v80 = v106;
    if ( !appendSkillList )
      goto LABEL_72;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_72;
    v87 = this->fields.m_CachedPtr;
    slotData = (GrandServantListSlotData_o *)v4->fields.appendSkillInfoUiWidget;
    v88 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v87 )
      goto LABEL_72;
    v89 = SLODWORD(this->fields.m_CancellationTokenSource);
    v90 = m_CachedPtr;
    if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = v87 + 8 * v89;
      LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
      *(_QWORD *)(v91 + 32) = slotData;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 32), (int32_t)slotData, v81, v82, v83, v84, v85, v86);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_72;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v90 = m_CachedPtr;
    v80 = v106;
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
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_72;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v4->fields.svtCommandCardList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v93, v94);
  *(_QWORD *)&v112.fields.fakeValue = value_8;
  *(_QWORD *)&v112.fields.currentCryptoKey = v90;
  v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0);
  *(_QWORD *)&v113.fields.currentCryptoKey = value;
  *(_QWORD *)&v113.fields.fakeValue = v80;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v113, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_72;
  ServantCommandCardListComponent__Set_48038548(svtCommandCardList, v96, v97, (System_Int32_array *)this, 2, 0, 0);
  equipDraws = v4->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_72;
  v100 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v100 >= (int)max_length )
      break;
    if ( v100 >= max_length )
      goto LABEL_75;
    if ( EquipUserServantEntities_k__BackingField )
    {
      v102 = (unsigned int)EquipUserServantEntities_k__BackingField->fields.m_CancellationTokenSource;
      this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v100];
      if ( (int)v100 >= (int)v102 )
      {
        slotData = 0;
      }
      else
      {
        if ( v100 >= v102 )
LABEL_75:
          sub_2213CE4(this);
        slotData = (GrandServantListSlotData_o *)*((_QWORD *)&EquipUserServantEntities_k__BackingField->fields.backgroundSprite
                                                 + (int)v100);
      }
      if ( this )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)this,
          (UserServantEntity_o *)slotData,
          v100 == 1,
          v3->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v98);
        equipDraws = v4->fields.equipDraws;
        ++v100;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_72;
  }
  this = (GrandServantListItemDraw_o *)v4->fields.pushIcon;
  if ( !this )
LABEL_72:
    sub_2213CDC(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetUpEventUp(
    v4,
    UserServantEntity_k__BackingField,
    (UserServantEntity_array *)EquipUserServantEntities_k__BackingField,
    v103);
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
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x4
  UINarrowFigureTexture_o *servantNarrowTexture; // x26
  int32_t v24; // w19
  UILabel_o *levelLabel; // x22
  int m_CachedPtr_high; // w29
  int32_t AtkBoostValue; // w22
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  GrandServantListItemDraw___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x25
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__28_0; // x26
  Il2CppObject *v35; // x19
  struct GrandServantListItemDraw___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w0
  const MethodInfo *v44; // x3
  int v45; // w29
  int32_t HpBoostValue; // w22
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  GrandServantListItemDraw___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x25
  struct GrandServantListItemDraw___c_StaticFields *v52; // x9
  System_Func_object__int__o *_9__28_1; // x26
  Il2CppObject *v54; // x19
  struct GrandServantListItemDraw___c_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int32_t v62; // w0
  const MethodInfo *v63; // x3
  __int64 v64; // x1
  __int64 v65; // x2
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x22
  SkillInfo_array *v67; // x19
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  intptr_t v74; // x8
  _QWORD *v75; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v77; // x8
  __int64 v78; // x1
  __int64 v79; // x2
  AppendSkillListComponent_o *appendSkillList; // x22
  SkillInfo_array *v81; // x19
  intptr_t v82; // x19
  intptr_t v83; // x26
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  intptr_t v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  intptr_t v93; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x22
  __int64 v95; // x1
  __int64 v96; // x2
  ServantCommandCardListComponent_o *svtCommandCardList; // x22
  int32_t v98; // w0
  int32_t v99; // w25
  int32_t v100; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v102; // w27
  const MethodInfo *v103; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  int32_t v105; // w22
  int32_t max_length; // w9
  GrandServantListItemEquipDraw_o *v107; // x25
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  GrandServantListQuestData_o *questDataa; // [xsp+10h] [xbp-B0h]
  struct System_Threading_CancellationTokenSource_o *v112; // [xsp+18h] [xbp-A8h]
  GrandServantListItemDraw_o *v113; // [xsp+30h] [xbp-90h]
  struct System_Threading_CancellationTokenSource_o *value; // [xsp+38h] [xbp-88h]
  SkillInfo_array *v115; // [xsp+40h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-70h] BYREF
  int32_t lv; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  v6 = slotData;
  v7 = this;
  if ( (byte_596B324 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_2213A60(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetupOther_b__28_0__);
    sub_2213A60(&Method_GrandServantListItemDraw___c__SetupOther_b__28_1__);
    this = (GrandServantListItemDraw_o *)sub_2213A60(&GrandServantListItemDraw___c_TypeInfo);
    byte_596B324 = 1;
  }
  lv = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v115 = 0;
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
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v19, v7->fields.frameSprite, FrameType, v16, v22);
  servantNarrowTexture = v7->fields.servantNarrowTexture;
  v112 = m_CancellationTokenSource;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
  *(_QWORD *)&v119.fields.fakeValue = value;
  *(_QWORD *)&v119.fields.currentCryptoKey = v12;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v119, 0);
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetCardImageLimitCountStageSealAfter(
                                         ServantLeaderInfo_k__BackingField,
                                         0);
  if ( !servantNarrowTexture )
    goto LABEL_69;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, v24, (int32_t)this, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_69;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v16, FrameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_69;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v7->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_69;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  v113 = v13;
  m_CachedPtr_high = HIDWORD(v13->fields.m_CachedPtr);
  AtkBoostValue = ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v28 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipTargetInfoList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v31 = GrandServantListItemDraw___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v29, v30);
    v31 = GrandServantListItemDraw___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__28_0 = (System_Func_object__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v29, v30);
      static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v35, Method_GrandServantListItemDraw___c__SetupOther_b__28_0__, 0);
    v36 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v36->__9__28_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__28_0, (int32_t)_9__28_0, v37, v38, v39, v40, v41, v42);
  }
  v43 = System_Linq_Enumerable__Sum_object_(
          v32,
          (System_Func_TSource__int__o *)_9__28_0,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupAtk(v7, v43 + m_CachedPtr_high, AtkBoostValue > 0, v44);
  v45 = v113->fields.m_CachedPtr;
  HpBoostValue = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v47 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipTargetInfoList,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v50 = GrandServantListItemDraw___c_TypeInfo;
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !*(&GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo, v48, v49);
    v50 = GrandServantListItemDraw___c_TypeInfo;
  }
  v52 = v50->static_fields;
  _9__28_1 = (System_Func_object__int__o *)v52->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, v48, v49);
      v52 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v54, Method_GrandServantListItemDraw___c__SetupOther_b__28_1__, 0);
    v55 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v55->__9__28_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v55->__9__28_1, (int32_t)_9__28_1, v56, v57, v58, v59, v60, v61);
  }
  v62 = System_Linq_Enumerable__Sum_object_(
          v51,
          (System_Func_TSource__int__o *)_9__28_1,
          (const MethodInfo_3899FA8 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupHp(v7, v62 + v45, HpBoostValue > 0, v63);
  ServantLeaderInfo__getSkillInfo(ServantLeaderInfo_k__BackingField, &skillInfoList, -1, 0);
  ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfo_k__BackingField, &tdInfo, -1, 0);
  skillListTreasureDevice = v7->fields.skillListTreasureDevice;
  v67 = skillInfoList;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64, v65);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_48251096(v67, 0);
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
  v74 = this->fields.m_CachedPtr;
  slotData = (GrandServantListSlotData_o *)v7->fields.skillInfoUiWidget;
  v75 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v74 )
    goto LABEL_69;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v74 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = v74 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v77 + 32) = slotData;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 32), (int32_t)slotData, v68, v69, v70, v71, v72, v73);
  }
  ServantLeaderInfo__GetAppendPassiveSkillInfo_50601788(ServantLeaderInfo_k__BackingField, &v115, 0, 0);
  if ( v115 && v115->max_length )
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_69;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v7->fields.appendSkillList;
    v81 = v115;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78, v79);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_48251096(v81, 0);
    v83 = v12;
    v82 = m_CachedPtr;
    if ( !appendSkillList )
      goto LABEL_69;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_69;
    v90 = this->fields.m_CachedPtr;
    slotData = (GrandServantListSlotData_o *)v7->fields.appendSkillInfoUiWidget;
    v91 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v90 )
      goto LABEL_69;
    v92 = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = v90 + 8 * v92;
      LODWORD(this->fields.m_CancellationTokenSource) = v92 + 1;
      *(_QWORD *)(v93 + 32) = slotData;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v93 + 32), (int32_t)slotData, v84, v85, v86, v87, v88, v89);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_69;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v83 = v12;
    v82 = m_CachedPtr;
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
                                         (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_69;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v7->fields.svtCommandCardList;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v95, v96);
  *(_QWORD *)&v120.fields.fakeValue = v112;
  *(_QWORD *)&v120.fields.currentCryptoKey = v82;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v120, 0);
  *(_QWORD *)&v121.fields.fakeValue = value;
  v99 = v98;
  *(_QWORD *)&v121.fields.currentCryptoKey = v83;
  v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v121, 0);
  commandCardParam = ServantLeaderInfo_k__BackingField->fields.commandCardParam;
  v102 = v100;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_69;
  ServantCommandCardListComponent__Set_48038284(
    svtCommandCardList,
    v99,
    v102,
    commandCardParam,
    (System_Int32_array *)this,
    2,
    0,
    0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_k__BackingField, 0);
  equipDraws = v7->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_69;
  v105 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( v105 >= max_length )
      break;
    if ( v105 >= (unsigned int)max_length )
      sub_2213CE4(this);
    if ( EquipTargetInfoList )
    {
      v107 = equipDraws->m_Items[v105];
      if ( v105 >= EquipTargetInfoList->fields._size )
      {
        slotData = 0;
      }
      else
      {
        this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)EquipTargetInfoList,
                                               v105,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        slotData = (GrandServantListSlotData_o *)this;
      }
      if ( v107 )
      {
        GrandServantListItemEquipDraw__Setup_39660352(
          v107,
          (EquipTargetInfo_o *)slotData,
          v105 == 1,
          v6->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v103);
        equipDraws = v7->fields.equipDraws;
        ++v105;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_69;
  }
  this = (GrandServantListItemDraw_o *)v7->fields.pushIcon;
  if ( !this )
LABEL_69:
    sub_2213CDC(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetEventUpOther(v7, ServantLeaderInfo_k__BackingField, questDataa, v108);
  if ( questDataa && isSelectable )
    GrandServantListItemDraw__SetupRestriction(
      v7,
      v6->fields._ServantLeaderInfo_k__BackingField,
      questDataa->fields._QuestRestriction_k__BackingField,
      v109);
}


void GrandServantListItemDraw__SetupRestriction(
        GrandServantListItemDraw_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        QuestRestrictionInfo_o *questRestriction,
        const MethodInfo *method)
{
  _BOOL4 v7; // w22
  _BOOL4 UniqueSvtRestriction; // w23
  _BOOL4 IsUniqueIndividualityRestriction; // w24
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  int klass; // w26
  int32_t klass_high; // w25
  int32_t ServantId; // w0
  int32_t limitCount; // w26
  int32_t v17; // w27
  int32_t DispLimitCountStageSealAfterIndexZero; // w0
  _BOOL4 IsRestrictionServantIndividuality; // w0
  System_String_o *v20; // x1
  const MethodInfo *v21; // x2
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2

  if ( (byte_596B329 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    byte_596B329 = 1;
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
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, questRestriction, 0) )
      goto LABEL_24;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (klass = (int)Instance[5].klass,
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_2213CDC(Instance, v10);
    }
    if ( klass >= 1
      && (klass_high = HIDWORD(Instance[5].klass),
          QuestRestrictionInfo__IsMyServantOrNpcRestriction_50456184(questRestriction, klass_high, 0)) )
    {
      ServantId = ServantLeaderInfo__GetServantId(servantLeaderInfo, -1, 0);
      limitCount = servantLeaderInfo->fields.limitCount;
      v17 = ServantId;
      DispLimitCountStageSealAfterIndexZero = ServantLeaderInfo__GetDispLimitCountStageSealAfterIndexZero(
                                                servantLeaderInfo,
                                                -1,
                                                0);
      IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                            questRestriction,
                                            v17,
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
    if ( v7 || IsRestrictionServantIndividuality )
    {
LABEL_24:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      GrandServantListItemDraw__SetRestrictionMaskMessage(this, v20, v21);
    }
    else if ( UniqueSvtRestriction || IsUniqueIndividualityRestriction )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
      GrandServantListItemDraw__SetRestrictionWarningMessage(this, v22, v23);
    }
  }
}


void GrandServantListItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B32E & 1) == 0 )
  {
    sub_2213A60(&GrandServantListItemDraw___c_TypeInfo);
    byte_596B32E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandServantListItemDraw___c_TypeInfo->static_fields,
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

  if ( (byte_596B32F & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B32F = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0) > 0;
}


int32_t GrandServantListItemDraw___c___SetEventUpOther_b__30_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_596B330 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B330 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
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
    sub_2213CDC(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupMine_b__27_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.hp;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_0(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_2213CDC(this, 0);
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
  if ( (byte_596B331 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c__DisplayClass30_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596B331 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_2213CDC(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}