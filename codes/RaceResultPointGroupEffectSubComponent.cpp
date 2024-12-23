void __fastcall RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B68012 & 1) == 0 )
  {
    sub_1BE4ACC(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_19493/*"event_ranking_group_name_"*/, v8);
    sub_1BE4ACC(&StringLiteral_19492/*"event_ranking_group_"*/, v9);
    byte_4B68012 = 1;
  }
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19492/*"event_ranking_group_"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    StringLiteral_19492/*"event_ranking_group_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19493/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19493/*"event_ranking_group_name_"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v10, v12, v13, v14, v15, v16, v17);
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
  struct UILabel_array *nameLabelList; // x8
  int64_t v16; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v19; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v21; // w8
  struct UILabel_array *timeLabelList; // x8
  int v23; // w8
  int32_t v24; // w21
  int v25; // w20
  signed __int64 v26; // x28
  __int64 v27; // x22
  unsigned __int64 v28; // x29
  __int64 v29; // x23
  struct UILabel_array *v30; // x8
  unsigned __int64 v31; // x9
  struct UISprite_array *v32; // x8
  unsigned __int64 v33; // x9
  UISprite_o *v34; // x23
  RaceResultPointGroupEffectSubComponent_c *v35; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v37; // x25
  System_String_o *v38; // x0
  struct UISprite_array *v39; // x8
  unsigned __int64 v40; // x9
  UISprite_o *v41; // x23
  RaceResultPointGroupEffectSubComponent_c *v42; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v44; // x25
  System_String_o *v45; // x0
  struct UILabel_array *v46; // x8
  unsigned __int64 v47; // x9
  int64_t v48; // x24
  UILabel_o *v49; // x23
  System_String_o *v50; // x1
  struct UILabel_array *v51; // x8
  unsigned __int64 v52; // x9
  struct UISprite_array *v53; // x8
  unsigned __int64 v54; // x9
  struct UISprite_array *v55; // x8
  unsigned __int64 v56; // x9
  struct UILabel_array *v57; // x8
  unsigned __int64 v58; // x9
  __int64 v59; // x21
  struct UILabel_array *v60; // x8
  __int64 v61; // x22
  unsigned __int64 v62; // x9
  struct UISprite_array *v63; // x8
  unsigned __int64 v64; // x9
  struct UISprite_array *v65; // x8
  unsigned __int64 v66; // x9
  struct UILabel_array *v67; // x8
  unsigned __int64 v68; // x9
  int32_t v69; // [xsp+8h] [xbp-88h]
  __int64 v70; // [xsp+10h] [xbp-80h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B68011 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventScriptMaster___, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&StringLiteral_16330/*"_"*/, v10);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v11);
    byte_4B68011 = 1;
  }
  goalTime = 0LL;
  groupId = 0;
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptLabel = ScriptManager__GetScriptLabel(0LL);
  Instance = System_Int64__Parse(ScriptLabel, 0LL);
  nameLabelList = this->fields.nameLabelList;
  v16 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v19 = nameSpriteList->max_length;
    if ( max_length < v19 )
      max_length = v19;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v21 = iconSpriteList->max_length;
    if ( max_length < v21 )
      max_length = v21;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v23 = timeLabelList->max_length;
    if ( max_length < v23 )
      max_length = v23;
  }
  if ( Instance < 1 )
    goto LABEL_85;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_109:
    sub_1BE4D28(Instance, v14);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_40181764((EventScriptMaster_o *)Instance, 2, v16, 0LL);
  if ( !Instance )
  {
LABEL_85:
    if ( max_length >= 1 )
    {
      v59 = 4LL;
      while ( 1 )
      {
        v60 = this->fields.nameLabelList;
        v61 = v59 - 4;
        if ( v60 )
        {
          v62 = v60->max_length;
          if ( v61 < (int)v62 )
          {
            if ( v61 >= v62 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v60->obj.klass + v59);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v63 = this->fields.nameSpriteList;
        if ( v63 )
        {
          v64 = v63->max_length;
          if ( v61 < (int)v64 )
          {
            if ( v61 >= v64 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v63->obj.klass + v59);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v65 = this->fields.iconSpriteList;
        if ( v65 )
        {
          v66 = v65->max_length;
          if ( v61 < (int)v66 )
          {
            if ( v61 >= v66 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v65->obj.klass + v59);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v67 = this->fields.timeLabelList;
        if ( v67 )
        {
          v68 = v67->max_length;
          if ( v61 < (int)v68 )
          {
            if ( v61 >= v68 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v67->obj.klass + v59);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        if ( ++v59 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v24 = *(_DWORD *)(Instance + 16);
  v25 = *(_DWORD *)(Instance + 40);
  v69 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v24,
                        v25 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  if ( max_length >= 1 )
  {
    v26 = *(int *)(Instance + 24);
    v27 = Instance;
    v28 = 0LL;
    v29 = Instance + 32;
    v70 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v28 >= v26 )
        goto LABEL_61;
      if ( v28 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_110;
      groupId = *(_DWORD *)(v29 + 4 * v28);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_109;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_109;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v24, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v30 = this->fields.nameLabelList;
        if ( v30 )
        {
          v31 = v30->max_length;
          if ( (__int64)v28 < (int)v31 )
          {
            if ( v28 >= v31 )
              goto LABEL_110;
            if ( !entity )
              goto LABEL_109;
            Instance = (__int64)v30->m_Items[v28];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v32 = this->fields.nameSpriteList;
        if ( v32 )
        {
          v33 = v32->max_length;
          if ( (__int64)v28 < (int)v33 )
          {
            if ( v28 >= v33 )
              goto LABEL_110;
            v34 = v32->m_Items[v28];
            v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v35 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v35->static_fields->GROUP_NAME_IMAGE_NAME;
            v37 = System_Int32__ToString(v69, 0LL);
            v38 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62712072(
                                  GROUP_NAME_IMAGE_NAME,
                                  v37,
                                  (System_String_o *)StringLiteral_16330/*"_"*/,
                                  v38,
                                  0LL);
            if ( !v34 )
              goto LABEL_109;
            UISprite__set_spriteName(v34, (System_String_o *)Instance, 0LL);
            v29 = v70;
          }
        }
        v39 = this->fields.iconSpriteList;
        if ( v39 )
        {
          v40 = v39->max_length;
          if ( (__int64)v28 < (int)v40 )
          {
            if ( v28 >= v40 )
              goto LABEL_110;
            v41 = v39->m_Items[v28];
            v42 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v42 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v42->static_fields->GROUP_IMAGE_NAME;
            v44 = System_Int32__ToString(v69, 0LL);
            v45 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62712072(
                                  GROUP_IMAGE_NAME,
                                  v44,
                                  (System_String_o *)StringLiteral_16330/*"_"*/,
                                  v45,
                                  0LL);
            if ( !v41 )
              goto LABEL_109;
            UISprite__set_spriteName(v41, (System_String_o *)Instance, 0LL);
            v29 = v70;
          }
        }
        v46 = this->fields.timeLabelList;
        if ( v46 )
        {
          v47 = v46->max_length;
          if ( (__int64)v28 < (int)v47 )
          {
            if ( !goalTime )
              goto LABEL_109;
            if ( v28 >= goalTime->max_length || v28 >= v47 )
LABEL_110:
              sub_1BE4D30(Instance, v14);
            v48 = goalTime->m_Items[v28];
            v49 = v46->m_Items[v28];
            if ( v48 < 1 )
            {
              if ( !v49 )
                goto LABEL_109;
              v50 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__GetLapTime(v48, 0LL);
              if ( !v49 )
                goto LABEL_109;
              v50 = (System_String_o *)Instance;
            }
            UILabel__set_text(v49, v50, 0LL);
            v29 = v70;
          }
        }
      }
      else
      {
LABEL_61:
        v51 = this->fields.nameLabelList;
        if ( v51 )
        {
          v52 = v51->max_length;
          if ( (__int64)v28 < (int)v52 )
          {
            if ( v28 >= v52 )
              goto LABEL_110;
            Instance = (__int64)v51->m_Items[v28];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v53 = this->fields.nameSpriteList;
        if ( v53 )
        {
          v54 = v53->max_length;
          if ( (__int64)v28 < (int)v54 )
          {
            if ( v28 >= v54 )
              goto LABEL_110;
            Instance = (__int64)v53->m_Items[v28];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v55 = this->fields.iconSpriteList;
        if ( v55 )
        {
          v56 = v55->max_length;
          if ( (__int64)v28 < (int)v56 )
          {
            if ( v28 >= v56 )
              goto LABEL_110;
            Instance = (__int64)v55->m_Items[v28];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v57 = this->fields.timeLabelList;
        if ( v57 )
        {
          v58 = v57->max_length;
          if ( (__int64)v28 < (int)v58 )
          {
            if ( v28 >= v58 )
              goto LABEL_110;
            Instance = (__int64)v57->m_Items[v28];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( max_length == ++v28 )
        goto LABEL_85;
    }
  }
}