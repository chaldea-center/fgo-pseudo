void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int64_t v8; // x1
  int64_t v9; // x1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  struct TitleInfoEventItemComponent_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDA7F9 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventItemComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_20832/*"img_shopbg06"*/);
    sub_1C21E38(&StringLiteral_20831/*"img_shopbg05"*/);
    sub_1C21E38(&StringLiteral_19524/*"event_item_title_"*/);
    byte_4BDA7F9 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v8 = StringLiteral_19524/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19524/*"event_item_title_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20831/*"img_shopbg05"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20831/*"img_shopbg05"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->EVENT_ITEM_VS_BASE_SP_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_20832/*"img_shopbg06"*/;
  v18 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v18->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20832/*"img_shopbg06"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->EVENT_GPOINT_VS_BASE_SP_NAME, v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoEventItemComponent_o *v8; // x19
  PartyOrganizationUtility_c *v9; // x8
  PartyOrganizationUtility_o *p_mEventItemComponents; // x19
  struct EventItemComponent_array *mEventItemComponents; // t1
  unsigned __int64 v12; // x21
  __int64 namespaze; // x22
  UnityEngine_Object_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_c *klass; // x8
  UnityEngine_Object_o *gameObject; // x20
  PartyOrganizationUtility_c *v23; // x8
  void **v24; // x0

  v8 = this;
  if ( (byte_4BDA7F7 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA7F7 = 1;
  }
  mEventItemComponents = v8->fields.mEventItemComponents;
  p_mEventItemComponents = (PartyOrganizationUtility_o *)&v8->fields.mEventItemComponents;
  v9 = (PartyOrganizationUtility_c *)mEventItemComponents;
  if ( mEventItemComponents )
  {
    if ( (int)v9->_1.namespaze >= 1 )
    {
      v12 = 0LL;
      namespaze = (unsigned int)v9->_1.namespaze;
      while ( v12 < LODWORD(v9->_1.namespaze) )
      {
        v14 = (UnityEngine_Object_o *)*((_QWORD *)&v9->_1.byval_arg.data + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = p_mEventItemComponents->klass;
          if ( !p_mEventItemComponents->klass )
            goto LABEL_20;
          if ( v12 >= LODWORD(klass->_1.namespaze) )
            break;
          this = (TitleInfoEventItemComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
          if ( !this )
            goto LABEL_20;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        }
        v23 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v12 >= LODWORD(v23->_1.namespaze) )
          break;
        v24 = &v23->_1.image + v12;
        v24[4] = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), 0LL, v15, v16, v17, v18, v19, v20);
        if ( ++v12 == namespaze )
          goto LABEL_21;
        v9 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1C22094(this, method);
      }
      sub_1C2209C(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1C21DDC(p_mEventItemComponents, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


bool __fastcall TitleInfoEventItemComponent__IsDispPossible(
        TitleInfoEventItemComponent_o *this,
        const MethodInfo *method)
{
  struct EventItemComponent_array *mEventItemComponents; // x8

  mEventItemComponents = this->fields.mEventItemComponents;
  return mEventItemComponents && mEventItemComponents->max_length != 0;
}


bool __fastcall TitleInfoEventItemComponent__IsEventRaidBoss(
        TitleInfoEventItemComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall TitleInfoEventItemComponent__Setup(
        TitleInfoEventItemComponent_o *this,
        System_Int32_array *item_ids,
        System_Int32_array *iconIds,
        TitleInfoEventItemComponent_DispType_array *disp_types,
        int32_t eventId,
        int32_t titleImageId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v12; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v14; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x26
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UnityEngine_GameObject_array *v22; // x8
  signed int max_length; // w8
  __int64 v24; // x22
  il2cpp_array_size_t v25; // w8
  il2cpp_array_size_t v26; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x28
  int32_t v30; // w29
  EventItemComponent_o *v31; // x27
  il2cpp_array_size_t v32; // w8
  int32_t v33; // w3
  TitleInfoEventItemComponent_c *v34; // x0
  int32_t v35; // w29
  int v36; // s9
  int v37; // s10
  __int64 v38; // x8
  TitleInfoEventItemComponent_c *v39; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct EventItemComponent_array *v48; // x28
  Il2CppClass **v49; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v51; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x21
  int32_t v55; // w8
  UnityEngine_GameObject_o *v56; // x0
  int v57; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v59; // x8
  __int64 v60; // x0
  int32_t v61; // [xsp+Ch] [xbp-94h]
  signed int v64; // [xsp+28h] [xbp-78h]
  int32_t v65; // [xsp+2Ch] [xbp-74h] BYREF

  v65 = titleImageId;
  if ( (byte_4BDA7F6 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&EventItemComponent___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TitleInfoEventItemComponent_TypeInfo);
    byte_4BDA7F6 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v14 = (struct EventItemComponent_array *)sub_1C21EE0(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v14;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.mEventItemComponents,
    (int64_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v22 = this->fields.mItemObjParents;
  if ( !v22 || !item_ids )
    goto LABEL_94;
  max_length = v22->max_length;
  v61 = titleImageId;
  v24 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v25 = max_length - 1;
  else
    v25 = item_ids->max_length - 1;
  v26 = 0;
  v64 = v25;
  if ( (v25 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v28 = this->fields.mItemObjParents;
      if ( !v28 )
        goto LABEL_94;
      if ( v26 >= v28->max_length )
        goto LABEL_95;
      v29 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_34803616((UnityEngine_GameObject_o *)Instance, v28->m_Items[v26], 0LL);
      if ( !v29 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v29,
                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v26 >= disp_types->max_length )
        goto LABEL_95;
      v30 = disp_types->m_Items[v26 + 1];
      v31 = (EventItemComponent_o *)Instance;
      switch ( v30 )
      {
        case 0:
          if ( v26 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v26 + 1], 0LL);
          goto LABEL_42;
        case 1:
          Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)iconIds, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_38;
          if ( !iconIds )
            goto LABEL_94;
          v32 = iconIds->max_length;
          if ( (int)v26 >= (int)v32 )
          {
LABEL_38:
            v33 = 0;
          }
          else
          {
            if ( v26 >= v32 )
              goto LABEL_95;
            v33 = iconIds->m_Items[v26 + 1];
          }
          if ( v26 >= item_ids->max_length )
            goto LABEL_95;
          if ( !v31 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v31, eventId, item_ids->m_Items[v26 + 1], v33, 0LL);
LABEL_42:
          if ( !v24 )
            goto LABEL_94;
          if ( *(_DWORD *)(v24 + 148) == 4 )
          {
            if ( !v31 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v31, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v31, 12, 0LL);
            if ( v30 == 4 )
            {
              v34 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v34 = TitleInfoEventItemComponent_TypeInfo;
              }
              v35 = 70;
              v36 = 1111490560;
              v37 = 1110966272;
              v38 = 24LL;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v31,
                *(System_String_o **)((char *)&v34->static_fields->EVENT_ITEM_SCALE_DEFAULT + v38),
                0LL);
              EventItemComponent__setLocalPositionXItemIcon(v31, *(float *)&v37, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v31, *(float *)&v36, -1.0, 0LL);
              EventItemComponent__setWidthDataLabel(v31, v35, 0LL);
            }
            else if ( !v30 )
            {
              v34 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v34 = TitleInfoEventItemComponent_TypeInfo;
              }
              v35 = 42;
              v36 = 1108082688;
              v37 = 1117388800;
              v38 = 16LL;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v31, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v31, 0.6, 0LL);
            v41 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v41 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v41->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v39 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v39 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v39->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_34799788(v29, *p_EVENT_ITEM_SCALE_VS, 0LL);
          v48 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v31 )
          {
            Instance = sub_1C21F74(v31, v48->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v60 = sub_1C220B8(0LL);
              sub_1C21F60(v60, 0LL);
            }
          }
          if ( v26 >= v48->max_length )
            goto LABEL_95;
          v49 = &v48->obj.klass + (int)v26;
          v49[4] = (Il2CppClass *)v31;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v31, v42, v43, v44, v45, v46, v47);
          if ( (int)++v26 > v64 )
            goto LABEL_65;
          break;
        case 2:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          goto LABEL_42;
        case 3:
          if ( v26 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v26 + 1], 0LL);
          goto LABEL_42;
        case 4:
          if ( v26 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v26 + 1], 0LL);
          goto LABEL_42;
        case 5:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          goto LABEL_42;
        default:
          goto LABEL_42;
      }
    }
  }
LABEL_65:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_94:
    sub_1C22094(Instance, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v26 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v61 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v24 )
      goto LABEL_94;
  }
  else
  {
    v51 = TitleInfoEventItemComponent_TypeInfo;
    if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v51 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v51->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v53 = System_Int32__ToString((int32_t)&v65, 0LL);
    v54 = System_String__Concat_63115476(TITLE_SP_ITEM_NAME_PREFIX, v53, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v54, 0LL);
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v24 )
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v24 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_94;
    if ( !disp_types->max_length )
LABEL_95:
      sub_1C2209C(Instance, v12);
    v55 = disp_types->m_Items[1];
    if ( v55 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34797668(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v57 = -1025114112;
    }
    else
    {
      if ( v55 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_94;
        goto LABEL_91;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34797668(v56, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v57 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v57;
LABEL_91:
    v59 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v59 + 440))(Instance, *(_QWORD *)(v59 + 448));
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
  }
}


void __fastcall TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventItemComponent_o *v2; // x19
  struct EventItemComponent_array *mEventItemComponents; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4BDA7F8 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA7F8 = 1;
  }
  mEventItemComponents = v2->fields.mEventItemComponents;
  if ( mEventItemComponents )
  {
    v4 = *(_QWORD *)&mEventItemComponents->max_length;
    if ( (int)v4 >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( v5 >= (unsigned int)v4 )
          sub_1C2209C(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1C22094(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}