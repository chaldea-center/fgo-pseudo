void RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C289AB & 1) == 0 )
  {
    sub_1C2D490(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19241/*"event_ranking_group_name_"*/);
    sub_1C2D490(&StringLiteral_19240/*"event_ranking_group_"*/);
    byte_4C289AB = 1;
  }
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19240/*"event_ranking_group_"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    StringLiteral_19240/*"event_ranking_group_"*/,
    v1,
    v2);
  v3 = StringLiteral_19241/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19241/*"event_ranking_group_name_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v3, v5, v6);
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
  __int64 v6; // x1
  __int64 v7; // x2
  struct UILabel_array *nameLabelList; // x8
  int64_t v9; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v12; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v14; // w8
  struct UILabel_array *timeLabelList; // x8
  int v16; // w8
  int32_t v17; // w21
  int v18; // w20
  signed __int64 v19; // x28
  __int64 v20; // x22
  unsigned __int64 v21; // x29
  __int64 v22; // x23
  struct UILabel_array *v23; // x8
  unsigned __int64 v24; // x9
  struct UISprite_array *v25; // x8
  unsigned __int64 v26; // x9
  UISprite_o *v27; // x23
  RaceResultPointGroupEffectSubComponent_c *v28; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v30; // x25
  System_String_o *v31; // x0
  struct UISprite_array *v32; // x8
  unsigned __int64 v33; // x9
  UISprite_o *v34; // x23
  RaceResultPointGroupEffectSubComponent_c *v35; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v37; // x25
  System_String_o *v38; // x0
  struct UILabel_array *v39; // x8
  unsigned __int64 v40; // x9
  int64_t v41; // x24
  UILabel_o *v42; // x23
  System_String_o *v43; // x1
  struct UILabel_array *v44; // x8
  unsigned __int64 v45; // x9
  struct UISprite_array *v46; // x8
  unsigned __int64 v47; // x9
  struct UISprite_array *v48; // x8
  unsigned __int64 v49; // x9
  struct UILabel_array *v50; // x8
  unsigned __int64 v51; // x9
  __int64 v52; // x21
  struct UILabel_array *v53; // x8
  __int64 v54; // x22
  unsigned __int64 max_length_low; // x9
  struct UISprite_array *v56; // x8
  unsigned __int64 v57; // x9
  struct UISprite_array *v58; // x8
  unsigned __int64 v59; // x9
  struct UILabel_array *v60; // x8
  unsigned __int64 v61; // x9
  int32_t v62; // [xsp+8h] [xbp-88h]
  __int64 v63; // [xsp+10h] [xbp-80h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C289AA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C289AA = 1;
  }
  goalTime = 0;
  groupId = 0;
  entity = 0;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptLabel = ScriptManager__GetScriptLabel(0);
  Instance = System_Int64__Parse(ScriptLabel, 0);
  nameLabelList = this->fields.nameLabelList;
  v9 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v12 = nameSpriteList->max_length;
    if ( max_length < v12 )
      max_length = v12;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v14 = iconSpriteList->max_length;
    if ( max_length < v14 )
      max_length = v14;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v16 = timeLabelList->max_length;
    if ( max_length < v16 )
      max_length = v16;
  }
  if ( Instance < 1 )
    goto LABEL_85;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_109:
    sub_1C2D6EC(Instance, v6);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_41878116((EventScriptMaster_o *)Instance, 2, v9, 0);
  if ( !Instance )
  {
LABEL_85:
    if ( max_length >= 1 )
    {
      v52 = 4;
      while ( 1 )
      {
        v53 = this->fields.nameLabelList;
        v54 = v52 - 4;
        if ( v53 )
        {
          max_length_low = LODWORD(v53->max_length);
          if ( v54 < (int)max_length_low )
          {
            if ( v54 >= max_length_low )
              goto LABEL_110;
            Instance = *((_QWORD *)&v53->obj.klass + v52);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        v56 = this->fields.nameSpriteList;
        if ( v56 )
        {
          v57 = LODWORD(v56->max_length);
          if ( v54 < (int)v57 )
          {
            if ( v54 >= v57 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v56->obj.klass + v52);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v58 = this->fields.iconSpriteList;
        if ( v58 )
        {
          v59 = LODWORD(v58->max_length);
          if ( v54 < (int)v59 )
          {
            if ( v54 >= v59 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v58->obj.klass + v52);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v60 = this->fields.timeLabelList;
        if ( v60 )
        {
          v61 = LODWORD(v60->max_length);
          if ( v54 < (int)v61 )
          {
            if ( v54 >= v61 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v60->obj.klass + v52);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        if ( ++v52 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v17 = *(_DWORD *)(Instance + 16);
  v18 = *(_DWORD *)(Instance + 40);
  v62 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v17,
                        v18 % 100,
                        &goalTime,
                        0);
  if ( !Instance )
    goto LABEL_109;
  if ( max_length >= 1 )
  {
    v19 = *(int *)(Instance + 24);
    v20 = Instance;
    v21 = 0;
    v22 = Instance + 32;
    v63 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v21 >= v19 )
        goto LABEL_61;
      if ( v21 >= *(unsigned int *)(v20 + 24) )
        goto LABEL_110;
      groupId = *(_DWORD *)(v22 + 4 * v21);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_109;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_109;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v17, groupId, 0);
      if ( (Instance & 1) != 0 )
      {
        v23 = this->fields.nameLabelList;
        if ( v23 )
        {
          v24 = LODWORD(v23->max_length);
          if ( (__int64)v21 < (int)v24 )
          {
            if ( v21 >= v24 )
              goto LABEL_110;
            if ( !entity )
              goto LABEL_109;
            Instance = (__int64)v23->m_Items[v21];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0);
          }
        }
        v25 = this->fields.nameSpriteList;
        if ( v25 )
        {
          v26 = LODWORD(v25->max_length);
          if ( (__int64)v21 < (int)v26 )
          {
            if ( v21 >= v26 )
              goto LABEL_110;
            v27 = v25->m_Items[v21];
            v28 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v28 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v28->static_fields->GROUP_NAME_IMAGE_NAME;
            v30 = System_Int32__ToString(v62, 0);
            v31 = System_Int32__ToString((int32_t)&groupId, 0);
            Instance = (__int64)System_String__Concat_63498116(
                                  GROUP_NAME_IMAGE_NAME,
                                  v30,
                                  (System_String_o *)StringLiteral_16105/*"_"*/,
                                  v31,
                                  0);
            if ( !v27 )
              goto LABEL_109;
            UISprite__set_spriteName(v27, (System_String_o *)Instance, 0);
            v22 = v63;
          }
        }
        v32 = this->fields.iconSpriteList;
        if ( v32 )
        {
          v33 = LODWORD(v32->max_length);
          if ( (__int64)v21 < (int)v33 )
          {
            if ( v21 >= v33 )
              goto LABEL_110;
            v34 = v32->m_Items[v21];
            v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v35->static_fields->GROUP_IMAGE_NAME;
            v37 = System_Int32__ToString(v62, 0);
            v38 = System_Int32__ToString((int32_t)&groupId, 0);
            Instance = (__int64)System_String__Concat_63498116(
                                  GROUP_IMAGE_NAME,
                                  v37,
                                  (System_String_o *)StringLiteral_16105/*"_"*/,
                                  v38,
                                  0);
            if ( !v34 )
              goto LABEL_109;
            UISprite__set_spriteName(v34, (System_String_o *)Instance, 0);
            v22 = v63;
          }
        }
        v39 = this->fields.timeLabelList;
        if ( v39 )
        {
          v40 = LODWORD(v39->max_length);
          if ( (__int64)v21 < (int)v40 )
          {
            if ( !goalTime )
              goto LABEL_109;
            if ( v21 >= LODWORD(goalTime->max_length) || v21 >= v40 )
LABEL_110:
              sub_1C2D6F4(Instance, v6, v7);
            v41 = goalTime->m_Items[v21];
            v42 = v39->m_Items[v21];
            if ( v41 < 1 )
            {
              if ( !v42 )
                goto LABEL_109;
              v43 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__GetLapTime(v41, 0);
              if ( !v42 )
                goto LABEL_109;
              v43 = (System_String_o *)Instance;
            }
            UILabel__set_text(v42, v43, 0);
            v22 = v63;
          }
        }
      }
      else
      {
LABEL_61:
        v44 = this->fields.nameLabelList;
        if ( v44 )
        {
          v45 = LODWORD(v44->max_length);
          if ( (__int64)v21 < (int)v45 )
          {
            if ( v21 >= v45 )
              goto LABEL_110;
            Instance = (__int64)v44->m_Items[v21];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        v46 = this->fields.nameSpriteList;
        if ( v46 )
        {
          v47 = LODWORD(v46->max_length);
          if ( (__int64)v21 < (int)v47 )
          {
            if ( v21 >= v47 )
              goto LABEL_110;
            Instance = (__int64)v46->m_Items[v21];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v48 = this->fields.iconSpriteList;
        if ( v48 )
        {
          v49 = LODWORD(v48->max_length);
          if ( (__int64)v21 < (int)v49 )
          {
            if ( v21 >= v49 )
              goto LABEL_110;
            Instance = (__int64)v48->m_Items[v21];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v50 = this->fields.timeLabelList;
        if ( v50 )
        {
          v51 = LODWORD(v50->max_length);
          if ( (__int64)v21 < (int)v51 )
          {
            if ( v21 >= v51 )
              goto LABEL_110;
            Instance = (__int64)v50->m_Items[v21];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
      }
      if ( max_length == ++v21 )
        goto LABEL_85;
    }
  }
}