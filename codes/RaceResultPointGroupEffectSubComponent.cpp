void RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C390B3 & 1) == 0 )
  {
    sub_1C32C20(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_19252/*"event_ranking_group_name_"*/);
    sub_1C32C20(&StringLiteral_19251/*"event_ranking_group_"*/);
    byte_4C390B3 = 1;
  }
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19251/*"event_ranking_group_"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    StringLiteral_19251/*"event_ranking_group_"*/,
    v1,
    v2);
  v3 = StringLiteral_19252/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19252/*"event_ranking_group_name_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v3, v5, v6);
}


void RaceResultPointGroupEffectSubComponent___ctor(
        RaceResultPointGroupEffectSubComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void RaceResultPointGroupEffectSubComponent__RecvParam(
        RaceResultPointGroupEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  struct UILabel_array *nameLabelList; // x8
  int64_t v7; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v10; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v12; // w8
  struct UILabel_array *timeLabelList; // x8
  int v14; // w8
  int32_t v15; // w21
  int v16; // w20
  signed __int64 v17; // x28
  __int64 v18; // x22
  unsigned __int64 v19; // x29
  __int64 v20; // x23
  struct UILabel_array *v21; // x8
  unsigned __int64 v22; // x9
  struct UISprite_array *v23; // x8
  unsigned __int64 v24; // x9
  UISprite_o *v25; // x23
  RaceResultPointGroupEffectSubComponent_c *v26; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  struct UISprite_array *v30; // x8
  unsigned __int64 v31; // x9
  UISprite_o *v32; // x23
  RaceResultPointGroupEffectSubComponent_c *v33; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v35; // x25
  System_String_o *v36; // x0
  struct UILabel_array *v37; // x8
  unsigned __int64 v38; // x9
  int64_t v39; // x24
  UILabel_o *v40; // x23
  System_String_o *v41; // x1
  struct UILabel_array *v42; // x8
  unsigned __int64 v43; // x9
  struct UISprite_array *v44; // x8
  unsigned __int64 v45; // x9
  struct UISprite_array *v46; // x8
  unsigned __int64 v47; // x9
  struct UILabel_array *v48; // x8
  unsigned __int64 v49; // x9
  __int64 v50; // x21
  struct UILabel_array *v51; // x8
  __int64 v52; // x22
  unsigned __int64 max_length_low; // x9
  struct UISprite_array *v54; // x8
  unsigned __int64 v55; // x9
  struct UISprite_array *v56; // x8
  unsigned __int64 v57; // x9
  struct UILabel_array *v58; // x8
  unsigned __int64 v59; // x9
  int32_t v60; // [xsp+8h] [xbp-88h]
  __int64 v61; // [xsp+10h] [xbp-80h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C390B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_1C32C20(&ScriptManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C390B2 = 1;
  }
  goalTime = 0;
  groupId = 0;
  entity = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptLabel = ScriptManager__GetScriptLabel(0);
  Instance = System_Int64__Parse(ScriptLabel, 0);
  nameLabelList = this->fields.nameLabelList;
  v7 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v10 = nameSpriteList->max_length;
    if ( max_length < v10 )
      max_length = v10;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v12 = iconSpriteList->max_length;
    if ( max_length < v12 )
      max_length = v12;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v14 = timeLabelList->max_length;
    if ( max_length < v14 )
      max_length = v14;
  }
  if ( Instance < 1 )
    goto LABEL_85;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_109:
    sub_1C32E7C(Instance);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_42007796((EventScriptMaster_o *)Instance, 2, v7, 0);
  if ( !Instance )
  {
LABEL_85:
    if ( max_length >= 1 )
    {
      v50 = 4;
      while ( 1 )
      {
        v51 = this->fields.nameLabelList;
        v52 = v50 - 4;
        if ( v51 )
        {
          max_length_low = LODWORD(v51->max_length);
          if ( v52 < (int)max_length_low )
          {
            if ( v52 >= max_length_low )
              goto LABEL_110;
            Instance = *((_QWORD *)&v51->obj.klass + v50);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        v54 = this->fields.nameSpriteList;
        if ( v54 )
        {
          v55 = LODWORD(v54->max_length);
          if ( v52 < (int)v55 )
          {
            if ( v52 >= v55 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v54->obj.klass + v50);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v56 = this->fields.iconSpriteList;
        if ( v56 )
        {
          v57 = LODWORD(v56->max_length);
          if ( v52 < (int)v57 )
          {
            if ( v52 >= v57 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v56->obj.klass + v50);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v58 = this->fields.timeLabelList;
        if ( v58 )
        {
          v59 = LODWORD(v58->max_length);
          if ( v52 < (int)v59 )
          {
            if ( v52 >= v59 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v58->obj.klass + v50);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        if ( ++v50 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v15 = *(_DWORD *)(Instance + 16);
  v16 = *(_DWORD *)(Instance + 40);
  v60 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v15,
                        v16 % 100,
                        &goalTime,
                        0);
  if ( !Instance )
    goto LABEL_109;
  if ( max_length >= 1 )
  {
    v17 = *(int *)(Instance + 24);
    v18 = Instance;
    v19 = 0;
    v20 = Instance + 32;
    v61 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v19 >= v17 )
        goto LABEL_61;
      if ( v19 >= *(unsigned int *)(v18 + 24) )
        goto LABEL_110;
      groupId = *(_DWORD *)(v20 + 4 * v19);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_109;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_109;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v15, groupId, 0);
      if ( (Instance & 1) != 0 )
      {
        v21 = this->fields.nameLabelList;
        if ( v21 )
        {
          v22 = LODWORD(v21->max_length);
          if ( (__int64)v19 < (int)v22 )
          {
            if ( v19 >= v22 )
              goto LABEL_110;
            if ( !entity )
              goto LABEL_109;
            Instance = (__int64)v21->m_Items[v19];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0);
          }
        }
        v23 = this->fields.nameSpriteList;
        if ( v23 )
        {
          v24 = LODWORD(v23->max_length);
          if ( (__int64)v19 < (int)v24 )
          {
            if ( v19 >= v24 )
              goto LABEL_110;
            v25 = v23->m_Items[v19];
            v26 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v26 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v26->static_fields->GROUP_NAME_IMAGE_NAME;
            v28 = System_Int32__ToString(v60, 0);
            v29 = System_Int32__ToString((int32_t)&groupId, 0);
            Instance = (__int64)System_String__Concat_63558796(
                                  GROUP_NAME_IMAGE_NAME,
                                  v28,
                                  (System_String_o *)StringLiteral_16107/*"_"*/,
                                  v29,
                                  0);
            if ( !v25 )
              goto LABEL_109;
            UISprite__set_spriteName(v25, (System_String_o *)Instance, 0);
            v20 = v61;
          }
        }
        v30 = this->fields.iconSpriteList;
        if ( v30 )
        {
          v31 = LODWORD(v30->max_length);
          if ( (__int64)v19 < (int)v31 )
          {
            if ( v19 >= v31 )
              goto LABEL_110;
            v32 = v30->m_Items[v19];
            v33 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v33 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v33->static_fields->GROUP_IMAGE_NAME;
            v35 = System_Int32__ToString(v60, 0);
            v36 = System_Int32__ToString((int32_t)&groupId, 0);
            Instance = (__int64)System_String__Concat_63558796(
                                  GROUP_IMAGE_NAME,
                                  v35,
                                  (System_String_o *)StringLiteral_16107/*"_"*/,
                                  v36,
                                  0);
            if ( !v32 )
              goto LABEL_109;
            UISprite__set_spriteName(v32, (System_String_o *)Instance, 0);
            v20 = v61;
          }
        }
        v37 = this->fields.timeLabelList;
        if ( v37 )
        {
          v38 = LODWORD(v37->max_length);
          if ( (__int64)v19 < (int)v38 )
          {
            if ( !goalTime )
              goto LABEL_109;
            if ( v19 >= LODWORD(goalTime->max_length) || v19 >= v38 )
LABEL_110:
              sub_1C32E84(Instance);
            v39 = goalTime->m_Items[v19];
            v40 = v37->m_Items[v19];
            if ( v39 < 1 )
            {
              if ( !v40 )
                goto LABEL_109;
              v41 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__GetLapTime(v39, 0);
              if ( !v40 )
                goto LABEL_109;
              v41 = (System_String_o *)Instance;
            }
            UILabel__set_text(v40, v41, 0);
            v20 = v61;
          }
        }
      }
      else
      {
LABEL_61:
        v42 = this->fields.nameLabelList;
        if ( v42 )
        {
          v43 = LODWORD(v42->max_length);
          if ( (__int64)v19 < (int)v43 )
          {
            if ( v19 >= v43 )
              goto LABEL_110;
            Instance = (__int64)v42->m_Items[v19];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        v44 = this->fields.nameSpriteList;
        if ( v44 )
        {
          v45 = LODWORD(v44->max_length);
          if ( (__int64)v19 < (int)v45 )
          {
            if ( v19 >= v45 )
              goto LABEL_110;
            Instance = (__int64)v44->m_Items[v19];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v46 = this->fields.iconSpriteList;
        if ( v46 )
        {
          v47 = LODWORD(v46->max_length);
          if ( (__int64)v19 < (int)v47 )
          {
            if ( v19 >= v47 )
              goto LABEL_110;
            Instance = (__int64)v46->m_Items[v19];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v48 = this->fields.timeLabelList;
        if ( v48 )
        {
          v49 = LODWORD(v48->max_length);
          if ( (__int64)v19 < (int)v49 )
          {
            if ( v19 >= v49 )
              goto LABEL_110;
            Instance = (__int64)v48->m_Items[v19];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
      }
      if ( max_length == ++v19 )
        goto LABEL_85;
    }
  }
}