void RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5971FB0 & 1) == 0 )
  {
    sub_2213A60(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20147/*"event_ranking_group_name_"*/);
    sub_2213A60(&StringLiteral_20146/*"event_ranking_group_"*/);
    byte_5971FB0 = 1;
  }
  v7 = StringLiteral_20146/*"event_ranking_group_"*/;
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_20146/*"event_ranking_group_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20147/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_20147/*"event_ranking_group_name_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->GROUP_NAME_IMAGE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  int v4; // w8
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  __int64 v7; // x1
  struct UILabel_array *nameLabelList; // x8
  int64_t v9; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v12; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v14; // w8
  struct UILabel_array *timeLabelList; // x8
  int v16; // w8
  int32_t v17; // w24
  int v18; // w20
  __int64 v19; // x22
  unsigned __int64 v20; // x29
  signed __int64 v21; // x28
  __int64 v22; // x21
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
  int64_t v41; // x23
  UILabel_o *v42; // x24
  unsigned __int64 v43; // x9
  struct UISprite_array *v44; // x8
  unsigned __int64 v45; // x9
  struct UISprite_array *v46; // x8
  unsigned __int64 v47; // x9
  unsigned __int64 v48; // x9
  __int64 v49; // x21
  struct UILabel_array *v50; // x8
  __int64 v51; // x22
  unsigned __int64 max_length_low; // x9
  struct UISprite_array *v53; // x8
  unsigned __int64 v54; // x9
  struct UISprite_array *v55; // x8
  unsigned __int64 v56; // x9
  struct UILabel_array *v57; // x8
  unsigned __int64 v58; // x9
  int32_t v59; // [xsp+8h] [xbp-88h]
  int32_t v60; // [xsp+14h] [xbp-7Ch]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5971FAF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaceResultMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventScriptMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RaceResultPointGroupEffectSubComponent_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971FAF = 1;
  }
  goalTime = 0;
  groupId = 0;
  v4 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, param);
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
    if ( max_length <= v12 )
      max_length = v12;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v14 = iconSpriteList->max_length;
    if ( max_length <= v14 )
      max_length = v14;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v16 = timeLabelList->max_length;
    if ( max_length <= v16 )
      max_length = v16;
  }
  if ( Instance < 1 )
    goto LABEL_86;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_110:
    sub_2213CDC(Instance, v7);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_49119100((EventScriptMaster_o *)Instance, 2, v9, 0);
  if ( !Instance )
  {
LABEL_86:
    if ( max_length >= 1 )
    {
      v49 = 4;
      while ( 1 )
      {
        v50 = this->fields.nameLabelList;
        v51 = v49 - 4;
        if ( v50 )
        {
          max_length_low = LODWORD(v50->max_length);
          if ( v51 < (int)max_length_low )
          {
            if ( v51 >= max_length_low )
              goto LABEL_85;
            Instance = *((_QWORD *)&v50->obj.klass + v49);
            if ( !Instance )
              goto LABEL_110;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        v53 = this->fields.nameSpriteList;
        if ( v53 )
        {
          v54 = LODWORD(v53->max_length);
          if ( v51 < (int)v54 )
          {
            if ( v51 >= v54 )
              goto LABEL_85;
            Instance = *((_QWORD *)&v53->obj.klass + v49);
            if ( !Instance )
              goto LABEL_110;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v55 = this->fields.iconSpriteList;
        if ( v55 )
        {
          v56 = LODWORD(v55->max_length);
          if ( v51 < (int)v56 )
          {
            if ( v51 >= v56 )
              goto LABEL_85;
            Instance = *((_QWORD *)&v55->obj.klass + v49);
            if ( !Instance )
              goto LABEL_110;
            UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
          }
        }
        v57 = this->fields.timeLabelList;
        if ( v57 )
        {
          v58 = LODWORD(v57->max_length);
          if ( v51 < (int)v58 )
          {
            if ( v51 >= v58 )
              goto LABEL_85;
            Instance = *((_QWORD *)&v57->obj.klass + v49);
            if ( !Instance )
              goto LABEL_110;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
        }
        if ( ++v49 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v17 = *(_DWORD *)(Instance + 16);
  v18 = *(_DWORD *)(Instance + 40);
  v59 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_110;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v17,
                        v18 % 100,
                        &goalTime,
                        0);
  if ( !Instance )
    goto LABEL_110;
  if ( max_length >= 1 )
  {
    v19 = Instance;
    v20 = 0;
    v21 = *(int *)(Instance + 24);
    v22 = Instance + 32;
    v60 = v17;
    while ( 1 )
    {
      if ( (__int64)v20 >= v21 )
      {
        v23 = this->fields.nameLabelList;
      }
      else
      {
        if ( v20 >= *(unsigned int *)(v19 + 24) )
          goto LABEL_85;
        groupId = *(_DWORD *)(v22 + 4 * v20);
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_110;
        Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
        if ( !Instance )
          goto LABEL_110;
        Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v17, groupId, 0);
        v23 = this->fields.nameLabelList;
        if ( (Instance & 1) != 0 )
        {
          if ( v23 )
          {
            v24 = LODWORD(v23->max_length);
            if ( (__int64)v20 < (int)v24 )
            {
              if ( v20 >= v24 )
                goto LABEL_85;
              if ( !entity )
                goto LABEL_110;
              Instance = (__int64)v23->m_Items[v20];
              if ( !Instance )
                goto LABEL_110;
              UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0);
            }
          }
          v25 = this->fields.nameSpriteList;
          if ( v25 )
          {
            v26 = LODWORD(v25->max_length);
            if ( (__int64)v20 < (int)v26 )
            {
              if ( v20 >= v26 )
                goto LABEL_85;
              v27 = v25->m_Items[v20];
              v28 = RaceResultPointGroupEffectSubComponent_TypeInfo;
              if ( !*(&RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
                v28 = RaceResultPointGroupEffectSubComponent_TypeInfo;
              }
              GROUP_NAME_IMAGE_NAME = v28->static_fields->GROUP_NAME_IMAGE_NAME;
              v30 = System_Int32__ToString(v59, 0);
              v31 = System_Int32__ToString((int32_t)&groupId, 0);
              Instance = (__int64)System_String__Concat_75696856(
                                    GROUP_NAME_IMAGE_NAME,
                                    v30,
                                    (System_String_o *)StringLiteral_16746/*"_"*/,
                                    v31,
                                    0);
              if ( !v27 )
                goto LABEL_110;
              UISprite__set_spriteName(v27, (System_String_o *)Instance, 0);
              v17 = v60;
            }
          }
          v32 = this->fields.iconSpriteList;
          if ( v32 )
          {
            v33 = LODWORD(v32->max_length);
            if ( (__int64)v20 < (int)v33 )
            {
              if ( v20 >= v33 )
                goto LABEL_85;
              v34 = v32->m_Items[v20];
              v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
              if ( !*(&RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
                v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
              }
              GROUP_IMAGE_NAME = v35->static_fields->GROUP_IMAGE_NAME;
              v37 = System_Int32__ToString(v59, 0);
              v38 = System_Int32__ToString((int32_t)&groupId, 0);
              Instance = (__int64)System_String__Concat_75696856(
                                    GROUP_IMAGE_NAME,
                                    v37,
                                    (System_String_o *)StringLiteral_16746/*"_"*/,
                                    v38,
                                    0);
              if ( !v34 )
                goto LABEL_110;
              UISprite__set_spriteName(v34, (System_String_o *)Instance, 0);
              v17 = v60;
            }
          }
          v39 = this->fields.timeLabelList;
          if ( v39 )
          {
            v40 = LODWORD(v39->max_length);
            if ( (__int64)v20 < (int)v40 )
            {
              if ( !goalTime )
                goto LABEL_110;
              if ( v20 >= LODWORD(goalTime->max_length) )
LABEL_85:
                sub_2213CE4(Instance);
              v41 = goalTime->m_Items[v20];
              if ( v41 < 1 )
              {
                if ( v20 >= v40 )
                  goto LABEL_85;
                goto LABEL_80;
              }
              if ( v20 >= v40 )
                goto LABEL_85;
              v42 = v39->m_Items[v20];
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
              Instance = (__int64)LocalizationManager__GetLapTime(v41, 0);
              if ( !v42 )
                goto LABEL_110;
              UILabel__set_text(v42, (System_String_o *)Instance, 0);
              v17 = v60;
            }
          }
          goto LABEL_82;
        }
      }
      if ( v23 )
      {
        v43 = LODWORD(v23->max_length);
        if ( (__int64)v20 < (int)v43 )
        {
          if ( v20 >= v43 )
            goto LABEL_85;
          Instance = (__int64)v23->m_Items[v20];
          if ( !Instance )
            goto LABEL_110;
          UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
      }
      v44 = this->fields.nameSpriteList;
      if ( v44 )
      {
        v45 = LODWORD(v44->max_length);
        if ( (__int64)v20 < (int)v45 )
        {
          if ( v20 >= v45 )
            goto LABEL_85;
          Instance = (__int64)v44->m_Items[v20];
          if ( !Instance )
            goto LABEL_110;
          UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
        }
      }
      v46 = this->fields.iconSpriteList;
      if ( v46 )
      {
        v47 = LODWORD(v46->max_length);
        if ( (__int64)v20 < (int)v47 )
        {
          if ( v20 >= v47 )
            goto LABEL_85;
          Instance = (__int64)v46->m_Items[v20];
          if ( !Instance )
            goto LABEL_110;
          UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
        }
      }
      v39 = this->fields.timeLabelList;
      if ( v39 )
      {
        v48 = LODWORD(v39->max_length);
        if ( (__int64)v20 < (int)v48 )
        {
          if ( v20 >= v48 )
            goto LABEL_85;
LABEL_80:
          Instance = (__int64)v39->m_Items[v20];
          if ( !Instance )
            goto LABEL_110;
          UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
      }
LABEL_82:
      if ( max_length == ++v20 )
        goto LABEL_86;
    }
  }
}