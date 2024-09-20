void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct TitleInfoEventItemComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A59077 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventItemComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20464/*"img_shopbg06"*/);
    sub_1B885B0(&StringLiteral_20463/*"img_shopbg05"*/);
    sub_1B885B0(&StringLiteral_19192/*"event_item_title_"*/);
    byte_4A59077 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v4 = StringLiteral_19192/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19192/*"event_item_title_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_20463/*"img_shopbg05"*/;
  v6 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v6->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20463/*"img_shopbg05"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->EVENT_ITEM_VS_BASE_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_20464/*"img_shopbg06"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20464/*"img_shopbg06"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->EVENT_GPOINT_VS_BASE_SP_NAME, v9, v11, v12);
}


void __fastcall TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TitleInfoEventItemComponent_o *v4; // x19
  ServantStatusBattleListViewItem_c *v5; // x8
  ServantStatusBattleListViewItem_o *p_mEventItemComponents; // x19
  struct EventItemComponent_array *mEventItemComponents; // t1
  unsigned __int64 v8; // x21
  __int64 namespaze; // x22
  UnityEngine_Object_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_c *klass; // x8
  UnityEngine_Object_o *gameObject; // x20
  ServantStatusBattleListViewItem_c *v15; // x8
  void **v16; // x0

  v4 = this;
  if ( (byte_4A59075 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59075 = 1;
  }
  mEventItemComponents = v4->fields.mEventItemComponents;
  p_mEventItemComponents = (ServantStatusBattleListViewItem_o *)&v4->fields.mEventItemComponents;
  v5 = (ServantStatusBattleListViewItem_c *)mEventItemComponents;
  if ( mEventItemComponents )
  {
    if ( (int)v5->_1.namespaze >= 1 )
    {
      v8 = 0LL;
      namespaze = (unsigned int)v5->_1.namespaze;
      while ( v8 < LODWORD(v5->_1.namespaze) )
      {
        v10 = (UnityEngine_Object_o *)*((_QWORD *)&v5->_1.byval_arg.data + v8);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = p_mEventItemComponents->klass;
          if ( !p_mEventItemComponents->klass )
            goto LABEL_20;
          if ( v8 >= LODWORD(klass->_1.namespaze) )
            break;
          this = (TitleInfoEventItemComponent_o *)*((_QWORD *)&klass->_1.byval_arg.data + v8);
          if ( !this )
            goto LABEL_20;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
        }
        v15 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v15->_1.namespaze) )
          break;
        v16 = &v15->_1.image + v8;
        v16[4] = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), 0, v11, v12);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1B8880C(this, method);
      }
      sub_1B88814(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1B88554(p_mEventItemComponents, 0, v2, v3);
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
  __int64 Instance; // x0
  __int64 v10; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v12; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x8
  signed int max_length; // w8
  TitleInfoEventItemComponent_c **v18; // x28
  __int64 v19; // x22
  signed int v20; // w23
  il2cpp_array_size_t v21; // w21
  Il2CppObject *mEventItemPrefab; // x26
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x27
  TitleInfoEventItemComponent_c **v25; // x24
  int32_t v26; // w28
  EventItemComponent_o *v27; // x26
  TitleInfoEventItemComponent_c *v28; // x0
  int32_t v29; // w28
  int v30; // s9
  int v31; // s10
  __int64 v32; // x8
  TitleInfoEventItemComponent_c *v33; // x0
  float *p_EVENT_ITEM_SCALE_DEFAULT; // x8
  TitleInfoEventItemComponent_c *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct EventItemComponent_array *v38; // x27
  Il2CppClass **v39; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v41; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v43; // x0
  System_String_o *v44; // x21
  int32_t v45; // w8
  UnityEngine_GameObject_o *v46; // x0
  int v47; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v49; // x8
  __int64 v50; // x0
  int32_t v51; // [xsp+4h] [xbp-8Ch]
  int32_t v54; // [xsp+1Ch] [xbp-74h] BYREF

  v54 = titleImageId;
  if ( (byte_4A59074 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&EventItemComponent___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventItemComponent_TypeInfo);
    byte_4A59074 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_88;
  v12 = (struct EventItemComponent_array *)sub_1B88658(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v12;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEventItemComponents, (int32_t)v12, v14, v15);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v16 = this->fields.mItemObjParents;
  if ( !v16 )
    goto LABEL_88;
  v51 = titleImageId;
  if ( !item_ids )
    goto LABEL_88;
  max_length = v16->max_length;
  v18 = &TitleInfoEventItemComponent_TypeInfo;
  v19 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v20 = max_length - 1;
  else
    v20 = item_ids->max_length - 1;
  v21 = 0;
  if ( (v20 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v23 = this->fields.mItemObjParents;
      if ( !v23 )
        goto LABEL_88;
      if ( v21 >= v23->max_length )
        goto LABEL_89;
      v24 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)Instance, v23->m_Items[v21], 0LL);
      if ( !v24 )
        goto LABEL_88;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v24,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_88;
      if ( v21 >= disp_types->max_length )
        goto LABEL_89;
      v25 = v18;
      v26 = disp_types->m_Items[v21 + 1];
      v27 = (EventItemComponent_o *)Instance;
      switch ( v26 )
      {
        case 0:
          if ( v21 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v21 + 1], 0LL);
          break;
        case 1:
          if ( v21 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v21 + 1], 0LL);
          break;
        case 2:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        case 3:
          if ( v21 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v21 + 1], 0LL);
          break;
        case 4:
          if ( v21 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v21 + 1], 0LL);
          break;
        case 5:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        default:
          break;
      }
      if ( !v19 )
        goto LABEL_88;
      if ( *(_DWORD *)(v19 + 148) == 4 )
        break;
      v33 = *v25;
      v18 = v25;
      if ( !(*v25)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = *v25;
      }
      p_EVENT_ITEM_SCALE_DEFAULT = &v33->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_54:
      GameObjectExtensions__SetLocalScale_33726240(v24, *p_EVENT_ITEM_SCALE_DEFAULT, 0LL);
      v38 = *p_mEventItemComponents;
      if ( !*p_mEventItemComponents )
        goto LABEL_88;
      if ( v27 )
      {
        Instance = sub_1B886EC(v27, v38->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v50 = sub_1B88830(0LL);
          sub_1B886D8(v50, 0LL);
        }
      }
      if ( v21 >= v38->max_length )
        goto LABEL_89;
      v39 = &v38->obj.klass + (int)v21;
      v39[4] = (Il2CppClass *)v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v27, v36, v37);
      if ( (int)++v21 > v20 )
        goto LABEL_59;
    }
    if ( !v27 )
      goto LABEL_88;
    EventItemComponent__setPivotDataLabel(v27, 5, 0LL);
    EventItemComponent__setHeightDataLabel(v27, 12, 0LL);
    if ( v26 == 4 )
    {
      v28 = *v25;
      if ( !(*v25)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = *v25;
      }
      v29 = 70;
      v30 = 1111490560;
      v31 = 1110966272;
      v32 = 24LL;
    }
    else
    {
      if ( v26 )
      {
LABEL_51:
        EventItemComponent__setFontSizeDataLabel(v27, 11, 0LL);
        EventItemComponent__setScaleItemIcon(v27, 0.6, 0LL);
        v35 = *v25;
        v18 = v25;
        if ( !(*v25)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = *v25;
        }
        p_EVENT_ITEM_SCALE_DEFAULT = &v35->static_fields->EVENT_ITEM_SCALE_VS;
        goto LABEL_54;
      }
      v28 = *v25;
      if ( !(*v25)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = *v25;
      }
      v29 = 42;
      v30 = 1108082688;
      v31 = 1117388800;
      v32 = 16LL;
    }
    EventItemComponent__setBaseSpriteDownloadAtlas(
      v27,
      *(System_String_o **)((char *)&v28->static_fields->EVENT_ITEM_SCALE_DEFAULT + v32),
      0LL);
    EventItemComponent__setLocalPositionXItemIcon(v27, *(float *)&v31, 0LL);
    EventItemComponent__setLocalPositionDataLabel(v27, *(float *)&v30, -1.0, 0LL);
    EventItemComponent__setWidthDataLabel(v27, v29, 0LL);
    goto LABEL_51;
  }
LABEL_59:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_88:
    sub_1B8880C(Instance, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v21 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v51 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v19 )
      goto LABEL_88;
  }
  else
  {
    v41 = *v18;
    if ( !(*v18)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = *v18;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v41->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v43 = System_Int32__ToString((int32_t)&v54, 0LL);
    v44 = System_String__Concat_61707032(TITLE_SP_ITEM_NAME_PREFIX, v43, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v44, 0LL);
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v19 )
      goto LABEL_88;
  }
  if ( *(_DWORD *)(v19 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_88;
    if ( !disp_types->max_length )
LABEL_89:
      sub_1B88814(Instance, v10);
    v45 = disp_types->m_Items[1];
    if ( v45 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_33724120(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v47 = -1025114112;
    }
    else
    {
      if ( v45 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_88;
        goto LABEL_85;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_33724120(v46, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v47 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v47;
LABEL_85:
    v49 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v49 + 440))(Instance, *(_QWORD *)(v49 + 448));
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
  if ( (byte_4A59076 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59076 = 1;
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
          sub_1B88814(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1B8880C(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}