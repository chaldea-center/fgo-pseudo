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
  __int64 v26; // x1
  UserEventPointEntity_o *Entity; // x0
  int64_t value; // x25
  int64_t v29; // x26
  BalanceConfig_c *v30; // x0
  int64_t UserPointEventMax; // x27
  int64_t v32; // x25
  __int64 v33; // x26
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  EventPointGroupEntity_o *v44; // x0
  int32_t iconId; // w21
  int64_t v46; // [xsp+0h] [xbp-70h] BYREF
  __int64 v47; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B69F98 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, getSp);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v17);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v19);
    sub_1BE4ACC(&long_TypeInfo, v20);
    sub_1BE4ACC(&System_Math_TypeInfo, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BE4ACC(&StringLiteral_25276/*"{0:#,0}"*/, v23);
    sub_1BE4ACC(&StringLiteral_856/*"+ {0:#,0}"*/, v24);
    byte_4B69F98 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  if ( !Instance )
    goto LABEL_22;
  Entity = UserEventPointMaster__GetEntity((UserEventPointMaster_o *)Instance, userId, eventId, groupId, 0LL);
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
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  UserPointEventMax = v30->static_fields->UserPointEventMax;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v32 = System_Math__Min_63518292(value, UserPointEventMax, 0LL);
  Instance = (DataManager_o *)System_Math__Min_63518292(
                                v29,
                                BalanceConfig_TypeInfo->static_fields->UserPointEventMax,
                                0LL);
  if ( !getLabel )
    goto LABEL_22;
  v33 = (__int64)Instance;
  UILabel__SetDefaultFont(getLabel, 0LL);
  v47 = v33;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v34, v35, v36);
  v38 = System_String__Format((System_String_o *)StringLiteral_856/*"+ {0:#,0}"*/, v37, 0LL);
  UILabel__set_text(getLabel, v38, 0LL);
  if ( !totalLabel
    || (UILabel__SetDefaultFont(totalLabel, 0LL),
        v46 = v32,
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v39, v40, v41),
        v43 = System_String__Format((System_String_o *)StringLiteral_25276/*"{0:#,0}"*/, v42, 0LL),
        UILabel__set_text(totalLabel, v43, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventPointGroupMaster___)) == 0LL )
  {
LABEL_22:
    sub_1BE4D28(Instance, v26);
  }
  v44 = EventPointGroupMaster__GetEntity((EventPointGroupMaster_o *)Instance, eventId, groupId, 0LL);
  if ( v44 )
    iconId = v44->fields.iconId;
  else
    iconId = 0;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(getSp, iconId, 0LL);
  AtlasManager__SetItem(totalSp, iconId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BE4D28(eventDamageRoot, *(_QWORD *)&eventId);
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
  Il2CppObject *Entity; // x0
  EventDetailEntity_o *v17; // x23
  const MethodInfo *v18; // x5

  if ( (byte_4B69F96 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v11);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B69F96 = 1;
  }
  eventDamageRoot = this->fields.eventDamageRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 0, 0LL);
  eventDamageRoot = this->fields.eventPointRoot;
  if ( !eventDamageRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(eventDamageRoot, 1, 0LL);
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot )
    goto LABEL_14;
  eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)eventDamageRoot,
                                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !eventDamageRoot )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
          eventId,
          (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__) )
    return;
  eventDamageRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventDamageRoot
    || (eventDamageRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                        (DataManager_o *)eventDamageRoot,
                                                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_14:
    sub_1BE4D28(eventDamageRoot, *(_QWORD *)&eventId);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)eventDamageRoot,
             eventId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( Entity )
  {
    v17 = (EventDetailEntity_o *)Entity;
    if ( EventDetailEntity__IsGroupPoint((EventDetailEntity_o *)Entity, 0LL) )
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *getQpLabel; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *totalQpLabel; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B69F95 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&totalQp);
    sub_1BE4ACC(&StringLiteral_25276/*"{0:#,0}"*/, v8);
    sub_1BE4ACC(&StringLiteral_856/*"+ {0:#,0}"*/, v9);
    byte_4B69F95 = 1;
  }
  getQpLabel = this->fields.getQpLabel;
  v20 = getQp;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&getQp, method, v4);
  v12 = System_String__Format((System_String_o *)StringLiteral_856/*"+ {0:#,0}"*/, v11, 0LL);
  if ( !getQpLabel
    || (UILabel__set_text(getQpLabel, v12, 0LL),
        totalQpLabel = this->fields.totalQpLabel,
        v19 = totalQp,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v15, v16, v17),
        v12 = System_String__Format((System_String_o *)StringLiteral_25276/*"{0:#,0}"*/, v18, 0LL),
        !totalQpLabel) )
  {
    sub_1BE4D28(v12, v13);
  }
  UILabel__set_text(totalQpLabel, v12, 0LL);
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
  int v22; // w9
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
  il2cpp_array_size_t v42; // w20
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
  il2cpp_array_size_t v75; // w20
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
  if ( (byte_4B69F97 & 1) == 0 )
  {
    this = (BattleResultEventItemGroupComponent_o *)sub_1BE4ACC(&long___TypeInfo, userId);
    byte_4B69F97 = 1;
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
        v84 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v84.fields.z = 0.0;
        v84.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(totalLabelRoot, v84, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_1BE4B74(long___TypeInfo, 2LL);
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
                  viewGroupIds->m_Items[1],
                  (int64_t)this->fields.getQpLabel,
                  v77);
                v40 = v10->fields.groupIcons;
                if ( !v40 )
                  goto LABEL_150;
                if ( v40->max_length >= 4 )
                {
                  v41 = v10->fields.groupLabels;
                  if ( !v41 )
                    goto LABEL_150;
                  if ( v41->max_length >= 4
                    && viewGroupIds->max_length > 1
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
                      viewGroupIds->m_Items[2],
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
                      if ( v42 >= v43->max_length )
                        goto LABEL_151;
                      this = (BattleResultEventItemGroupComponent_o *)v43->m_Items[v42];
                      if ( !this )
                        break;
                      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0LL);
                      if ( v12 == ++v42 )
                        return;
                    }
LABEL_150:
                    sub_1BE4D28(this, userId);
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_151:
    sub_1BE4D30(this, userId);
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
        v85 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
        v85.fields.z = 0.0;
        v85.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v46, v85, 0LL);
        v47 = v10->fields.totalLabelRoot;
        if ( !v47 )
          goto LABEL_150;
        v86 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
        v86.fields.z = 0.0;
        v86.fields.x = -535.0;
        UnityEngine_Transform__set_localPosition(v47, v86, 0LL);
        this = (BattleResultEventItemGroupComponent_o *)sub_1BE4B74(long___TypeInfo, 3LL);
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
                    viewGroupIds->m_Items[1],
                    (int64_t)this->fields.getQpLabel,
                    v77);
                  v59 = v10->fields.groupIcons;
                  if ( !v59 )
                    goto LABEL_150;
                  if ( v59->max_length >= 4 )
                  {
                    v60 = v10->fields.groupLabels;
                    if ( !v60 )
                      goto LABEL_150;
                    if ( v60->max_length >= 4
                      && viewGroupIds->max_length > 1
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
                        viewGroupIds->m_Items[2],
                        (int64_t)v49->fields.totalQpLabel,
                        v79);
                      v61 = v10->fields.groupIcons;
                      if ( !v61 )
                        goto LABEL_150;
                      if ( v61->max_length >= 6 )
                      {
                        v62 = v10->fields.groupLabels;
                        if ( !v62 )
                          goto LABEL_150;
                        if ( v62->max_length >= 6
                          && viewGroupIds->max_length > 2
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
                            viewGroupIds->m_Items[3],
                            (int64_t)v49->fields.eventPointRoot,
                            v80);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.getTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0LL);
                          this = (BattleResultEventItemGroupComponent_o *)v10->fields.totalTitleLabel;
                          if ( !this )
                            goto LABEL_150;
                          UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.titleLabelWidth, 0, 0LL);
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
                                v87.fields.x = x + (float)(int)(groupIconSpace * (v66 >> 1));
                                v87.fields.y = y;
                                v87.fields.z = z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v87, 0LL);
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
                                            0,
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
  v81 = UnityEngine_Transform__get_localPosition(v10->fields.getLabelRoot, 0LL);
  v81.fields.z = 0.0;
  v81.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v19, v81, 0LL);
  v20 = v10->fields.totalLabelRoot;
  if ( !v20 )
    goto LABEL_150;
  v82 = UnityEngine_Transform__get_localPosition(v10->fields.totalLabelRoot, 0LL);
  v82.fields.z = 0.0;
  v82.fields.x = -355.0;
  UnityEngine_Transform__set_localPosition(v20, v82, 0LL);
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
      if ( v21 == v22 )
        goto LABEL_151;
      v23 = oldUsrPoint->m_Items[v22];
      if ( !v23 )
        goto LABEL_150;
      if ( !viewGroupIds->max_length )
        goto LABEL_151;
      if ( v23->fields.groupId == viewGroupIds->m_Items[1] )
        break;
      if ( v21 == ++v22 )
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
    v77);
  if ( v12 >= 1 )
  {
    v75 = 0;
    while ( 1 )
    {
      v76 = v10->fields.groupLabels;
      if ( !v76 )
        goto LABEL_150;
      if ( v75 >= v76->max_length )
        goto LABEL_151;
      this = (BattleResultEventItemGroupComponent_o *)v76->m_Items[v75];
      if ( !this )
        goto LABEL_150;
      UILabel__SetCondensedScale((UILabel_o *)this, v10->fields.pointLabelWidth, 0, 0LL);
      if ( v12 == ++v75 )
        return;
    }
  }
}