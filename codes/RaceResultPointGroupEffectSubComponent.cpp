void __fastcall RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B4601A & 1) == 0 )
  {
    sub_1BDB878(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_19258/*"event_ranking_group_name_"*/, v4);
    sub_1BDB878(&StringLiteral_19257/*"event_ranking_group_"*/, v5);
    byte_4B4601A = 1;
  }
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19257/*"event_ranking_group_"*/;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    StringLiteral_19257/*"event_ranking_group_"*/,
    v2,
    v3);
  v6 = StringLiteral_19258/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19258/*"event_ranking_group_name_"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v6, v8, v9);
}


void __fastcall RaceResultPointGroupEffectSubComponent___ctor(
        RaceResultPointGroupEffectSubComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall RaceResultPointGroupEffectSubComponent__RecvParam(
        RaceResultPointGroupEffectSubComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UILabel_array *nameLabelList; // x8
  int64_t v17; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v20; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v22; // w8
  struct UILabel_array *timeLabelList; // x8
  int v24; // w8
  int32_t v25; // w21
  int v26; // w20
  signed __int64 v27; // x28
  __int64 v28; // x22
  unsigned __int64 v29; // x29
  __int64 v30; // x23
  struct UILabel_array *v31; // x8
  unsigned __int64 v32; // x9
  struct UISprite_array *v33; // x8
  unsigned __int64 v34; // x9
  UISprite_o *v35; // x23
  RaceResultPointGroupEffectSubComponent_c *v36; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v38; // x25
  System_String_o *v39; // x0
  struct UISprite_array *v40; // x8
  unsigned __int64 v41; // x9
  UISprite_o *v42; // x23
  RaceResultPointGroupEffectSubComponent_c *v43; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v45; // x25
  System_String_o *v46; // x0
  struct UILabel_array *v47; // x8
  unsigned __int64 v48; // x9
  int64_t v49; // x24
  UILabel_o *v50; // x23
  System_String_o *v51; // x1
  struct UILabel_array *v52; // x8
  unsigned __int64 v53; // x9
  struct UISprite_array *v54; // x8
  unsigned __int64 v55; // x9
  struct UISprite_array *v56; // x8
  unsigned __int64 v57; // x9
  struct UILabel_array *v58; // x8
  unsigned __int64 v59; // x9
  __int64 v60; // x21
  struct UILabel_array *v61; // x8
  __int64 v62; // x22
  unsigned __int64 v63; // x9
  struct UISprite_array *v64; // x8
  unsigned __int64 v65; // x9
  struct UISprite_array *v66; // x8
  unsigned __int64 v67; // x9
  struct UILabel_array *v68; // x8
  unsigned __int64 v69; // x9
  int32_t v70; // [xsp+8h] [xbp-88h]
  __int64 v71; // [xsp+10h] [xbp-80h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B46019 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventScriptMaster___, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
    sub_1BDB878(&ScriptManager_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v10);
    sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B46019 = 1;
  }
  goalTime = 0LL;
  groupId = 0;
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptLabel = ScriptManager__GetScriptLabel(0LL);
  Instance = System_Int64__Parse(ScriptLabel, 0LL);
  nameLabelList = this->fields.nameLabelList;
  v17 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v20 = nameSpriteList->max_length;
    if ( max_length < v20 )
      max_length = v20;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v22 = iconSpriteList->max_length;
    if ( max_length < v22 )
      max_length = v22;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v24 = timeLabelList->max_length;
    if ( max_length < v24 )
      max_length = v24;
  }
  if ( Instance < 1 )
    goto LABEL_85;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_109:
    sub_1BDBAD4(Instance, v14);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_41081560((EventScriptMaster_o *)Instance, 2, v17, 0LL);
  if ( !Instance )
  {
LABEL_85:
    if ( max_length >= 1 )
    {
      v60 = 4LL;
      while ( 1 )
      {
        v61 = this->fields.nameLabelList;
        v62 = v60 - 4;
        if ( v61 )
        {
          v63 = v61->max_length;
          if ( v62 < (int)v63 )
          {
            if ( v62 >= v63 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v61->obj.klass + v60);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v64 = this->fields.nameSpriteList;
        if ( v64 )
        {
          v65 = v64->max_length;
          if ( v62 < (int)v65 )
          {
            if ( v62 >= v65 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v64->obj.klass + v60);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v66 = this->fields.iconSpriteList;
        if ( v66 )
        {
          v67 = v66->max_length;
          if ( v62 < (int)v67 )
          {
            if ( v62 >= v67 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v66->obj.klass + v60);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v68 = this->fields.timeLabelList;
        if ( v68 )
        {
          v69 = v68->max_length;
          if ( v62 < (int)v69 )
          {
            if ( v62 >= v69 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v68->obj.klass + v60);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        if ( ++v60 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v25 = *(_DWORD *)(Instance + 16);
  v26 = *(_DWORD *)(Instance + 40);
  v70 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v25,
                        v26 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  if ( max_length >= 1 )
  {
    v27 = *(int *)(Instance + 24);
    v28 = Instance;
    v29 = 0LL;
    v30 = Instance + 32;
    v71 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v29 >= v27 )
        goto LABEL_61;
      if ( v29 >= *(unsigned int *)(v28 + 24) )
        goto LABEL_110;
      groupId = *(_DWORD *)(v30 + 4 * v29);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_109;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_109;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v25, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v31 = this->fields.nameLabelList;
        if ( v31 )
        {
          v32 = v31->max_length;
          if ( (__int64)v29 < (int)v32 )
          {
            if ( v29 >= v32 )
              goto LABEL_110;
            if ( !entity )
              goto LABEL_109;
            Instance = (__int64)v31->m_Items[v29];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v33 = this->fields.nameSpriteList;
        if ( v33 )
        {
          v34 = v33->max_length;
          if ( (__int64)v29 < (int)v34 )
          {
            if ( v29 >= v34 )
              goto LABEL_110;
            v35 = v33->m_Items[v29];
            v36 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v36 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v36->static_fields->GROUP_NAME_IMAGE_NAME;
            v38 = System_Int32__ToString(v70, 0LL);
            v39 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62612512(
                                  GROUP_NAME_IMAGE_NAME,
                                  v38,
                                  (System_String_o *)StringLiteral_16088/*"_"*/,
                                  v39,
                                  0LL);
            if ( !v35 )
              goto LABEL_109;
            UISprite__set_spriteName(v35, (System_String_o *)Instance, 0LL);
            v30 = v71;
          }
        }
        v40 = this->fields.iconSpriteList;
        if ( v40 )
        {
          v41 = v40->max_length;
          if ( (__int64)v29 < (int)v41 )
          {
            if ( v29 >= v41 )
              goto LABEL_110;
            v42 = v40->m_Items[v29];
            v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v43->static_fields->GROUP_IMAGE_NAME;
            v45 = System_Int32__ToString(v70, 0LL);
            v46 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62612512(
                                  GROUP_IMAGE_NAME,
                                  v45,
                                  (System_String_o *)StringLiteral_16088/*"_"*/,
                                  v46,
                                  0LL);
            if ( !v42 )
              goto LABEL_109;
            UISprite__set_spriteName(v42, (System_String_o *)Instance, 0LL);
            v30 = v71;
          }
        }
        v47 = this->fields.timeLabelList;
        if ( v47 )
        {
          v48 = v47->max_length;
          if ( (__int64)v29 < (int)v48 )
          {
            if ( !goalTime )
              goto LABEL_109;
            if ( v29 >= goalTime->max_length || v29 >= v48 )
LABEL_110:
              sub_1BDBADC(Instance, v14, v15);
            v49 = goalTime->m_Items[v29];
            v50 = v47->m_Items[v29];
            if ( v49 < 1 )
            {
              if ( !v50 )
                goto LABEL_109;
              v51 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__GetLapTime(v49, 0LL);
              if ( !v50 )
                goto LABEL_109;
              v51 = (System_String_o *)Instance;
            }
            UILabel__set_text(v50, v51, 0LL);
            v30 = v71;
          }
        }
      }
      else
      {
LABEL_61:
        v52 = this->fields.nameLabelList;
        if ( v52 )
        {
          v53 = v52->max_length;
          if ( (__int64)v29 < (int)v53 )
          {
            if ( v29 >= v53 )
              goto LABEL_110;
            Instance = (__int64)v52->m_Items[v29];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v54 = this->fields.nameSpriteList;
        if ( v54 )
        {
          v55 = v54->max_length;
          if ( (__int64)v29 < (int)v55 )
          {
            if ( v29 >= v55 )
              goto LABEL_110;
            Instance = (__int64)v54->m_Items[v29];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v56 = this->fields.iconSpriteList;
        if ( v56 )
        {
          v57 = v56->max_length;
          if ( (__int64)v29 < (int)v57 )
          {
            if ( v29 >= v57 )
              goto LABEL_110;
            Instance = (__int64)v56->m_Items[v29];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v58 = this->fields.timeLabelList;
        if ( v58 )
        {
          v59 = v58->max_length;
          if ( (__int64)v29 < (int)v59 )
          {
            if ( v29 >= v59 )
              goto LABEL_110;
            Instance = (__int64)v58->m_Items[v29];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( max_length == ++v29 )
        goto LABEL_85;
    }
  }
}