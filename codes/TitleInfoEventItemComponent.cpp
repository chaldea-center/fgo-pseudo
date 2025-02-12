void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int64_t v12; // x1
  int64_t v13; // x1
  struct TitleInfoEventItemComponent_StaticFields *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct TitleInfoEventItemComponent_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BC5D6A & 1) == 0 )
  {
    sub_1C1ABD4(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_20815/*"img_shopbg06"*/, v8);
    sub_1C1ABD4(&StringLiteral_20814/*"img_shopbg05"*/, v9);
    sub_1C1ABD4(&StringLiteral_19509/*"event_item_title_"*/, v10);
    byte_4BC5D6A = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v12 = StringLiteral_19509/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19509/*"event_item_title_"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v12, v2, v3, v4, v5, v6, v7);
  v13 = StringLiteral_20814/*"img_shopbg05"*/;
  v14 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20814/*"img_shopbg05"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v14->EVENT_ITEM_VS_BASE_SP_NAME, v13, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_20815/*"img_shopbg06"*/;
  v22 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v22->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20815/*"img_shopbg06"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v22->EVENT_GPOINT_VS_BASE_SP_NAME, v21, v23, v24, v25, v26, v27, v28);
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
  if ( (byte_4BC5D68 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC5D68 = 1;
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
          UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
        }
        v23 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v12 >= LODWORD(v23->_1.namespaze) )
          break;
        v24 = &v23->_1.image + v12;
        v24[4] = 0LL;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), 0LL, v15, v16, v17, v18, v19, v20);
        if ( ++v12 == namespaze )
          goto LABEL_21;
        v9 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1C1AE30(this, method);
      }
      sub_1C1AE38(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1C1AB78(p_mEventItemComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 Instance; // x0
  __int64 v20; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v22; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x26
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UnityEngine_GameObject_array *v30; // x8
  signed int max_length; // w8
  __int64 v32; // x22
  il2cpp_array_size_t v33; // w8
  il2cpp_array_size_t v34; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v36; // x8
  UnityEngine_GameObject_o *v37; // x28
  int32_t v38; // w29
  EventItemComponent_o *v39; // x27
  il2cpp_array_size_t v40; // w8
  int32_t v41; // w3
  TitleInfoEventItemComponent_c *v42; // x0
  int32_t v43; // w29
  int v44; // s9
  int v45; // s10
  __int64 v46; // x8
  TitleInfoEventItemComponent_c *v47; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct EventItemComponent_array *v56; // x28
  Il2CppClass **v57; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v59; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v61; // x0
  System_String_o *v62; // x21
  int32_t v63; // w8
  UnityEngine_GameObject_o *v64; // x0
  int v65; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v67; // x8
  __int64 v68; // x0
  int32_t v69; // [xsp+Ch] [xbp-94h]
  signed int v72; // [xsp+28h] [xbp-78h]
  int32_t v73; // [xsp+2Ch] [xbp-74h] BYREF

  v73 = titleImageId;
  if ( (byte_4BC5D67 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, item_ids);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&EventItemComponent___TypeInfo, v13);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v14);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v16);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C1ABD4(&TitleInfoEventItemComponent_TypeInfo, v18);
    byte_4BC5D67 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v22 = (struct EventItemComponent_array *)sub_1C1AC7C(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v22;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.mEventItemComponents,
    (int64_t)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v30 = this->fields.mItemObjParents;
  if ( !v30 || !item_ids )
    goto LABEL_94;
  max_length = v30->max_length;
  v69 = titleImageId;
  v32 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v33 = max_length - 1;
  else
    v33 = item_ids->max_length - 1;
  v34 = 0;
  v72 = v33;
  if ( (v33 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v36 = this->fields.mItemObjParents;
      if ( !v36 )
        goto LABEL_94;
      if ( v34 >= v36->max_length )
        goto LABEL_95;
      v37 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_34762256((UnityEngine_GameObject_o *)Instance, v36->m_Items[v34], 0LL);
      if ( !v37 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v37,
                            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v34 >= disp_types->max_length )
        goto LABEL_95;
      v38 = disp_types->m_Items[v34 + 1];
      v39 = (EventItemComponent_o *)Instance;
      switch ( v38 )
      {
        case 0:
          if ( v34 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v34 + 1], 0LL);
          goto LABEL_42;
        case 1:
          Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)iconIds, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_38;
          if ( !iconIds )
            goto LABEL_94;
          v40 = iconIds->max_length;
          if ( (int)v34 >= (int)v40 )
          {
LABEL_38:
            v41 = 0;
          }
          else
          {
            if ( v34 >= v40 )
              goto LABEL_95;
            v41 = iconIds->m_Items[v34 + 1];
          }
          if ( v34 >= item_ids->max_length )
            goto LABEL_95;
          if ( !v39 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v39, eventId, item_ids->m_Items[v34 + 1], v41, 0LL);
LABEL_42:
          if ( !v32 )
            goto LABEL_94;
          if ( *(_DWORD *)(v32 + 148) == 4 )
          {
            if ( !v39 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v39, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v39, 12, 0LL);
            if ( v38 == 4 )
            {
              v42 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v42 = TitleInfoEventItemComponent_TypeInfo;
              }
              v43 = 70;
              v44 = 1111490560;
              v45 = 1110966272;
              v46 = 24LL;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v39,
                *(System_String_o **)((char *)&v42->static_fields->EVENT_ITEM_SCALE_DEFAULT + v46),
                0LL);
              EventItemComponent__setLocalPositionXItemIcon(v39, *(float *)&v45, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v39, *(float *)&v44, -1.0, 0LL);
              EventItemComponent__setWidthDataLabel(v39, v43, 0LL);
            }
            else if ( !v38 )
            {
              v42 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v42 = TitleInfoEventItemComponent_TypeInfo;
              }
              v43 = 42;
              v44 = 1108082688;
              v45 = 1117388800;
              v46 = 16LL;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v39, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v39, 0.6, 0LL);
            v49 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v49 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v49->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v47 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v47 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v47->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_34758428(v37, *p_EVENT_ITEM_SCALE_VS, 0LL);
          v56 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v39 )
          {
            Instance = sub_1C1AD10(v39, v56->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v68 = sub_1C1AE54(0LL);
              sub_1C1ACFC(v68, 0LL);
            }
          }
          if ( v34 >= v56->max_length )
            goto LABEL_95;
          v57 = &v56->obj.klass + (int)v34;
          v57[4] = (Il2CppClass *)v39;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v39, v50, v51, v52, v53, v54, v55);
          if ( (int)++v34 > v72 )
            goto LABEL_65;
          break;
        case 2:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          goto LABEL_42;
        case 3:
          if ( v34 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v34 + 1], 0LL);
          goto LABEL_42;
        case 4:
          if ( v34 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v34 + 1], 0LL);
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
    sub_1C1AE30(Instance, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v34 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v69 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v32 )
      goto LABEL_94;
  }
  else
  {
    v59 = TitleInfoEventItemComponent_TypeInfo;
    if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v59 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v59->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v61 = System_Int32__ToString((int32_t)&v73, 0LL);
    v62 = System_String__Concat_63040368(TITLE_SP_ITEM_NAME_PREFIX, v61, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v62, 0LL);
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v32 )
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v32 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_94;
    if ( !disp_types->max_length )
LABEL_95:
      sub_1C1AE38(Instance, v20);
    v63 = disp_types->m_Items[1];
    if ( v63 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34756308(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v65 = -1025114112;
    }
    else
    {
      if ( v63 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_94;
        goto LABEL_91;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34756308(v64, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v65 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v65;
LABEL_91:
    v67 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v67 + 440))(Instance, *(_QWORD *)(v67 + 448));
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
  if ( (byte_4BC5D69 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC5D69 = 1;
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
          sub_1C1AE38(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1C1AE30(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}