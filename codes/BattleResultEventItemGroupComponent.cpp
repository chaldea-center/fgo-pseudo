void BattleResultEventItemGroupComponent___ctor(BattleResultEventItemGroupComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleResultEventItemGroupComponent__CommonPointViewFunc(
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  UserEventPointEntity_o *Entity; // x0
  int64_t value; // x25
  int64_t v21; // x26
  BalanceConfig_c *v22; // x0
  int64_t UserPointEventMax; // x27
  int64_t v24; // x25
  DataManager_o *v25; // x26
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  EventPointGroupEntity_o *v30; // x0
  int32_t iconId; // w21
  int64_t v32; // [xsp+0h] [xbp-70h] BYREF
  DataManager_o *v33; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CF1F8A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_25307/*"{0:#,0}"*/);
    sub_1C7BAE8(&StringLiteral_802/*"+ {0:#,0}"*/);
    byte_4CF1F8A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = UserEventPointMaster__GetEntity((UserEventPointMaster_o *)Instance, userId, eventId, groupId, 0);
  if ( Entity )
  {
    value = Entity->fields.value;
    v21 = value - oldPoint;
  }
  else
  {
    value = 0;
    v21 = 0;
  }
  v22 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v22->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v24 = System_Math__Min_65699080(value, UserPointEventMax, 0);
  Instance = (DataManager_o *)System_Math__Min_65699080(
                                v21,
                                BalanceConfig_TypeInfo->static_fields->UserPointEventMax,
                                0);
  if ( !getLabel )
    goto LABEL_22;
  v25 = Instance;
  UILabel__SetDefaultFont(getLabel, 0);
  v33 = v25;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v33);
  v27 = System_String__Format((System_String_o *)StringLiteral_802/*"+ {0:#,0}"*/, v26, 0);
  UILabel__set_text(getLabel, v27, 0);
  if ( !totalLabel
    || (UILabel__SetDefaultFont(totalLabel, 0),
        v32 = v24,
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32),
        v29 = System_String__Format((System_String_o *)StringLiteral_25307/*"{0:#,0}"*/, v28, 0),
        UILabel__set_text(totalLabel, v29, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0 )
  {
LABEL_22:
    sub_1C7BD40(Instance, v18);
  }
  v30 = EventPointGroupMaster__GetEntity((EventPointGroupMaster_o *)Instance, eventId, groupId, 0);
  if ( v30 )
    iconId = v30->fields.iconId;
  else
    iconId = 0;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(getSp, iconId, 0);
  AtlasManager__SetItem(totalSp, iconId, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemGroupComponent__SetGroupDamageInfo(
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
    || (UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0), (eventDamageRoot = this->fields.eventPointRoot) == 0) )
  {
    sub_1C7BD40(eventDamageRoot, *(_QWORD *)&eventId);
  }
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultEventItemGroupComponent__SetGroupPointInfo(
        BattleResultEventItemGroupComponent_o *this,
        int32_t eventId,
        int64_t userId,
        UserEventPointEntity_array *oldUsrPoint,
        System_Int32_array *viewGroupIds,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *eventDamageRoot; // x0
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v13; // x23
  const MethodInfo *v14; // x5

  if ( (byte_4CF1F88 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1F88 = 1;
  }
  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0);
  eventDamageRoot = this->fields.eventPointRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0);
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot )
    goto LABEL_14;
  eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)eventDamageRoot,
                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventDamageRoot )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
          eventId,
          (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot
    || (eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)eventDamageRoot,
                                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_14:
    sub_1C7BD40(eventDamageRoot, *(_QWORD *)&eventId);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
             eventId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v13 = (EventDetailEntity_o *)Entity;
    if ( EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Entity, 0) )
      BattleResultEventItemGroupComponent__SwitchViewMode(this, userId, viewGroupIds, oldUsrPoint, v13, v14);
  }
}


void BattleResultEventItemGroupComponent__SetQpInfo(
        BattleResultEventItemGroupComponent_o *this,
        int64_t totalQp,
        int32_t getQp,
        const MethodInfo *method)
{
  UILabel_o *getQpLabel; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *totalQpLabel; // x20
  Il2CppObject *v12; // x0
  int64_t v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4CF1F87 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25307/*"{0:#,0}"*/);
    sub_1C7BAE8(&StringLiteral_802/*"+ {0:#,0}"*/);
    byte_4CF1F87 = 1;
  }
  getQpLabel = this->fields.getQpLabel;
  v14 = getQp;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v9 = System_String__Format((System_String_o *)StringLiteral_802/*"+ {0:#,0}"*/, v8, 0);
  if ( !getQpLabel
    || (UILabel__set_text(getQpLabel, v9, 0),
        totalQpLabel = this->fields.totalQpLabel,
        v13 = totalQp,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13),
        v9 = System_String__Format((System_String_o *)StringLiteral_25307/*"{0:#,0}"*/, v12, 0),
        !totalQpLabel) )
  {
    sub_1C7BD40(v9, v10);
  }
  UILabel__set_text(totalQpLabel, v9, 0);
}


void BattleResultEventItemGroupComponent__SwitchViewMode(
        BattleResultEventItemGroupComponent_o *this,
        int64_t userId,
        System_Int32_array *viewGroupIds,
        UserEventPointEntity_array *oldUsrPoint,
        EventDetailEntity_o *eventDetail,
        const MethodInfo *method)
{
  BattleResultEventItemGroupComponent_o *v10; // x19
  struct UISprite_array *groupIcons; // x8
  int v12; // w25
  int v13; // w24
  int max_length; // w9
  struct UILabel_array *groupLabels; // x8
  int v16; // w8
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  UnityEngine_Transform_o *v19; // x24
  UnityEngine_Transform_o *v20; // x24
  int v21; // w8
  int v22; // w9
  UserEventPointEntity_o *v23; // x10
  int64_t oldPoint; // x8
  struct UISprite_array *pointBgSps; // x8
  struct UISprite_array *v26; // x8
  UnityEngine_Transform_o *getLabelRoot; // x24
  UnityEngine_Transform_o *totalLabelRoot; // x24
  il2cpp_array_size_t v29; // x10
  BattleResultEventItemGroupComponent_o *v30; // x24
  unsigned __int64 v31; // x8
  unsigned int v32; // w9
  int v33; // w12
  int32_t v34; // w10
  unsigned int v35; // w11
  UserEventPointEntity_o *v36; // x12
  BattleResultEventItemGroupComponent_c **v37; // x13
  struct UISprite_array *v38; // x8
  struct UILabel_array *v39; // x9
  struct UISprite_array *v40; // x8
  struct UILabel_array *v41; // x9
  unsigned int v42; // w20
  struct UILabel_array *v43; // x8
  struct UISprite_array *v44; // x8
  struct UISprite_array *v45; // x8
  UnityEngine_Transform_o *v46; // x24
  UnityEngine_Transform_o *v47; // x24
  il2cpp_array_size_t v48; // x10
  BattleResultEventItemGroupComponent_o *v49; // x24
  unsigned __int64 v50; // x8
  unsigned int v51; // w9
  int v52; // w12
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
  unsigned int v75; // w20
  struct UILabel_array *v76; // x8
  const MethodInfo *v77; // [xsp+8h] [xbp-68h]
  const MethodInfo *v78; // [xsp+8h] [xbp-68h]
  const MethodInfo *v79; // [xsp+8h] [xbp-68h]
  const MethodInfo *v80; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4CF1F89 & 1) == 0 )
  {
    this = (BattleResultEventItemGroupComponent_o *)sub_1C7BAE8(&long___TypeInfo);
    byte_4CF1F89 = 1;
  }
  if ( !viewGroupIds )
    goto LABEL_150;
  groupIcons = v10->fields.groupIcons;
  if ( !groupIcons )
    goto LABEL_150;
  v12 = 2 * LODWORD(viewGroupIds->max_length);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      groupLabels = v10->fields.groupLabels;
      if ( groupLabels )
      {
        if ( (unsigned int)v13 >= LODWORD(groupLabels->max_length) )
          goto LABEL_151;
        this = (BattleResultEventItemGroupComponent_o *)groupLabels->m_Items[v13];
        if ( this )
        {
          ++v13;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
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
    if ( LODWORD(pointBgSps->max_length) )
    {
      this = (BattleResultEventItemGroupComponent_o *)pointBgSps->m_Items[0];
      if ( !this )
        goto LABEL_150;
      UIWidget__set_width((UIWidget_o *)this, 550, 0);
      v26 = v10->fields.pointBgSps;
      if ( !v26 )
        goto LABEL_150;
      if ( LODWORD(v26->max_length) > 1 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v26->m_Items[1];
        if ( !this )
          goto LABEL_150;
        UIWidget__set_width((UIWidget_o *)this, 550, 0);
        getLabelRoot = v10->fields.getLabelRoot;
        if ( !getLabelRoot )
          goto LABEL_150;
        localPosition = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
        localPosition.fields.z = 0.0;
        localPosition.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(getLabelRoot, localPosition, 0);
        totalLabelRoot = v10->fields.totalLabelRoot;
        if ( !totalLabelRoot )
          goto LABEL_150;
        v84 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
        v84.fields.z = 0.0;
        v84.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(totalLabelRoot, v84, 0);
        this = (BattleResultEventItemGroupComponent_o *)sub_1C7BB90(long___TypeInfo, 2);
        v29 = viewGroupIds->max_length;
        v30 = this;
        if ( (int)v29 >= 1 )
        {
          v31 = 0;
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
          v34 = viewGroupIds->m_Items[v31];
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
              if ( v32 >= LODWORD(this->fields.m_CancellationTokenSource) )
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
        if ( LODWORD(v38->max_length) >= 2 )
        {
          v39 = v10->fields.groupLabels;
          if ( !v39 )
            goto LABEL_150;
          if ( LODWORD(v39->max_length) >= 2 )
          {
            if ( !eventDetail )
              goto LABEL_150;
            if ( (_DWORD)v29 )
            {
              if ( !this )
                goto LABEL_150;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                BattleResultEventItemGroupComponent__CommonPointViewFunc(
                  this,
                  v38->m_Items[0],
                  v38->m_Items[1],
                  v39->m_Items[0],
                  v39->m_Items[1],
                  userId,
                  eventDetail->fields.eventId,
                  viewGroupIds->m_Items[0],
                  (int64_t)this->fields.getQpLabel,
                  v77);
                v40 = v10->fields.groupIcons;
                if ( !v40 )
                  goto LABEL_150;
                if ( LODWORD(v40->max_length) >= 4 )
                {
                  v41 = v10->fields.groupLabels;
                  if ( !v41 )
                    goto LABEL_150;
                  if ( LODWORD(v41->max_length) >= 4
                    && LODWORD(viewGroupIds->max_length) > 1
                    && LODWORD(v30->fields.m_CancellationTokenSource) > 1 )
                  {
                    BattleResultEventItemGroupComponent__CommonPointViewFunc(
                      this,
                      v40->m_Items[2],
                      v40->m_Items[3],
                      v41->m_Items[2],
                      v41->m_Items[3],
                      userId,
                      eventDetail->fields.eventId,
                      viewGroupIds->m_Items[1],
                      (int64_t)v30->fields.totalQpLabel,
                      v78);
                    if ( v12 < 1 )
                      return;
                    v42 = 0;
                    while ( 1 )
                    {
                      v43 = v10->fields.groupLabels;
                      if ( !v43 )
                        break;
                      if ( v42 >= LODWORD(v43->max_length) )
                        goto LABEL_151;
                      this = (BattleResultEventItemGroupComponent_o *)v43->m_Items[v42];
                      if ( !this )
                        break;
                      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0);
                      if ( v12 == ++v42 )
                        return;
                    }
LABEL_150:
                    sub_1C7BD40(this, userId);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_151:
    sub_1C7BD48(this);
  }
  if ( v16 != 1 )
  {
    if ( v16 < 3 )
      return;
    v44 = v10->fields.pointBgSps;
    if ( !v44 )
      goto LABEL_150;
    if ( LODWORD(v44->max_length) )
    {
      this = (BattleResultEventItemGroupComponent_o *)v44->m_Items[0];
      if ( !this )
        goto LABEL_150;
      UIWidget__set_width((UIWidget_o *)this, 550, 0);
      v45 = v10->fields.pointBgSps;
      if ( !v45 )
        goto LABEL_150;
      if ( LODWORD(v45->max_length) > 1 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v45->m_Items[1];
        if ( !this )
          goto LABEL_150;
        UIWidget__set_width((UIWidget_o *)this, 550, 0);
        v46 = v10->fields.getLabelRoot;
        if ( !v46 )
          goto LABEL_150;
        v85 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
        v85.fields.z = 0.0;
        v85.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v46, v85, 0);
        v47 = v10->fields.totalLabelRoot;
        if ( !v47 )
          goto LABEL_150;
        v86 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
        v86.fields.z = 0.0;
        v86.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v47, v86, 0);
        this = (BattleResultEventItemGroupComponent_o *)sub_1C7BB90(long___TypeInfo, 3);
        v48 = viewGroupIds->max_length;
        v49 = this;
        if ( (int)v48 < 1 )
        {
LABEL_99:
          v57 = v10->fields.groupIcons;
          if ( !v57 )
            goto LABEL_150;
          if ( LODWORD(v57->max_length) >= 2 )
          {
            v58 = v10->fields.groupLabels;
            if ( !v58 )
              goto LABEL_150;
            if ( LODWORD(v58->max_length) >= 2 )
            {
              if ( !eventDetail )
                goto LABEL_150;
              if ( (_DWORD)v48 )
              {
                if ( !this )
                  goto LABEL_150;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  BattleResultEventItemGroupComponent__CommonPointViewFunc(
                    this,
                    v57->m_Items[0],
                    v57->m_Items[1],
                    v58->m_Items[0],
                    v58->m_Items[1],
                    userId,
                    eventDetail->fields.eventId,
                    viewGroupIds->m_Items[0],
                    (int64_t)this->fields.getQpLabel,
                    v77);
                  v59 = v10->fields.groupIcons;
                  if ( !v59 )
                    goto LABEL_150;
                  if ( LODWORD(v59->max_length) >= 4 )
                  {
                    v60 = v10->fields.groupLabels;
                    if ( !v60 )
                      goto LABEL_150;
                    if ( LODWORD(v60->max_length) >= 4
                      && LODWORD(viewGroupIds->max_length) > 1
                      && LODWORD(v49->fields.m_CancellationTokenSource) > 1 )
                    {
                      BattleResultEventItemGroupComponent__CommonPointViewFunc(
                        this,
                        v59->m_Items[2],
                        v59->m_Items[3],
                        v60->m_Items[2],
                        v60->m_Items[3],
                        userId,
                        eventDetail->fields.eventId,
                        viewGroupIds->m_Items[1],
                        (int64_t)v49->fields.totalQpLabel,
                        v79);
                      v61 = v10->fields.groupIcons;
                      if ( !v61 )
                        goto LABEL_150;
                      if ( LODWORD(v61->max_length) >= 6 )
                      {
                        v62 = v10->fields.groupLabels;
                        if ( !v62 )
                          goto LABEL_150;
                        if ( LODWORD(v62->max_length) >= 6
                          && LODWORD(viewGroupIds->max_length) > 2
                          && LODWORD(v49->fields.m_CancellationTokenSource) > 2 )
                        {
                          BattleResultEventItemGroupComponent__CommonPointViewFunc(
                            this,
                            v61->m_Items[4],
                            v61->m_Items[5],
                            v62->m_Items[4],
                            v62->m_Items[5],
                            userId,
                            eventDetail->fields.eventId,
                            viewGroupIds->m_Items[2],
                            (int64_t)v49->fields.eventPointRoot,
                            v80);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.getTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.totalTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0);
                          v63 = v10->fields.groupIcons;
                          if ( !v63 )
                            goto LABEL_150;
                          v64 = 4;
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
                                                                                0);
                              if ( this )
                              {
                                v87.fields.x = x + (float)(int)(groupIconSpace * (v66 >> 1));
                                v87.fields.y = y;
                                v87.fields.z = z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v87, 0);
                                v71 = v10->fields.groupLabels;
                                if ( v71 )
                                {
                                  if ( v66 >= LODWORD(v71->max_length) )
                                    goto LABEL_151;
                                  this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v71->obj.klass + v64);
                                  if ( this )
                                  {
                                    this = (BattleResultEventItemGroupComponent_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0);
                                    if ( this )
                                    {
                                      UnityEngine_Transform__set_localPosition(
                                        (UnityEngine_Transform_o *)this,
                                        v10->fields.groupLabelPosition,
                                        0);
                                      v72 = v10->fields.groupLabels;
                                      if ( v72 )
                                      {
                                        if ( v66 >= LODWORD(v72->max_length) )
                                          goto LABEL_151;
                                        this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v72->obj.klass + v64);
                                        if ( this )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)this,
                                            v10->fields.triplePointLabelWidth,
                                            0,
                                            0);
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
          v50 = 0;
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
          v53 = viewGroupIds->m_Items[v50];
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
              if ( v51 >= LODWORD(this->fields.m_CancellationTokenSource) )
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
  if ( !LODWORD(v17->max_length) )
    goto LABEL_151;
  this = (BattleResultEventItemGroupComponent_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_150;
  UIWidget__set_width((UIWidget_o *)this, 370, 0);
  v18 = v10->fields.pointBgSps;
  if ( !v18 )
    goto LABEL_150;
  if ( LODWORD(v18->max_length) <= 1 )
    goto LABEL_151;
  this = (BattleResultEventItemGroupComponent_o *)v18->m_Items[1];
  if ( !this )
    goto LABEL_150;
  UIWidget__set_width((UIWidget_o *)this, 370, 0);
  v19 = v10->fields.getLabelRoot;
  if ( !v19 )
    goto LABEL_150;
  v81 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
  v81.fields.z = 0.0;
  v81.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v19, v81, 0);
  v20 = v10->fields.totalLabelRoot;
  if ( !v20 )
    goto LABEL_150;
  v82 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
  v82.fields.z = 0.0;
  v82.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v20, v82, 0);
  if ( !oldUsrPoint )
    goto LABEL_150;
  v21 = oldUsrPoint->max_length;
  if ( v21 < 1 )
  {
LABEL_32:
    oldPoint = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v21 == v22 )
        goto LABEL_151;
      v23 = oldUsrPoint->m_Items[v22];
      if ( !v23 )
        goto LABEL_150;
      if ( !LODWORD(viewGroupIds->max_length) )
        goto LABEL_151;
      if ( v23->fields.groupId == viewGroupIds->m_Items[0] )
        break;
      if ( v21 == ++v22 )
        goto LABEL_32;
    }
    oldPoint = v23->fields.value;
  }
  v73 = v10->fields.groupIcons;
  if ( !v73 )
    goto LABEL_150;
  if ( LODWORD(v73->max_length) < 2 )
    goto LABEL_151;
  v74 = v10->fields.groupLabels;
  if ( !v74 )
    goto LABEL_150;
  if ( LODWORD(v74->max_length) < 2 )
    goto LABEL_151;
  if ( !eventDetail )
    goto LABEL_150;
  if ( !LODWORD(viewGroupIds->max_length) )
    goto LABEL_151;
  BattleResultEventItemGroupComponent__CommonPointViewFunc(
    this,
    v73->m_Items[0],
    v73->m_Items[1],
    v74->m_Items[0],
    v74->m_Items[1],
    userId,
    eventDetail->fields.eventId,
    viewGroupIds->m_Items[0],
    oldPoint,
    v77);
  if ( v12 >= 1 )
  {
    v75 = 0;
    while ( 1 )
    {
      v76 = v10->fields.groupLabels;
      if ( !v76 )
        goto LABEL_150;
      if ( v75 >= LODWORD(v76->max_length) )
        goto LABEL_151;
      this = (BattleResultEventItemGroupComponent_o *)v76->m_Items[v75];
      if ( !this )
        goto LABEL_150;
      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0);
      if ( v12 == ++v75 )
        return;
    }
  }
}