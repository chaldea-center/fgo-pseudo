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

  if ( (byte_4B35492 & 1) == 0 )
  {
    sub_1BD3458(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_20713/*"img_shopbg06"*/, v8);
    sub_1BD3458(&StringLiteral_20712/*"img_shopbg05"*/, v9);
    sub_1BD3458(&StringLiteral_19422/*"event_item_title_"*/, v10);
    byte_4B35492 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v12 = StringLiteral_19422/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19422/*"event_item_title_"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v12, v2, v3, v4, v5, v6, v7);
  v13 = StringLiteral_20712/*"img_shopbg05"*/;
  v14 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20712/*"img_shopbg05"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v14->EVENT_ITEM_VS_BASE_SP_NAME, v13, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_20713/*"img_shopbg06"*/;
  v22 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v22->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20713/*"img_shopbg06"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v22->EVENT_GPOINT_VS_BASE_SP_NAME, v21, v23, v24, v25, v26, v27, v28);
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
  if ( (byte_4B35490 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B35490 = 1;
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
          UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
        }
        v23 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v12 >= LODWORD(v23->_1.namespaze) )
          break;
        v24 = &v23->_1.image + v12;
        v24[4] = 0LL;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 4), 0LL, v15, v16, v17, v18, v19, v20);
        if ( ++v12 == namespaze )
          goto LABEL_21;
        v9 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1BD36B4(this, method);
      }
      sub_1BD36BC(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1BD33FC(p_mEventItemComponents, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 Instance; // x0
  __int64 v18; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v20; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x25
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x8
  signed int max_length; // w8
  TitleInfoEventItemComponent_c **v30; // x28
  __int64 v31; // x22
  signed int v32; // w23
  il2cpp_array_size_t v33; // w21
  Il2CppObject *mEventItemPrefab; // x26
  struct UnityEngine_GameObject_array *v35; // x8
  UnityEngine_GameObject_o *v36; // x27
  TitleInfoEventItemComponent_c **v37; // x24
  int32_t v38; // w28
  EventItemComponent_o *v39; // x26
  TitleInfoEventItemComponent_c *v40; // x0
  int32_t v41; // w28
  int v42; // s9
  int v43; // s10
  __int64 v44; // x8
  TitleInfoEventItemComponent_c *v45; // x0
  float *p_EVENT_ITEM_SCALE_DEFAULT; // x8
  TitleInfoEventItemComponent_c *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct EventItemComponent_array *v54; // x27
  Il2CppClass **v55; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v57; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v59; // x0
  System_String_o *v60; // x21
  int32_t v61; // w8
  UnityEngine_GameObject_o *v62; // x0
  int v63; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v65; // x8
  __int64 v66; // x0
  int32_t v67; // [xsp+4h] [xbp-8Ch]
  int32_t v70; // [xsp+1Ch] [xbp-74h] BYREF

  v70 = titleImageId;
  if ( (byte_4B3548F & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, item_ids);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, v9);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_1BD3458(&EventItemComponent___TypeInfo, v11);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v12);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&TitleInfoEventItemComponent_TypeInfo, v16);
    byte_4B3548F = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_88;
  v20 = (struct EventItemComponent_array *)sub_1BD3500(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v20;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.mEventItemComponents,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v28 = this->fields.mItemObjParents;
  if ( !v28 )
    goto LABEL_88;
  v67 = titleImageId;
  if ( !item_ids )
    goto LABEL_88;
  max_length = v28->max_length;
  v30 = &TitleInfoEventItemComponent_TypeInfo;
  v31 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v32 = max_length - 1;
  else
    v32 = item_ids->max_length - 1;
  v33 = 0;
  if ( (v32 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v35 = this->fields.mItemObjParents;
      if ( !v35 )
        goto LABEL_88;
      if ( v33 >= v35->max_length )
        goto LABEL_89;
      v36 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_34386852((UnityEngine_GameObject_o *)Instance, v35->m_Items[v33], 0LL);
      if ( !v36 )
        goto LABEL_88;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v36,
                            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_88;
      if ( v33 >= disp_types->max_length )
        goto LABEL_89;
      v37 = v30;
      v38 = disp_types->m_Items[v33 + 1];
      v39 = (EventItemComponent_o *)Instance;
      switch ( v38 )
      {
        case 0:
          if ( v33 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v33 + 1], 0LL);
          break;
        case 1:
          if ( v33 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v33 + 1], 0LL);
          break;
        case 2:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        case 3:
          if ( v33 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v33 + 1], 0LL);
          break;
        case 4:
          if ( v33 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v33 + 1], 0LL);
          break;
        case 5:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        default:
          break;
      }
      if ( !v31 )
        goto LABEL_88;
      if ( *(_DWORD *)(v31 + 148) == 4 )
        break;
      v45 = *v37;
      v30 = v37;
      if ( !(*v37)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = *v37;
      }
      p_EVENT_ITEM_SCALE_DEFAULT = &v45->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_54:
      GameObjectExtensions__SetLocalScale_34383024(v36, *p_EVENT_ITEM_SCALE_DEFAULT, 0LL);
      v54 = *p_mEventItemComponents;
      if ( !*p_mEventItemComponents )
        goto LABEL_88;
      if ( v39 )
      {
        Instance = sub_1BD3594(v39, v54->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v66 = sub_1BD36D8(0LL);
          sub_1BD3580(v66, 0LL);
        }
      }
      if ( v33 >= v54->max_length )
        goto LABEL_89;
      v55 = &v54->obj.klass + (int)v33;
      v55[4] = (Il2CppClass *)v39;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v39, v48, v49, v50, v51, v52, v53);
      if ( (int)++v33 > v32 )
        goto LABEL_59;
    }
    if ( !v39 )
      goto LABEL_88;
    EventItemComponent__setPivotDataLabel(v39, 5, 0LL);
    EventItemComponent__setHeightDataLabel(v39, 12, 0LL);
    if ( v38 == 4 )
    {
      v40 = *v37;
      if ( !(*v37)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = *v37;
      }
      v41 = 70;
      v42 = 1111490560;
      v43 = 1110966272;
      v44 = 24LL;
    }
    else
    {
      if ( v38 )
      {
LABEL_51:
        EventItemComponent__setFontSizeDataLabel(v39, 11, 0LL);
        EventItemComponent__setScaleItemIcon(v39, 0.6, 0LL);
        v47 = *v37;
        v30 = v37;
        if ( !(*v37)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v47 = *v37;
        }
        p_EVENT_ITEM_SCALE_DEFAULT = &v47->static_fields->EVENT_ITEM_SCALE_VS;
        goto LABEL_54;
      }
      v40 = *v37;
      if ( !(*v37)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = *v37;
      }
      v41 = 42;
      v42 = 1108082688;
      v43 = 1117388800;
      v44 = 16LL;
    }
    EventItemComponent__setBaseSpriteDownloadAtlas(
      v39,
      *(System_String_o **)((char *)&v40->static_fields->EVENT_ITEM_SCALE_DEFAULT + v44),
      0LL);
    EventItemComponent__setLocalPositionXItemIcon(v39, *(float *)&v43, 0LL);
    EventItemComponent__setLocalPositionDataLabel(v39, *(float *)&v42, -1.0, 0LL);
    EventItemComponent__setWidthDataLabel(v39, v41, 0LL);
    goto LABEL_51;
  }
LABEL_59:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_88:
    sub_1BD36B4(Instance, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v33 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v67 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v31 )
      goto LABEL_88;
  }
  else
  {
    v57 = *v30;
    if ( !(*v30)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = *v30;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v57->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v59 = System_Int32__ToString((int32_t)&v70, 0LL);
    v60 = System_String__Concat_62525248(TITLE_SP_ITEM_NAME_PREFIX, v59, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v60, 0LL);
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v31 )
      goto LABEL_88;
  }
  if ( *(_DWORD *)(v31 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_88;
    if ( !disp_types->max_length )
LABEL_89:
      sub_1BD36BC(Instance, v18);
    v61 = disp_types->m_Items[1];
    if ( v61 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34380904(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v63 = -1025114112;
    }
    else
    {
      if ( v61 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_88;
        goto LABEL_85;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34380904(v62, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v63 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v63;
LABEL_85:
    v65 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v65 + 440))(Instance, *(_QWORD *)(v65 + 448));
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
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
  if ( (byte_4B35491 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B35491 = 1;
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
          sub_1BD36BC(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1BD36B4(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}