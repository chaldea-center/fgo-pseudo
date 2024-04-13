void __fastcall RaceResultPointGroupEffectSubComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct RaceResultPointGroupEffectSubComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E6F69 & 1) == 0 )
  {
    sub_B5D5C4(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18797/*"event_ranking_group_name_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18796/*"event_ranking_group_"*/, v11, v12, v13);
    byte_42E6F69 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18796/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18796/*"event_ranking_group_"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18797/*"event_ranking_group_name_"*/;
  v16->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18797/*"event_ranking_group_name_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->GROUP_NAME_IMAGE_NAME, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_String_o *ScriptLabel; // x0
  __int64 Instance; // x0
  __int64 v31; // x1
  struct UILabel_array *nameLabelList; // x8
  int64_t v33; // x20
  int max_length; // w26
  struct UISprite_array *nameSpriteList; // x8
  int v36; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v38; // w8
  struct UILabel_array *timeLabelList; // x8
  int v40; // w8
  int32_t v41; // w21
  int v42; // w20
  signed __int64 v43; // x27
  __int64 v44; // x22
  unsigned __int64 v45; // x28
  __int64 v46; // x23
  struct UILabel_array *v47; // x8
  unsigned __int64 v48; // x9
  struct UISprite_array *v49; // x8
  unsigned __int64 v50; // x9
  UISprite_o *v51; // x23
  RaceResultPointGroupEffectSubComponent_c *v52; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v54; // x25
  System_String_o *v55; // x0
  struct UISprite_array *v56; // x8
  unsigned __int64 v57; // x9
  UISprite_o *v58; // x23
  RaceResultPointGroupEffectSubComponent_c *v59; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v61; // x25
  System_String_o *v62; // x0
  struct UILabel_array *v63; // x8
  unsigned __int64 v64; // x9
  int64_t v65; // x24
  UILabel_o *v66; // x23
  System_String_o *v67; // x1
  struct UILabel_array *v68; // x8
  unsigned __int64 v69; // x9
  struct UISprite_array *v70; // x8
  unsigned __int64 v71; // x9
  struct UISprite_array *v72; // x8
  unsigned __int64 v73; // x9
  struct UILabel_array *v74; // x8
  unsigned __int64 v75; // x9
  __int64 i; // x21
  struct UILabel_array *v77; // x8
  __int64 v78; // x23
  unsigned __int64 v79; // x9
  struct UISprite_array *v80; // x8
  unsigned __int64 v81; // x9
  struct UISprite_array *v82; // x8
  unsigned __int64 v83; // x9
  struct UILabel_array *v84; // x8
  unsigned __int64 v85; // x9
  __int64 v86; // x8
  __int64 v87; // x0
  int32_t v88; // [xsp+8h] [xbp-78h]
  __int64 v89; // [xsp+10h] [xbp-70h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-5Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_42E6F68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventScriptMaster___, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&RaceResultPointGroupEffectSubComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ScriptManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E6F68 = 1;
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
  v33 = Instance;
  if ( nameLabelList )
    max_length = nameLabelList->max_length;
  else
    max_length = 0;
  nameSpriteList = this->fields.nameSpriteList;
  if ( nameSpriteList )
  {
    v36 = nameSpriteList->max_length;
    if ( max_length < v36 )
      max_length = v36;
  }
  iconSpriteList = this->fields.iconSpriteList;
  if ( iconSpriteList )
  {
    v38 = iconSpriteList->max_length;
    if ( max_length < v38 )
      max_length = v38;
  }
  timeLabelList = this->fields.timeLabelList;
  if ( timeLabelList )
  {
    v40 = timeLabelList->max_length;
    if ( max_length < v40 )
      max_length = v40;
  }
  if ( Instance < 1 )
    goto LABEL_89;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0 )
  {
LABEL_113:
    sub_B5D69C(Instance, v31);
  }
  Instance = (__int64)EventScriptMaster__getRaceResultEntity_31534964((EventScriptMaster_o *)Instance, 2, v33, 0LL);
  if ( !Instance )
  {
LABEL_89:
    if ( max_length >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v77 = this->fields.nameLabelList;
        v78 = i - 4;
        if ( v77 )
        {
          v79 = v77->max_length;
          if ( v78 < (int)v79 )
          {
            if ( v78 >= v79 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v77->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v80 = this->fields.nameSpriteList;
        if ( v80 )
        {
          v81 = v80->max_length;
          if ( v78 < (int)v81 )
          {
            if ( v78 >= v81 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v80->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v82 = this->fields.iconSpriteList;
        if ( v82 )
        {
          v83 = v82->max_length;
          if ( v78 < (int)v83 )
          {
            if ( v78 >= v83 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v82->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v84 = this->fields.timeLabelList;
        if ( v84 )
        {
          v85 = v84->max_length;
          if ( v78 < (int)v85 )
          {
            if ( v78 >= v85 )
              goto LABEL_114;
            Instance = *((_QWORD *)&v84->obj.klass + i);
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v86 = i - 3;
        if ( v86 >= max_length )
          return;
      }
    }
    return;
  }
  v41 = *(_DWORD *)(Instance + 16);
  v42 = *(_DWORD *)(Instance + 40);
  v88 = Instance + 16;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !Instance )
    goto LABEL_113;
  Instance = (__int64)EventRaceResultMaster__GetRankDatas(
                        (EventRaceResultMaster_o *)Instance,
                        v41,
                        v42 % 100,
                        &goalTime,
                        0LL);
  if ( !Instance )
    goto LABEL_113;
  if ( max_length >= 1 )
  {
    v43 = *(int *)(Instance + 24);
    v44 = Instance;
    v45 = 0LL;
    v46 = Instance + 32;
    v89 = Instance + 32;
    while ( 1 )
    {
      if ( (__int64)v45 >= v43 )
        goto LABEL_65;
      if ( v45 >= *(unsigned int *)(v44 + 24) )
        goto LABEL_114;
      groupId = *(_DWORD *)(v46 + 4 * v45);
      Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_113;
      Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !Instance )
        goto LABEL_113;
      Instance = EventPointGroupMaster__TryGetEntity((EventPointGroupMaster_o *)Instance, &entity, v41, groupId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        v47 = this->fields.nameLabelList;
        if ( v47 )
        {
          v48 = v47->max_length;
          if ( (__int64)v45 < (int)v48 )
          {
            if ( v45 >= v48 )
              goto LABEL_114;
            if ( !entity )
              goto LABEL_113;
            Instance = (__int64)v47->m_Items[v45];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, entity->fields.name, 0LL);
          }
        }
        v49 = this->fields.nameSpriteList;
        if ( v49 )
        {
          v50 = v49->max_length;
          if ( (__int64)v45 < (int)v50 )
          {
            if ( v45 >= v50 )
              goto LABEL_114;
            v51 = v49->m_Items[v45];
            v52 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v52 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v52->static_fields->GROUP_NAME_IMAGE_NAME;
            v54 = System_Int32__ToString(v88, 0LL);
            v55 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_44581200(
                                  GROUP_NAME_IMAGE_NAME,
                                  v54,
                                  (System_String_o *)StringLiteral_16096/*"_"*/,
                                  v55,
                                  0LL);
            if ( !v51 )
              goto LABEL_113;
            UISprite__set_spriteName(v51, (System_String_o *)Instance, 0LL);
            v46 = v89;
          }
        }
        v56 = this->fields.iconSpriteList;
        if ( v56 )
        {
          v57 = v56->max_length;
          if ( (__int64)v45 < (int)v57 )
          {
            if ( v45 >= v57 )
              goto LABEL_114;
            v58 = v56->m_Items[v45];
            v59 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v59 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v59->static_fields->GROUP_IMAGE_NAME;
            v61 = System_Int32__ToString(v88, 0LL);
            v62 = System_Int32__ToString((int32_t)&groupId, 0LL);
            Instance = (__int64)System_String__Concat_44581200(
                                  GROUP_IMAGE_NAME,
                                  v61,
                                  (System_String_o *)StringLiteral_16096/*"_"*/,
                                  v62,
                                  0LL);
            if ( !v58 )
              goto LABEL_113;
            UISprite__set_spriteName(v58, (System_String_o *)Instance, 0LL);
            v46 = v89;
          }
        }
        v63 = this->fields.timeLabelList;
        if ( v63 )
        {
          v64 = v63->max_length;
          if ( (__int64)v45 < (int)v64 )
          {
            if ( !goalTime )
              goto LABEL_113;
            if ( v45 >= goalTime->max_length || v45 >= v64 )
            {
LABEL_114:
              v87 = sub_B5D6C8(Instance);
              sub_B5D668(v87, 0LL);
            }
            v65 = goalTime->m_Items[v45];
            v66 = v63->m_Items[v45];
            if ( v65 < 1 )
            {
              if ( !v66 )
                goto LABEL_113;
              v67 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Instance = (__int64)LocalizationManager__GetLapTime(v65, 0LL);
              if ( !v66 )
                goto LABEL_113;
              v67 = (System_String_o *)Instance;
            }
            UILabel__set_text(v66, v67, 0LL);
            v46 = v89;
          }
        }
      }
      else
      {
LABEL_65:
        v68 = this->fields.nameLabelList;
        if ( v68 )
        {
          v69 = v68->max_length;
          if ( (__int64)v45 < (int)v69 )
          {
            if ( v45 >= v69 )
              goto LABEL_114;
            Instance = (__int64)v68->m_Items[v45];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v70 = this->fields.nameSpriteList;
        if ( v70 )
        {
          v71 = v70->max_length;
          if ( (__int64)v45 < (int)v71 )
          {
            if ( v45 >= v71 )
              goto LABEL_114;
            Instance = (__int64)v70->m_Items[v45];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v72 = this->fields.iconSpriteList;
        if ( v72 )
        {
          v73 = v72->max_length;
          if ( (__int64)v45 < (int)v73 )
          {
            if ( v45 >= v73 )
              goto LABEL_114;
            Instance = (__int64)v72->m_Items[v45];
            if ( !Instance )
              goto LABEL_113;
            UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
          }
        }
        v74 = this->fields.timeLabelList;
        if ( v74 )
        {
          v75 = v74->max_length;
          if ( (__int64)v45 < (int)v75 )
          {
            if ( v45 >= v75 )
              goto LABEL_114;
            Instance = (__int64)v74->m_Items[v45];
            if ( !Instance )
              goto LABEL_113;
            UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( (__int64)++v45 >= max_length )
        goto LABEL_89;
    }
  }
}