void __fastcall RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4389983 & 1) == 0 )
  {
    sub_B775C4(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_B775C4(&StringLiteral_18935/*"event_ranking_group_name_"*/);
    sub_B775C4(&StringLiteral_18934/*"event_ranking_group_"*/);
    byte_4389983 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18934/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18934/*"event_ranking_group_"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18935/*"event_ranking_group_name_"*/;
  v9->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18935/*"event_ranking_group_name_"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->GROUP_NAME_IMAGE_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  __int64 v6; // x1
  struct UILabel_array *nameLabelList; // x8
  int64_t v8; // x20
  int max_length; // w26
  struct UISprite_array *nameSpriteList; // x8
  int v11; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v13; // w8
  struct UILabel_array *timeLabelList; // x8
  int v15; // w8
  int32_t v16; // w21
  int v17; // w20
  signed __int64 v18; // x27
  __int64 v19; // x22
  unsigned __int64 v20; // x28
  __int64 v21; // x23
  struct UILabel_array *v22; // x8
  unsigned __int64 v23; // x9
  struct UISprite_array *v24; // x8
  unsigned __int64 v25; // x9
  UISprite_o *v26; // x23
  RaceResultPointGroupEffectSubComponent_c *v27; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v29; // x25
  System_String_o *v30; // x0
  struct UISprite_array *v31; // x8
  unsigned __int64 v32; // x9
  UISprite_o *v33; // x23
  RaceResultPointGroupEffectSubComponent_c *v34; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v36; // x25
  System_String_o *v37; // x0
  struct UILabel_array *v38; // x8
  unsigned __int64 v39; // x9
  int64_t v40; // x24
  UILabel_o *v41; // x23
  System_String_o *v42; // x1
  struct UILabel_array *v43; // x8
  unsigned __int64 v44; // x9
  struct UISprite_array *v45; // x8
  unsigned __int64 v46; // x9
  struct UISprite_array *v47; // x8
  unsigned __int64 v48; // x9
  struct UILabel_array *v49; // x8
  unsigned __int64 v50; // x9
  __int64 i; // x21
  struct UILabel_array *v52; // x8
  __int64 v53; // x23
  unsigned __int64 v54; // x9
  struct UISprite_array *v55; // x8
  unsigned __int64 v56; // x9
  struct UISprite_array *v57; // x8
  unsigned __int64 v58; // x9
  struct UILabel_array *v59; // x8
  unsigned __int64 v60; // x9
  __int64 v61; // x8
  __int64 v62; // x0
  int32_t v63; // [xsp+8h] [xbp-78h]
  __int64 v64; // [xsp+10h] [xbp-70h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-5Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4389982 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_16197/*"_"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389982 = 1;
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
  v8 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v11 = nameSpriteList->max_length;
    if ( max_length < v11 )
      max_length = v11;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v13 = iconSpriteList->max_length;
    if ( max_length < v13 )
      max_length = v13;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v15 = timeLabelList->max_length;
    if ( max_length < v15 )
      max_length = v15;
  }
  if ( Instance < 1 )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_113:
    sub_B7769C(Instance, v6);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_32159220((EventScriptMaster_o *)Instance, 2, v8, 0LL);
  if ( !Instance )
  {
LABEL_89:
    if ( max_length >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v52 = this->fields.nameLabelList;
        v53 = i - 4;
        if ( v52 )
        {
          v54 = v52->max_length;
          if ( v53 < (int)v54 )
          {
            if ( v53 >= v54 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v52->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v55 = this->fields.nameSpriteList;
        if ( v55 )
        {
          v56 = v55->max_length;
          if ( v53 < (int)v56 )
          {
            if ( v53 >= v56 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v55->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v57 = this->fields.iconSpriteList;
        if ( v57 )
        {
          v58 = v57->max_length;
          if ( v53 < (int)v58 )
          {
            if ( v53 >= v58 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v57->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v59 = this->fields.timeLabelList;
        if ( v59 )
        {
          v60 = v59->max_length;
          if ( v53 < (int)v60 )
          {
            if ( v53 >= v60 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v59->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v61 = i - 3;
        if ( v61 >= max_length )
          return;
      }
    }
    return;
  }
  v16 = *(_DWORD *)(Instance + 16);
  v17 = *(_DWORD *)(Instance + 40);
  v63 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v16,
                        v17 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_113;
  if ( max_length >= 1 )
  {
    v18 = *(int *)(Instance + 24);
    v19 = Instance;
    v20 = 0LL;
    v21 = Instance + 32;
    v64 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v20 >= v18 )
        goto LABEL_65;
      if ( v20 >= *(unsigned int *)(v19 + 24) )
        goto LABEL_114;
      groupId = *(_DWORD *)(v21 + 4 * v20);
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_113;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_113;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v16, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v22 = this->fields.nameLabelList;
        if ( v22 )
        {
          v23 = v22->max_length;
          if ( (__int64)v20 < (int)v23 )
          {
            if ( v20 >= v23 )
              goto LABEL_114;
            if ( !entity )
              goto LABEL_113;
            Instance = (__int64)v22->m_Items[v20];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v24 = this->fields.nameSpriteList;
        if ( v24 )
        {
          v25 = v24->max_length;
          if ( (__int64)v20 < (int)v25 )
          {
            if ( v20 >= v25 )
              goto LABEL_114;
            v26 = v24->m_Items[v20];
            v27 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v27 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v27->static_fields->GROUP_NAME_IMAGE_NAME;
            v29 = System_Int32__ToString(v63, 0LL);
            v30 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_44905348(
                                  GROUP_NAME_IMAGE_NAME,
                                  v29,
                                  (System_String_o *)StringLiteral_16197/*"_"*/,
                                  v30,
                                  0LL);
            if ( !v26 )
              goto LABEL_113;
            UISprite__set_spriteName(v26, (System_String_o *)Instance, 0LL);
            v21 = v64;
          }
        }
        v31 = this->fields.iconSpriteList;
        if ( v31 )
        {
          v32 = v31->max_length;
          if ( (__int64)v20 < (int)v32 )
          {
            if ( v20 >= v32 )
              goto LABEL_114;
            v33 = v31->m_Items[v20];
            v34 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v34 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v34->static_fields->GROUP_IMAGE_NAME;
            v36 = System_Int32__ToString(v63, 0LL);
            v37 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_44905348(
                                  GROUP_IMAGE_NAME,
                                  v36,
                                  (System_String_o *)StringLiteral_16197/*"_"*/,
                                  v37,
                                  0LL);
            if ( !v33 )
              goto LABEL_113;
            UISprite__set_spriteName(v33, (System_String_o *)Instance, 0LL);
            v21 = v64;
          }
        }
        v38 = this->fields.timeLabelList;
        if ( v38 )
        {
          v39 = v38->max_length;
          if ( (__int64)v20 < (int)v39 )
          {
            if ( !goalTime )
              goto LABEL_113;
            if ( v20 >= goalTime->max_length || v20 >= v39 )
            {
LABEL_114:
              v62 = sub_B776C8(Instance);
              sub_B77668(v62, 0LL);
            }
            v40 = goalTime->m_Items[v20];
            v41 = v38->m_Items[v20];
            if ( v40 < 1 )
            {
              if ( !v41 )
                goto LABEL_113;
              v42 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (__int64)LocalizationManager__GetLapTime(v40, 0LL);
              if ( !v41 )
                goto LABEL_113;
              v42 = (System_String_o *)Instance;
            }
            UILabel__set_text(v41, v42, 0LL);
            v21 = v64;
          }
        }
      }
      else
      {
LABEL_65:
        v43 = this->fields.nameLabelList;
        if ( v43 )
        {
          v44 = v43->max_length;
          if ( (__int64)v20 < (int)v44 )
          {
            if ( v20 >= v44 )
              goto LABEL_114;
            Instance = (__int64)v43->m_Items[v20];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v45 = this->fields.nameSpriteList;
        if ( v45 )
        {
          v46 = v45->max_length;
          if ( (__int64)v20 < (int)v46 )
          {
            if ( v20 >= v46 )
              goto LABEL_114;
            Instance = (__int64)v45->m_Items[v20];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v47 = this->fields.iconSpriteList;
        if ( v47 )
        {
          v48 = v47->max_length;
          if ( (__int64)v20 < (int)v48 )
          {
            if ( v20 >= v48 )
              goto LABEL_114;
            Instance = (__int64)v47->m_Items[v20];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v49 = this->fields.timeLabelList;
        if ( v49 )
        {
          v50 = v49->max_length;
          if ( (__int64)v20 < (int)v50 )
          {
            if ( v20 >= v50 )
              goto LABEL_114;
            Instance = (__int64)v49->m_Items[v20];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( (__int64)++v20 >= max_length )
        goto LABEL_89;
    }
  }
}