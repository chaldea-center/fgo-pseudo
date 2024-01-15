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

  if ( (byte_40F8285 & 1) == 0 )
  {
    sub_B16FFC(&RaceResultPointGroupEffectSubComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18497/*"event_ranking_group_name_"*/, v8);
    sub_B16FFC(&StringLiteral_18496/*"event_ranking_group_"*/, v9);
    byte_40F8285 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18496/*"event_ranking_group_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18496/*"event_ranking_group_"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = RaceResultPointGroupEffectSubComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18497/*"event_ranking_group_name_"*/;
  v12->GROUP_NAME_IMAGE_NAME = (struct System_String_o *)StringLiteral_18497/*"event_ranking_group_name_"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->GROUP_NAME_IMAGE_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  __int64 RaceResultEntity_30744784; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UILabel_array *nameLabelList; // x8
  int64_t v17; // x20
  int max_length; // w26
  struct UISprite_array *nameSpriteList; // x8
  int v20; // w8
  struct UISprite_array *iconSpriteList; // x8
  int v22; // w8
  struct UILabel_array *timeLabelList; // x8
  int v24; // w8
  WebViewManager_o *Instance; // x0
  EventScriptMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v27; // w21
  int v28; // w20
  WebViewManager_o *v29; // x0
  EventRaceResultMaster_o *v30; // x0
  signed __int64 v31; // x27
  __int64 v32; // x22
  unsigned __int64 v33; // x28
  __int64 v34; // x23
  WebViewManager_o *v35; // x0
  EventPointGroupMaster_o *v36; // x0
  struct UILabel_array *v37; // x8
  unsigned __int64 v38; // x9
  UILabel_o *v39; // x0
  struct UISprite_array *v40; // x8
  unsigned __int64 v41; // x9
  UISprite_o *v42; // x23
  RaceResultPointGroupEffectSubComponent_c *v43; // x0
  System_String_o *GROUP_NAME_IMAGE_NAME; // x24
  System_String_o *v45; // x25
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  struct UISprite_array *v48; // x8
  unsigned __int64 v49; // x9
  UISprite_o *v50; // x23
  RaceResultPointGroupEffectSubComponent_c *v51; // x0
  System_String_o *GROUP_IMAGE_NAME; // x24
  System_String_o *v53; // x25
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  struct UILabel_array *v56; // x8
  unsigned __int64 v57; // x9
  int64_t v58; // x24
  UILabel_o *v59; // x23
  System_String_o *LapTime; // x0
  System_String_o *v61; // x1
  struct UILabel_array *v62; // x8
  unsigned __int64 v63; // x9
  UILabel_o *v64; // x0
  struct UISprite_array *v65; // x8
  unsigned __int64 v66; // x9
  UISprite_o *v67; // x0
  struct UISprite_array *v68; // x8
  unsigned __int64 v69; // x9
  UISprite_o *v70; // x0
  struct UILabel_array *v71; // x8
  unsigned __int64 v72; // x9
  UILabel_o *v73; // x0
  __int64 i; // x21
  struct UILabel_array *v75; // x8
  __int64 v76; // x23
  unsigned __int64 v77; // x9
  UILabel_o *v78; // x0
  struct UISprite_array *v79; // x8
  unsigned __int64 v80; // x9
  UISprite_o *v81; // x0
  struct UISprite_array *v82; // x8
  unsigned __int64 v83; // x9
  UISprite_o *v84; // x0
  struct UILabel_array *v85; // x8
  unsigned __int64 v86; // x9
  UILabel_o *v87; // x0
  __int64 v88; // x8
  int32_t v89; // [xsp+8h] [xbp-78h]
  __int64 v90; // [xsp+10h] [xbp-70h]
  EventPointGroupEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF
  int32_t groupId; // [xsp+24h] [xbp-5Ch] BYREF
  System_Int64_array *goalTime; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40F8284 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, param);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaceResultMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventScriptMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&RaceResultPointGroupEffectSubComponent_TypeInfo, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_15842/*"_"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40F8284 = 1;
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
  RaceResultEntity_30744784 = System_Int64__Parse(ScriptLabel, 0LL);
  nameLabelList = this->fields.nameLabelList;
  v17 = RaceResultEntity_30744784;
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
  if ( RaceResultEntity_30744784 < 1 )
    goto LABEL_89;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventScriptMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventScriptMaster___)) == 0LL )
  {
LABEL_113:
    sub_B170D4();
  }
  RaceResultEntity_30744784 = (__int64)EventScriptMaster__getRaceResultEntity_30744784(
                                         MasterData_WarQuestSelectionMaster,
                                         2,
                                         v17,
                                         0LL);
  if ( !RaceResultEntity_30744784 )
  {
LABEL_89:
    if ( max_length >= 1 )
    {
      for ( i = 4LL; ; ++i )
      {
        v75 = this->fields.nameLabelList;
        v76 = i - 4;
        if ( v75 )
        {
          v77 = v75->max_length;
          if ( v76 < (int)v77 )
          {
            if ( v76 >= v77 )
              goto LABEL_114;
            v78 = (UILabel_o *)*((_QWORD *)&v75->obj.klass + i);
            if ( !v78 )
              goto LABEL_113;
            UILabel__set_text(v78, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v79 = this->fields.nameSpriteList;
        if ( v79 )
        {
          v80 = v79->max_length;
          if ( v76 < (int)v80 )
          {
            if ( v76 >= v80 )
              goto LABEL_114;
            v81 = (UISprite_o *)*((_QWORD *)&v79->obj.klass + i);
            if ( !v81 )
              goto LABEL_113;
            UISprite__set_spriteName(v81, 0LL, 0LL);
          }
        }
        v82 = this->fields.iconSpriteList;
        if ( v82 )
        {
          v83 = v82->max_length;
          if ( v76 < (int)v83 )
          {
            if ( v76 >= v83 )
              goto LABEL_114;
            v84 = (UISprite_o *)*((_QWORD *)&v82->obj.klass + i);
            if ( !v84 )
              goto LABEL_113;
            UISprite__set_spriteName(v84, 0LL, 0LL);
          }
        }
        v85 = this->fields.timeLabelList;
        if ( v85 )
        {
          v86 = v85->max_length;
          if ( v76 < (int)v86 )
          {
            if ( v76 >= v86 )
              goto LABEL_114;
            v87 = (UILabel_o *)*((_QWORD *)&v85->obj.klass + i);
            if ( !v87 )
              goto LABEL_113;
            UILabel__set_text(v87, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v88 = i - 3;
        if ( v88 >= max_length )
          return;
      }
    }
    return;
  }
  v27 = *(_DWORD *)(RaceResultEntity_30744784 + 16);
  v28 = *(_DWORD *)(RaceResultEntity_30744784 + 40);
  v89 = RaceResultEntity_30744784 + 16;
  v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v29 )
    goto LABEL_113;
  v30 = (EventRaceResultMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v29,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaceResultMaster___);
  if ( !v30 )
    goto LABEL_113;
  RaceResultEntity_30744784 = (__int64)EventRaceResultMaster__GetRankDatas(v30, v27, v28 % 100, &goalTime, 0LL);
  if ( !RaceResultEntity_30744784 )
    goto LABEL_113;
  if ( max_length >= 1 )
  {
    v31 = *(int *)(RaceResultEntity_30744784 + 24);
    v32 = RaceResultEntity_30744784;
    v33 = 0LL;
    v34 = RaceResultEntity_30744784 + 32;
    v90 = RaceResultEntity_30744784 + 32;
    while ( 1 )
    {
      if ( (__int64)v33 >= v31 )
        goto LABEL_65;
      if ( v33 >= *(unsigned int *)(v32 + 24) )
        goto LABEL_114;
      groupId = *(_DWORD *)(v34 + 4 * v33);
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v35 )
        goto LABEL_113;
      v36 = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)v35,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
      if ( !v36 )
        goto LABEL_113;
      RaceResultEntity_30744784 = EventPointGroupMaster__TryGetEntity(v36, &entity, v27, groupId, 0LL);
      if ( (RaceResultEntity_30744784 & 1) != 0 )
      {
        v37 = this->fields.nameLabelList;
        if ( v37 )
        {
          v38 = v37->max_length;
          if ( (__int64)v33 < (int)v38 )
          {
            if ( v33 >= v38 )
              goto LABEL_114;
            if ( !entity )
              goto LABEL_113;
            v39 = v37->m_Items[v33];
            if ( !v39 )
              goto LABEL_113;
            UILabel__set_text(v39, entity->fields.name, 0LL);
          }
        }
        v40 = this->fields.nameSpriteList;
        if ( v40 )
        {
          v41 = v40->max_length;
          if ( (__int64)v33 < (int)v41 )
          {
            if ( v33 >= v41 )
              goto LABEL_114;
            v42 = v40->m_Items[v33];
            v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v43 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_NAME_IMAGE_NAME = v43->static_fields->GROUP_NAME_IMAGE_NAME;
            v45 = System_Int32__ToString(v89, 0LL);
            v46 = System_Int32__ToString((int32_t)&groupId, 0LL);
            v47 = System_String__Concat_43747144(
                    GROUP_NAME_IMAGE_NAME,
                    v45,
                    (System_String_o *)StringLiteral_15842/*"_"*/,
                    v46,
                    0LL);
            if ( !v42 )
              goto LABEL_113;
            UISprite__set_spriteName(v42, v47, 0LL);
            v34 = v90;
          }
        }
        v48 = this->fields.iconSpriteList;
        if ( v48 )
        {
          v49 = v48->max_length;
          if ( (__int64)v33 < (int)v49 )
          {
            if ( v33 >= v49 )
              goto LABEL_114;
            v50 = v48->m_Items[v33];
            v51 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            if ( (BYTE3(RaceResultPointGroupEffectSubComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !RaceResultPointGroupEffectSubComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(RaceResultPointGroupEffectSubComponent_TypeInfo);
              v51 = RaceResultPointGroupEffectSubComponent_TypeInfo;
            }
            GROUP_IMAGE_NAME = v51->static_fields->GROUP_IMAGE_NAME;
            v53 = System_Int32__ToString(v89, 0LL);
            v54 = System_Int32__ToString((int32_t)&groupId, 0LL);
            v55 = System_String__Concat_43747144(
                    GROUP_IMAGE_NAME,
                    v53,
                    (System_String_o *)StringLiteral_15842/*"_"*/,
                    v54,
                    0LL);
            if ( !v50 )
              goto LABEL_113;
            UISprite__set_spriteName(v50, v55, 0LL);
            v34 = v90;
          }
        }
        v56 = this->fields.timeLabelList;
        if ( v56 )
        {
          v57 = v56->max_length;
          if ( (__int64)v33 < (int)v57 )
          {
            if ( !goalTime )
              goto LABEL_113;
            if ( v33 >= goalTime->max_length || v33 >= v57 )
            {
LABEL_114:
              sub_B17100(RaceResultEntity_30744784, v14, v15);
              sub_B170A0();
            }
            v58 = goalTime->m_Items[v33];
            v59 = v56->m_Items[v33];
            if ( v58 < 1 )
            {
              if ( !v59 )
                goto LABEL_113;
              v61 = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              LapTime = LocalizationManager__GetLapTime(v58, 0LL);
              if ( !v59 )
                goto LABEL_113;
              v61 = LapTime;
            }
            UILabel__set_text(v59, v61, 0LL);
            v34 = v90;
          }
        }
      }
      else
      {
LABEL_65:
        v62 = this->fields.nameLabelList;
        if ( v62 )
        {
          v63 = v62->max_length;
          if ( (__int64)v33 < (int)v63 )
          {
            if ( v33 >= v63 )
              goto LABEL_114;
            v64 = v62->m_Items[v33];
            if ( !v64 )
              goto LABEL_113;
            UILabel__set_text(v64, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
        v65 = this->fields.nameSpriteList;
        if ( v65 )
        {
          v66 = v65->max_length;
          if ( (__int64)v33 < (int)v66 )
          {
            if ( v33 >= v66 )
              goto LABEL_114;
            v67 = v65->m_Items[v33];
            if ( !v67 )
              goto LABEL_113;
            UISprite__set_spriteName(v67, 0LL, 0LL);
          }
        }
        v68 = this->fields.iconSpriteList;
        if ( v68 )
        {
          v69 = v68->max_length;
          if ( (__int64)v33 < (int)v69 )
          {
            if ( v33 >= v69 )
              goto LABEL_114;
            v70 = v68->m_Items[v33];
            if ( !v70 )
              goto LABEL_113;
            UISprite__set_spriteName(v70, 0LL, 0LL);
          }
        }
        v71 = this->fields.timeLabelList;
        if ( v71 )
        {
          v72 = v71->max_length;
          if ( (__int64)v33 < (int)v72 )
          {
            if ( v33 >= v72 )
              goto LABEL_114;
            v73 = v71->m_Items[v33];
            if ( !v73 )
              goto LABEL_113;
            UILabel__set_text(v73, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
        }
      }
      if ( (__int64)++v33 >= max_length )
        goto LABEL_89;
    }
  }
}