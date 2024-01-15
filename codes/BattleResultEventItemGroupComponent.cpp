void __fastcall BattleResultEventItemGroupComponent___ctor(
        BattleResultEventItemGroupComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultEventItemGroupComponent__CommonPointViewFunc(
        BattleResultEventItemGroupComponent_o *this,
        UISprite_o *getSp,
        UISprite_o *totalSp,
        UILabel_o *getLabel,
        UILabel_o *totalLabel,
        int64_t userId,
        int32_t eventId,
        int32_t groupId,
        int64_t oldPoint,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  WebViewManager_o *Instance; // x0
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventPointEntity_o *Entity; // x0
  int64_t value; // x26
  int64_t v29; // x25
  BalanceConfig_c *v30; // x0
  int64_t UserPointEventMax; // x27
  int64_t v32; // x26
  int64_t v33; // x0
  __int64 v34; // x25
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  WebViewManager_o *v39; // x0
  EventPointGroupMaster_o *v40; // x0
  EventPointGroupEntity_o *v41; // x0
  int32_t iconId; // w21
  int64_t v43; // [xsp+0h] [xbp-60h] BYREF
  __int64 v44; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FA39F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, getSp);
    sub_B16FFC(&BalanceConfig_TypeInfo, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v19);
    sub_B16FFC(&long_TypeInfo, v20);
    sub_B16FFC(&System_Math_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v23);
    sub_B16FFC(&StringLiteral_691/*"+ {0:#,0}"*/, v24);
    byte_40FA39F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = UserEventPointMaster__GetEntity(MasterData_WarQuestSelectionMaster, userId, eventId, groupId, 0LL);
  if ( Entity )
  {
    value = Entity->fields.value;
    v29 = value - oldPoint;
  }
  else
  {
    value = 0LL;
    v29 = 0LL;
  }
  v30 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v30->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v32 = System_Math__Min_44464240(value, UserPointEventMax, 0LL);
  v33 = System_Math__Min_44464240(v29, BalanceConfig_TypeInfo->static_fields->UserPointEventMax, 0LL);
  if ( !getLabel )
    goto LABEL_25;
  v34 = v33;
  UILabel__SetDefaultFont(getLabel, 0LL);
  v44 = v34;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44);
  v36 = System_String__Format((System_String_o *)StringLiteral_691/*"+ {0:#,0}"*/, v35, 0LL);
  UILabel__set_text(getLabel, v36, 0LL);
  if ( !totalLabel
    || (UILabel__SetDefaultFont(totalLabel, 0LL),
        v43 = v32,
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v43),
        v38 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v37, 0LL),
        UILabel__set_text(totalLabel, v38, 0LL),
        (v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v40 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v39,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL )
  {
LABEL_25:
    sub_B170D4();
  }
  v41 = EventPointGroupMaster__GetEntity(v40, eventId, groupId, 0LL);
  if ( v41 )
    iconId = v41->fields.iconId;
  else
    iconId = 0;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(getSp, iconId, 0LL);
  AtlasManager__SetItem(totalSp, iconId, 0LL);
}


void __fastcall BattleResultEventItemGroupComponent__SetGroupDamageInfo(
        BattleResultEventItemGroupComponent_o *this,
        int32_t eventId,
        UserEventEntity_array *oldUsrEvent,
        int64_t addDamagePoint,
        UserGameEntity_o *userGame,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventDamageRoot; // x0
  UnityEngine_GameObject_o *eventPointRoot; // x0

  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot
    || (UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0LL), (eventPointRoot = this->fields.eventPointRoot) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(eventPointRoot, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemGroupComponent__SetGroupPointInfo(
        BattleResultEventItemGroupComponent_o *this,
        int32_t eventId,
        int64_t userId,
        UserEventPointEntity_array *oldUsrPoint,
        System_Int32_array *viewGroupIds,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *eventDamageRoot; // x0
  UnityEngine_GameObject_o *eventPointRoot; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v19; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v22; // x23
  const MethodInfo *v23; // x5

  if ( (byte_40FA39D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FA39D = 1;
  }
  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0LL);
  eventPointRoot = this->fields.eventPointRoot;
  if ( !eventPointRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventPointRoot, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          eventId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19
    || (v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v19,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v20,
                                    eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = Entity;
    if ( EventDetailEntity__IsGroupPoint(Entity, 0LL) )
      BattleResultEventItemGroupComponent__SwitchViewMode(this, userId, viewGroupIds, oldUsrPoint, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultEventItemGroupComponent__SetQpInfo(
        BattleResultEventItemGroupComponent_o *this,
        int32_t totalQp,
        int32_t getQp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *getQpLabel; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  UILabel_o *totalQpLabel; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA39C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&totalQp);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v7);
    sub_B16FFC(&StringLiteral_691/*"+ {0:#,0}"*/, v8);
    byte_40FA39C = 1;
  }
  getQpLabel = this->fields.getQpLabel;
  v16 = getQp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v11 = System_String__Format((System_String_o *)StringLiteral_691/*"+ {0:#,0}"*/, v10, 0LL);
  if ( !getQpLabel
    || (UILabel__set_text(getQpLabel, v11, 0LL),
        totalQpLabel = this->fields.totalQpLabel,
        v15 = totalQp,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        v14 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v13, 0LL),
        !totalQpLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(totalQpLabel, v14, 0LL);
}


void __fastcall BattleResultEventItemGroupComponent__SwitchViewMode(
        BattleResultEventItemGroupComponent_o *this,
        int64_t userId,
        System_Int32_array *viewGroupIds,
        UserEventPointEntity_array *oldUsrPoint,
        EventDetailEntity_o *eventDetail,
        const MethodInfo *method)
{
  BattleResultEventItemGroupComponent_o *v10; // x19
  struct UISprite_array *groupIcons; // x8
  signed int v12; // w25
  signed int v13; // w24
  signed int max_length; // w9
  UnityEngine_Behaviour_o *v15; // x0
  struct UILabel_array *groupLabels; // x8
  UnityEngine_Behaviour_o *v17; // x0
  signed int v18; // w8
  struct UISprite_array *v19; // x8
  UIWidget_o *v20; // x0
  struct UISprite_array *v21; // x8
  UIWidget_o *v22; // x0
  UnityEngine_Transform_o *v23; // x24
  UnityEngine_Transform_o *v24; // x24
  signed int v25; // w8
  unsigned int v26; // w9
  UserEventPointEntity_o *v27; // x10
  int64_t oldPoint; // x8
  struct UISprite_array *pointBgSps; // x8
  UIWidget_o *v30; // x0
  struct UISprite_array *v31; // x8
  UIWidget_o *v32; // x0
  UnityEngine_Transform_o *getLabelRoot; // x24
  UnityEngine_Transform_o *totalLabelRoot; // x24
  __int64 v35; // x2
  __int64 v36; // x10
  BattleResultEventItemGroupComponent_o *v37; // x24
  unsigned __int64 v38; // x8
  unsigned int v39; // w9
  signed int v40; // w12
  int32_t v41; // w10
  unsigned int v42; // w11
  UserEventPointEntity_o *v43; // x12
  BattleResultEventItemGroupComponent_c **v44; // x13
  struct UISprite_array *v45; // x8
  struct UILabel_array *v46; // x9
  struct UISprite_array *v47; // x8
  struct UILabel_array *v48; // x9
  __int64 v49; // x20
  struct UILabel_array *v50; // x8
  UILabel_o *v51; // x0
  struct UISprite_array *v52; // x8
  UIWidget_o *v53; // x0
  struct UISprite_array *v54; // x8
  UIWidget_o *v55; // x0
  UnityEngine_Transform_o *v56; // x24
  UnityEngine_Transform_o *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x10
  BattleResultEventItemGroupComponent_o *v60; // x24
  unsigned __int64 v61; // x8
  unsigned int v62; // w9
  signed int v63; // w12
  int32_t v64; // w10
  unsigned int v65; // w11
  UserEventPointEntity_o *v66; // x12
  BattleResultEventItemGroupComponent_c **v67; // x13
  struct UISprite_array *v68; // x8
  struct UILabel_array *v69; // x9
  struct UISprite_array *v70; // x8
  struct UILabel_array *v71; // x9
  struct UISprite_array *v72; // x8
  struct UILabel_array *v73; // x9
  UILabel_o *getTitleLabel; // x0
  UILabel_o *totalTitleLabel; // x0
  struct UISprite_array *v76; // x8
  __int64 v77; // x20
  int v78; // w9
  unsigned int v79; // w21
  UnityEngine_Component_o *v80; // x0
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t groupIconSpace; // w22
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_array *v86; // x8
  UnityEngine_Component_o *v87; // x0
  UnityEngine_Transform_o *v88; // x0
  struct UILabel_array *v89; // x8
  UILabel_o *v90; // x0
  struct UISprite_array *v91; // x9
  struct UILabel_array *v92; // x10
  __int64 v93; // x20
  struct UILabel_array *v94; // x8
  UILabel_o *v95; // x0
  const MethodInfo *v96; // [xsp+8h] [xbp-68h]
  const MethodInfo *v97; // [xsp+8h] [xbp-68h]
  const MethodInfo *v98; // [xsp+8h] [xbp-68h]
  const MethodInfo *v99; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_40FA39E & 1) == 0 )
  {
    this = (BattleResultEventItemGroupComponent_o *)sub_B16FFC(&long___TypeInfo, userId);
    byte_40FA39E = 1;
  }
  if ( !viewGroupIds )
    goto LABEL_150;
  groupIcons = v10->fields.groupIcons;
  if ( !groupIcons )
    goto LABEL_150;
  v12 = 2 * viewGroupIds->max_length;
  v13 = v12;
  while ( 1 )
  {
    max_length = groupIcons->max_length;
    if ( v13 >= max_length )
      break;
    if ( v13 >= (unsigned int)max_length )
      goto LABEL_151;
    v15 = (UnityEngine_Behaviour_o *)groupIcons->m_Items[v13];
    if ( v15 )
    {
      UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
      groupLabels = v10->fields.groupLabels;
      if ( groupLabels )
      {
        if ( v13 >= groupLabels->max_length )
          goto LABEL_151;
        v17 = (UnityEngine_Behaviour_o *)groupLabels->m_Items[v13];
        if ( v17 )
        {
          ++v13;
          UnityEngine_Behaviour__set_enabled(v17, 0, 0LL);
          groupIcons = v10->fields.groupIcons;
          if ( groupIcons )
            continue;
        }
      }
    }
    goto LABEL_150;
  }
  v18 = viewGroupIds->max_length;
  if ( v18 == 2 )
  {
    pointBgSps = v10->fields.pointBgSps;
    if ( !pointBgSps )
      goto LABEL_150;
    if ( pointBgSps->max_length )
    {
      v30 = (UIWidget_o *)pointBgSps->m_Items[0];
      if ( !v30 )
        goto LABEL_150;
      UIWidget__set_width(v30, 550, 0LL);
      v31 = v10->fields.pointBgSps;
      if ( !v31 )
        goto LABEL_150;
      if ( v31->max_length > 1 )
      {
        v32 = (UIWidget_o *)v31->m_Items[1];
        if ( !v32 )
          goto LABEL_150;
        UIWidget__set_width(v32, 550, 0LL);
        getLabelRoot = v10->fields.getLabelRoot;
        if ( !getLabelRoot )
          goto LABEL_150;
        localPosition = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
        localPosition.fields.z = 0.0;
        localPosition.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(getLabelRoot, localPosition, 0LL);
        totalLabelRoot = v10->fields.totalLabelRoot;
        if ( !totalLabelRoot )
          goto LABEL_150;
        v103 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v103.fields.z = 0.0;
        v103.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(totalLabelRoot, v103, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_B17014(long___TypeInfo, 2LL, v35);
        v36 = *(_QWORD *)&viewGroupIds->max_length;
        v37 = this;
        if ( (int)v36 >= 1 )
        {
          v38 = 0LL;
          v39 = 0;
          while ( 1 )
          {
            if ( v38 >= (unsigned int)v36 )
              goto LABEL_151;
            if ( !oldUsrPoint )
              goto LABEL_150;
            v40 = oldUsrPoint->max_length;
            if ( v40 >= 1 )
              break;
LABEL_54:
            LODWORD(v36) = viewGroupIds->max_length;
            if ( (__int64)++v38 >= (int)v36 )
              goto LABEL_55;
          }
          v41 = viewGroupIds->m_Items[v38 + 1];
          v42 = 0;
          while ( v42 < v40 )
          {
            v43 = oldUsrPoint->m_Items[v42];
            if ( !v43 )
              goto LABEL_150;
            if ( v43->fields.groupId == v41 )
            {
              if ( !this )
                goto LABEL_150;
              if ( v39 >= LODWORD(this->fields.getQpLabel) )
                goto LABEL_151;
              v44 = &this->klass + (int)v39++;
              v44[4] = (BattleResultEventItemGroupComponent_c *)v43->fields.value;
            }
            v40 = oldUsrPoint->max_length;
            if ( (int)++v42 >= v40 )
              goto LABEL_54;
          }
          goto LABEL_151;
        }
LABEL_55:
        v45 = v10->fields.groupIcons;
        if ( !v45 )
          goto LABEL_150;
        if ( v45->max_length >= 2 )
        {
          v46 = v10->fields.groupLabels;
          if ( !v46 )
            goto LABEL_150;
          if ( v46->max_length >= 2 )
          {
            if ( !eventDetail )
              goto LABEL_150;
            if ( (_DWORD)v36 )
            {
              if ( !this )
                goto LABEL_150;
              if ( LODWORD(this->fields.getQpLabel) )
              {
                BattleResultEventItemGroupComponent__CommonPointViewFunc(
                  this,
                  v45->m_Items[0],
                  v45->m_Items[1],
                  v46->m_Items[0],
                  v46->m_Items[1],
                  userId,
                  eventDetail->fields.eventId,
                  viewGroupIds->m_Items[1],
                  (int64_t)this->fields.totalQpLabel,
                  v96);
                v47 = v10->fields.groupIcons;
                if ( !v47 )
                  goto LABEL_150;
                if ( v47->max_length >= 4 )
                {
                  v48 = v10->fields.groupLabels;
                  if ( !v48 )
                    goto LABEL_150;
                  if ( v48->max_length >= 4 && viewGroupIds->max_length > 1 && LODWORD(v37->fields.getQpLabel) > 1 )
                  {
                    BattleResultEventItemGroupComponent__CommonPointViewFunc(
                      this,
                      v47->m_Items[2],
                      v47->m_Items[3],
                      v48->m_Items[2],
                      v48->m_Items[3],
                      userId,
                      eventDetail->fields.eventId,
                      viewGroupIds->m_Items[2],
                      (int64_t)v37->fields.eventPointRoot,
                      v97);
                    if ( v12 < 1 )
                      return;
                    v49 = 0LL;
                    while ( 1 )
                    {
                      v50 = v10->fields.groupLabels;
                      if ( !v50 )
                        break;
                      if ( (unsigned int)v49 >= v50->max_length )
                        goto LABEL_151;
                      v51 = v50->m_Items[v49];
                      if ( !v51 )
                        break;
                      UILabel__SetCondensedScale(v51, v10->fields.pointLabelWidth, 0LL);
                      if ( (int)++v49 >= v12 )
                        return;
                    }
LABEL_150:
                    sub_B170D4();
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_151:
    sub_B17100(this, userId, viewGroupIds);
    sub_B170A0();
  }
  if ( v18 != 1 )
  {
    if ( v18 < 3 )
      return;
    v52 = v10->fields.pointBgSps;
    if ( !v52 )
      goto LABEL_150;
    if ( v52->max_length )
    {
      v53 = (UIWidget_o *)v52->m_Items[0];
      if ( !v53 )
        goto LABEL_150;
      UIWidget__set_width(v53, 550, 0LL);
      v54 = v10->fields.pointBgSps;
      if ( !v54 )
        goto LABEL_150;
      if ( v54->max_length > 1 )
      {
        v55 = (UIWidget_o *)v54->m_Items[1];
        if ( !v55 )
          goto LABEL_150;
        UIWidget__set_width(v55, 550, 0LL);
        v56 = v10->fields.getLabelRoot;
        if ( !v56 )
          goto LABEL_150;
        v104 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
        v104.fields.z = 0.0;
        v104.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v56, v104, 0LL);
        v57 = v10->fields.totalLabelRoot;
        if ( !v57 )
          goto LABEL_150;
        v105 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v105.fields.z = 0.0;
        v105.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v57, v105, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_B17014(long___TypeInfo, 3LL, v58);
        v59 = *(_QWORD *)&viewGroupIds->max_length;
        v60 = this;
        if ( (int)v59 < 1 )
        {
LABEL_99:
          v68 = v10->fields.groupIcons;
          if ( !v68 )
            goto LABEL_150;
          if ( v68->max_length >= 2 )
          {
            v69 = v10->fields.groupLabels;
            if ( !v69 )
              goto LABEL_150;
            if ( v69->max_length >= 2 )
            {
              if ( !eventDetail )
                goto LABEL_150;
              if ( (_DWORD)v59 )
              {
                if ( !this )
                  goto LABEL_150;
                if ( LODWORD(this->fields.getQpLabel) )
                {
                  BattleResultEventItemGroupComponent__CommonPointViewFunc(
                    this,
                    v68->m_Items[0],
                    v68->m_Items[1],
                    v69->m_Items[0],
                    v69->m_Items[1],
                    userId,
                    eventDetail->fields.eventId,
                    viewGroupIds->m_Items[1],
                    (int64_t)this->fields.totalQpLabel,
                    v96);
                  v70 = v10->fields.groupIcons;
                  if ( !v70 )
                    goto LABEL_150;
                  if ( v70->max_length >= 4 )
                  {
                    v71 = v10->fields.groupLabels;
                    if ( !v71 )
                      goto LABEL_150;
                    if ( v71->max_length >= 4 && viewGroupIds->max_length > 1 && LODWORD(v60->fields.getQpLabel) > 1 )
                    {
                      BattleResultEventItemGroupComponent__CommonPointViewFunc(
                        this,
                        v70->m_Items[2],
                        v70->m_Items[3],
                        v71->m_Items[2],
                        v71->m_Items[3],
                        userId,
                        eventDetail->fields.eventId,
                        viewGroupIds->m_Items[2],
                        (int64_t)v60->fields.eventPointRoot,
                        v98);
                      v72 = v10->fields.groupIcons;
                      if ( !v72 )
                        goto LABEL_150;
                      if ( v72->max_length >= 6 )
                      {
                        v73 = v10->fields.groupLabels;
                        if ( !v73 )
                          goto LABEL_150;
                        if ( v73->max_length >= 6 && viewGroupIds->max_length > 2 && LODWORD(v60->fields.getQpLabel) > 2 )
                        {
                          BattleResultEventItemGroupComponent__CommonPointViewFunc(
                            this,
                            v72->m_Items[4],
                            v72->m_Items[5],
                            v73->m_Items[4],
                            v73->m_Items[5],
                            userId,
                            eventDetail->fields.eventId,
                            viewGroupIds->m_Items[3],
                            (int64_t)v60->fields.eventDamageRoot,
                            v99);
                          getTitleLabel = v10->fields.getTitleLabel;
                          if ( !getTitleLabel )
                            goto LABEL_150;
                          UILabel__SetCondensedScale(getTitleLabel, v10->fields.titleLabelWidth, 0LL);
                          totalTitleLabel = v10->fields.totalTitleLabel;
                          if ( !totalTitleLabel )
                            goto LABEL_150;
                          UILabel__SetCondensedScale(totalTitleLabel, v10->fields.titleLabelWidth, 0LL);
                          v76 = v10->fields.groupIcons;
                          if ( !v76 )
                            goto LABEL_150;
                          v77 = 4LL;
                          while ( 1 )
                          {
                            v78 = v76->max_length;
                            v79 = v77 - 4;
                            if ( (int)v77 - 4 >= v78 )
                              return;
                            if ( v79 >= v78 )
                              goto LABEL_151;
                            v80 = (UnityEngine_Component_o *)*((_QWORD *)&v76->obj.klass + v77);
                            if ( v80 )
                            {
                              x = v10->fields.groupIconPosition.fields.x;
                              y = v10->fields.groupIconPosition.fields.y;
                              z = v10->fields.groupIconPosition.fields.z;
                              groupIconSpace = v10->fields.groupIconSpace;
                              transform = UnityEngine_Component__get_transform(v80, 0LL);
                              if ( transform )
                              {
                                v106.fields.x = x + (float)(int)(groupIconSpace * (v79 >> 1));
                                v106.fields.y = y;
                                v106.fields.z = z;
                                UnityEngine_Transform__set_localPosition(transform, v106, 0LL);
                                v86 = v10->fields.groupLabels;
                                if ( v86 )
                                {
                                  if ( v79 >= v86->max_length )
                                    goto LABEL_151;
                                  v87 = (UnityEngine_Component_o *)*((_QWORD *)&v86->obj.klass + v77);
                                  if ( v87 )
                                  {
                                    v88 = UnityEngine_Component__get_transform(v87, 0LL);
                                    if ( v88 )
                                    {
                                      UnityEngine_Transform__set_localPosition(v88, v10->fields.groupLabelPosition, 0LL);
                                      v89 = v10->fields.groupLabels;
                                      if ( v89 )
                                      {
                                        if ( v79 >= v89->max_length )
                                          goto LABEL_151;
                                        v90 = (UILabel_o *)*((_QWORD *)&v89->obj.klass + v77);
                                        if ( v90 )
                                        {
                                          UILabel__SetCondensedScale(v90, v10->fields.triplePointLabelWidth, 0LL);
                                          v76 = v10->fields.groupIcons;
                                          ++v77;
                                          if ( v76 )
                                            continue;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_150;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v61 = 0LL;
          v62 = 0;
          while ( 1 )
          {
            if ( v61 >= (unsigned int)v59 )
              goto LABEL_151;
            if ( !oldUsrPoint )
              goto LABEL_150;
            v63 = oldUsrPoint->max_length;
            if ( v63 >= 1 )
              break;
LABEL_98:
            LODWORD(v59) = viewGroupIds->max_length;
            if ( (__int64)++v61 >= (int)v59 )
              goto LABEL_99;
          }
          v64 = viewGroupIds->m_Items[v61 + 1];
          v65 = 0;
          while ( v65 < v63 )
          {
            v66 = oldUsrPoint->m_Items[v65];
            if ( !v66 )
              goto LABEL_150;
            if ( v66->fields.groupId == v64 )
            {
              if ( !this )
                goto LABEL_150;
              if ( v62 >= LODWORD(this->fields.getQpLabel) )
                goto LABEL_151;
              v67 = &this->klass + (int)v62++;
              v67[4] = (BattleResultEventItemGroupComponent_c *)v66->fields.value;
            }
            v63 = oldUsrPoint->max_length;
            if ( (int)++v65 >= v63 )
              goto LABEL_98;
          }
        }
      }
    }
    goto LABEL_151;
  }
  v19 = v10->fields.pointBgSps;
  if ( !v19 )
    goto LABEL_150;
  if ( !v19->max_length )
    goto LABEL_151;
  v20 = (UIWidget_o *)v19->m_Items[0];
  if ( !v20 )
    goto LABEL_150;
  UIWidget__set_width(v20, 370, 0LL);
  v21 = v10->fields.pointBgSps;
  if ( !v21 )
    goto LABEL_150;
  if ( v21->max_length <= 1 )
    goto LABEL_151;
  v22 = (UIWidget_o *)v21->m_Items[1];
  if ( !v22 )
    goto LABEL_150;
  UIWidget__set_width(v22, 370, 0LL);
  v23 = v10->fields.getLabelRoot;
  if ( !v23 )
    goto LABEL_150;
  v100 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
  v100.fields.z = 0.0;
  v100.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v23, v100, 0LL);
  v24 = v10->fields.totalLabelRoot;
  if ( !v24 )
    goto LABEL_150;
  v101 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
  v101.fields.z = 0.0;
  v101.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v24, v101, 0LL);
  if ( !oldUsrPoint )
    goto LABEL_150;
  v25 = oldUsrPoint->max_length;
  if ( v25 < 1 )
  {
LABEL_32:
    oldPoint = 0LL;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v25 )
        goto LABEL_151;
      v27 = oldUsrPoint->m_Items[v26];
      if ( !v27 )
        goto LABEL_150;
      if ( !viewGroupIds->max_length )
        goto LABEL_151;
      if ( v27->fields.groupId == viewGroupIds->m_Items[1] )
        break;
      if ( (int)++v26 >= v25 )
        goto LABEL_32;
    }
    oldPoint = v27->fields.value;
  }
  v91 = v10->fields.groupIcons;
  if ( !v91 )
    goto LABEL_150;
  if ( v91->max_length < 2 )
    goto LABEL_151;
  v92 = v10->fields.groupLabels;
  if ( !v92 )
    goto LABEL_150;
  if ( v92->max_length < 2 )
    goto LABEL_151;
  if ( !eventDetail )
    goto LABEL_150;
  if ( !viewGroupIds->max_length )
    goto LABEL_151;
  BattleResultEventItemGroupComponent__CommonPointViewFunc(
    this,
    v91->m_Items[0],
    v91->m_Items[1],
    v92->m_Items[0],
    v92->m_Items[1],
    userId,
    eventDetail->fields.eventId,
    viewGroupIds->m_Items[1],
    oldPoint,
    v96);
  if ( v12 >= 1 )
  {
    v93 = 0LL;
    while ( 1 )
    {
      v94 = v10->fields.groupLabels;
      if ( !v94 )
        goto LABEL_150;
      if ( (unsigned int)v93 >= v94->max_length )
        goto LABEL_151;
      v95 = v94->m_Items[v93];
      if ( !v95 )
        goto LABEL_150;
      UILabel__SetCondensedScale(v95, v10->fields.pointLabelWidth, 0LL);
      if ( (int)++v93 >= v12 )
        return;
    }
  }
}