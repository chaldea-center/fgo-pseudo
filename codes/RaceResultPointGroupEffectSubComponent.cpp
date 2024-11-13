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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B175FF & 1) == 0 )
  {
    sub_1BCA7E0(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19435/*"event_ranking_group_name_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19434/*"event_ranking_group_"*/, v10, v11);
    byte_4B175FF = 1;
  }
  RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields->GROUP_IMAGE_NAME = (struct System_String_o *)StringLiteral_19434/*"event_ranking_group_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields,
    StringLiteral_19434/*"event_ranking_group_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_19435/*"event_ranking_group_name_"*/;
  static_fields = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  static_fields->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_19435/*"event_ranking_group_name_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->GROUP_NAME_IMAGE_NAME, v12, v14, v15, v16, v17, v18, v19);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  __int64 v22; // x1
  struct UILabel_array *nameLabelList; // x8
  int64_t v24; // x20
  int max_length; // w27
  struct UISprite_array *nameSpriteList; // x8
  int v27; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v29; // w8
  struct UILabel_array *timeLabelList; // x8
  int v31; // w8
  int32_t v32; // w21
  int v33; // w20
  signed __int64 v34; // x28
  __int64 v35; // x22
  unsigned __int64 v36; // x29
  __int64 v37; // x23
  struct UILabel_array *v38; // x8
  unsigned __int64 v39; // x9
  struct UISprite_array *v40; // x8
  unsigned __int64 v41; // x9
  UISprite_o *v42; // x23
  RaceResultPointGroupEffectSubComponent_c *v43; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v45; // x25
  System_String_o *v46; // x0
  struct UISprite_array *v47; // x8
  unsigned __int64 v48; // x9
  UISprite_o *v49; // x23
  RaceResultPointGroupEffectSubComponent_c *v50; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v52; // x25
  System_String_o *v53; // x0
  struct UILabel_array *v54; // x8
  unsigned __int64 v55; // x9
  int64_t v56; // x24
  UILabel_o *v57; // x23
  System_String_o *v58; // x1
  struct UILabel_array *v59; // x8
  unsigned __int64 v60; // x9
  struct UISprite_array *v61; // x8
  unsigned __int64 v62; // x9
  struct UISprite_array *v63; // x8
  unsigned __int64 v64; // x9
  struct UILabel_array *v65; // x8
  unsigned __int64 v66; // x9
  __int64 v67; // x21
  struct UILabel_array *v68; // x8
  __int64 v69; // x22
  unsigned __int64 v70; // x9
  struct UISprite_array *v71; // x8
  unsigned __int64 v72; // x9
  struct UISprite_array *v73; // x8
  unsigned __int64 v74; // x9
  struct UILabel_array *v75; // x8
  unsigned __int64 v76; // x9
  int32_t v77; // [xsp+8h] [xbp-88h]
  __int64 v78; // [xsp+10h] [xbp-80h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-6Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B175FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventScriptMaster___, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&RaceResultPointGroupEffectSubComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B175FE = 1;
  }
  goalTime = 0LL;
  groupId = 0;
  entity = 0LL;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, param);
  ScriptLabel = ScriptManager__GetScriptLabel(0LL);
  Instance = System_Int64__Parse(ScriptLabel, 0LL);
  nameLabelList = this->fields.nameLabelList;
  v24 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v27 = nameSpriteList->max_length;
    if ( max_length < v27 )
      max_length = v27;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v29 = iconSpriteList->max_length;
    if ( max_length < v29 )
      max_length = v29;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v31 = timeLabelList->max_length;
    if ( max_length < v31 )
      max_length = v31;
  }
  if ( Instance < 1 )
    goto LABEL_85;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_109:
    sub_1BCAA3C(Instance, v22);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_39976852((EventScriptMaster_o *)Instance, 2, v24, 0LL);
  if ( !Instance )
  {
LABEL_85:
    if ( max_length >= 1 )
    {
      v67 = 4LL;
      while ( 1 )
      {
        v68 = this->fields.nameLabelList;
        v69 = v67 - 4;
        if ( v68 )
        {
          v70 = v68->max_length;
          if ( v69 < (int)v70 )
          {
            if ( v69 >= v70 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v68->obj.klass + v67);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v71 = this->fields.nameSpriteList;
        if ( v71 )
        {
          v72 = v71->max_length;
          if ( v69 < (int)v72 )
          {
            if ( v69 >= v72 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v71->obj.klass + v67);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v73 = this->fields.iconSpriteList;
        if ( v73 )
        {
          v74 = v73->max_length;
          if ( v69 < (int)v74 )
          {
            if ( v69 >= v74 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v73->obj.klass + v67);
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v75 = this->fields.timeLabelList;
        if ( v75 )
        {
          v76 = v75->max_length;
          if ( v69 < (int)v76 )
          {
            if ( v69 >= v76 )
              goto LABEL_110;
            Instance = *((_QWORD *)&v75->obj.klass + v67);
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        if ( ++v67 - (unsigned int)max_length == 4 )
          return;
      }
    }
    return;
  }
  v32 = *(_DWORD *)(Instance + 16);
  v33 = *(_DWORD *)(Instance + 40);
  v77 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_109;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v32,
                        v33 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_109;
  if ( max_length >= 1 )
  {
    v34 = *(int *)(Instance + 24);
    v35 = Instance;
    v36 = 0LL;
    v37 = Instance + 32;
    v78 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v36 >= v34 )
        goto LABEL_61;
      if ( v36 >= *(unsigned int *)(v35 + 24) )
        goto LABEL_110;
      groupId = *(_DWORD *)(v37 + 4 * v36);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_109;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_109;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v32, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v38 = this->fields.nameLabelList;
        if ( v38 )
        {
          v39 = v38->max_length;
          if ( (__int64)v36 < (int)v39 )
          {
            if ( v36 >= v39 )
              goto LABEL_110;
            if ( !entity )
              goto LABEL_109;
            Instance = (__int64)v38->m_Items[v36];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v40 = this->fields.nameSpriteList;
        if ( v40 )
        {
          v41 = v40->max_length;
          if ( (__int64)v36 < (int)v41 )
          {
            if ( v36 >= v41 )
              goto LABEL_110;
            v42 = v40->m_Items[v36];
            v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo, v22);
              v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v43->static_fields->GROUP_NAME_IMAGE_NAME;
            v45 = System_Int32__ToString(v77, 0LL);
            v46 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62414484(
                                  GROUP_NAME_IMAGE_NAME,
                                  v45,
                                  (System_String_o *)StringLiteral_16290/*"_"*/,
                                  v46,
                                  0LL);
            if ( !v42 )
              goto LABEL_109;
            UISprite__set_spriteName(v42, (System_String_o *)Instance, 0LL);
            v37 = v78;
          }
        }
        v47 = this->fields.iconSpriteList;
        if ( v47 )
        {
          v48 = v47->max_length;
          if ( (__int64)v36 < (int)v48 )
          {
            if ( v36 >= v48 )
              goto LABEL_110;
            v49 = v47->m_Items[v36];
            v50 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo, v22);
              v50 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v50->static_fields->GROUP_IMAGE_NAME;
            v52 = System_Int32__ToString(v77, 0LL);
            v53 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_62414484(
                                  GROUP_IMAGE_NAME,
                                  v52,
                                  (System_String_o *)StringLiteral_16290/*"_"*/,
                                  v53,
                                  0LL);
            if ( !v49 )
              goto LABEL_109;
            UISprite__set_spriteName(v49, (System_String_o *)Instance, 0LL);
            v37 = v78;
          }
        }
        v54 = this->fields.timeLabelList;
        if ( v54 )
        {
          v55 = v54->max_length;
          if ( (__int64)v36 < (int)v55 )
          {
            if ( !goalTime )
              goto LABEL_109;
            if ( v36 >= goalTime->max_length || v36 >= v55 )
LABEL_110:
              sub_1BCAA44(Instance, v22);
            v56 = goalTime->m_Items[v36];
            v57 = v54->m_Items[v36];
            if ( v56 < 1 )
            {
              if ( !v57 )
                goto LABEL_109;
              v58 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
              Instance = (__int64)LocalizationManager__GetLapTime(v56, 0LL);
              if ( !v57 )
                goto LABEL_109;
              v58 = (System_String_o *)Instance;
            }
            UILabel__set_text(v57, v58, 0LL);
            v37 = v78;
          }
        }
      }
      else
      {
LABEL_61:
        v59 = this->fields.nameLabelList;
        if ( v59 )
        {
          v60 = v59->max_length;
          if ( (__int64)v36 < (int)v60 )
          {
            if ( v36 >= v60 )
              goto LABEL_110;
            Instance = (__int64)v59->m_Items[v36];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v61 = this->fields.nameSpriteList;
        if ( v61 )
        {
          v62 = v61->max_length;
          if ( (__int64)v36 < (int)v62 )
          {
            if ( v36 >= v62 )
              goto LABEL_110;
            Instance = (__int64)v61->m_Items[v36];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v63 = this->fields.iconSpriteList;
        if ( v63 )
        {
          v64 = v63->max_length;
          if ( (__int64)v36 < (int)v64 )
          {
            if ( v36 >= v64 )
              goto LABEL_110;
            Instance = (__int64)v63->m_Items[v36];
            if ( !Instance )
              goto LABEL_109;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v65 = this->fields.timeLabelList;
        if ( v65 )
        {
          v66 = v65->max_length;
          if ( (__int64)v36 < (int)v66 )
          {
            if ( v36 >= v66 )
              goto LABEL_110;
            Instance = (__int64)v65->m_Items[v36];
            if ( !Instance )
              goto LABEL_109;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( max_length == ++v36 )
        goto LABEL_85;
    }
  }
}