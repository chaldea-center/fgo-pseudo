void __fastcall RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4212EE7 & 1) == 0 )
  {
    sub_B0D8A4(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18624/*"event_ranking_group_name_"*/, v8);
    sub_B0D8A4(&StringLiteral_18623/*"event_ranking_group_"*/, v9);
    byte_4212EE7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18623/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18623/*"event_ranking_group_"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18624/*"event_ranking_group_name_"*/;
  v12->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18624/*"event_ranking_group_name_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->GROUP_NAME_IMAGE_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  struct UILabel_array *nameLabelList; // x8
  int64_t v15; // x20
  int max_length; // w26
  struct UISprite_array *nameSpriteList; // x8
  int v18; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v20; // w8
  struct UILabel_array *timeLabelList; // x8
  int v22; // w8
  int32_t v23; // w21
  int v24; // w20
  signed __int64 v25; // x27
  __int64 v26; // x22
  unsigned __int64 v27; // x28
  __int64 v28; // x23
  struct UILabel_array *v29; // x8
  unsigned __int64 v30; // x9
  struct UISprite_array *v31; // x8
  unsigned __int64 v32; // x9
  UISprite_o *v33; // x23
  RaceResultPointGroupEffectSubComponent_c *v34; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v36; // x25
  System_String_o *v37; // x0
  struct UISprite_array *v38; // x8
  unsigned __int64 v39; // x9
  UISprite_o *v40; // x23
  RaceResultPointGroupEffectSubComponent_c *v41; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v43; // x25
  System_String_o *v44; // x0
  struct UILabel_array *v45; // x8
  unsigned __int64 v46; // x9
  int64_t v47; // x24
  UILabel_o *v48; // x23
  System_String_o *v49; // x1
  struct UILabel_array *v50; // x8
  unsigned __int64 v51; // x9
  struct UISprite_array *v52; // x8
  unsigned __int64 v53; // x9
  struct UISprite_array *v54; // x8
  unsigned __int64 v55; // x9
  struct UILabel_array *v56; // x8
  unsigned __int64 v57; // x9
  __int64 i; // x21
  struct UILabel_array *v59; // x8
  __int64 v60; // x23
  unsigned __int64 v61; // x9
  struct UISprite_array *v62; // x8
  unsigned __int64 v63; // x9
  struct UISprite_array *v64; // x8
  unsigned __int64 v65; // x9
  struct UILabel_array *v66; // x8
  unsigned __int64 v67; // x9
  __int64 v68; // x8
  __int64 v69; // x0
  int32_t v70; // [xsp+8h] [xbp-78h]
  __int64 v71; // [xsp+10h] [xbp-70h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-5Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4212EE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventScriptMaster___, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
    sub_B0D8A4(&ScriptManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4212EE6 = 1;
  }
  goalTime = 0LL;
  groupId = 0;
  entity = 0LL;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptLabel = ScriptManager__GetScriptLabel(0LL);
  Instance = System_Int64__Parse(ScriptLabel, 0LL);
  nameLabelList = this->fields.nameLabelList;
  v15 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v18 = nameSpriteList->max_length;
    if ( max_length < v18 )
      max_length = v18;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v20 = iconSpriteList->max_length;
    if ( max_length < v20 )
      max_length = v20;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v22 = timeLabelList->max_length;
    if ( max_length < v22 )
      max_length = v22;
  }
  if ( Instance < 1 )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_113:
    sub_B0D97C(Instance);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_30099452((EventScriptMaster_o *)Instance, 2, v15, 0LL);
  if ( !Instance )
  {
LABEL_89:
    if ( max_length >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v59 = this->fields.nameLabelList;
        v60 = i - 4;
        if ( v59 )
        {
          v61 = v59->max_length;
          if ( v60 < (int)v61 )
          {
            if ( v60 >= v61 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v59->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v62 = this->fields.nameSpriteList;
        if ( v62 )
        {
          v63 = v62->max_length;
          if ( v60 < (int)v63 )
          {
            if ( v60 >= v63 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v62->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v64 = this->fields.iconSpriteList;
        if ( v64 )
        {
          v65 = v64->max_length;
          if ( v60 < (int)v65 )
          {
            if ( v60 >= v65 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v64->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v66 = this->fields.timeLabelList;
        if ( v66 )
        {
          v67 = v66->max_length;
          if ( v60 < (int)v67 )
          {
            if ( v60 >= v67 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v66->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v68 = i - 3;
        if ( v68 >= max_length )
          return;
      }
    }
    return;
  }
  v23 = *(_DWORD *)(Instance + 16);
  v24 = *(_DWORD *)(Instance + 40);
  v70 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v23,
                        v24 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_113;
  if ( max_length >= 1 )
  {
    v25 = *(int *)(Instance + 24);
    v26 = Instance;
    v27 = 0LL;
    v28 = Instance + 32;
    v71 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v27 >= v25 )
        goto LABEL_65;
      if ( v27 >= *(unsigned int *)(v26 + 24) )
        goto LABEL_114;
      groupId = *(_DWORD *)(v28 + 4 * v27);
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_113;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_113;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v23, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v29 = this->fields.nameLabelList;
        if ( v29 )
        {
          v30 = v29->max_length;
          if ( (__int64)v27 < (int)v30 )
          {
            if ( v27 >= v30 )
              goto LABEL_114;
            if ( !entity )
              goto LABEL_113;
            Instance = (__int64)v29->m_Items[v27];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v31 = this->fields.nameSpriteList;
        if ( v31 )
        {
          v32 = v31->max_length;
          if ( (__int64)v27 < (int)v32 )
          {
            if ( v27 >= v32 )
              goto LABEL_114;
            v33 = v31->m_Items[v27];
            v34 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v34 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v34->static_fields->GROUP_NAME_IMAGE_NAME;
            v36 = System_Int32__ToString(v70, 0LL);
            v37 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_43853316(
                                  GROUP_NAME_IMAGE_NAME,
                                  v36,
                                  (System_String_o *)StringLiteral_15952/*"_"*/,
                                  v37,
                                  0LL);
            if ( !v33 )
              goto LABEL_113;
            UISprite__set_spriteName(v33, (System_String_o *)Instance, 0LL);
            v28 = v71;
          }
        }
        v38 = this->fields.iconSpriteList;
        if ( v38 )
        {
          v39 = v38->max_length;
          if ( (__int64)v27 < (int)v39 )
          {
            if ( v27 >= v39 )
              goto LABEL_114;
            v40 = v38->m_Items[v27];
            v41 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v41 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v41->static_fields->GROUP_IMAGE_NAME;
            v43 = System_Int32__ToString(v70, 0LL);
            v44 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_43853316(
                                  GROUP_IMAGE_NAME,
                                  v43,
                                  (System_String_o *)StringLiteral_15952/*"_"*/,
                                  v44,
                                  0LL);
            if ( !v40 )
              goto LABEL_113;
            UISprite__set_spriteName(v40, (System_String_o *)Instance, 0LL);
            v28 = v71;
          }
        }
        v45 = this->fields.timeLabelList;
        if ( v45 )
        {
          v46 = v45->max_length;
          if ( (__int64)v27 < (int)v46 )
          {
            if ( !goalTime )
              goto LABEL_113;
            if ( v27 >= goalTime->max_length || v27 >= v46 )
            {
LABEL_114:
              v69 = sub_B0D9A8(Instance);
              sub_B0D948(v69, 0LL);
            }
            v47 = goalTime->m_Items[v27];
            v48 = v45->m_Items[v27];
            if ( v47 < 1 )
            {
              if ( !v48 )
                goto LABEL_113;
              v49 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (__int64)LocalizationManager__GetLapTime(v47, 0LL);
              if ( !v48 )
                goto LABEL_113;
              v49 = (System_String_o *)Instance;
            }
            UILabel__set_text(v48, v49, 0LL);
            v28 = v71;
          }
        }
      }
      else
      {
LABEL_65:
        v50 = this->fields.nameLabelList;
        if ( v50 )
        {
          v51 = v50->max_length;
          if ( (__int64)v27 < (int)v51 )
          {
            if ( v27 >= v51 )
              goto LABEL_114;
            Instance = (__int64)v50->m_Items[v27];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v52 = this->fields.nameSpriteList;
        if ( v52 )
        {
          v53 = v52->max_length;
          if ( (__int64)v27 < (int)v53 )
          {
            if ( v27 >= v53 )
              goto LABEL_114;
            Instance = (__int64)v52->m_Items[v27];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v54 = this->fields.iconSpriteList;
        if ( v54 )
        {
          v55 = v54->max_length;
          if ( (__int64)v27 < (int)v55 )
          {
            if ( v27 >= v55 )
              goto LABEL_114;
            Instance = (__int64)v54->m_Items[v27];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v56 = this->fields.timeLabelList;
        if ( v56 )
        {
          v57 = v56->max_length;
          if ( (__int64)v27 < (int)v57 )
          {
            if ( v27 >= v57 )
              goto LABEL_114;
            Instance = (__int64)v56->m_Items[v27];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( (__int64)++v27 >= max_length )
        goto LABEL_89;
    }
  }
}