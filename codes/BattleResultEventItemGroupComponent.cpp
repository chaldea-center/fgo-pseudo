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
  __int64 v20; // x1
  int64_t value; // x25
  int64_t v22; // x26
  BalanceConfig_c *v23; // x0
  int64_t UserPointEventMax; // x27
  int64_t v25; // x25
  DataManager_o *v26; // x26
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  EventPointGroupEntity_o *v31; // x0
  __int64 v32; // x1
  int32_t iconId; // w21
  int64_t v34; // [xsp+0h] [xbp-70h] BYREF
  DataManager_o *v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_593C26D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_862/*"+ {0:#,0}"*/);
    byte_593C26D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = UserEventPointMaster__GetEntity((UserEventPointMaster_o *)Instance, userId, eventId, groupId, 0);
  if ( Entity )
  {
    value = Entity->fields.value;
    v22 = value - oldPoint;
  }
  else
  {
    value = 0;
    v22 = 0;
  }
  v23 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
    v23 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v23->static_fields->UserPointEventMax;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20);
  v25 = System_Math__Min_76940304(value, UserPointEventMax, 0);
  Instance = (DataManager_o *)System_Math__Min_76940304(
                                v22,
                                BalanceConfig_TypeInfo->static_fields->UserPointEventMax,
                                0);
  if ( !getLabel )
    goto LABEL_22;
  v26 = Instance;
  UILabel__SetDefaultFont(getLabel, 0);
  v35 = v26;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v35);
  v28 = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v27, 0);
  UILabel__set_text(getLabel, v28, 0);
  if ( !totalLabel
    || (UILabel__SetDefaultFont(totalLabel, 0),
        v34 = v25,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v34),
        v30 = System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v29, 0),
        UILabel__set_text(totalLabel, v30, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0 )
  {
LABEL_22:
    sub_21FFECC(Instance, v18);
  }
  v31 = EventPointGroupMaster__GetEntity((EventPointGroupMaster_o *)Instance, eventId, groupId, 0);
  if ( v31 )
    iconId = v31->fields.iconId;
  else
    iconId = 0;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
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
    sub_21FFECC(eventDamageRoot, *(_QWORD *)&eventId);
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

  if ( (byte_593C26B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C26B = 1;
  }
  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0);
  eventDamageRoot = this->fields.eventPointRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0);
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot )
    goto LABEL_14;
  eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)eventDamageRoot,
                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventDamageRoot )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
          eventId,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot
    || (eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)eventDamageRoot,
                                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_14:
    sub_21FFECC(eventDamageRoot, *(_QWORD *)&eventId);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
             eventId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  UILabel_o *getQpLabel; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *totalQpLabel; // x20
  Il2CppObject *v12; // x0
  int64_t v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_593C26A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_862/*"+ {0:#,0}"*/);
    byte_593C26A = 1;
  }
  getQpLabel = this->fields.getQpLabel;
  v14 = getQp;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v9 = System_String__Format((System_String_o *)StringLiteral_862/*"+ {0:#,0}"*/, v8, 0);
  if ( !getQpLabel
    || (UILabel__set_text(getQpLabel, v9, 0),
        totalQpLabel = this->fields.totalQpLabel,
        v13 = totalQp,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v13),
        v9 = System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v12, 0),
        !totalQpLabel) )
  {
    sub_21FFECC(v9, v10);
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
  il2cpp_array_size_t max_length; // x25
  int v13; // w26
  unsigned int v14; // w27
  __int64 v15; // x24
  unsigned int v16; // w9
  struct UILabel_array *groupLabels; // x8
  int v18; // w8
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  UnityEngine_Transform_o *v21; // x24
  UnityEngine_Transform_o *v22; // x24
  int v23; // w8
  int v24; // w10
  UserEventPointEntity_o *v25; // x11
  int64_t oldPoint; // x8
  struct UISprite_array *pointBgSps; // x8
  struct UISprite_array *v28; // x8
  UnityEngine_Transform_o *getLabelRoot; // x24
  UnityEngine_Transform_o *totalLabelRoot; // x24
  il2cpp_array_size_t v31; // x10
  BattleResultEventItemGroupComponent_o *v32; // x24
  unsigned __int64 v33; // x8
  unsigned int v34; // w9
  int v35; // w12
  unsigned int v36; // w11
  int32_t v37; // w10
  UserEventPointEntity_o *v38; // x12
  BattleResultEventItemGroupComponent_c **v39; // x13
  struct UISprite_array *v40; // x8
  struct UILabel_array *v41; // x9
  struct UISprite_array *v42; // x8
  struct UILabel_array *v43; // x9
  __int64 v44; // x21
  struct UILabel_array *v45; // x8
  struct UISprite_array *v46; // x8
  struct UISprite_array *v47; // x8
  UnityEngine_Transform_o *v48; // x24
  UnityEngine_Transform_o *v49; // x24
  il2cpp_array_size_t v50; // x10
  BattleResultEventItemGroupComponent_o *v51; // x24
  unsigned __int64 v52; // x8
  unsigned int v53; // w9
  int v54; // w12
  unsigned int v55; // w11
  int32_t v56; // w10
  UserEventPointEntity_o *v57; // x12
  BattleResultEventItemGroupComponent_c **v58; // x13
  struct UISprite_array *v59; // x8
  struct UILabel_array *v60; // x9
  struct UISprite_array *v61; // x8
  struct UILabel_array *v62; // x9
  struct UISprite_array *v63; // x8
  struct UILabel_array *v64; // x9
  struct UISprite_array *v65; // x8
  __int64 v66; // x20
  int v67; // w9
  unsigned int v68; // w21
  float y; // s8
  float x; // s10
  float z; // s9
  int32_t groupIconSpace; // w22
  struct UILabel_array *v73; // x8
  struct UILabel_array *v74; // x8
  struct UISprite_array *v75; // x9
  struct UILabel_array *v76; // x10
  __int64 v77; // x21
  struct UILabel_array *v78; // x8
  const MethodInfo *v79; // [xsp+8h] [xbp-78h]
  const MethodInfo *v80; // [xsp+8h] [xbp-78h]
  const MethodInfo *v81; // [xsp+8h] [xbp-78h]
  const MethodInfo *v82; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_593C26C & 1) == 0 )
  {
    this = (BattleResultEventItemGroupComponent_o *)sub_21FFC50(&long___TypeInfo);
    byte_593C26C = 1;
  }
  if ( !viewGroupIds )
    goto LABEL_13;
  groupIcons = v10->fields.groupIcons;
  if ( !groupIcons )
    goto LABEL_13;
  max_length = viewGroupIds->max_length;
  v13 = 2 * max_length;
  v14 = 2 * max_length;
  v15 = 16LL * (_DWORD)max_length + 32;
  while ( 1 )
  {
    v16 = groupIcons->max_length;
    if ( (int)v14 >= (int)v16 )
      break;
    if ( v14 >= v16 )
      goto LABEL_150;
    this = *(BattleResultEventItemGroupComponent_o **)((char *)&groupIcons->obj.klass + v15);
    if ( this )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
      groupLabels = v10->fields.groupLabels;
      if ( groupLabels )
      {
        if ( v14 >= LODWORD(groupLabels->max_length) )
          goto LABEL_150;
        this = *(BattleResultEventItemGroupComponent_o **)((char *)&groupLabels->obj.klass + v15);
        if ( this )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
          groupIcons = v10->fields.groupIcons;
          ++v14;
          v15 += 8;
          if ( groupIcons )
            continue;
        }
      }
    }
    goto LABEL_13;
  }
  v18 = viewGroupIds->max_length;
  if ( v18 == 2 )
  {
    pointBgSps = v10->fields.pointBgSps;
    if ( !pointBgSps )
      goto LABEL_13;
    if ( LODWORD(pointBgSps->max_length) )
    {
      this = (BattleResultEventItemGroupComponent_o *)pointBgSps->m_Items[0];
      if ( !this )
        goto LABEL_13;
      UIWidget__set_width((UIWidget_o *)this, 550, 0);
      v28 = v10->fields.pointBgSps;
      if ( !v28 )
        goto LABEL_13;
      if ( (v28->max_length & 0xFFFFFFFE) != 0 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v28->m_Items[1];
        if ( !this )
          goto LABEL_13;
        UIWidget__set_width((UIWidget_o *)this, 550, 0);
        getLabelRoot = v10->fields.getLabelRoot;
        if ( !getLabelRoot )
          goto LABEL_13;
        localPosition = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
        localPosition.fields.z = 0.0;
        localPosition.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(getLabelRoot, localPosition, 0);
        totalLabelRoot = v10->fields.totalLabelRoot;
        if ( !totalLabelRoot )
          goto LABEL_13;
        v86 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
        v86.fields.z = 0.0;
        v86.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(totalLabelRoot, v86, 0);
        this = (BattleResultEventItemGroupComponent_o *)sub_21FFD10(long___TypeInfo, 2);
        v31 = viewGroupIds->max_length;
        v32 = this;
        if ( (int)v31 >= 1 )
        {
          v33 = 0;
          v34 = 0;
          while ( 1 )
          {
            if ( v33 >= (unsigned int)v31 )
              goto LABEL_150;
            if ( !oldUsrPoint )
              goto LABEL_13;
            v35 = oldUsrPoint->max_length;
            if ( v35 >= 1 )
              break;
LABEL_54:
            LODWORD(v31) = viewGroupIds->max_length;
            if ( (__int64)++v33 >= (int)v31 )
              goto LABEL_55;
          }
          v36 = 0;
          v37 = viewGroupIds->m_Items[v33];
          while ( v36 < v35 )
          {
            v38 = oldUsrPoint->m_Items[v36];
            if ( !v38 )
              goto LABEL_13;
            if ( v38->fields.groupId == v37 )
            {
              if ( !this )
                goto LABEL_13;
              if ( v34 >= LODWORD(this->fields.m_CancellationTokenSource) )
                goto LABEL_150;
              v39 = &this->klass + (int)v34++;
              v39[4] = (BattleResultEventItemGroupComponent_c *)v38->fields.value;
            }
            v35 = oldUsrPoint->max_length;
            if ( (int)++v36 >= v35 )
              goto LABEL_54;
          }
          goto LABEL_150;
        }
LABEL_55:
        v40 = v10->fields.groupIcons;
        if ( !v40 )
          goto LABEL_13;
        if ( LODWORD(v40->max_length) >= 2 )
        {
          v41 = v10->fields.groupLabels;
          if ( !v41 )
            goto LABEL_13;
          if ( LODWORD(v41->max_length) >= 2 )
          {
            if ( !eventDetail )
              goto LABEL_13;
            if ( (_DWORD)v31 )
            {
              if ( !this )
                goto LABEL_13;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                BattleResultEventItemGroupComponent__CommonPointViewFunc(
                  this,
                  v40->m_Items[0],
                  v40->m_Items[1],
                  v41->m_Items[0],
                  v41->m_Items[1],
                  userId,
                  eventDetail->fields.eventId,
                  viewGroupIds->m_Items[0],
                  (int64_t)this->fields.getQpLabel,
                  v79);
                v42 = v10->fields.groupIcons;
                if ( !v42 )
                  goto LABEL_13;
                if ( LODWORD(v42->max_length) >= 4 )
                {
                  v43 = v10->fields.groupLabels;
                  if ( !v43 )
                    goto LABEL_13;
                  if ( LODWORD(v43->max_length) >= 4
                    && (viewGroupIds->max_length & 0xFFFFFFFE) != 0
                    && ((__int64)v32->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
                  {
                    BattleResultEventItemGroupComponent__CommonPointViewFunc(
                      this,
                      v42->m_Items[2],
                      v42->m_Items[3],
                      v43->m_Items[2],
                      v43->m_Items[3],
                      userId,
                      eventDetail->fields.eventId,
                      viewGroupIds->m_Items[1],
                      (int64_t)v32->fields.totalQpLabel,
                      v80);
                    if ( v13 < 1 )
                      return;
                    v44 = 0;
                    while ( 1 )
                    {
                      v45 = v10->fields.groupLabels;
                      if ( !v45 )
                        break;
                      if ( (unsigned int)v44 >= LODWORD(v45->max_length) )
                        goto LABEL_150;
                      this = (BattleResultEventItemGroupComponent_o *)v45->m_Items[v44];
                      if ( !this )
                        break;
                      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0);
                      if ( 2 * (_DWORD)max_length == (_DWORD)++v44 )
                        return;
                    }
LABEL_13:
                    sub_21FFECC(this, userId);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_150:
    sub_21FFED4(this);
  }
  if ( v18 != 1 )
  {
    if ( v18 < 3 )
      return;
    v46 = v10->fields.pointBgSps;
    if ( !v46 )
      goto LABEL_13;
    if ( LODWORD(v46->max_length) )
    {
      this = (BattleResultEventItemGroupComponent_o *)v46->m_Items[0];
      if ( !this )
        goto LABEL_13;
      UIWidget__set_width((UIWidget_o *)this, 550, 0);
      v47 = v10->fields.pointBgSps;
      if ( !v47 )
        goto LABEL_13;
      if ( (v47->max_length & 0xFFFFFFFE) != 0 )
      {
        this = (BattleResultEventItemGroupComponent_o *)v47->m_Items[1];
        if ( !this )
          goto LABEL_13;
        UIWidget__set_width((UIWidget_o *)this, 550, 0);
        v48 = v10->fields.getLabelRoot;
        if ( !v48 )
          goto LABEL_13;
        v87 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
        v87.fields.z = 0.0;
        v87.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v48, v87, 0);
        v49 = v10->fields.totalLabelRoot;
        if ( !v49 )
          goto LABEL_13;
        v88 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
        v88.fields.z = 0.0;
        v88.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v49, v88, 0);
        this = (BattleResultEventItemGroupComponent_o *)sub_21FFD10(long___TypeInfo, 3);
        v50 = viewGroupIds->max_length;
        v51 = this;
        if ( (int)v50 < 1 )
        {
LABEL_99:
          v59 = v10->fields.groupIcons;
          if ( !v59 )
            goto LABEL_13;
          if ( LODWORD(v59->max_length) >= 2 )
          {
            v60 = v10->fields.groupLabels;
            if ( !v60 )
              goto LABEL_13;
            if ( LODWORD(v60->max_length) >= 2 )
            {
              if ( !eventDetail )
                goto LABEL_13;
              if ( (_DWORD)v50 )
              {
                if ( !this )
                  goto LABEL_13;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  BattleResultEventItemGroupComponent__CommonPointViewFunc(
                    this,
                    v59->m_Items[0],
                    v59->m_Items[1],
                    v60->m_Items[0],
                    v60->m_Items[1],
                    userId,
                    eventDetail->fields.eventId,
                    viewGroupIds->m_Items[0],
                    (int64_t)this->fields.getQpLabel,
                    v79);
                  v61 = v10->fields.groupIcons;
                  if ( !v61 )
                    goto LABEL_13;
                  if ( LODWORD(v61->max_length) >= 4 )
                  {
                    v62 = v10->fields.groupLabels;
                    if ( !v62 )
                      goto LABEL_13;
                    if ( LODWORD(v62->max_length) >= 4
                      && (viewGroupIds->max_length & 0xFFFFFFFE) != 0
                      && ((__int64)v51->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
                    {
                      BattleResultEventItemGroupComponent__CommonPointViewFunc(
                        this,
                        v61->m_Items[2],
                        v61->m_Items[3],
                        v62->m_Items[2],
                        v62->m_Items[3],
                        userId,
                        eventDetail->fields.eventId,
                        viewGroupIds->m_Items[1],
                        (int64_t)v51->fields.totalQpLabel,
                        v81);
                      v63 = v10->fields.groupIcons;
                      if ( !v63 )
                        goto LABEL_13;
                      if ( LODWORD(v63->max_length) >= 6 )
                      {
                        v64 = v10->fields.groupLabels;
                        if ( !v64 )
                          goto LABEL_13;
                        if ( LODWORD(v64->max_length) >= 6
                          && LODWORD(viewGroupIds->max_length) > 2
                          && LODWORD(v51->fields.m_CancellationTokenSource) > 2 )
                        {
                          BattleResultEventItemGroupComponent__CommonPointViewFunc(
                            this,
                            v63->m_Items[4],
                            v63->m_Items[5],
                            v64->m_Items[4],
                            v64->m_Items[5],
                            userId,
                            eventDetail->fields.eventId,
                            viewGroupIds->m_Items[2],
                            (int64_t)v51->fields.eventPointRoot,
                            v82);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.getTitleLabel;
                          if ( !this )
                            goto LABEL_13;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.totalTitleLabel;
                          if ( !this )
                            goto LABEL_13;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0);
                          v65 = v10->fields.groupIcons;
                          if ( !v65 )
                            goto LABEL_13;
                          v66 = 4;
                          while ( 1 )
                          {
                            v67 = v65->max_length;
                            v68 = v66 - 4;
                            if ( (int)v66 - 4 >= v67 )
                              return;
                            if ( v68 >= v67 )
                              goto LABEL_150;
                            this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v65->obj.klass + v66);
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
                                v89.fields.y = y;
                                v89.fields.z = z;
                                v89.fields.x = x + (float)(int)(groupIconSpace * (v68 >> 1));
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v89, 0);
                                v73 = v10->fields.groupLabels;
                                if ( v73 )
                                {
                                  if ( v68 >= LODWORD(v73->max_length) )
                                    goto LABEL_150;
                                  this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v73->obj.klass + v66);
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
                                      v74 = v10->fields.groupLabels;
                                      if ( v74 )
                                      {
                                        if ( v68 >= LODWORD(v74->max_length) )
                                          goto LABEL_150;
                                        this = (BattleResultEventItemGroupComponent_o *)*((_QWORD *)&v74->obj.klass + v66);
                                        if ( this )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)this,
                                            v10->fields.triplePointLabelWidth,
                                            0,
                                            0);
                                          v65 = v10->fields.groupIcons;
                                          ++v66;
                                          if ( v65 )
                                            continue;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_13;
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
          v52 = 0;
          v53 = 0;
          while ( 1 )
          {
            if ( v52 >= (unsigned int)v50 )
              goto LABEL_150;
            if ( !oldUsrPoint )
              goto LABEL_13;
            v54 = oldUsrPoint->max_length;
            if ( v54 >= 1 )
              break;
LABEL_98:
            LODWORD(v50) = viewGroupIds->max_length;
            if ( (__int64)++v52 >= (int)v50 )
              goto LABEL_99;
          }
          v55 = 0;
          v56 = viewGroupIds->m_Items[v52];
          while ( v55 < v54 )
          {
            v57 = oldUsrPoint->m_Items[v55];
            if ( !v57 )
              goto LABEL_13;
            if ( v57->fields.groupId == v56 )
            {
              if ( !this )
                goto LABEL_13;
              if ( v53 >= LODWORD(this->fields.m_CancellationTokenSource) )
                goto LABEL_150;
              v58 = &this->klass + (int)v53++;
              v58[4] = (BattleResultEventItemGroupComponent_c *)v57->fields.value;
            }
            v54 = oldUsrPoint->max_length;
            if ( (int)++v55 >= v54 )
              goto LABEL_98;
          }
        }
      }
    }
    goto LABEL_150;
  }
  v19 = v10->fields.pointBgSps;
  if ( !v19 )
    goto LABEL_13;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_150;
  this = (BattleResultEventItemGroupComponent_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_13;
  UIWidget__set_width((UIWidget_o *)this, 370, 0);
  v20 = v10->fields.pointBgSps;
  if ( !v20 )
    goto LABEL_13;
  if ( (v20->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_150;
  this = (BattleResultEventItemGroupComponent_o *)v20->m_Items[1];
  if ( !this )
    goto LABEL_13;
  UIWidget__set_width((UIWidget_o *)this, 370, 0);
  v21 = v10->fields.getLabelRoot;
  if ( !v21 )
    goto LABEL_13;
  v83 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0);
  v83.fields.z = 0.0;
  v83.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v21, v83, 0);
  v22 = v10->fields.totalLabelRoot;
  if ( !v22 )
    goto LABEL_13;
  v84 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0);
  v84.fields.z = 0.0;
  v84.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v22, v84, 0);
  if ( !oldUsrPoint )
    goto LABEL_13;
  v23 = oldUsrPoint->max_length;
  if ( v23 < 1 )
  {
LABEL_32:
    oldPoint = 0;
  }
  else
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v23 == v24 )
        goto LABEL_150;
      v25 = oldUsrPoint->m_Items[v24];
      if ( !v25 )
        goto LABEL_13;
      if ( !LODWORD(viewGroupIds->max_length) )
        goto LABEL_150;
      if ( v25->fields.groupId == viewGroupIds->m_Items[0] )
        break;
      if ( (v23 & ~(v23 >> 31)) == ++v24 )
        goto LABEL_32;
    }
    oldPoint = v25->fields.value;
  }
  v75 = v10->fields.groupIcons;
  if ( !v75 )
    goto LABEL_13;
  if ( LODWORD(v75->max_length) < 2 )
    goto LABEL_150;
  v76 = v10->fields.groupLabels;
  if ( !v76 )
    goto LABEL_13;
  if ( LODWORD(v76->max_length) < 2 )
    goto LABEL_150;
  if ( !eventDetail )
    goto LABEL_13;
  if ( !LODWORD(viewGroupIds->max_length) )
    goto LABEL_150;
  BattleResultEventItemGroupComponent__CommonPointViewFunc(
    this,
    v75->m_Items[0],
    v75->m_Items[1],
    v76->m_Items[0],
    v76->m_Items[1],
    userId,
    eventDetail->fields.eventId,
    viewGroupIds->m_Items[0],
    oldPoint,
    v79);
  if ( v13 >= 1 )
  {
    v77 = 0;
    while ( 1 )
    {
      v78 = v10->fields.groupLabels;
      if ( !v78 )
        goto LABEL_13;
      if ( (unsigned int)v77 >= LODWORD(v78->max_length) )
        goto LABEL_150;
      this = (BattleResultEventItemGroupComponent_o *)v78->m_Items[v77];
      if ( !this )
        goto LABEL_13;
      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0);
      if ( 2 * (_DWORD)max_length == (_DWORD)++v77 )
        return;
    }
  }
}