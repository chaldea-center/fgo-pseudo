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
  DataManager_o *Instance; // x0
  UserEventPointEntity_o *Entity; // x0
  int64_t value; // x26
  int64_t v28; // x25
  BalanceConfig_c *v29; // x0
  int64_t UserPointEventMax; // x27
  int64_t v31; // x26
  __int64 v32; // x25
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  EventPointGroupEntity_o *v37; // x0
  int32_t iconId; // w21
  int64_t v39; // [xsp+0h] [xbp-60h] BYREF
  __int64 v40; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42148DE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, getSp);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v19);
    sub_B0D8A4(&long_TypeInfo, v20);
    sub_B0D8A4(&System_Math_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v23);
    sub_B0D8A4(&StringLiteral_698/*"+ {0:#,0}"*/, v24);
    byte_42148DE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entity = UserEventPointMaster__GetEntity((UserEventPointMaster_o *)Instance, userId, eventId, groupId, 0LL);
  if ( Entity )
  {
    value = Entity->fields.value;
    v28 = value - oldPoint;
  }
  else
  {
    value = 0LL;
    v28 = 0LL;
  }
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v29->static_fields->UserPointEventMax;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = System_Math__Min_44560000(value, UserPointEventMax, 0LL);
  Instance = (DataManager_o *)System_Math__Min_44560000(
                                v28,
                                BalanceConfig_TypeInfo->static_fields->UserPointEventMax,
                                0LL);
  if ( !getLabel )
    goto LABEL_25;
  v32 = (__int64)Instance;
  UILabel__SetDefaultFont(getLabel, 0LL);
  v40 = v32;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v40);
  v34 = System_String__Format((System_String_o *)StringLiteral_698/*"+ {0:#,0}"*/, v33, 0LL);
  UILabel__set_text(getLabel, v34, 0LL);
  if ( !totalLabel
    || (UILabel__SetDefaultFont(totalLabel, 0LL),
        v39 = v31,
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39),
        v36 = System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v35, 0LL),
        UILabel__set_text(totalLabel, v36, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  v37 = EventPointGroupMaster__GetEntity((EventPointGroupMaster_o *)Instance, eventId, groupId, 0LL);
  if ( v37 )
    iconId = v37->fields.iconId;
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

  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot
    || (UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0LL),
        (eventDamageRoot = this->fields.eventPointRoot) == 0LL) )
  {
    sub_B0D97C(eventDamageRoot);
  }
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0LL);
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
  EventDetailEntity_o *Entity; // x0
  EventDetailEntity_o *v17; // x23
  const MethodInfo *v18; // x5

  if ( (byte_42148DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_42148DC = 1;
  }
  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0LL);
  eventDamageRoot = this->fields.eventPointRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0LL);
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot )
    goto LABEL_14;
  eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)eventDamageRoot,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventDamageRoot )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)eventDamageRoot,
          eventId,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot
    || (eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)eventDamageRoot,
                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(eventDamageRoot);
  }
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)eventDamageRoot,
                                    eventId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v17 = Entity;
    if ( EventDetailEntity__IsGroupPoint(Entity, 0LL) )
      BattleResultEventItemGroupComponent__SwitchViewMode(this, userId, viewGroupIds, oldUsrPoint, v17, v18);
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
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42148DB & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&totalQp);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v7);
    sub_B0D8A4(&StringLiteral_698/*"+ {0:#,0}"*/, v8);
    byte_42148DB = 1;
  }
  getQpLabel = this->fields.getQpLabel;
  v15 = getQp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11 = System_String__Format((System_String_o *)StringLiteral_698/*"+ {0:#,0}"*/, v10, 0LL);
  if ( !getQpLabel
    || (UILabel__set_text(getQpLabel, v11, 0LL),
        totalQpLabel = this->fields.totalQpLabel,
        v14 = totalQp,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14),
        v11 = System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v13, 0LL),
        !totalQpLabel) )
  {
    sub_B0D97C(v11);
  }
  UILabel__set_text(totalQpLabel, v11, 0LL);
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
  struct UILabel_array *groupLabels; // x8
  signed int v16; // w8
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  UnityEngine_Transform_o *v19; // x24
  UnityEngine_Transform_o *v20; // x24
  signed int v21; // w8
  unsigned int v22; // w9
  UserEventPointEntity_o *v23; // x10
  int64_t oldPoint; // x8
  struct UISprite_array *pointBgSps; // x8
  struct UISprite_array *v26; // x8
  UnityEngine_Transform_o *getLabelRoot; // x24
  UnityEngine_Transform_o *totalLabelRoot; // x24
  __int64 v29; // x10
  BattleResultEventItemGroupComponent_o *v30; // x24
  unsigned __int64 v31; // x8
  unsigned int v32; // w9
  signed int v33; // w12
  int32_t v34; // w10
  unsigned int v35; // w11
  UserEventPointEntity_o *v36; // x12
  BattleResultEventItemGroupComponent_c **v37; // x13
  struct UISprite_array *v38; // x8
  struct UILabel_array *v39; // x9
  struct UISprite_array *v40; // x8
  struct UILabel_array *v41; // x9
  __int64 v42; // x20
  struct UILabel_array *v43; // x8
  struct UISprite_array *v44; // x8
  struct UISprite_array *v45; // x8
  UnityEngine_Transform_o *v46; // x24
  UnityEngine_Transform_o *v47; // x24
  __int64 v48; // x10
  BattleResultEventItemGroupComponent_o *v49; // x24
  unsigned __int64 v50; // x8
  unsigned int v51; // w9
  signed int v52; // w12
  int32_t v53; // w10
  unsigned int v54; // w11
  UserEventPointEntity_o *v55; // x12
  BattleResultEventItemGroupComponent_c **v56; // x13
  struct UISprite_array *v57; // x8
  struct UILabel_array *v58; // x9
  struct UISprite_array *v59; // x8
  struct UILabel_array *v60; // x9
  struct UISprite_array *v61; // x8
  struct UILabel_array *v62; // x9
  struct UISprite_array *v63; // x8
  __int64 v64; // x20
  int v65; // w9
  unsigned int v66; // w21
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t groupIconSpace; // w22
  struct UILabel_array *v71; // x8
  struct UILabel_array *v72; // x8
  struct UISprite_array *v73; // x9
  struct UILabel_array *v74; // x10
  __int64 v75; // x20
  struct UILabel_array *v76; // x8
  __int64 v77; // x0
  const MethodInfo *v78; // [xsp+8h] [xbp-68h]
  const MethodInfo *v79; // [xsp+8h] [xbp-68h]
  const MethodInfo *v80; // [xsp+8h] [xbp-68h]
  const MethodInfo *v81; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_42148DD & 1) == 0 )
  {
    this = (BattleResultEventItemGroupComponent_o *)sub_B0D8A4(&long___TypeInfo, userId);
    byte_42148DD = 1;
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
    this = (BattleResultEventItemGroupComponent_o *)groupIcons->m_Items[v13];
    if ( this )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
      groupLabels = v10->fields.groupLabels;
      if ( groupLabels )
      {
        if ( v13 >= groupLabels->max_length )
          goto LABEL_151;
        this = (BattleResultEventItemGroupComponent_o *)groupLabels->m_Items[v13];
        if ( this )
        {
          ++v13;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
          groupIcons = v10->fields.groupIcons;
          if ( groupIcons )
            continue;
        }
      }
    }
    goto LABEL_150;
  }
  v16 = viewGroupIds->max_length;
  if ( v16 == 2 )
  {
    pointBgSps = v10->fields.pointBgSps;
    if ( !pointBgSps )
      goto LABEL_150;
    if ( pointBgSps->max_length )
    {
      this = (BattleResultEventItemGroupComponent_o *)pointBgSps->m_Items[0];
      if ( !this )
        goto LABEL_150;
      UIWidget__set_width((UIWidget_o *)this, 550, 0LL);
      v26 = v10->fields.pointBgSps;
      if ( !v26 )
        goto LABEL_150;
      if ( v26->max_length > 1 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v26->m_Items[1];
        if ( !this )
          goto LABEL_150;
        UIWidget__set_width((UIWidget_o *)this, 550, 0LL);
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
        v85 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v85.fields.z = 0.0;
        v85.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(totalLabelRoot, v85, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_B0D8BC(long___TypeInfo, 2LL);
        v29 = *(_QWORD *)&viewGroupIds->max_length;
        v30 = this;
        if ( (int)v29 >= 1 )
        {
          v31 = 0LL;
          v32 = 0;
          while ( 1 )
          {
            if ( v31 >= (unsigned int)v29 )
              goto LABEL_151;
            if ( !oldUsrPoint )
              goto LABEL_150;
            v33 = oldUsrPoint->max_length;
            if ( v33 >= 1 )
              break;
LABEL_54:
            LODWORD(v29) = viewGroupIds->max_length;
            if ( (__int64)++v31 >= (int)v29 )
              goto LABEL_55;
          }
          v34 = viewGroupIds->m_Items[v31 + 1];
          v35 = 0;
          while ( v35 < v33 )
          {
            v36 = oldUsrPoint->m_Items[v35];
            if ( !v36 )
              goto LABEL_150;
            if ( v36->fields.groupId == v34 )
            {
              if ( !this )
                goto LABEL_150;
              if ( v32 >= LODWORD(this->fields.getQpLabel) )
                goto LABEL_151;
              v37 = &this->klass + (int)v32++;
              v37[4] = (BattleResultEventItemGroupComponent_c *)v36->fields.value;
            }
            v33 = oldUsrPoint->max_length;
            if ( (int)++v35 >= v33 )
              goto LABEL_54;
          }
          goto LABEL_151;
        }
LABEL_55:
        v38 = v10->fields.groupIcons;
        if ( !v38 )
          goto LABEL_150;
        if ( v38->max_length >= 2 )
        {
          v39 = v10->fields.groupLabels;
          if ( !v39 )
            goto LABEL_150;
          if ( v39->max_length >= 2 )
          {
            if ( !eventDetail )
              goto LABEL_150;
            if ( (_DWORD)v29 )
            {
              if ( !this )
                goto LABEL_150;
              if ( LODWORD(this->fields.getQpLabel) )
              {
                BattleResultEventItemGroupComponent__CommonPointViewFunc(
                  this,
                  v38->m_Items[0],
                  v38->m_Items[1],
                  v39->m_Items[0],
                  v39->m_Items[1],
                  userId,
                  eventDetail->fields.eventId,
                  viewGroupIds->m_Items[1],
                  (int64_t)this->fields.totalQpLabel,
                  v78);
                v40 = v10->fields.groupIcons;
                if ( !v40 )
                  goto LABEL_150;
                if ( v40->max_length >= 4 )
                {
                  v41 = v10->fields.groupLabels;
                  if ( !v41 )
                    goto LABEL_150;
                  if ( v41->max_length >= 4 && viewGroupIds->max_length > 1 && LODWORD(v30->fields.getQpLabel) > 1 )
                  {
                    BattleResultEventItemGroupComponent__CommonPointViewFunc(
                      this,
                      v40->m_Items[2],
                      v40->m_Items[3],
                      v41->m_Items[2],
                      v41->m_Items[3],
                      userId,
                      eventDetail->fields.eventId,
                      viewGroupIds->m_Items[2],
                      (int64_t)v30->fields.eventPointRoot,
                      v79);
                    if ( v12 < 1 )
                      return;
                    v42 = 0LL;
                    while ( 1 )
                    {
                      v43 = v10->fields.groupLabels;
                      if ( !v43 )
                        break;
                      if ( (unsigned int)v42 >= v43->max_length )
                        goto LABEL_151;
                      this = (BattleResultEventItemGroupComponent_o *)v43->m_Items[v42];
                      if ( !this )
                        break;
                      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0LL);
                      if ( (int)++v42 >= v12 )
                        return;
                    }
LABEL_150:
                    sub_B0D97C(this);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_151:
    v77 = sub_B0D9A8(this);
    sub_B0D948(v77, 0LL);
  }
  if ( v16 != 1 )
  {
    if ( v16 < 3 )
      return;
    v44 = v10->fields.pointBgSps;
    if ( !v44 )
      goto LABEL_150;
    if ( v44->max_length )
    {
      this = (BattleResultEventItemGroupComponent_o *)v44->m_Items[0];
      if ( !this )
        goto LABEL_150;
      UIWidget__set_width((UIWidget_o *)this, 550, 0LL);
      v45 = v10->fields.pointBgSps;
      if ( !v45 )
        goto LABEL_150;
      if ( v45->max_length > 1 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v45->m_Items[1];
        if ( !this )
          goto LABEL_150;
        UIWidget__set_width((UIWidget_o *)this, 550, 0LL);
        v46 = v10->fields.getLabelRoot;
        if ( !v46 )
          goto LABEL_150;
        v86 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
        v86.fields.z = 0.0;
        v86.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v46, v86, 0LL);
        v47 = v10->fields.totalLabelRoot;
        if ( !v47 )
          goto LABEL_150;
        v87 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v87.fields.z = 0.0;
        v87.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v47, v87, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_B0D8BC(long___TypeInfo, 3LL);
        v48 = *(_QWORD *)&viewGroupIds->max_length;
        v49 = this;
        if ( (int)v48 < 1 )
        {
LABEL_99:
          v57 = v10->fields.groupIcons;
          if ( !v57 )
            goto LABEL_150;
          if ( v57->max_length >= 2 )
          {
            v58 = v10->fields.groupLabels;
            if ( !v58 )
              goto LABEL_150;
            if ( v58->max_length >= 2 )
            {
              if ( !eventDetail )
                goto LABEL_150;
              if ( (_DWORD)v48 )
              {
                if ( !this )
                  goto LABEL_150;
                if ( LODWORD(this->fields.getQpLabel) )
                {
                  BattleResultEventItemGroupComponent__CommonPointViewFunc(
                    this,
                    v57->m_Items[0],
                    v57->m_Items[1],
                    v58->m_Items[0],
                    v58->m_Items[1],
                    userId,
                    eventDetail->fields.eventId,
                    viewGroupIds->m_Items[1],
                    (int64_t)this->fields.totalQpLabel,
                    v78);
                  v59 = v10->fields.groupIcons;
                  if ( !v59 )
                    goto LABEL_150;
                  if ( v59->max_length >= 4 )
                  {
                    v60 = v10->fields.groupLabels;
                    if ( !v60 )
                      goto LABEL_150;
                    if ( v60->max_length >= 4 && viewGroupIds->max_length > 1 && LODWORD(v49->fields.getQpLabel) > 1 )
                    {
                      BattleResultEventItemGroupComponent__CommonPointViewFunc(
                        this,
                        v59->m_Items[2],
                        v59->m_Items[3],
                        v60->m_Items[2],
                        v60->m_Items[3],
                        userId,
                        eventDetail->fields.eventId,
                        viewGroupIds->m_Items[2],
                        (int64_t)v49->fields.eventPointRoot,
                        v80);
                      v61 = v10->fields.groupIcons;
                      if ( !v61 )
                        goto LABEL_150;
                      if ( v61->max_length >= 6 )
                      {
                        v62 = v10->fields.groupLabels;
                        if ( !v62 )
                          goto LABEL_150;
                        if ( v62->max_length >= 6 && viewGroupIds->max_length > 2 && LODWORD(v49->fields.getQpLabel) > 2 )
                        {
                          BattleResultEventItemGroupComponent__CommonPointViewFunc(
                            this,
                            v61->m_Items[4],
                            v61->m_Items[5],
                            v62->m_Items[4],
                            v62->m_Items[5],
                            userId,
                            eventDetail->fields.eventId,
                            viewGroupIds->m_Items[3],
                            (int64_t)v49->fields.eventDamageRoot,
                            v81);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.getTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0LL);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.totalTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0LL);
                          v63 = v10->fields.groupIcons;
                          if ( !v63 )
                            goto LABEL_150;
                          v64 = 4LL;
                          while ( 1 )
                          {
                            v65 = v63->max_length;
                            v66 = v64 - 4;
                            if ( (int)v64 - 4 >= v65 )
                              return;
                            if ( v66 >= v65 )
                              goto LABEL_151;
                            this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v63->obj.klass + v64);
                            if ( this )
                            {
                              x = v10->fields.groupIconPosition.fields.x;
                              y = v10->fields.groupIconPosition.fields.y;
                              z = v10->fields.groupIconPosition.fields.z;
                              groupIconSpace = v10->fields.groupIconSpace;
                              this = (BattleResultEventItemGroupComponent_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                              if ( this )
                              {
                                v88.fields.x = x + (float)(int)(groupIconSpace * (v66 >> 1));
                                v88.fields.y = y;
                                v88.fields.z = z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v88, 0LL);
                                v71 = v10->fields.groupLabels;
                                if ( v71 )
                                {
                                  if ( v66 >= v71->max_length )
                                    goto LABEL_151;
                                  this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v71->obj.klass + v64);
                                  if ( this )
                                  {
                                    this = (BattleResultEventItemGroupComponent_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
                                    if ( this )
                                    {
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)this,
                                        v10->fields.groupLabelPosition,
                                        0LL);
                                      v72 = v10->fields.groupLabels;
                                      if ( v72 )
                                      {
                                        if ( v66 >= v72->max_length )
                                          goto LABEL_151;
                                        this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v72->obj.klass + v64);
                                        if ( this )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)this,
                                            v10->fields.triplePointLabelWidth,
                                            0LL);
                                          v63 = v10->fields.groupIcons;
                                          ++v64;
                                          if ( v63 )
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
          v50 = 0LL;
          v51 = 0;
          while ( 1 )
          {
            if ( v50 >= (unsigned int)v48 )
              goto LABEL_151;
            if ( !oldUsrPoint )
              goto LABEL_150;
            v52 = oldUsrPoint->max_length;
            if ( v52 >= 1 )
              break;
LABEL_98:
            LODWORD(v48) = viewGroupIds->max_length;
            if ( (__int64)++v50 >= (int)v48 )
              goto LABEL_99;
          }
          v53 = viewGroupIds->m_Items[v50 + 1];
          v54 = 0;
          while ( v54 < v52 )
          {
            v55 = oldUsrPoint->m_Items[v54];
            if ( !v55 )
              goto LABEL_150;
            if ( v55->fields.groupId == v53 )
            {
              if ( !this )
                goto LABEL_150;
              if ( v51 >= LODWORD(this->fields.getQpLabel) )
                goto LABEL_151;
              v56 = &this->klass + (int)v51++;
              v56[4] = (BattleResultEventItemGroupComponent_c *)v55->fields.value;
            }
            v52 = oldUsrPoint->max_length;
            if ( (int)++v54 >= v52 )
              goto LABEL_98;
          }
        }
      }
    }
    goto LABEL_151;
  }
  v17 = v10->fields.pointBgSps;
  if ( !v17 )
    goto LABEL_150;
  if ( !v17->max_length )
    goto LABEL_151;
  this = (BattleResultEventItemGroupComponent_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_150;
  UIWidget__set_width((UIWidget_o *)this, 370, 0LL);
  v18 = v10->fields.pointBgSps;
  if ( !v18 )
    goto LABEL_150;
  if ( v18->max_length <= 1 )
    goto LABEL_151;
  this = (BattleResultEventItemGroupComponent_o *)v18->m_Items[1];
  if ( !this )
    goto LABEL_150;
  UIWidget__set_width((UIWidget_o *)this, 370, 0LL);
  v19 = v10->fields.getLabelRoot;
  if ( !v19 )
    goto LABEL_150;
  v82 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
  v82.fields.z = 0.0;
  v82.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v19, v82, 0LL);
  v20 = v10->fields.totalLabelRoot;
  if ( !v20 )
    goto LABEL_150;
  v83 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
  v83.fields.z = 0.0;
  v83.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v20, v83, 0LL);
  if ( !oldUsrPoint )
    goto LABEL_150;
  v21 = oldUsrPoint->max_length;
  if ( v21 < 1 )
  {
LABEL_32:
    oldPoint = 0LL;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v21 )
        goto LABEL_151;
      v23 = oldUsrPoint->m_Items[v22];
      if ( !v23 )
        goto LABEL_150;
      if ( !viewGroupIds->max_length )
        goto LABEL_151;
      if ( v23->fields.groupId == viewGroupIds->m_Items[1] )
        break;
      if ( (int)++v22 >= v21 )
        goto LABEL_32;
    }
    oldPoint = v23->fields.value;
  }
  v73 = v10->fields.groupIcons;
  if ( !v73 )
    goto LABEL_150;
  if ( v73->max_length < 2 )
    goto LABEL_151;
  v74 = v10->fields.groupLabels;
  if ( !v74 )
    goto LABEL_150;
  if ( v74->max_length < 2 )
    goto LABEL_151;
  if ( !eventDetail )
    goto LABEL_150;
  if ( !viewGroupIds->max_length )
    goto LABEL_151;
  BattleResultEventItemGroupComponent__CommonPointViewFunc(
    this,
    v73->m_Items[0],
    v73->m_Items[1],
    v74->m_Items[0],
    v74->m_Items[1],
    userId,
    eventDetail->fields.eventId,
    viewGroupIds->m_Items[1],
    oldPoint,
    v78);
  if ( v12 >= 1 )
  {
    v75 = 0LL;
    while ( 1 )
    {
      v76 = v10->fields.groupLabels;
      if ( !v76 )
        goto LABEL_150;
      if ( (unsigned int)v75 >= v76->max_length )
        goto LABEL_151;
      this = (BattleResultEventItemGroupComponent_o *)v76->m_Items[v75];
      if ( !this )
        goto LABEL_150;
      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0LL);
      if ( (int)++v75 >= v12 )
        return;
    }
  }
}