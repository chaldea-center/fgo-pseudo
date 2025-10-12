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

  if ( (byte_4C359B0 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventItemComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_20572/*"img_shopbg06"*/);
    sub_1C32C20(&StringLiteral_20571/*"img_shopbg05"*/);
    sub_1C32C20(&StringLiteral_19210/*"event_item_title_"*/);
    byte_4C359B0 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v4 = StringLiteral_19210/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19210/*"event_item_title_"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_20571/*"img_shopbg05"*/;
  v6 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v6->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20571/*"img_shopbg05"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->EVENT_ITEM_VS_BASE_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_20572/*"img_shopbg06"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20572/*"img_shopbg06"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v10->EVENT_GPOINT_VS_BASE_SP_NAME, v9, v11, v12);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_c *klass; // x8
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_c *v15; // x8
  void **v16; // x0

  v4 = this;
  if ( (byte_4C359AE & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C359AE = 1;
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
          UnityEngine_Object__Destroy_71223640(gameObject, 0);
        }
        v15 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v15->_1.namespaze) )
          break;
        v16 = &v15->_1.image + v8;
        v16[4] = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), 0, v11, v12);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1C32E7C(this);
      }
      sub_1C32E84(this);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0;
    sub_1C32BC4(p_mEventItemComponents, 0, v2, v3);
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
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v13; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_array *v17; // x8
  int max_length; // w8
  __int64 v19; // x22
  int v20; // w8
  unsigned int v21; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x28
  int32_t v25; // w29
  EventItemComponent_o *v26; // x27
  unsigned int v27; // w8
  int32_t v28; // w3
  TitleInfoEventItemComponent_c *v29; // x0
  int32_t v30; // w29
  float v31; // s9
  float v32; // s10
  __int64 v33; // x8
  TitleInfoEventItemComponent_c *v34; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct EventItemComponent_array *v39; // x28
  Il2CppClass **v40; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v42; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  int32_t v46; // w8
  UnityEngine_GameObject_o *v47; // x0
  int v48; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v50; // x8
  __int64 v51; // x0
  int32_t v52; // [xsp+Ch] [xbp-94h]
  int v55; // [xsp+28h] [xbp-78h]
  int32_t v56; // [xsp+2Ch] [xbp-74h] BYREF

  v56 = titleImageId;
  if ( (byte_4C359AD & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&EventItemComponent___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&TitleInfoEventItemComponent_TypeInfo);
    byte_4C359AD = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v13 = (struct EventItemComponent_array *)sub_1C32CC8(
                                             EventItemComponent___TypeInfo,
                                             LODWORD(mItemObjParents->max_length));
  this->fields.mEventItemComponents = v13;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mEventItemComponents, (int32_t)v13, v15, v16);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v17 = this->fields.mItemObjParents;
  if ( !v17 || !item_ids )
    goto LABEL_94;
  max_length = v17->max_length;
  v52 = titleImageId;
  v19 = Instance;
  if ( LODWORD(item_ids->max_length) - 1 >= max_length )
    v20 = max_length - 1;
  else
    v20 = LODWORD(item_ids->max_length) - 1;
  v21 = 0;
  v55 = v20;
  if ( (v20 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v23 = this->fields.mItemObjParents;
      if ( !v23 )
        goto LABEL_94;
      if ( v21 >= LODWORD(v23->max_length) )
        goto LABEL_95;
      v24 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)Instance, v23->m_Items[v21], 0);
      if ( !v24 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v24,
                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v21 >= LODWORD(disp_types->max_length) )
        goto LABEL_95;
      v25 = disp_types->m_Items[v21];
      v26 = (EventItemComponent_o *)Instance;
      switch ( v25 )
      {
        case 0:
          if ( v21 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v21], 0);
          goto LABEL_42;
        case 1:
          Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)iconIds, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_38;
          if ( !iconIds )
            goto LABEL_94;
          v27 = iconIds->max_length;
          if ( (int)v21 >= (int)v27 )
          {
LABEL_38:
            v28 = 0;
          }
          else
          {
            if ( v21 >= v27 )
              goto LABEL_95;
            v28 = iconIds->m_Items[v21];
          }
          if ( v21 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !v26 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v26, eventId, item_ids->m_Items[v21], v28, 0);
LABEL_42:
          if ( !v19 )
            goto LABEL_94;
          if ( *(_DWORD *)(v19 + 148) == 4 )
          {
            if ( !v26 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v26, 5, 0);
            EventItemComponent__setHeightDataLabel(v26, 12, 0);
            if ( v25 == 4 )
            {
              v29 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v29 = TitleInfoEventItemComponent_TypeInfo;
              }
              v30 = 70;
              v31 = 48.0;
              v32 = 46.0;
              v33 = 24;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v26,
                *(System_String_o **)((char *)&v29->static_fields->EVENT_ITEM_SCALE_DEFAULT + v33),
                0);
              EventItemComponent__setLocalPositionXItemIcon(v26, v32, 0);
              EventItemComponent__setLocalPositionDataLabel(v26, v31, -1.0, 0);
              EventItemComponent__setWidthDataLabel(v26, v30, 0);
            }
            else if ( !v25 )
            {
              v29 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v29 = TitleInfoEventItemComponent_TypeInfo;
              }
              v30 = 42;
              v31 = 35.0;
              v32 = 77.0;
              v33 = 16;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v26, 11, 0);
            EventItemComponent__setScaleItemIcon(v26, 0.6, 0);
            v36 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v36 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v36->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v34 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v34 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v34->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_36038768(v24, *p_EVENT_ITEM_SCALE_VS, 0);
          v39 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v26 )
          {
            Instance = sub_1C32D5C(v26, v39->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v51 = sub_1C32EA0(0);
              sub_1C32D48(v51, 0);
            }
          }
          if ( v21 >= LODWORD(v39->max_length) )
            goto LABEL_95;
          v40 = &v39->obj.klass + (int)v21;
          v40[4] = (Il2CppClass *)v26;
          sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v26, v37, v38);
          if ( (int)++v21 > v55 )
            goto LABEL_65;
          break;
        case 2:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0);
          goto LABEL_42;
        case 3:
          if ( v21 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v21], 0);
          goto LABEL_42;
        case 4:
          if ( v21 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v21], 0);
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
    sub_1C32E7C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v21 < 3, 0);
  mStrSp = this->fields.mStrSp;
  if ( v52 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0);
    if ( !v19 )
      goto LABEL_94;
  }
  else
  {
    v42 = TitleInfoEventItemComponent_TypeInfo;
    if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v42 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v42->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v44 = System_Int32__ToString((int32_t)&v56, 0);
    v45 = System_String__Concat_63518544(TITLE_SP_ITEM_NAME_PREFIX, v44, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v45, 0);
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_94;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v19 )
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v19 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_94;
    if ( !LODWORD(disp_types->max_length) )
LABEL_95:
      sub_1C32E84(Instance);
    v46 = disp_types->m_Items[0];
    if ( v46 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_36036760(gameObject, 852.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v48 = -1025114112;
    }
    else
    {
      if ( v46 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_94;
        goto LABEL_91;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_36036760(v47, 865.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      v48 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v48;
LABEL_91:
    v50 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v50 + 440))(Instance, *(_QWORD *)(v50 + 448));
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

  v2 = this;
  if ( (byte_4C359AF & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C359AF = 1;
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
          sub_1C32E84(this);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1C32E7C(this);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0);
        }
        LODWORD(max_length) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}