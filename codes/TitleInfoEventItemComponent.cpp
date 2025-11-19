void TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct TitleInfoEventItemComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB4212 & 1) == 0 )
  {
    sub_1C6BA08(&TitleInfoEventItemComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_20640/*"img_shopbg06"*/);
    sub_1C6BA08(&StringLiteral_20639/*"img_shopbg05"*/);
    sub_1C6BA08(&StringLiteral_19262/*"event_item_title_"*/);
    byte_4CB4212 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v4 = StringLiteral_19262/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19262/*"event_item_title_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_20639/*"img_shopbg05"*/;
  v6 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v6->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20639/*"img_shopbg05"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->EVENT_ITEM_VS_BASE_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_20640/*"img_shopbg06"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20640/*"img_shopbg06"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->EVENT_GPOINT_VS_BASE_SP_NAME, v9, v11, v12);
}


void TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TitleInfoEventItemComponent_o *v4; // x19
  CGThumbnailListItem_c *v5; // x8
  CGThumbnailListItem_o *p_mEventItemComponents; // x19
  struct EventItemComponent_array *mEventItemComponents; // t1
  unsigned __int64 v8; // x21
  __int64 namespaze; // x22
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *klass; // x8
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_c *v16; // x8
  void **v17; // x0

  v4 = this;
  if ( (byte_4CB4210 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4210 = 1;
  }
  mEventItemComponents = v4->fields.mEventItemComponents;
  p_mEventItemComponents = (CGThumbnailListItem_o *)&v4->fields.mEventItemComponents;
  v5 = (CGThumbnailListItem_c *)mEventItemComponents;
  if ( mEventItemComponents )
  {
    if ( (int)v5->_1.namespaze >= 1 )
    {
      v8 = 0;
      namespaze = (unsigned int)v5->_1.namespaze;
      while ( v8 < LODWORD(v5->_1.namespaze) )
      {
        v10 = (UnityEngine_Object_o *)*((_QWORD *)&v5->_1.byval_arg.data + v8);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
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
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676(gameObject, 0);
        }
        v16 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v16->_1.namespaze) )
          break;
        v17 = &v16->_1.image + v8;
        v17[4] = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), 0, v12, v13);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1C6BC60(this, v11);
      }
      sub_1C6BC68(this);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0;
    sub_1C6B9AC(p_mEventItemComponents, 0, v2, v3);
  }
}


bool TitleInfoEventItemComponent__IsDispPossible(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  struct EventItemComponent_array *mEventItemComponents; // x8

  mEventItemComponents = this->fields.mEventItemComponents;
  return mEventItemComponents && LODWORD(mEventItemComponents->max_length) != 0;
}


bool TitleInfoEventItemComponent__IsEventRaidBoss(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  return 0;
}


void TitleInfoEventItemComponent__Setup(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_array *v18; // x8
  int max_length; // w8
  __int64 v20; // x22
  int v21; // w8
  unsigned int v22; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_GameObject_o *v25; // x28
  int32_t v26; // w29
  EventItemComponent_o *v27; // x27
  unsigned int v28; // w8
  int32_t v29; // w3
  TitleInfoEventItemComponent_c *v30; // x0
  int32_t v31; // w29
  float v32; // s9
  float v33; // s10
  __int64 v34; // x8
  TitleInfoEventItemComponent_c *v35; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct EventItemComponent_array *v40; // x28
  Il2CppClass **v41; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v43; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  int32_t v47; // w8
  UnityEngine_GameObject_o *v48; // x0
  int v49; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x8
  __int64 v52; // x0
  int32_t v53; // [xsp+Ch] [xbp-94h]
  int v56; // [xsp+28h] [xbp-78h]
  int32_t v57; // [xsp+2Ch] [xbp-74h] BYREF

  v57 = titleImageId;
  if ( (byte_4CB420F & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&EventItemComponent___TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&TitleInfoEventItemComponent_TypeInfo);
    byte_4CB420F = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v14 = (struct EventItemComponent_array *)sub_1C6BAB0(
                                             EventItemComponent___TypeInfo,
                                             LODWORD(mItemObjParents->max_length));
  this->fields.mEventItemComponents = v14;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mEventItemComponents, (int32_t)v14, v16, v17);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v18 = this->fields.mItemObjParents;
  if ( !v18 || !item_ids )
    goto LABEL_94;
  max_length = v18->max_length;
  v53 = titleImageId;
  v20 = Instance;
  if ( LODWORD(item_ids->max_length) - 1 >= max_length )
    v21 = max_length - 1;
  else
    v21 = LODWORD(item_ids->max_length) - 1;
  v22 = 0;
  v56 = v21;
  if ( (v21 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v24 = this->fields.mItemObjParents;
      if ( !v24 )
        goto LABEL_94;
      if ( v22 >= LODWORD(v24->max_length) )
        goto LABEL_95;
      v25 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_36361932((UnityEngine_GameObject_o *)Instance, v24->m_Items[v22], 0);
      if ( !v25 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v25,
                            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v22 >= LODWORD(disp_types->max_length) )
        goto LABEL_95;
      v26 = disp_types->m_Items[v22];
      v27 = (EventItemComponent_o *)Instance;
      switch ( v26 )
      {
        case 0:
          if ( v22 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v22], 0);
          goto LABEL_42;
        case 1:
          Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)iconIds, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_38;
          if ( !iconIds )
            goto LABEL_94;
          v28 = iconIds->max_length;
          if ( (int)v22 >= (int)v28 )
          {
LABEL_38:
            v29 = 0;
          }
          else
          {
            if ( v22 >= v28 )
              goto LABEL_95;
            v29 = iconIds->m_Items[v22];
          }
          if ( v22 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !v27 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v27, eventId, item_ids->m_Items[v22], v29, 0);
LABEL_42:
          if ( !v20 )
            goto LABEL_94;
          if ( *(_DWORD *)(v20 + 148) == 4 )
          {
            if ( !v27 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v27, 5, 0);
            EventItemComponent__setHeightDataLabel(v27, 12, 0);
            if ( v26 == 4 )
            {
              v30 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v30 = TitleInfoEventItemComponent_TypeInfo;
              }
              v31 = 70;
              v32 = 48.0;
              v33 = 46.0;
              v34 = 24;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v27,
                *(System_String_o **)((char *)&v30->static_fields->EVENT_ITEM_SCALE_DEFAULT + v34),
                0);
              EventItemComponent__setLocalPositionXItemIcon(v27, v33, 0);
              EventItemComponent__setLocalPositionDataLabel(v27, v32, -1.0, 0);
              EventItemComponent__setWidthDataLabel(v27, v31, 0);
            }
            else if ( !v26 )
            {
              v30 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v30 = TitleInfoEventItemComponent_TypeInfo;
              }
              v31 = 42;
              v32 = 35.0;
              v33 = 77.0;
              v34 = 16;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v27, 11, 0);
            EventItemComponent__setScaleItemIcon(v27, 0.6, 0);
            v37 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v37 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v37->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v35 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v35 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v35->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_36358148(v25, *p_EVENT_ITEM_SCALE_VS, 0);
          v40 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v27 )
          {
            Instance = sub_1C6BB44(v27, v40->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v52 = sub_1C6BC84(0);
              sub_1C6BB30(v52, 0);
            }
          }
          if ( v22 >= LODWORD(v40->max_length) )
            goto LABEL_95;
          v41 = &v40->obj.klass + (int)v22;
          v41[4] = (Il2CppClass *)v27;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v27, v38, v39);
          if ( (int)++v22 > v56 )
            goto LABEL_65;
          break;
        case 2:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0);
          goto LABEL_42;
        case 3:
          if ( v22 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v22], 0);
          goto LABEL_42;
        case 4:
          if ( v22 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v22], 0);
          goto LABEL_42;
        case 5:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0);
          goto LABEL_42;
        default:
          goto LABEL_42;
      }
    }
  }
LABEL_65:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_94:
    sub_1C6BC60(Instance, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v22 < 3, 0);
  mStrSp = this->fields.mStrSp;
  if ( v53 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0);
    if ( !v20 )
      goto LABEL_94;
  }
  else
  {
    v43 = TitleInfoEventItemComponent_TypeInfo;
    if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v43 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v43->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v45 = System_Int32__ToString((int32_t)&v57, 0);
    v46 = System_String__Concat_63966792(TITLE_SP_ITEM_NAME_PREFIX, v45, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v46, 0);
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v20 )
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v20 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_94;
    if ( !LODWORD(disp_types->max_length) )
LABEL_95:
      sub_1C6BC68(Instance);
    v47 = disp_types->m_Items[0];
    if ( v47 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_36356140(gameObject, 852.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v49 = -1025114112;
    }
    else
    {
      if ( v47 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_94;
        goto LABEL_91;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_36356140(v48, 865.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v49 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v49;
LABEL_91:
    v51 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v51 + 440))(Instance, *(_QWORD *)(v51 + 448));
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
  }
}


void TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventItemComponent_o *v2; // x19
  struct EventItemComponent_array *mEventItemComponents; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1

  v2 = this;
  if ( (byte_4CB4211 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4211 = 1;
  }
  mEventItemComponents = v2->fields.mEventItemComponents;
  if ( mEventItemComponents )
  {
    max_length = mEventItemComponents->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_1C6BC68(this);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1C6BC60(this, v7);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0);
        }
        LODWORD(max_length) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}