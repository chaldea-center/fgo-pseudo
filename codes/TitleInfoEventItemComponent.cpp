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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int64_t v15; // x1
  int64_t v16; // x1
  struct TitleInfoEventItemComponent_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct TitleInfoEventItemComponent_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B144FC & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventItemComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20683/*"img_shopbg06"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20682/*"img_shopbg05"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19393/*"event_item_title_"*/, v12, v13);
    byte_4B144FC = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v15 = StringLiteral_19393/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19393/*"event_item_title_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_20682/*"img_shopbg05"*/;
  v17 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v17->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20682/*"img_shopbg05"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->EVENT_ITEM_VS_BASE_SP_NAME, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_20683/*"img_shopbg06"*/;
  v25 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v25->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20683/*"img_shopbg06"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->EVENT_GPOINT_VS_BASE_SP_NAME, v24, v26, v27, v28, v29, v30, v31);
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
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x20
  PartyOrganizationUtility_c *v24; // x8
  void **v25; // x0

  v8 = this;
  if ( (byte_4B144FA & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B144FA = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        }
        v24 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v12 >= LODWORD(v24->_1.namespaze) )
          break;
        v25 = &v24->_1.image + v12;
        v25[4] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), 0LL, v15, v16, v17, v18, v19, v20);
        if ( ++v12 == namespaze )
          goto LABEL_21;
        v9 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1BCAA3C(this, method);
      }
      sub_1BCAA44(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1BCA784(p_mEventItemComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
        TitleInfoEventItemComponent_DispType_array *disp_types,
        int32_t eventId,
        int32_t titleImageId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 Instance; // x0
  __int64 v26; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v28; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct UnityEngine_GameObject_array *v36; // x8
  signed int max_length; // w8
  TitleInfoEventItemComponent_c **v38; // x28
  __int64 v39; // x22
  signed int v40; // w23
  il2cpp_array_size_t v41; // w21
  Il2CppObject *mEventItemPrefab; // x26
  struct UnityEngine_GameObject_array *v43; // x8
  UnityEngine_GameObject_o *v44; // x27
  TitleInfoEventItemComponent_c **v45; // x24
  int32_t v46; // w28
  EventItemComponent_o *v47; // x26
  __int64 v48; // x1
  TitleInfoEventItemComponent_c *v49; // x0
  int32_t v50; // w28
  int v51; // s9
  int v52; // s10
  __int64 v53; // x8
  TitleInfoEventItemComponent_c *v54; // x0
  float *p_EVENT_ITEM_SCALE_DEFAULT; // x8
  __int64 v56; // x1
  TitleInfoEventItemComponent_c *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct EventItemComponent_array *v64; // x27
  Il2CppClass **v65; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v67; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x21
  int32_t v72; // w8
  UnityEngine_GameObject_o *v73; // x0
  int v74; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v76; // x8
  __int64 v77; // x0
  int32_t v78; // [xsp+4h] [xbp-8Ch]
  int32_t v81; // [xsp+1Ch] [xbp-74h] BYREF

  v81 = titleImageId;
  if ( (byte_4B144F9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item_ids, disp_types);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&EventItemComponent___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&TitleInfoEventItemComponent_TypeInfo, v23, v24);
    byte_4B144F9 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_88;
  v28 = (struct EventItemComponent_array *)sub_1BCA888(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v28;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mEventItemComponents,
    (int64_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v36 = this->fields.mItemObjParents;
  if ( !v36 )
    goto LABEL_88;
  v78 = titleImageId;
  if ( !item_ids )
    goto LABEL_88;
  max_length = v36->max_length;
  v38 = &TitleInfoEventItemComponent_TypeInfo;
  v39 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v40 = max_length - 1;
  else
    v40 = item_ids->max_length - 1;
  v41 = 0;
  if ( (v40 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v43 = this->fields.mItemObjParents;
      if ( !v43 )
        goto LABEL_88;
      if ( v41 >= v43->max_length )
        goto LABEL_89;
      v44 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)Instance, v43->m_Items[v41], 0LL);
      if ( !v44 )
        goto LABEL_88;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v44,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_88;
      if ( v41 >= disp_types->max_length )
        goto LABEL_89;
      v45 = v38;
      v46 = disp_types->m_Items[v41 + 1];
      v47 = (EventItemComponent_o *)Instance;
      switch ( v46 )
      {
        case 0:
          if ( v41 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v41 + 1], 0LL);
          break;
        case 1:
          if ( v41 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v41 + 1], 0LL);
          break;
        case 2:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        case 3:
          if ( v41 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v41 + 1], 0LL);
          break;
        case 4:
          if ( v41 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v41 + 1], 0LL);
          break;
        case 5:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        default:
          break;
      }
      if ( !v39 )
        goto LABEL_88;
      if ( *(_DWORD *)(v39 + 148) == 4 )
        break;
      v54 = *v45;
      v38 = v45;
      if ( !(*v45)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54, v26);
        v54 = *v45;
      }
      p_EVENT_ITEM_SCALE_DEFAULT = &v54->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_54:
      GameObjectExtensions__SetLocalScale_34333164(v44, *p_EVENT_ITEM_SCALE_DEFAULT, 0LL);
      v64 = *p_mEventItemComponents;
      if ( !*p_mEventItemComponents )
        goto LABEL_88;
      if ( v47 )
      {
        Instance = sub_1BCA91C(v47, v64->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v77 = sub_1BCAA60(0LL);
          sub_1BCA908(v77, 0LL);
        }
      }
      if ( v41 >= v64->max_length )
        goto LABEL_89;
      v65 = &v64->obj.klass + (int)v41;
      v65[4] = (Il2CppClass *)v47;
      sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v47, v58, v59, v60, v61, v62, v63);
      if ( (int)++v41 > v40 )
        goto LABEL_59;
    }
    if ( !v47 )
      goto LABEL_88;
    EventItemComponent__setPivotDataLabel(v47, 5, 0LL);
    EventItemComponent__setHeightDataLabel(v47, 12, 0LL);
    if ( v46 == 4 )
    {
      v49 = *v45;
      if ( !(*v45)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49, v48);
        v49 = *v45;
      }
      v50 = 70;
      v51 = 1111490560;
      v52 = 1110966272;
      v53 = 24LL;
    }
    else
    {
      if ( v46 )
      {
LABEL_51:
        EventItemComponent__setFontSizeDataLabel(v47, 11, 0LL);
        EventItemComponent__setScaleItemIcon(v47, 0.6, 0LL);
        v57 = *v45;
        v38 = v45;
        if ( !(*v45)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57, v56);
          v57 = *v45;
        }
        p_EVENT_ITEM_SCALE_DEFAULT = &v57->static_fields->EVENT_ITEM_SCALE_VS;
        goto LABEL_54;
      }
      v49 = *v45;
      if ( !(*v45)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49, v48);
        v49 = *v45;
      }
      v50 = 42;
      v51 = 1108082688;
      v52 = 1117388800;
      v53 = 16LL;
    }
    EventItemComponent__setBaseSpriteDownloadAtlas(
      v47,
      *(System_String_o **)((char *)&v49->static_fields->EVENT_ITEM_SCALE_DEFAULT + v53),
      0LL);
    EventItemComponent__setLocalPositionXItemIcon(v47, *(float *)&v52, 0LL);
    EventItemComponent__setLocalPositionDataLabel(v47, *(float *)&v51, -1.0, 0LL);
    EventItemComponent__setWidthDataLabel(v47, v50, 0LL);
    goto LABEL_51;
  }
LABEL_59:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_88:
    sub_1BCAA3C(Instance, v26);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v41 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v78 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v39 )
      goto LABEL_88;
  }
  else
  {
    v67 = *v38;
    if ( !(*v38)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v26);
      v67 = *v38;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v67->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v69 = System_Int32__ToString((int32_t)&v81, 0LL);
    v71 = System_String__Concat_62401220(TITLE_SP_ITEM_NAME_PREFIX, v69, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v70);
    Instance = AtlasManager__SetEventUI(mStrSp, v71, 0LL);
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v39 )
      goto LABEL_88;
  }
  if ( *(_DWORD *)(v39 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_88;
    if ( !disp_types->max_length )
LABEL_89:
      sub_1BCAA44(Instance, v26);
    v72 = disp_types->m_Items[1];
    if ( v72 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34331044(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v74 = -1025114112;
    }
    else
    {
      if ( v72 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_88;
        goto LABEL_85;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34331044(v73, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v74 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v74;
LABEL_85:
    v76 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v76 + 440))(Instance, *(_QWORD *)(v76 + 448));
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
  }
}


void __fastcall TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventItemComponent_o *v3; // x19
  struct EventItemComponent_array *mEventItemComponents; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4B144FB & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B144FB = 1;
  }
  mEventItemComponents = v3->fields.mEventItemComponents;
  if ( mEventItemComponents )
  {
    v5 = *(_QWORD *)&mEventItemComponents->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v5 )
          sub_1BCAA44(this, method);
        v7 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v7 )
            sub_1BCAA3C(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v7, 0LL);
        }
        LODWORD(v5) = mEventItemComponents->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
}