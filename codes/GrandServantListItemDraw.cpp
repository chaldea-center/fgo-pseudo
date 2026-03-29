void GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B60A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4D2B60A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4D2B5FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    byte_4D2B5FF = 1;
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
    sub_1C93D2C(switchSkillInfo, method);
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

  if ( (byte_4D2B607 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2B607 = 1;
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
    sub_1C93D2C(restrictionMaskMessageText, v4);
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
  if ( (byte_4D2B5FE & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C93AD4(&StringLiteral_20632/*"img_frames_mask_grand_servantlist"*/);
    byte_4D2B5FE = 1;
  }
  equipDraws = v3->fields.equipDraws;
  if ( !equipDraws )
LABEL_9:
    sub_1C93D2C(this, method);
  v5 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C93D34(this);
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
  AtlasManager__SetGrandServantListImage(restrictionMaskSprite, (System_String_o *)StringLiteral_20632/*"img_frames_mask_grand_servantlist"*/, 0);
}


void GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_1C93D2C(0, method);
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  GrandServantListItemDraw_o *v38; // x29
  unsigned __int64 v39; // x28
  Il2CppObject *v40; // x20
  __int64 v41; // x22
  _DWORD *monitor; // x8
  int v43; // w8
  GrandServantListItemDraw_o *v44; // x19
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *attackLabel; // x19
  System_Func_int__bool__o *v54; // x25
  System_Func_TSource__bool__o *v55; // x1
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  struct QuestRestrictionInfo_o *v60; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v62; // x1
  int32_t v63; // w22
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  GrandServantListItemDraw___c_c *v65; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x20
  System_Func_object__bool__o *_9__30_0; // x19
  GrandServantListItemDraw_o *v68; // x26
  Il2CppObject *v69; // x23
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  GrandServantListItemDraw___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x20
  System_Func_object__int__o *_9__30_1; // x19
  GrandServantListItemDraw_o *v81; // x28
  Il2CppObject *v82; // x23
  struct GrandServantListItemDraw___c_StaticFields *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Int32_array *v91; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x20
  __int64 v93; // x23
  __int64 v94; // x24
  System_Int32_array *v95; // x19
  GrandServantListItemDraw_o *v96; // [xsp+8h] [xbp-A8h]
  ServantEntity_o *servantEntity; // [xsp+10h] [xbp-A0h]
  EventServantPointRankMaster_o *v98; // [xsp+18h] [xbp-98h]
  struct System_Int32_array *v99; // [xsp+28h] [xbp-88h]
  Il2CppObject *v100; // [xsp+30h] [xbp-80h]
  Il2CppObject *v101; // [xsp+38h] [xbp-78h]
  int32_t eventId; // [xsp+40h] [xbp-70h]
  bool isDuplicate; // [xsp+44h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  v6 = this;
  if ( (byte_4D2B603 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int____79098160);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_Func_EquipTargetInfo__bool__TypeInfo);
    sub_1C93AD4(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__);
    sub_1C93AD4(&GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C93AD4(&GrandServantListItemDraw___c_TypeInfo);
    byte_4D2B603 = 1;
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
  ServantLeaderInfo__getEventUpVal_44265520(servantLeaderInfo, &eventUpVallInfo, EventSetupInfo_k__BackingField, 0, 0);
  this = (GrandServantListItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v105.fields.currentCryptoKey = v11;
  *(_QWORD *)&v105.fields.fakeValue = v10;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v105, 0);
  if ( !v12 )
    goto LABEL_86;
  servantEntity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       v12,
                                       (int32_t)this,
                                       (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v96 = v6;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventDetailMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v15 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  v16 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v18 = questData->fields._EventSetupInfo_k__BackingField;
  if ( !v18 )
    goto LABEL_86;
  v19 = v18->fields.eventIdList;
  v98 = (EventServantPointRankMaster_o *)v14;
  if ( !v19 )
    goto LABEL_86;
  max_length = v19->max_length;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v100 = Master_object;
    v101 = v16;
    v99 = v19;
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
                                             (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !this
        || (this = (GrandServantListItemDraw_o *)EventDetailEntity__HasFlag(
                                                   (EventDetailEntity_o *)this,
                                                   0x800000000LL,
                                                   0),
            ((unsigned __int8)this & 1) == 0) )
      {
        if ( !v98 )
          goto LABEL_86;
        if ( EventServantPointRankMaster__IsEnableEvent(v98, eventId, 0) )
        {
          eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
          v24 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
          v23 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v106.fields.currentCryptoKey = v24;
          *(_QWORD *)&v106.fields.fakeValue = v23;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v106, 0);
          EnableEntity = EventServantPointRankMaster__GetEnableEntity(v98, eventId, eventSvtPoint, v25, 0);
          if ( EnableEntity )
            svtPointRank = EnableEntity->fields.svtPointRank;
          else
            svtPointRank = 0;
          v28 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_42447564(v28, eventId, 0);
          if ( !v28 )
            goto LABEL_86;
          EventMargeItemUpValInfo__SetServantPointInfo(v28, servantLeaderInfo->fields.eventSvtPoint, svtPointRank, 1, 0);
          if ( !v17 )
            goto LABEL_86;
          System_Collections_Generic_List_object___Insert(
            v17,
            0,
            (Il2CppObject *)v28,
            (const MethodInfo_387A74C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        }
        v29 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
        EventPersonalMargeUpValInfo___ctor(v29, eventId, servantEntity, 0);
        this = (GrandServantListItemDraw_o *)eventUpVallInfo;
        if ( !eventUpVallInfo )
          goto LABEL_86;
        this = (GrandServantListItemDraw_o *)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
        v30 = (QuestPhaseMaster_o *)v101;
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
          v38 = this;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_60:
      v19 = v99;
      Master_object = v100;
      ++v21;
      LODWORD(max_length) = v99->max_length;
      if ( (__int64)v21 >= (int)max_length )
        goto LABEL_61;
    }
    v39 = 0;
    while ( v39 < (unsigned int)m_CancellationTokenSource )
    {
      v40 = (Il2CppObject *)*((_QWORD *)&v38->fields.backgroundSprite + v39);
      if ( !questData->fields._QuestRestriction_k__BackingField )
        goto LABEL_90;
      v41 = sub_1C93D20(GrandServantListItemDraw___c__DisplayClass30_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v41, 0);
      if ( !v40 )
        goto LABEL_86;
      monitor = v40[2].monitor;
      if ( !monitor )
        goto LABEL_86;
      if ( !v15 )
        goto LABEL_86;
      this = (GrandServantListItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                                             monitor[4],
                                             (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_86;
      v43 = (int)this->fields.m_CancellationTokenSource;
      v44 = this;
      if ( v43 == 1 || v43 == 16 )
        goto LABEL_91;
      QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
      if ( !QuestRestriction_k__BackingField )
        goto LABEL_86;
      if ( eventId == QuestRestriction_k__BackingField->fields.eventId )
      {
LABEL_91:
        v46 = questData->fields._QuestRestriction_k__BackingField;
        if ( !v46 )
          goto LABEL_86;
        if ( !v30 )
          goto LABEL_86;
        this = (GrandServantListItemDraw_o *)QuestPhaseMaster__GetEntity(
                                               v30,
                                               v46->fields.questId,
                                               v46->fields.questPhase,
                                               0);
        if ( !v41 )
          goto LABEL_86;
        *(_QWORD *)(v41 + 16) = this;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 16), (int32_t)this, v47, v48, v49, v50, v51, v52);
        attackLabel = (System_Collections_Generic_IEnumerable_TSource__o *)v44->fields.attackLabel;
        if ( !attackLabel )
          goto LABEL_86;
        if ( !attackLabel[1].monitor
          || (v54 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo),
              System_Func_int__bool____ctor(
                v54,
                (Il2CppObject *)v41,
                Method_GrandServantListItemDraw___c__DisplayClass30_0__SetEventUpOther_b__2__,
                0),
              v55 = (System_Func_TSource__bool__o *)v54,
              v30 = (QuestPhaseMaster_o *)v101,
              this = (GrandServantListItemDraw_o *)System_Linq_Enumerable__Any_int__52110008(
                                                     attackLabel,
                                                     v55,
                                                     (const MethodInfo_31B22B8 *)Method_System_Linq_Enumerable_Any_int____79098160),
              ((unsigned __int8)this & 1) != 0) )
        {
LABEL_90:
          if ( !v17 )
            goto LABEL_86;
          items = v17->fields._items;
          v57 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_86;
          size = v17->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v40,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v59[4] = (Il2CppClass *)v40;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v59 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v38->fields.m_CancellationTokenSource;
      if ( (__int64)++v39 >= (int)m_CancellationTokenSource )
        goto LABEL_60;
    }
LABEL_87:
    sub_1C93D34(this);
  }
LABEL_61:
  v60 = questData->fields._QuestRestriction_k__BackingField;
  this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !this )
LABEL_86:
    sub_1C93D2C(this, servantLeaderInfo);
  v6 = v96;
  if ( v60 )
  {
    AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                             (PartyOrganizationUtility_o *)this,
                             &isDuplicate,
                             (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v17,
                             0);
    this = (GrandServantListItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_86;
    v62 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
  }
  else
  {
    v62 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v17;
  }
  questData = (GrandServantListQuestData_o *)PartyOrganizationUtility__GetAddUpValInfos(
                                               (PartyOrganizationUtility_o *)this,
                                               v62,
                                               0);
LABEL_67:
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
  if ( !this )
    goto LABEL_86;
  v63 = (int32_t)this->fields.m_CancellationTokenSource;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(servantLeaderInfo, 0);
  v65 = GrandServantListItemDraw___c_TypeInfo;
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v65 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__bool__o *)v65->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    v68 = v6;
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = GrandServantListItemDraw___c_TypeInfo;
    }
    v69 = (Il2CppObject *)v65->static_fields->__9;
    _9__30_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EquipTargetInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__30_0, v69, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_EquipTargetInfo__bool__o *)_9__30_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
      (int32_t)_9__30_0,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    v6 = v68;
  }
  v77 = System_Linq_Enumerable__Where_object_(
          v66,
          (System_Func_TSource__bool__o *)_9__30_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EquipTargetInfo___);
  v78 = GrandServantListItemDraw___c_TypeInfo;
  v79 = v77;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v78 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__30_1 = (System_Func_object__int__o *)v78->static_fields->__9__30_1;
  if ( !_9__30_1 )
  {
    v81 = v6;
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = GrandServantListItemDraw___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v78->static_fields->__9;
    _9__30_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__30_1, v82, Method_GrandServantListItemDraw___c__SetEventUpOther_b__30_1__, 0);
    v83 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v83->__9__30_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__30_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v83->__9__30_1, (int32_t)_9__30_1, v84, v85, v86, v87, v88, v89);
    v6 = v81;
  }
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v79,
                                                               (System_Func_TSource__TResult__o *)_9__30_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
  v91 = System_Linq_Enumerable__ToArray_int_(
          v90,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  eventUpValIcon = v6->fields.eventUpValIcon;
  v94 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  v95 = v91;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v94;
  *(_QWORD *)&v107.fields.fakeValue = v93;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v107, 0);
  if ( !eventUpValIcon )
    goto LABEL_86;
  EventUpValIconComponent__Set_41602748(
    eventUpValIcon,
    (EventMargeItemUpValInfo_array *)questData,
    v95,
    (int32_t)this,
    v63,
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

  if ( (byte_4D2B608 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B608 = 1;
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
      sub_1C93D2C(restrictionMaskMessageText, v6);
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

  if ( (byte_4D2B609 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B609 = 1;
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
    sub_1C93D2C(restrictionWarningIcon, v6);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x19
  UserServantEntity_o *v14; // x27
  __int64 v15; // x23
  __int64 v16; // x24
  __int128 v17; // q0
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v19; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v21; // x27
  __int64 v22; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x25
  struct System_Int32_array *eventIdList; // x19
  il2cpp_array_size_t v25; // x8
  ServantEntity_o *v26; // x25
  unsigned __int64 v27; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x24
  int32_t v29; // w26
  __int128 v30; // q0
  int64_t v31; // x27
  int32_t SvtId; // w4
  int32_t BuddyPoint; // w27
  UserServantEntity_o *v34; // x25
  int32_t v35; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v37; // w29
  EventMargeItemUpValInfo_o *v38; // x28
  EventPersonalMargeUpValInfo_o *v39; // x27
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int v46; // w8
  int64_t v47; // x26
  unsigned int v48; // w27
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  __int64 v54; // x23
  __int64 v55; // x24
  EventMargeItemUpValInfo_array *v56; // x22
  int32_t v57; // w23
  int32_t v58; // w20
  GrandServantListItemDraw___c_c *v59; // x0
  System_Predicate_long__o *_9__29_0; // x24
  Il2CppObject *v61; // x25
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Int64_array *All_long; // x0
  GrandServantListItemDraw___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x21
  System_Func_long__int__o *_9__29_1; // x24
  Il2CppObject *v73; // x25
  struct GrandServantListItemDraw___c_StaticFields *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  GrandServantListItemDraw_o *v82; // [xsp+10h] [xbp-F0h]
  ServantEntity_o *v83; // [xsp+18h] [xbp-E8h]
  UserEventServantPointMaster_o *v84; // [xsp+20h] [xbp-E0h]
  System_Int64_array *equipIds; // [xsp+28h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+50h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+70h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+90h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_4D2B602 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindAll_long___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_long__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&System_Func_long__int__TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&System_Predicate_long__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__);
    sub_1C93AD4(&GrandServantListItemDraw___c_TypeInfo);
    byte_4D2B602 = 1;
  }
  entity = 0;
  eventUpVallInfo = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v82 = this;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_80;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v10 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(v11, v10, 0, 0, 0, 0);
  equipIds = (System_Int64_array *)sub_1C93B7C(long___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    (System_Array_o *)equipIds,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6,
    0);
  if ( !equipUserServantEntities )
    goto LABEL_80;
  max_length = equipUserServantEntities->max_length;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)max_length )
    {
      v14 = equipUserServantEntities->m_Items[v13];
      if ( v14 )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v91.fields.currentCryptoKey = v16;
        *(_QWORD *)&v91.fields.fakeValue = v15;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v91, 0);
        if ( (Instance & 0x80000000) == 0 )
        {
          v17 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v17;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v87 = v88;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v87, 0);
          if ( !equipIds )
            goto LABEL_80;
          if ( v13 >= LODWORD(equipIds->max_length) )
            break;
          equipIds->m_Items[v13] = Instance;
        }
      }
      LODWORD(max_length) = equipUserServantEntities->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_19;
    }
LABEL_81:
    sub_1C93D34(Instance);
  }
LABEL_19:
  if ( !userServantEntity )
    goto LABEL_80;
  UserServantEntity__getEventUpVal_43870140(userServantEntity, &eventUpVallInfo, v11, equipIds, 0, 1, 0, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v84 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v92.fields.currentCryptoKey = v22;
  *(_QWORD *)&v92.fields.fakeValue = v21;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v92, 0);
  if ( !v23 )
    goto LABEL_80;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        v23,
                        Instance,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v11 )
    goto LABEL_80;
  eventIdList = v11->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_80;
  v25 = eventIdList->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = (ServantEntity_o *)Instance;
    v27 = 0;
    p_userId = &userServantEntity->fields.userId;
    v83 = (ServantEntity_o *)Instance;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
        goto LABEL_81;
      if ( !Master_object )
        goto LABEL_80;
      v29 = eventIdList->m_Items[v27];
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v29, 0) )
      {
        v30 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v88.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v86 = v88;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v86, 0);
        SvtId = UserServantEntity__getSvtId(userServantEntity, 0);
        Instance = (int64_t)v84;
        if ( !v84 )
          goto LABEL_80;
        if ( UserEventServantPointMaster__TryGetEntity(v84, &entity, v31, v29, SvtId, 0) )
        {
          Instance = (int64_t)entity;
          if ( !entity )
            goto LABEL_80;
          BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
        }
        else
        {
          BuddyPoint = 0;
        }
        v34 = userServantEntity;
        v35 = UserServantEntity__getSvtId(userServantEntity, 0);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)Master_object,
                         v29,
                         BuddyPoint,
                         v35,
                         0);
        v37 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
        v38 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_42447564(v38, v29, 0);
        if ( !v38 )
          goto LABEL_80;
        EventMargeItemUpValInfo__SetServantPointInfo(v38, BuddyPoint, v37, 0, 0);
        if ( !v19 )
          goto LABEL_80;
        System_Collections_Generic_List_object___Insert(
          v19,
          0,
          (Il2CppObject *)v38,
          (const MethodInfo_387A74C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        userServantEntity = v34;
        v26 = v83;
      }
      v39 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v39, v29, v26, 0);
      Instance = (int64_t)eventUpVallInfo;
      if ( !eventUpVallInfo )
        goto LABEL_80;
      Instance = (int64_t)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
      if ( !v39 )
        goto LABEL_80;
      EventPersonalMargeUpValInfo__Add(v39, (EventDropItemUpValInfo_array *)Instance, 0);
      Instance = EventPersonalMargeUpValInfo__IsEmpty(v39, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = (int64_t)EventPersonalMargeUpValInfo__GetList(v39, 0);
        if ( !Instance )
          goto LABEL_80;
        v46 = *(_DWORD *)(Instance + 24);
        v47 = Instance;
        if ( v46 >= 1 )
          break;
      }
LABEL_61:
      LODWORD(v25) = eventIdList->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_62;
    }
    v48 = 0;
    while ( v48 < v46 )
    {
      v8 = *(_QWORD *)(v47 + 8LL * (int)v48 + 32);
      if ( !v8 )
        goto LABEL_80;
      if ( *(_DWORD *)(v8 + 60) != 111 )
      {
        if ( !v19 )
          goto LABEL_80;
        items = v19->fields._items;
        v50 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_80;
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)v8,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v8;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 4), v8, v40, v41, v42, v43, v44, v45);
        }
      }
      v46 = *(_DWORD *)(v47 + 24);
      if ( (int)++v48 >= v46 )
        goto LABEL_61;
    }
    goto LABEL_81;
  }
LABEL_62:
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                    (PartyOrganizationUtility_o *)Instance,
                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v19,
                    0);
  v55 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v56 = AddUpValInfos;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v55;
  *(_QWORD *)&v93.fields.fakeValue = v54;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v93, 0);
  Instance = (int64_t)UserServantEntity__GetOverwriteStatus(userServantEntity, 0, 0);
  if ( !Instance )
    goto LABEL_80;
  v58 = *(_DWORD *)(Instance + 24);
  v59 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v59 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_0 = v59->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = GrandServantListItemDraw___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__29_0 = (System_Predicate_long__o *)sub_1C93D20(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__29_0, v61, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
      (int32_t)_9__29_0,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  All_long = System_Array__FindAll_long_(
               equipIds,
               (System_Predicate_T__o *)_9__29_0,
               (const MethodInfo_32A950C *)Method_System_Array_FindAll_long___);
  v70 = GrandServantListItemDraw___c_TypeInfo;
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)All_long;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v70 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__29_1 = v70->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v70->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v70);
      v70 = GrandServantListItemDraw___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v70->static_fields->__9;
    _9__29_1 = (System_Func_long__int__o *)sub_1C93D20(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__29_1, v73, Method_GrandServantListItemDraw___c__SetUpEventUp_b__29_1__, 0);
    v74 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v74->__9__29_1 = _9__29_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v74->__9__29_1, (int32_t)_9__29_1, v75, v76, v77, v78, v79, v80);
  }
  v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v71,
                                                               (System_Func_TSource__TResult__o *)_9__29_1,
                                                               (const MethodInfo_31D903C *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (int64_t)System_Linq_Enumerable__ToArray_int_(
                        v81,
                        (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v82->fields.eventUpValIcon )
LABEL_80:
    sub_1C93D2C(Instance, v8);
  EventUpValIconComponent__Set_41602748(v82->fields.eventUpValIcon, v56, (System_Int32_array *)Instance, v57, v58, 0);
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
  UILabel_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = atk;
  if ( (byte_4D2B604 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    byte_4D2B604 = 1;
  }
  v10.fields.g = 0.92157;
  attackLabel = (UIWidget_o *)this->fields.attackLabel;
  if ( isAtkBoost )
    v10.fields.b = 0.015686;
  else
    v10.fields.b = 1.0;
  if ( !isAtkBoost )
    v10.fields.g = 1.0;
  if ( !attackLabel
    || (v10.fields.r = 1.0,
        v10.fields.a = 1.0,
        UIWidget__set_color(attackLabel, v10, 0),
        v8 = this->fields.attackLabel,
        attackLabel = (UIWidget_o *)System_Int32__ToString_65934220(
                                      (int32_t)&v9,
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
                                      0),
        !v8) )
  {
    sub_1C93D2C(attackLabel, *(_QWORD *)&atk);
  }
  UILabel__set_text(v8, (System_String_o *)attackLabel, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemDraw__SetupHp(
        GrandServantListItemDraw_o *this,
        int32_t hp,
        bool isHpBoost,
        const MethodInfo *method)
{
  UIWidget_o *hpLabel; // x0
  UILabel_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = hp;
  if ( (byte_4D2B605 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    byte_4D2B605 = 1;
  }
  v10.fields.g = 0.92157;
  hpLabel = (UIWidget_o *)this->fields.hpLabel;
  if ( isHpBoost )
    v10.fields.b = 0.015686;
  else
    v10.fields.b = 1.0;
  if ( !isHpBoost )
    v10.fields.g = 1.0;
  if ( !hpLabel
    || (v10.fields.r = 1.0,
        v10.fields.a = 1.0,
        UIWidget__set_color(hpLabel, v10, 0),
        v8 = this->fields.hpLabel,
        hpLabel = (UIWidget_o *)System_Int32__ToString_65934220((int32_t)&v9, (System_String_o *)StringLiteral_397/*"#,0"*/, 0),
        !v8) )
  {
    sub_1C93D2C(hpLabel, *(_QWORD *)&hp);
  }
  UILabel__set_text(v8, (System_String_o *)hpLabel, 0);
}


void GrandServantListItemDraw__SetupMine(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        const MethodInfo *method)
{
  GrandServantListSlotData_o *v3; // x20
  GrandServantListItemDraw_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  GrandServantListItemDraw_o *EquipUserServantEntities_k__BackingField; // x22
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
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w0
  const MethodInfo *v38; // x3
  int m_CachedPtr; // w29
  int32_t HpBoostValue; // w25
  System_Collections_Generic_IEnumerable_T__o *v41; // x26
  GrandServantListItemDraw___c_c *v42; // x8
  System_Func_object__int__o *_9__27_1; // x27
  Il2CppObject *v44; // x28
  struct GrandServantListItemDraw___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w0
  const MethodInfo *v53; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x25
  SkillInfo_array *v55; // x26
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
  AppendSkillListComponent_o *appendSkillList; // x25
  SkillInfo_array *v67; // x26
  __int64 v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  intptr_t v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  intptr_t v78; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x25
  ServantCommandCardListComponent_o *svtCommandCardList; // x25
  int32_t v81; // w23
  const MethodInfo *v82; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  unsigned int v84; // w23
  unsigned int max_length; // w9
  unsigned int m_CancellationTokenSource; // w10
  const MethodInfo *v87; // x3
  __int64 value_8; // [xsp+8h] [xbp-88h]
  SkillInfo_array *v89; // [xsp+10h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  v3 = slotData;
  v4 = this;
  if ( (byte_4D2B600 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_UserServantEntity___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C93AD4(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetupMine_b__27_0__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetupMine_b__27_1__);
    sub_1C93AD4(&GrandServantListItemDraw___c_TypeInfo);
    this = (GrandServantListItemDraw_o *)sub_1C93AD4(&UserServantEntity___TypeInfo);
    byte_4D2B600 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v89 = 0;
  if ( !v3 )
    goto LABEL_73;
  UserServantEntity_k__BackingField = v3->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = (GrandServantListItemDraw_o *)v3->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    this = (GrandServantListItemDraw_o *)sub_1C93B7C(UserServantEntity___TypeInfo, 0);
    EquipUserServantEntities_k__BackingField = this;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v93.fields.currentCryptoKey = v7;
  *(_QWORD *)&v93.fields.fakeValue = v8;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v93, 0);
  if ( !Master_object )
    goto LABEL_73;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 (int32_t)this,
                                 CardImageLimitCount,
                                 0);
  servantNarrowTexture = v4->fields.servantNarrowTexture;
  v21 = ServantImageLimitSealAfter;
  *(_QWORD *)&v94.fields.currentCryptoKey = v7;
  *(_QWORD *)&v94.fields.fakeValue = v8;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v94, 0);
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
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
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
    _9__27_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_0, v29, Method_GrandServantListItemDraw___c__SetupMine_b__27_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__27_0 = (struct System_Func_UserServantEntity__int__o *)_9__27_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
      (int32_t)_9__27_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = System_Linq_Enumerable__Sum_object_(
          v27,
          (System_Func_TSource__int__o *)_9__27_0,
          (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(v4, v37 + m_CachedPtr_high, AtkBoostValue > 0, v38);
  m_CachedPtr = v9->fields.m_CachedPtr;
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0);
  v41 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v42 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v42 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__27_1 = (System_Func_object__int__o *)v42->static_fields->__9__27_1;
  if ( !_9__27_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = GrandServantListItemDraw___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__27_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_1, v44, Method_GrandServantListItemDraw___c__SetupMine_b__27_1__, 0);
    v45 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v45->__9__27_1 = (struct System_Func_UserServantEntity__int__o *)_9__27_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v45->__9__27_1, (int32_t)_9__27_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__Sum_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__int__o *)_9__27_1,
          (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(v4, v52 + m_CachedPtr, HpBoostValue > 0, v53);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = v4->fields.skillListTreasureDevice;
  v55 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42003760(v55, 0);
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
    0,
    0);
  this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_73;
  slotData = (GrandServantListSlotData_o *)v4->fields.skillInfoUiWidget;
  v62 = this->fields.m_CachedPtr;
  v63 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v62 )
    goto LABEL_73;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v62 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = v62 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v65 + 32) = slotData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 32), (int32_t)slotData, v56, v57, v58, v59, v60, v61);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_43897984(UserServantEntity_k__BackingField, &v89, 0);
  if ( v89 && v89->max_length )
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_73;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v4->fields.appendSkillList;
    v67 = v89;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42003760(v67, 0);
    v68 = value_8;
    if ( !appendSkillList )
      goto LABEL_73;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v4->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_73;
    slotData = (GrandServantListSlotData_o *)v4->fields.appendSkillInfoUiWidget;
    v75 = this->fields.m_CachedPtr;
    v76 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v75 )
      goto LABEL_73;
    v77 = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)v77 >= *(_DWORD *)(v75 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = v75 + 8 * v77;
      LODWORD(this->fields.m_CancellationTokenSource) = v77 + 1;
      *(_QWORD *)(v78 + 32) = slotData;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 32), (int32_t)slotData, v69, v70, v71, v72, v73, v74);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v4->fields.appendSkillList;
    if ( !this )
      goto LABEL_73;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v68 = value_8;
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
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_73;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v4->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v95.fields.currentCryptoKey = v7;
  *(_QWORD *)&v95.fields.fakeValue = v68;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v95, 0);
  this = (GrandServantListItemDraw_o *)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_73;
  ServantCommandCardListComponent__Set_41801016(svtCommandCardList, v81, (System_Int32_array *)this, 2, 0, 0);
  equipDraws = v4->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_73;
  v84 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v84 >= (int)max_length )
      break;
    if ( v84 >= max_length )
      goto LABEL_76;
    if ( EquipUserServantEntities_k__BackingField )
    {
      m_CancellationTokenSource = (unsigned int)EquipUserServantEntities_k__BackingField->fields.m_CancellationTokenSource;
      this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v84];
      if ( (int)v84 >= (int)m_CancellationTokenSource )
      {
        slotData = 0;
      }
      else
      {
        if ( v84 >= m_CancellationTokenSource )
LABEL_76:
          sub_1C93D34(this);
        slotData = (GrandServantListSlotData_o *)*((_QWORD *)&EquipUserServantEntities_k__BackingField->fields.backgroundSprite
                                                 + (int)v84);
      }
      if ( this )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)this,
          (UserServantEntity_o *)slotData,
          v84 == 1,
          v3->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v82);
        equipDraws = v4->fields.equipDraws;
        ++v84;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_73;
  }
  this = (GrandServantListItemDraw_o *)v4->fields.pushIcon;
  if ( !this )
LABEL_73:
    sub_1C93D2C(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetUpEventUp(
    v4,
    UserServantEntity_k__BackingField,
    (UserServantEntity_array *)EquipUserServantEntities_k__BackingField,
    v87);
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
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w0
  const MethodInfo *v43; // x3
  int m_CachedPtr; // w29
  int32_t HpBoostValue; // w27
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  GrandServantListItemDraw___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x28
  System_Func_object__int__o *_9__28_1; // x22
  Il2CppObject *v50; // x19
  struct GrandServantListItemDraw___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w0
  const MethodInfo *v59; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x22
  SkillInfo_array *v61; // x19
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  intptr_t v68; // x8
  _QWORD *v69; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v71; // x8
  AppendSkillListComponent_o *appendSkillList; // x19
  SkillInfo_array *v73; // x22
  __int64 v74; // x26
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  intptr_t v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  __int64 v84; // x25
  intptr_t v85; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x19
  ServantCommandCardListComponent_o *svtCommandCardList; // x22
  int32_t v88; // w0
  System_Int32_array *commandCardParam; // x19
  int32_t v90; // w25
  const MethodInfo *v91; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  int32_t v93; // w25
  int32_t max_length; // w9
  GrandServantListItemEquipDraw_o *v95; // x22
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x3
  GrandServantListQuestData_o *questDataa; // [xsp+8h] [xbp-98h]
  int32_t frameType; // [xsp+10h] [xbp-90h]
  int32_t frameTypea[2]; // [xsp+10h] [xbp-90h]
  __int64 value; // [xsp+18h] [xbp-88h]
  SkillInfo_array *v103; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  v6 = slotData;
  v7 = this;
  if ( (byte_4D2B601 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
    sub_1C93AD4(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetupOther_b__28_0__);
    sub_1C93AD4(&Method_GrandServantListItemDraw___c__SetupOther_b__28_1__);
    this = (GrandServantListItemDraw_o *)sub_1C93AD4(&GrandServantListItemDraw___c_TypeInfo);
    byte_4D2B601 = 1;
  }
  tdInfo = 0;
  skillInfoList = 0;
  v103 = 0;
  if ( !v6 )
    goto LABEL_70;
  ServantLeaderInfo_k__BackingField = v6->fields._ServantLeaderInfo_k__BackingField;
  if ( !ServantLeaderInfo_k__BackingField )
    goto LABEL_70;
  EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(v6->fields._ServantLeaderInfo_k__BackingField, 0);
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v107.fields.currentCryptoKey = v11;
  *(_QWORD *)&v107.fields.fakeValue = value;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v107, 0);
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
  *(_QWORD *)&v108.fields.currentCryptoKey = v11;
  *(_QWORD *)&v108.fields.fakeValue = value;
  this = (GrandServantListItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v108, 0);
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
          (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
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
    _9__28_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v34, Method_GrandServantListItemDraw___c__SetupOther_b__28_0__, 0);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__Sum_object_(
          v32,
          (System_Func_TSource__int__o *)_9__28_0,
          (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupAtk(v7, v42 + m_CachedPtr_high, AtkBoostValue > 0, v43);
  m_CachedPtr = v23->fields.m_CachedPtr;
  HpBoostValue = ServantLeaderInfo__get_HpBoostValue(ServantLeaderInfo_k__BackingField, 0);
  v46 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v12,
          (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_EquipTargetInfo___);
  v47 = GrandServantListItemDraw___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v47 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v47->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = GrandServantListItemDraw___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_EquipTargetInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v50, Method_GrandServantListItemDraw___c__SetupOther_b__28_1__, 0);
    v51 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v51->__9__28_1 = (struct System_Func_EquipTargetInfo__int__o *)_9__28_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v51->__9__28_1, (int32_t)_9__28_1, v52, v53, v54, v55, v56, v57);
  }
  v58 = System_Linq_Enumerable__Sum_object_(
          v48,
          (System_Func_TSource__int__o *)_9__28_1,
          (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_EquipTargetInfo___);
  GrandServantListItemDraw__SetupHp(v7, v58 + m_CachedPtr, HpBoostValue > 0, v59);
  ServantLeaderInfo__getSkillInfo(ServantLeaderInfo_k__BackingField, &skillInfoList, 0);
  ServantLeaderInfo__getTreasureDeviceInfo(ServantLeaderInfo_k__BackingField, &tdInfo, 0);
  skillListTreasureDevice = v7->fields.skillListTreasureDevice;
  v61 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42003760(v61, 0);
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
    0,
    0);
  this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
  if ( !this )
    goto LABEL_70;
  slotData = (GrandServantListSlotData_o *)v7->fields.skillInfoUiWidget;
  v68 = this->fields.m_CachedPtr;
  v69 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v68 )
    goto LABEL_70;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v68 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)slotData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = v68 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v71 + 32) = slotData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v71 + 32), (int32_t)slotData, v62, v63, v64, v65, v66, v67);
  }
  ServantLeaderInfo__GetAppendPassiveSkillInfo_44278344(ServantLeaderInfo_k__BackingField, &v103, 0, 0);
  if ( v103 && v103->max_length )
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_70;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    appendSkillList = v7->fields.appendSkillList;
    v73 = v103;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (GrandServantListItemDraw_o *)LocalizationManager__GetLevelList_42003760(v73, 0);
    v74 = *(_QWORD *)frameTypea;
    if ( !appendSkillList )
      goto LABEL_70;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)this, 0);
    this = (GrandServantListItemDraw_o *)v7->fields.switchSkillUIList;
    if ( !this )
      goto LABEL_70;
    slotData = (GrandServantListSlotData_o *)v7->fields.appendSkillInfoUiWidget;
    v81 = this->fields.m_CachedPtr;
    v82 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v81 )
      goto LABEL_70;
    v83 = SLODWORD(this->fields.m_CancellationTokenSource);
    v84 = value;
    if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)slotData,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = v81 + 8 * v83;
      LODWORD(this->fields.m_CancellationTokenSource) = v83 + 1;
      *(_QWORD *)(v85 + 32) = slotData;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v85 + 32), (int32_t)slotData, v75, v76, v77, v78, v79, v80);
    }
  }
  else
  {
    this = (GrandServantListItemDraw_o *)v7->fields.appendSkillList;
    if ( !this )
      goto LABEL_70;
    this = (GrandServantListItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v74 = *(_QWORD *)frameTypea;
    v84 = value;
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
                                         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_70;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0, 0);
  svtCommandCardList = v7->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v74;
  *(_QWORD *)&v109.fields.fakeValue = v84;
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v109, 0);
  commandCardParam = ServantLeaderInfo_k__BackingField->fields.commandCardParam;
  v90 = v88;
  this = (GrandServantListItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(ServantLeaderInfo_k__BackingField, 0);
  if ( !svtCommandCardList )
    goto LABEL_70;
  ServantCommandCardListComponent__Set_41800772(
    svtCommandCardList,
    v90,
    commandCardParam,
    (System_Int32_array *)this,
    2,
    0,
    0);
  ServantLeaderInfo__SetEquipImagePartsGroupIdxs(ServantLeaderInfo_k__BackingField, 0);
  equipDraws = v7->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_70;
  v93 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( v93 >= max_length )
      break;
    if ( v93 >= (unsigned int)max_length )
      sub_1C93D34(this);
    if ( v12 )
    {
      v95 = equipDraws->m_Items[v93];
      if ( v93 >= v12->fields._size )
      {
        slotData = 0;
      }
      else
      {
        this = (GrandServantListItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)v12,
                                               v93,
                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EquipTargetInfo__get_Item__);
        slotData = (GrandServantListSlotData_o *)this;
      }
      if ( v95 )
      {
        GrandServantListItemEquipDraw__Setup_33465284(
          v95,
          (EquipTargetInfo_o *)slotData,
          v93 == 1,
          v6->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v91);
        equipDraws = v7->fields.equipDraws;
        ++v93;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_70;
  }
  this = (GrandServantListItemDraw_o *)v7->fields.pushIcon;
  if ( !this )
LABEL_70:
    sub_1C93D2C(this, slotData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6->fields._IsPushServant_k__BackingField, 0);
  GrandServantListItemDraw__SetEventUpOther(v7, ServantLeaderInfo_k__BackingField, questDataa, v96);
  if ( questDataa && isSelectable )
    GrandServantListItemDraw__SetupRestriction(
      v7,
      v6->fields._ServantLeaderInfo_k__BackingField,
      questDataa->fields._QuestRestriction_k__BackingField,
      v97);
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
  __int64 v19; // x25
  __int64 v20; // x26
  int32_t v21; // w0
  int32_t limitCount; // w25
  int32_t v23; // w26
  int32_t DispLimitCount; // w0
  bool IsRestrictionServantIndividuality; // w0
  System_String_o *v26; // x1
  const MethodInfo *v27; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4D2B606 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C93AD4(&StringLiteral_6488/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    byte_4D2B606 = 1;
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
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (klass = (int)Instance[5].klass,
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_1C93D2C(Instance, v15);
    }
    v17 = v7 && !v13;
    if ( klass >= 1
      && (klass_high = HIDWORD(Instance[5].klass),
          v17 &= klass > 0,
          QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(questRestriction, klass_high, 0)) )
    {
      v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v20;
      *(_QWORD *)&v28.fields.fakeValue = v19;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v28, 0);
      limitCount = servantLeaderInfo->fields.limitCount;
      v23 = v21;
      DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0);
      IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                            questRestriction,
                                            v23,
                                            limitCount,
                                            DispLimitCount,
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
LABEL_27:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      GrandServantListItemDraw__SetRestrictionMaskMessage(this, v11, v12);
    }
    else if ( UniqueSvtRestriction || IsUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6488/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
      GrandServantListItemDraw__SetRestrictionWarningMessage(this, v26, v27);
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

  if ( (byte_4D2B60B & 1) == 0 )
  {
    sub_1C93AD4(&GrandServantListItemDraw___c_TypeInfo);
    byte_4D2B60B = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v1;
  sub_1C93A78(
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

  if ( (byte_4D2B60C & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B60C = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v7, 0) > 0;
}


int32_t GrandServantListItemDraw___c___SetEventUpOther_b__30_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4D2B60D & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B60D = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v7, 0);
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
    sub_1C93D2C(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupMine_b__27_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
  return e->fields.hp;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_0(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
  return e->fields.atk;
}


int32_t GrandServantListItemDraw___c___SetupOther_b__28_1(
        GrandServantListItemDraw___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
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
  if ( (byte_4D2B60E & 1) == 0 )
  {
    this = (GrandServantListItemDraw___c__DisplayClass30_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2B60E = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1C93D2C(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}