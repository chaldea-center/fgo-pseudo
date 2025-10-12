void GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C327A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4C327A2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C32BC4(&this->fields.switchSkillUIList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4C32797 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    byte_4C32797 = 1;
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
    sub_1C32E7C(switchSkillInfo);
  }
  ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
    switchSkillInfo,
    *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
    0.0);
}


void GrandServantListItemDraw__ClearRestriction(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionBase; // x20
  UnityEngine_GameObject_o *restrictionMaskMessageText; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C3279F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    byte_4C3279F = 1;
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
    sub_1C32E7C(restrictionMaskMessageText);
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
  if ( (byte_4C32796 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C32C20(&StringLiteral_20402/*"img_frames_mask_grand_servantlist"*/);
    byte_4C32796 = 1;
  }
  equipDraws = v3->fields.equipDraws;
  if ( !equipDraws )
LABEL_9:
    sub_1C32E7C(this);
  v5 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C32E84(this);
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
  AtlasManager__SetGrandServantListImage(restrictionMaskSprite, (System_String_o *)StringLiteral_20402/*"img_frames_mask_grand_servantlist"*/, 0);
}


void GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_1C32E7C(0);
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0);
}


void GrandServantListItemDraw__SetEventUpOther(
        GrandServantListItemDraw_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  GrandServantListItemDraw_o *v6; // x23
  struct EventUpValSetupInfo_o *EventSetupInfo_k__BackingField; // x2
  struct System_Int32_array *eventIdList; // x8
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x20
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x19
  Il2CppObject *Master_object; // x19
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x26
  Il2CppObject *v16; // x25
  System_Collections_Generic_List_object__o *v17; // x24
  struct EventUpValSetupInfo_o *v18; // x8
  struct System_Int32_array *v19; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v21; // x23
  int32_t eventSvtPoint; // w19
  __int64 v23; // x20
  __int64 v24; // x22
  int32_t v25; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v28; // x20
  EventPersonalMargeUpValInfo_o *v29; // x19
  QuestPhaseMaster_o *v30; // x25
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  GrandServantListItemDraw_o *v32; // x29
  unsigned __int64 v33; // x28
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x22
  _DWORD *monitor; // x8
  int v37; // w8
  GrandServantListItemDraw_o *v38; // x19
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x8
  struct QuestRestrictionInfo_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *attackLabel; // x19
  System_Func_int__bool__o *v42; // x25
  System_Func_TSource__bool__o *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct QuestRestrictionInfo_o *v48; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v50; // x1
  int32_t v51; // w22
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  GrandServantListItemDraw___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  System_Func_object__bool__o *_9__30_0; // x19
  GrandServantListItemDraw_o *v56; // x26
  Il2CppObject *v57; // x23
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  GrandServantListItemDraw___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  System_Func_object__int__o *_9__30_1; // x19
  GrandServantListItemDraw_o *v63; // x28
  Il2CppObject *v64; // x23
  struct GrandServantListItemDraw___c_StaticFields *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Int32_array *v67; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x20
  __int64 v69; // x23
  __int64 v70; // x24
  System_Int32_array *v71; // x19
  GrandServantListItemDraw_o *v72; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *servantEntity; // [xsp+10h] [xbp-A0h]
  EventServantPointRankMaster_o *v74; // [xsp+18h] [xbp-98h]
  struct System_Int32_array *v75; // [xsp+28h] [xbp-88h]
  Il2CppObject *v76; // [xsp+30h] [xbp-80h]
  Il2CppObject *v77; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+40h] [xbp-70h]
  bool isDuplicate; // [xsp+44h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  v6 = this;
  if ( (byte_4C3279B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_int____78099256);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
    sub_1C32C20(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C32C20(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_Func_EquipTargetInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__);
    sub_1C32C20(&GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C32C20(&GrandServantListItemDraw___c_TypeInfo);
    byte_4C3279B = 1;
  }
  eventUpVallInfo = 0;
  isDuplicate = 0;
  if ( !questData )
  {
LABEL_66:
    if ( !servantLeaderInfo )
      goto LABEL_86;
    goto LABEL_67;
  }
  EventSetupInfo_k__BackingField = questData->fields._EventSetupInfo_k__BackingField;
  if ( !EventSetupInfo_k__BackingField )
    goto LABEL_65;
  eventIdList = EventSetupInfo_k__BackingField->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_86;
  if ( !eventIdList->max_length )
  {
LABEL_65:
    questData = 0;
    goto LABEL_66;
  }
  if ( !servantLeaderInfo )
    goto LABEL_86;
  ServantLeaderInfo__getEventUpVal_43385436(servantLeaderInfo, &eventUpVallInfo, EventSetupInfo_k__BackingField, 0);
  this = (GrandServantListItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v81.fields.currentCryptoKey = v11;
  *(_QWORD *)&v81.fields.fakeValue = v10;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v81, 0);
  if ( !v12 )
    goto LABEL_86;
  servantEntity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       (int32_t)this,
                                       (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v72 = v6;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v18 = questData->fields._EventSetupInfo_k__BackingField;
  if ( !v18 )
    goto LABEL_86;
  v19 = v18->fields.eventIdList;
  v74 = (EventServantPointRankMaster_o *)v14;
  if ( !v19 )
    goto LABEL_86;
  max_length = v19->max_length;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v76 = Master_object;
    v77 = v16;
    v75 = v19;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        goto LABEL_87;
      if ( !Master_object )
        goto LABEL_86;
      eventId = v19->m_Items[v21];
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                             eventId,
                                             (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !this
        || (this = (GrandServantListItemDraw_o *)EventDetailEntity__HasFlag(
                                                   (EventDetailEntity_o *)this,
                                                   0x800000000LL,
                                                   0),
            ((unsigned __int8)this & 1) == 0) )
      {
        if ( !v74 )
          goto LABEL_86;
        if ( EventServantPointRankMaster__IsEnableEvent(v74, eventId, 0) )
        {
          eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
          v24 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v82.fields.currentCryptoKey = v24;
          *(_QWORD *)&v82.fields.fakeValue = v23;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v82, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v74, eventId, eventSvtPoint, v25, 0);
          if ( EnableEntity )
            svtPointRank = EnableEntity->fields.svtPointRank;
          else
            svtPointRank = 0;
          v28 = (EventMargeItemUpValInfo_o *)sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_41618368(v28, eventId, 0);
          if ( !v28 )
            goto LABEL_86;
          EventMargeItemUpValInfo__SetServantPointInfo(v28, servantLeaderInfo->fields.eventSvtPoint, svtPointRank, 1, 0);
          if ( !v17 )
            goto LABEL_86;
          System_Collections_Generic_List_object___Insert(
            v17,
            0,
            (Il2CppObject *)v28,
            (const MethodInfo_379956C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        }
        v29 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v29, eventId, servantEntity, 0);
        this = (GrandServantListItemDraw_o *)eventUpVallInfo;
        if ( !eventUpVallInfo )
          goto LABEL_86;
        this = (GrandServantListItemDraw_o *)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
        v30 = (QuestPhaseMaster_o *)v77;
        if ( !v29 )
          goto LABEL_86;
        EventPersonalMargeUpValInfo__Add(v29, (EventDropItemUpValInfo_array *)this, 0);
        this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__IsEmpty(v29, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (GrandServantListItemDraw_o *)EventPersonalMargeUpValInfo__GetList(v29, 0);
          if ( !this )
            goto LABEL_86;
          m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
          v32 = this;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_60:
      v19 = v75;
      Master_object = v76;
      ++v21;
      LODWORD(max_length) = v75->max_length;
      if ( (__int64)v21 >= (int)max_length )
        goto LABEL_61;
    }
    v33 = 0;
    while ( v33 < (unsigned int)m_CancellationTokenSource )
    {
      v34 = (Il2CppObject *)*((_QWORD *)&v32->fields.backgroundSprite + v33);
      if ( !questData->fields._QuestRestriction_k__BackingField )
        goto LABEL_90;
      v35 = (Il2CppObject *)sub_1C32E6C(GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
      System_Object___ctor(v35, 0);
      if ( !v34 )
        goto LABEL_86;
      monitor = v34[2].monitor;
      if ( !monitor )
        goto LABEL_86;
      if ( !v15 )
        goto LABEL_86;
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                             monitor[4],
                                             (const MethodInfo_3396838 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_86;
      v37 = (int)this->fields.m_CancellationTokenSource;
      v38 = this;
      if ( v37 == 1 || v37 == 16 )
        goto LABEL_91;
      QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
      if ( !QuestRestriction_k__BackingField )
        goto LABEL_86;
      if ( eventId == QuestRestriction_k__BackingField->fields.eventId )
      {
LABEL_91:
        v40 = questData->fields._QuestRestriction_k__BackingField;
        if ( !v40 )
          goto LABEL_86;
        if ( !v30 )
          goto LABEL_86;
        this = (GrandServantListItemDraw_o *)QuestPhaseMaster__GetEntity(
                                               v30,
                                               v40->fields.questId,
                                               v40->fields.questPhase,
                                               0);
        if ( !v35 )
          goto LABEL_86;
        v35[1].klass = (Il2CppClass *)this;
        this = (GrandServantListItemDraw_o *)sub_1C32BC4(&v35[1], this);
        attackLabel = (System_Collections_Generic_IEnumerable_TSource__o *)v38->fields.attackLabel;
        if ( !attackLabel )
          goto LABEL_86;
        if ( !attackLabel[1].monitor
          || (v42 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v42,
                v35,
                Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__,
                0),
              v43 = (System_Func_TSource__bool__o *)v42,
              v30 = (QuestPhaseMaster_o *)v77,
              this = (GrandServantListItemDraw_o *)System_Linq_Enumerable__Any_int__51292940(
                                                     attackLabel,
                                                     v43,
                                                     (const MethodInfo_30EAB0C *)Method_System_Linq_Enumerable_Any_int____78099256),
              ((unsigned __int8)this & 1) != 0) )
        {
LABEL_90:
          if ( !v17 )
            goto LABEL_86;
          items = v17->fields._items;
          v45 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v17->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v34,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v34;
            this = (GrandServantListItemDraw_o *)sub_1C32BC4(v47 + 4, v34);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v32->fields.m_CancellationTokenSource;
      if ( (__int64)++v33 >= (int)m_CancellationTokenSource )
        goto LABEL_60;
    }
LABEL_87:
    sub_1C32E84(this);
  }
LABEL_61:
  v48 = questData->fields._QuestRestriction_k__BackingField;
  this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
LABEL_86:
    sub_1C32E7C(this);
  v6 = v72;
  if ( v48 )
  {
    AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                             (PartyOrganizationUtility_o *)this,
                             &isDuplicate,
                             (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v17,
                             0);
    this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_86;
    v50 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
  }
  else
  {
    v50 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v17;
  }
  questData = (GrandServantListQuestData_o *)PartyOrganizationUtility__GetAddUpValInfos(
                                               (PartyOrganizationUtility_o *)this,
                                               v50,
                                               0);
LABEL_67:
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
  if ( !this )
    goto LABEL_86;
  v51 = (int32_t)this->fields.m_CancellationTokenSource;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(servantLeaderInfo, 0);
  v53 = GrandServantListItemDraw___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v53 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__bool__o *)v53->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    v56 = v6;
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = GrandServantListItemDraw___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v53->static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EquipTargetInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v57, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_EquipTargetInfo__bool__o *)_9__30_0;
    sub_1C32BC4(&static_fields->__9__30_0, _9__30_0);
    v6 = v56;
  }
  v59 = System_Linq_Enumerable__Where_object_(
          v54,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
  v60 = GrandServantListItemDraw___c_TypeInfo;
  v61 = v59;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v60 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_1 = (System_Func_object__int__o *)v60->static_fields->__9__30_1;
  if ( !_9__30_1 )
  {
    v63 = v6;
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = GrandServantListItemDraw___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v60->static_fields->__9;
    _9__30_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_1, v64, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__, 0);
    v65 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v65->__9__30_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__30_1;
    sub_1C32BC4(&v65->__9__30_1, _9__30_1);
    v6 = v63;
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v61,
                                                               (System_Func_TSource__TResult__o *)_9__30_1,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
  v67 = System_Linq_Enumerable__ToArray_int_(
          v66,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  eventUpValIcon = v6->fields.eventUpValIcon;
  v70 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v69 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  v71 = v67;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v83.fields.currentCryptoKey = v70;
  *(_QWORD *)&v83.fields.fakeValue = v69;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v83, 0);
  if ( !eventUpValIcon )
    goto LABEL_86;
  EventUpValIconComponent__Set_40784360(
    eventUpValIcon,
    (EventMargeItemUpValInfo_array *)questData,
    v71,
    (int32_t)this,
    v51,
    0);
}


void GrandServantListItemDraw__SetRestrictionMaskMessage(
        GrandServantListItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionBase; // x21
  UnityEngine_GameObject_o *restrictionMaskMessageText; // x0

  if ( (byte_4C327A0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C327A0 = 1;
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
      sub_1C32E7C(restrictionMaskMessageText);
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
  UnityEngine_GameObject_o *restrictionWarningIcon; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x21

  if ( (byte_4C327A1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C327A1 = 1;
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
    sub_1C32E7C(restrictionWarningIcon);
  }
}


void GrandServantListItemDraw__SetUpEventUp(
        GrandServantListItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantEntity_array *equipUserServantEntities,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v9; // x21
  EventUpValSetupInfo_o *v10; // x26
  System_Array_o *v11; // x0
  System_RuntimeFieldHandle_o v12; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x19
  UserServantEntity_o *v15; // x27
  __int64 v16; // x23
  __int64 v17; // x24
  __int128 v18; // q0
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x27
  __int64 v23; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x25
  struct System_Int32_array *eventIdList; // x19
  il2cpp_array_size_t v26; // x8
  ServantEntity_o *v27; // x25
  unsigned __int64 v28; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x24
  int32_t v30; // w26
  __int128 v31; // q0
  int64_t v32; // x27
  int32_t SvtId; // w4
  int32_t BuddyPoint; // w27
  UserServantEntity_o *v35; // x25
  int32_t v36; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v38; // w29
  EventMargeItemUpValInfo_o *v39; // x28
  EventPersonalMargeUpValInfo_o *v40; // x27
  int v41; // w8
  __int64 v42; // x26
  unsigned int v43; // w27
  __int64 v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  __int64 v50; // x23
  __int64 v51; // x24
  EventMargeItemUpValInfo_array *v52; // x22
  int32_t v53; // w23
  int32_t v54; // w20
  GrandServantListItemDraw___c_c *v55; // x0
  System_Predicate_long__o *_9__29_0; // x24
  Il2CppObject *v57; // x25
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  System_Int64_array *All_long; // x0
  GrandServantListItemDraw___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x21
  System_Func_long__int__o *_9__29_1; // x24
  Il2CppObject *v63; // x25
  struct GrandServantListItemDraw___c_StaticFields *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  GrandServantListItemDraw_o *v66; // [xsp+0h] [xbp-F0h]
  ServantEntity_o *v67; // [xsp+8h] [xbp-E8h]
  UserEventServantPointMaster_o *v68; // [xsp+10h] [xbp-E0h]
  System_Int64_array *equipIds; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4C3279A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindAll_long___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_long__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C32C20(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&System_Func_long__int__TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&System_Predicate_long__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__);
    sub_1C32C20(&GrandServantListItemDraw___c_TypeInfo);
    byte_4C3279A = 1;
  }
  entity = 0;
  eventUpVallInfo = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v66 = this;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_80;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v10 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41638188(v10, v9, 0, 0, 0, 0);
  v11 = (System_Array_o *)sub_1C32CC8(long___TypeInfo, 3);
  v12.fields.value = Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6;
  equipIds = (System_Int64_array *)v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v11, v12, 0);
  if ( !equipUserServantEntities )
    goto LABEL_80;
  max_length = equipUserServantEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)max_length )
    {
      v15 = equipUserServantEntities->m_Items[v14];
      if ( v15 )
      {
        v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v75.fields.currentCryptoKey = v17;
        *(_QWORD *)&v75.fields.fakeValue = v16;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v75, 0);
        if ( (Instance & 0x80000000) == 0 )
        {
          v18 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
          *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v72.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v71 = v72;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v71, 0);
          if ( !equipIds )
            goto LABEL_80;
          if ( v14 >= LODWORD(equipIds->max_length) )
            break;
          equipIds->m_Items[v14] = Instance;
        }
      }
      LODWORD(max_length) = equipUserServantEntities->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_81:
    sub_1C32E84(Instance);
  }
LABEL_19:
  if ( !userServantEntity )
    goto LABEL_80;
  UserServantEntity__getEventUpVal_43070308(userServantEntity, &eventUpVallInfo, v10, equipIds, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v68 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v23;
  *(_QWORD *)&v76.fields.fakeValue = v22;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v76, 0);
  if ( !v24 )
    goto LABEL_80;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v24,
                        Instance,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v10 )
    goto LABEL_80;
  eventIdList = v10->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_80;
  v26 = eventIdList->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = (ServantEntity_o *)Instance;
    v28 = 0;
    p_userId = &userServantEntity->fields.userId;
    v67 = (ServantEntity_o *)Instance;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
        goto LABEL_81;
      if ( !Master_object )
        goto LABEL_80;
      v30 = eventIdList->m_Items[v28];
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v30, 0) )
      {
        v31 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v72.fields.fakeValue = v31;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v70 = v72;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v70, 0);
        SvtId = UserServantEntity__getSvtId(userServantEntity, 0);
        Instance = (__int64)v68;
        if ( !v68 )
          goto LABEL_80;
        if ( UserEventServantPointMaster__TryGetEntity(v68, &entity, v32, v30, SvtId, 0) )
        {
          Instance = (__int64)entity;
          if ( !entity )
            goto LABEL_80;
          BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
        }
        else
        {
          BuddyPoint = 0;
        }
        v35 = userServantEntity;
        v36 = UserServantEntity__getSvtId(userServantEntity, 0);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)Master_object,
                         v30,
                         BuddyPoint,
                         v36,
                         0);
        v38 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
        v39 = (EventMargeItemUpValInfo_o *)sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_41618368(v39, v30, 0);
        if ( !v39 )
          goto LABEL_80;
        EventMargeItemUpValInfo__SetServantPointInfo(v39, BuddyPoint, v38, 0, 0);
        if ( !v20 )
          goto LABEL_80;
        System_Collections_Generic_List_object___Insert(
          v20,
          0,
          (Il2CppObject *)v39,
          (const MethodInfo_379956C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        userServantEntity = v35;
        v27 = v67;
      }
      v40 = (EventPersonalMargeUpValInfo_o *)sub_1C32E6C(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v40, v30, v27, 0);
      Instance = (__int64)eventUpVallInfo;
      if ( !eventUpVallInfo )
        goto LABEL_80;
      Instance = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
      if ( !v40 )
        goto LABEL_80;
      EventPersonalMargeUpValInfo__Add(v40, (EventDropItemUpValInfo_array *)Instance, 0);
      Instance = EventPersonalMargeUpValInfo__IsEmpty(v40, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v40, 0);
        if ( !Instance )
          goto LABEL_80;
        v41 = *(_DWORD *)(Instance + 24);
        v42 = Instance;
        if ( v41 >= 1 )
          break;
      }
LABEL_61:
      LODWORD(v26) = eventIdList->max_length;
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_62;
    }
    v43 = 0;
    while ( v43 < v41 )
    {
      v44 = *(_QWORD *)(v42 + 8LL * (int)v43 + 32);
      if ( !v44 )
        goto LABEL_80;
      if ( *(_DWORD *)(v44 + 60) != 111 )
      {
        if ( !v20 )
          goto LABEL_80;
        items = v20->fields._items;
        v46 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_80;
        size = v20->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v44,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v44;
          Instance = sub_1C32BC4(v48 + 4, v44);
        }
      }
      v41 = *(_DWORD *)(v42 + 24);
      if ( (int)++v43 >= v41 )
        goto LABEL_61;
    }
    goto LABEL_81;
  }
LABEL_62:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                    (PartyOrganizationUtility_o *)Instance,
                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v20,
                    0);
  v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v52 = AddUpValInfos;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v77.fields.currentCryptoKey = v51;
  *(_QWORD *)&v77.fields.fakeValue = v50;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v77, 0);
  Instance = (__int64)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  if ( !Instance )
    goto LABEL_80;
  v54 = *(_DWORD *)(Instance + 24);
  v55 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v55 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_0 = v55->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = GrandServantListItemDraw___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__29_0 = (System_Predicate_long__o *)sub_1C32E6C(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__29_0, v57, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C32BC4(&static_fields->__9__29_0, _9__29_0);
  }
  All_long = System_Array__FindAll_long_(
               equipIds,
               (System_Predicate_T__o *)_9__29_0,
               (const MethodInfo_31E2828 *)Method_System_Array_FindAll_long___);
  v60 = GrandServantListItemDraw___c_TypeInfo;
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)All_long;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v60 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_1 = v60->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = GrandServantListItemDraw___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v60->static_fields->__9;
    _9__29_1 = (System_Func_long__int__o *)sub_1C32E6C(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__29_1, v63, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__, 0);
    v64 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v64->__9__29_1 = _9__29_1;
    sub_1C32BC4(&v64->__9__29_1, _9__29_1);
  }
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v61,
                                                               (System_Func_TSource__TResult__o *)_9__29_1,
                                                               (const MethodInfo_3111FB8 *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                        v65,
                        (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v66->fields.eventUpValIcon )
LABEL_80:
    sub_1C32E7C(Instance);
  EventUpValIconComponent__Set_40784360(v66->fields.eventUpValIcon, v52, (System_Int32_array *)Instance, v53, v54, 0);
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
  if ( (byte_4C3279C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_397/*"#,0"*/);
    byte_4C3279C = 1;
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
        attackLabel = (UIWidget_o *)System_Int32__ToString_65028652(
                                      (int32_t)&v12,
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0),
        !v11) )
  {
    sub_1C32E7C(attackLabel);
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
  if ( (byte_4C3279D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_397/*"#,0"*/);
    byte_4C3279D = 1;
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
        hpLabel = (UIWidget_o *)System_Int32__ToString_65028652((int32_t)&v12, (System_String_o *)StringLiteral_397/*"#,0"*/, 0),
        !v11) )
  {
    sub_1C32E7C(hpLabel);
  }
  UILabel__set_text(v11, (System_String_o *)hpLabel, 0);
}


void GrandServantListItemDraw__SetupMine(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        const MethodInfo *method)
{
  GrandServantListItemDraw_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  System_Collections_Generic_IEnumerable_T__o *EquipUserServantEntities_k__BackingField; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  GrandServantListItemDraw_o *v9; // x25
  int32_t FrameType; // w26
  const MethodInfo *SvtClassId; // x0
  int32_t v12; // w27
  GrandServantAssetSetting_o *Instance; // x0
  const MethodInfo *v14; // x4
  GrandServantAssetSetting_o *v15; // x0
  const MethodInfo *v16; // x4
  int32_t CardImageLimitCount; // w28
  Il2CppObject *Master_object; // x29
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x29
  int32_t v21; // w28
  UILabel_o *levelLabel; // x26
  int m_CachedPtr_high; // w24
  int32_t AtkBoostValue; // w26
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  GrandServantListItemDraw___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x27
  System_Func_object__int__o *_9__27_0; // x28
  Il2CppObject *v29; // x29
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  int m_CachedPtr; // w29
  int32_t HpBoostValue; // w25
  System_Collections_Generic_IEnumerable_T__o *v35; // x26
  GrandServantListItemDraw___c_c *v36; // x8
  System_Func_object__int__o *_9__27_1; // x27
  Il2CppObject *v38; // x28
  struct GrandServantListItemDraw___c_StaticFields *v39; // x0
  int32_t v40; // w0
  const MethodInfo *v41; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x25
  SkillInfo_array *v43; // x26
  Il2CppObject *skillInfoUiWidget; // x1
  intptr_t v45; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v48; // x8
  AppendSkillListComponent_o *appendSkillList; // x25
  SkillInfo_array *v50; // x26
  __int64 v51; // x24
  Il2CppObject *appendSkillInfoUiWidget; // x1
  intptr_t v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  intptr_t v56; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x25
  ServantCommandCardListComponent_o *svtCommandCardList; // x25
  int32_t v59; // w23
  const MethodInfo *v60; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  unsigned int v62; // w23
  unsigned int max_length; // w9
  unsigned int monitor; // w10
  UserServantEntity_o *v65; // x1
  const MethodInfo *v66; // x3
  __int64 value_8; // [xsp+8h] [xbp-88h]
  SkillInfo_array *v68; // [xsp+10h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v4 = this;
  if ( (byte_4C32798 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C32C20(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetupMine_b__27_0__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetupMine_b__27_1__);
    sub_1C32C20(&GrandServantListItemDraw___c_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C32C20(&UserServantEntity___TypeInfo);
    byte_4C32798 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v68 = 0;
  if ( !slotData )
    goto LABEL_73;
  UserServantEntity_k__BackingField = slotData->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)slotData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    this = (GrandServantListItemDraw_o *)sub_1C32CC8(UserServantEntity___TypeInfo, 0);
    EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this;
  }
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_73;
  v7 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  this = (GrandServantListItemDraw_o *)UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0, 0);
  lv = UserServantEntity_k__BackingField->fields.lv;
  if ( !this )
    goto LABEL_73;
  v9 = this;
  FrameType = UserServantEntity__GetFrameType(UserServantEntity_k__BackingField, (int32_t)this->fields.frameSprite, 0);
  SvtClassId = (const MethodInfo *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0);
  v12 = (int)SvtClassId;
  Instance = GrandServantAssetSetting__GetInstance(SvtClassId);
  if ( Instance )
    GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
      Instance,
      v4->fields.backgroundSprite,
      FrameType,
      v12,
      v14);
  value_8 = v8;
  v15 = GrandServantAssetSetting__GetInstance((const MethodInfo *)Instance);
  if ( v15 )
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v15, v4->fields.frameSprite, FrameType, v12, v16);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(UserServantEntity_k__BackingField, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v7;
  *(_QWORD *)&v72.fields.fakeValue = v8;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v72, 0);
  if ( !Master_object )
    goto LABEL_73;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0);
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  v21 = ServantImageLimitSealAfter;
  *(_QWORD *)&v73.fields.currentCryptoKey = v7;
  *(_QWORD *)&v73.fields.fakeValue = v8;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v73, 0);
  if ( !servantNarrowTexture )
    goto LABEL_73;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)this, v21, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_73;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v12, FrameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v4->fields.servantClassIcon;
  if ( !this )
    goto LABEL_73;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v4->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_73;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  m_CachedPtr_high = HIDWORD(v9->fields.m_CachedPtr);
  AtkBoostValue = UserServantEntity__get_AtkBoostValue(UserServantEntity_k__BackingField, 0);
  v25 = BasicHelper__ExcludeNull_object_(
          EquipUserServantEntities_k__BackingField,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v26 = GrandServantListItemDraw___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v26 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__27_0 = (System_Func_object__int__o *)v26->static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = GrandServantListItemDraw___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__27_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_0, v29, Method_GrandServantListItemDraw___c__SetupMine_b__27_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_UserServantEntity__int__o *)_9__27_0;
    sub_1C32BC4(&static_fields->__9__27_0, _9__27_0);
  }
  v31 = System_Linq_Enumerable__Sum_object_(
          v27,
          (System_Func_TSource__int__o *)_9__27_0,
          (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(v4, v31 + m_CachedPtr_high, AtkBoostValue > 0, v32);
  m_CachedPtr = v9->fields.m_CachedPtr;
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0);
  v35 = BasicHelper__ExcludeNull_object_(
          EquipUserServantEntities_k__BackingField,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v36 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v36 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__27_1 = (System_Func_object__int__o *)v36->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = GrandServantListItemDraw___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__27_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_1, v38, Method_GrandServantListItemDraw___c__SetupMine_b__27_1__, 0);
    v39 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v39->__9__27_1 = (struct System_Func_UserServantEntity__int__o *)_9__27_1;
    sub_1C32BC4(&v39->__9__27_1, _9__27_1);
  }
  v40 = System_Linq_Enumerable__Sum_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (System_Func_TSource__int__o *)_9__27_1,
          (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(v4, v40 + m_CachedPtr, HpBoostValue > 0, v41);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = v4->fields.skillListTreasureDevice;
  v43 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_41178676(v43, 0);
  if ( !tdInfo )
    goto LABEL_73;
  if ( !skillListTreasureDevice )
    goto LABEL_73;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)this,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0);
  this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_73;
  skillInfoUiWidget = (Il2CppObject *)v4->fields.skillInfoUiWidget;
  v45 = this->fields.m_CachedPtr;
  v46 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v45 )
    goto LABEL_73;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v45 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      skillInfoUiWidget,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = v45 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v48 + 32) = skillInfoUiWidget;
    sub_1C32BC4(v48 + 32, skillInfoUiWidget);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_43097220(UserServantEntity_k__BackingField, &v68, 0);
  if ( v68 && v68->max_length )
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_73;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v4->fields.appendSkillList;
    v50 = v68;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_41178676(v50, 0);
    v51 = value_8;
    if ( !appendSkillList )
      goto LABEL_73;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_73;
    appendSkillInfoUiWidget = (Il2CppObject *)v4->fields.appendSkillInfoUiWidget;
    v53 = this->fields.m_CachedPtr;
    v54 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v53 )
      goto LABEL_73;
    v55 = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        appendSkillInfoUiWidget,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = v53 + 8 * v55;
      LODWORD(this->fields.m_CancellationTokenSource) = v55 + 1;
      *(_QWORD *)(v56 + 32) = appendSkillInfoUiWidget;
      sub_1C32BC4(v56 + 32, appendSkillInfoUiWidget);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_73;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v51 = value_8;
    if ( !this )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_73;
  switchSkillInfo = v4->fields.switchSkillInfo;
  this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)this,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_73;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v4->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v74.fields.currentCryptoKey = v7;
  *(_QWORD *)&v74.fields.fakeValue = v51;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v74, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_73;
  ServantCommandCardListComponent__Set_40895188(svtCommandCardList, v59, (System_Int32_array *)this, 2, 0, 0);
  equipDraws = v4->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_73;
  v62 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v62 >= (int)max_length )
      break;
    if ( v62 >= max_length )
      goto LABEL_76;
    if ( EquipUserServantEntities_k__BackingField )
    {
      monitor = (unsigned int)EquipUserServantEntities_k__BackingField[1].monitor;
      this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v62];
      if ( (int)v62 >= (int)monitor )
      {
        v65 = 0;
      }
      else
      {
        if ( v62 >= monitor )
LABEL_76:
          sub_1C32E84(this);
        v65 = (UserServantEntity_o *)*((_QWORD *)&EquipUserServantEntities_k__BackingField[2].klass + (int)v62);
      }
      if ( this )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)this,
          v65,
          v62 == 1,
          slotData->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v60);
        equipDraws = v4->fields.equipDraws;
        ++v62;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_73;
  }
  this = (GrandServantListItemDraw_o *)v4->fields.pushIcon;
  if ( !this )
LABEL_73:
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    slotData->fields._IsPushServant_k__BackingField,
    0);
  GrandServantListItemDraw__SetUpEventUp(
    v4,
    UserServantEntity_k__BackingField,
    (UserServantEntity_array *)EquipUserServantEntities_k__BackingField,
    v66);
}


void GrandServantListItemDraw__SetupOther(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        GrandServantListQuestData_o *questData,
        bool isSelectable,
        const MethodInfo *method)
{
  GrandServantListItemDraw_o *v7; // x21
  struct ServantLeaderInfo_o *ServantLeaderInfo_k__BackingField; // x23
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  __int64 v10; // x19
  __int64 v11; // x26
  System_Collections_Generic_List_EquipTargetInfo__o *v12; // x24
  GrandServantListItemDraw_o *v13; // x28
  int32_t v14; // w27
  const MethodInfo *SvtClassId; // x0
  int32_t v16; // w29
  GrandServantAssetSetting_o *Instance; // x0
  const MethodInfo *v18; // x4
  GrandServantAssetSetting_o *v19; // x0
  const MethodInfo *v20; // x4
  int32_t CardImageLimitCount; // w22
  Il2CppObject *Master_object; // x19
  GrandServantListItemDraw_o *v23; // x27
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x22
  int32_t v26; // w19
  UILabel_o *levelLabel; // x19
  int m_CachedPtr_high; // w26
  int32_t AtkBoostValue; // w28
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  GrandServantListItemDraw___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x29
  System_Func_object__int__o *_9__28_0; // x22
  Il2CppObject *v34; // x19
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v36; // w0
  const MethodInfo *v37; // x3
  int m_CachedPtr; // w29
  int32_t HpBoostValue; // w27
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  GrandServantListItemDraw___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x28
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v44; // x19
  struct GrandServantListItemDraw___c_StaticFields *v45; // x0
  int32_t v46; // w0
  const MethodInfo *v47; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x22
  SkillInfo_array *v49; // x19
  Il2CppObject *skillInfoUiWidget; // x1
  intptr_t v51; // x8
  _QWORD *v52; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v54; // x8
  AppendSkillListComponent_o *appendSkillList; // x19
  SkillInfo_array *v56; // x22
  __int64 v57; // x26
  Il2CppObject *appendSkillInfoUiWidget; // x1
  intptr_t v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x25
  intptr_t v63; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x19
  ServantCommandCardListComponent_o *svtCommandCardList; // x22
  int32_t v66; // w0
  System_Int32_array *commandCardParam; // x19
  int32_t v68; // w25
  const MethodInfo *v69; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  int32_t v71; // w25
  int32_t max_length; // w9
  GrandServantListItemEquipDraw_o *v73; // x22
  EquipTargetInfo_o *v74; // x1
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  GrandServantListQuestData_o *questDataa; // [xsp+8h] [xbp-98h]
  int32_t frameType; // [xsp+10h] [xbp-90h]
  int32_t frameTypea[2]; // [xsp+10h] [xbp-90h]
  __int64 value; // [xsp+18h] [xbp-88h]
  SkillInfo_array *v82; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v7 = this;
  if ( (byte_4C32799 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_1C32C20(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetupOther_b__28_0__);
    sub_1C32C20(&Method_GrandServantListItemDraw___c__SetupOther_b__28_1__);
    this = (GrandServantListItemDraw_o *)sub_1C32C20(&GrandServantListItemDraw___c_TypeInfo);
    byte_4C32799 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v82 = 0;
  if ( !slotData )
    goto LABEL_70;
  ServantLeaderInfo_k__BackingField = slotData->fields._ServantLeaderInfo_k__BackingField;
  if ( !ServantLeaderInfo_k__BackingField )
    goto LABEL_70;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(
                          slotData->fields._ServantLeaderInfo_k__BackingField,
                          0);
  v11 = *(_QWORD *)&ServantLeaderInfo_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&ServantLeaderInfo_k__BackingField->fields.svtId.fields.fakeValue;
  v12 = EquipTargetInfoList;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(ServantLeaderInfo_k__BackingField, 0);
  lv = ServantLeaderInfo_k__BackingField->fields.lv;
  if ( !this )
    goto LABEL_70;
  v13 = this;
  v14 = ServantLeaderInfo__GetFrameType(ServantLeaderInfo_k__BackingField, (int32_t)this->fields.frameSprite, 0);
  SvtClassId = (const MethodInfo *)ServantLeaderInfo__GetSvtClassId(ServantLeaderInfo_k__BackingField, 0, 0, 0);
  v16 = (int)SvtClassId;
  Instance = GrandServantAssetSetting__GetInstance(SvtClassId);
  if ( Instance )
    GrandServantAssetSetting__SetGrandServantListBackgroundSprite(Instance, v7->fields.backgroundSprite, v14, v16, v18);
  value = v10;
  questDataa = questData;
  v19 = GrandServantAssetSetting__GetInstance((const MethodInfo *)Instance);
  if ( v19 )
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v19, v7->fields.frameSprite, v14, v16, v20);
  frameType = v14;
  CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(ServantLeaderInfo_k__BackingField, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v11;
  *(_QWORD *)&v86.fields.fakeValue = value;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v86, 0);
  if ( !Master_object )
    goto LABEL_70;
  v23 = v13;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0);
  servantNarrowTexture = v7->fields.servantNarrowTexture;
  v26 = ServantImageLimitSealAfter;
  *(_QWORD *)&v87.fields.currentCryptoKey = v11;
  *(_QWORD *)&v87.fields.fakeValue = value;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v87, 0);
  if ( !servantNarrowTexture )
    goto LABEL_70;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, (int32_t)this, v26, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_70;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)this, v16, frameType, 0, 1, 0, 0);
  this = (GrandServantListItemDraw_o *)v7->fields.servantClassIcon;
  if ( !this )
    goto LABEL_70;
  *(_QWORD *)frameTypea = v11;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)this, 0, 0);
  levelLabel = v7->fields.levelLabel;
  this = (GrandServantListItemDraw_o *)System_Int32__ToString((int32_t)&lv, 0);
  if ( !levelLabel )
    goto LABEL_70;
  UILabel__set_text(levelLabel, (System_String_o *)this, 0);
  m_CachedPtr_high = HIDWORD(v13->fields.m_CachedPtr);
  AtkBoostValue = ServantLeaderInfo__get_AtkBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v30 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v12,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v31 = GrandServantListItemDraw___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v31 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v31->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = GrandServantListItemDraw___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v34, Method_GrandServantListItemDraw___c__SetupOther_b__28_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_0;
    sub_1C32BC4(&static_fields->__9__28_0, _9__28_0);
  }
  v36 = System_Linq_Enumerable__Sum_object_(
          v32,
          (System_Func_TSource__int__o *)_9__28_0,
          (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupAtk(v7, v36 + m_CachedPtr_high, AtkBoostValue > 0, v37);
  m_CachedPtr = v23->fields.m_CachedPtr;
  HpBoostValue = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v40 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v12,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v41 = GrandServantListItemDraw___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)v40;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v41 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v41->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = GrandServantListItemDraw___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v44, Method_GrandServantListItemDraw___c__SetupOther_b__28_1__, 0);
    v45 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v45->__9__28_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_1;
    sub_1C32BC4(&v45->__9__28_1, _9__28_1);
  }
  v46 = System_Linq_Enumerable__Sum_object_(
          v42,
          (System_Func_TSource__int__o *)_9__28_1,
          (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupHp(v7, v46 + m_CachedPtr, HpBoostValue > 0, v47);
  ServantLeaderInfo__getSkillInfo(ServantLeaderInfo_k__BackingField, &skillInfoList, 0);
  ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfo_k__BackingField, &tdInfo, 0);
  skillListTreasureDevice = v7->fields.skillListTreasureDevice;
  v49 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_41178676(v49, 0);
  if ( !tdInfo )
    goto LABEL_70;
  if ( !skillListTreasureDevice )
    goto LABEL_70;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)this,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0);
  this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_70;
  skillInfoUiWidget = (Il2CppObject *)v7->fields.skillInfoUiWidget;
  v51 = this->fields.m_CachedPtr;
  v52 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v51 )
    goto LABEL_70;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v51 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      skillInfoUiWidget,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = v51 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v54 + 32) = skillInfoUiWidget;
    sub_1C32BC4(v54 + 32, skillInfoUiWidget);
  }
  ServantLeaderInfo__GetAppendPassiveSkillInfo_43398044(ServantLeaderInfo_k__BackingField, &v82, 0, 0);
  if ( v82 && v82->max_length )
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_70;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v7->fields.appendSkillList;
    v56 = v82;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_41178676(v56, 0);
    v57 = *(_QWORD *)frameTypea;
    if ( !appendSkillList )
      goto LABEL_70;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_70;
    appendSkillInfoUiWidget = (Il2CppObject *)v7->fields.appendSkillInfoUiWidget;
    v59 = this->fields.m_CachedPtr;
    v60 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v59 )
      goto LABEL_70;
    v61 = SLODWORD(this->fields.m_CancellationTokenSource);
    v62 = value;
    if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        appendSkillInfoUiWidget,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = v59 + 8 * v61;
      LODWORD(this->fields.m_CancellationTokenSource) = v61 + 1;
      *(_QWORD *)(v63 + 32) = appendSkillInfoUiWidget;
      sub_1C32BC4(v63 + 32, appendSkillInfoUiWidget);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_70;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v57 = *(_QWORD *)frameTypea;
    v62 = value;
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_70;
  switchSkillInfo = v7->fields.switchSkillInfo;
  this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                         (System_Collections_Generic_List_object__o *)this,
                                         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_70;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v7->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v88.fields.currentCryptoKey = v57;
  *(_QWORD *)&v88.fields.fakeValue = v62;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v88, 0);
  commandCardParam = ServantLeaderInfo_k__BackingField->fields.commandCardParam;
  v68 = v66;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_70;
  ServantCommandCardListComponent__Set_40894944(
    svtCommandCardList,
    v68,
    commandCardParam,
    (System_Int32_array *)this,
    2,
    0,
    0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_k__BackingField, 0);
  equipDraws = v7->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_70;
  v71 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( v71 >= max_length )
      break;
    if ( v71 >= (unsigned int)max_length )
      sub_1C32E84(this);
    if ( v12 )
    {
      v73 = equipDraws->m_Items[v71];
      if ( v71 >= v12->fields._size )
      {
        v74 = 0;
      }
      else
      {
        this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)v12,
                                               v71,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        v74 = (EquipTargetInfo_o *)this;
      }
      if ( v73 )
      {
        GrandServantListItemEquipDraw__Setup_32868492(
          v73,
          v74,
          v71 == 1,
          slotData->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v69);
        equipDraws = v7->fields.equipDraws;
        ++v71;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_70;
  }
  this = (GrandServantListItemDraw_o *)v7->fields.pushIcon;
  if ( !this )
LABEL_70:
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    slotData->fields._IsPushServant_k__BackingField,
    0);
  GrandServantListItemDraw__SetEventUpOther(v7, ServantLeaderInfo_k__BackingField, questDataa, v75);
  if ( questDataa && isSelectable )
    GrandServantListItemDraw__SetupRestriction(
      v7,
      slotData->fields._ServantLeaderInfo_k__BackingField,
      questDataa->fields._QuestRestriction_k__BackingField,
      v76);
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
  int monitor; // w26
  char v16; // w27
  int32_t monitor_high; // w24
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  int32_t limitCount; // w25
  int32_t v22; // w26
  int32_t DispLimitCount; // w0
  bool IsRestrictionServantIndividuality; // w0
  System_String_o *v25; // x1
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C3279E & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C32C20(&StringLiteral_6457/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    byte_4C3279E = 1;
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
      goto LABEL_27;
    v13 = IsSlotRestriction;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (monitor = (int)Instance[3].monitor,
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_1C32E7C(Instance);
    }
    v16 = v7 && !v13;
    if ( monitor >= 1
      && (monitor_high = HIDWORD(Instance[3].monitor),
          v16 &= monitor > 0,
          QuestRestrictionInfo__IsMyServantOrNpcRestriction_43340352(questRestriction, monitor_high, 0)) )
    {
      v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v19;
      *(_QWORD *)&v27.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v27, 0);
      limitCount = servantLeaderInfo->fields.limitCount;
      v22 = v20;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0);
      IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                            questRestriction,
                                            v22,
                                            limitCount,
                                            DispLimitCount,
                                            monitor_high,
                                            1,
                                            0);
    }
    else
    {
      IsRestrictionServantIndividuality = 0;
    }
    if ( (v16 & 1) != 0 || IsRestrictionServantIndividuality )
    {
LABEL_27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      GrandServantListItemDraw__SetRestrictionMaskMessage(this, v11, v12);
    }
    else if ( UniqueSvtRestriction || IsUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
      GrandServantListItemDraw__SetRestrictionWarningMessage(this, v25, v26);
    }
  }
}


void GrandServantListItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C327A3 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListItemDraw___c_TypeInfo);
    byte_4C327A3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v1;
  sub_1C32BC4(GrandServantListItemDraw___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4C327A4 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C327A4 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0) > 0;
}


int32_t GrandServantListItemDraw___c___SetEventUpOther_b__30_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C327A5 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C327A5 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
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
    sub_1C32E7C(this);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupMine_b__27_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.hp;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_0(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C32E7C(this);
  return e->fields.hp;
}


void GrandServantListItemDraw___c__DisplayClass30_0___ctor(
        GrandServantListItemDraw___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantListItemDraw___c__DisplayClass30_0___SetEventUpOther_b__2(
        GrandServantListItemDraw___c__DisplayClass30_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  GrandServantListItemDraw___c__DisplayClass30_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4C327A6 & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c__DisplayClass30_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C327A6 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}