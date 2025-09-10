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

  if ( (byte_4C25398 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventItemComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_20560/*"img_shopbg06"*/);
    sub_1C2D490(&StringLiteral_20559/*"img_shopbg05"*/);
    sub_1C2D490(&StringLiteral_19199/*"event_item_title_"*/);
    byte_4C25398 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v4 = StringLiteral_19199/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19199/*"event_item_title_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v4, v1, v2);
  v5 = StringLiteral_20559/*"img_shopbg05"*/;
  v6 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v6->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20559/*"img_shopbg05"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->EVENT_ITEM_VS_BASE_SP_NAME, v5, v7, v8);
  v9 = StringLiteral_20560/*"img_shopbg06"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20560/*"img_shopbg06"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->EVENT_GPOINT_VS_BASE_SP_NAME, v9, v11, v12);
}


void TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  TitleInfoEventItemComponent_o *v4; // x19
  CGThumbnailListItem_c *v5; // x8
  CGThumbnailListItem_o *p_mEventItemComponents; // x19
  struct EventItemComponent_array *mEventItemComponents; // t1
  unsigned __int64 v8; // x21
  __int64 namespaze; // x22
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x3
  CGThumbnailListItem_c *klass; // x8
  UnityEngine_Object_o *gameObject; // x20
  CGThumbnailListItem_c *v14; // x8
  void **v15; // x0

  v4 = this;
  if ( (byte_4C25396 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25396 = 1;
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
          UnityEngine_Object__Destroy_71163704(gameObject, 0);
        }
        v14 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v14->_1.namespaze) )
          break;
        v15 = &v14->_1.image + v8;
        v15[4] = 0;
        sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), 0, v2, v11);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1C2D6EC(this, method);
      }
      sub_1C2D6F4(this, method, v2);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0;
    sub_1C2D434(p_mEventItemComponents, 0, v2, v3);
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
  __int64 v24; // x2
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_GameObject_o *v26; // x28
  int32_t v27; // w29
  EventItemComponent_o *v28; // x27
  unsigned int v29; // w8
  int32_t v30; // w3
  TitleInfoEventItemComponent_c *v31; // x0
  int32_t v32; // w29
  float v33; // s9
  float v34; // s10
  __int64 v35; // x8
  TitleInfoEventItemComponent_c *v36; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v38; // x0
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
  if ( (byte_4C25395 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&EventItemComponent___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TitleInfoEventItemComponent_TypeInfo);
    byte_4C25395 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v14 = (struct EventItemComponent_array *)sub_1C2D538(
                                             EventItemComponent___TypeInfo,
                                             LODWORD(mItemObjParents->max_length));
  this->fields.mEventItemComponents = v14;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mEventItemComponents, (int32_t)v14, v16, v17);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
                            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v25 = this->fields.mItemObjParents;
      if ( !v25 )
        goto LABEL_94;
      if ( v22 >= LODWORD(v25->max_length) )
        goto LABEL_95;
      v26 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)Instance, v25->m_Items[v22], 0);
      if ( !v26 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v26,
                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v22 >= LODWORD(disp_types->max_length) )
        goto LABEL_95;
      v27 = disp_types->m_Items[v22];
      v28 = (EventItemComponent_o *)Instance;
      switch ( v27 )
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
          v29 = iconIds->max_length;
          if ( (int)v22 >= (int)v29 )
          {
LABEL_38:
            v30 = 0;
          }
          else
          {
            if ( v22 >= v29 )
              goto LABEL_95;
            v30 = iconIds->m_Items[v22];
          }
          if ( v22 >= LODWORD(item_ids->max_length) )
            goto LABEL_95;
          if ( !v28 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v28, eventId, item_ids->m_Items[v22], v30, 0);
LABEL_42:
          if ( !v20 )
            goto LABEL_94;
          if ( *(_DWORD *)(v20 + 148) == 4 )
          {
            if ( !v28 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v28, 5, 0);
            EventItemComponent__setHeightDataLabel(v28, 12, 0);
            if ( v27 == 4 )
            {
              v31 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v31 = TitleInfoEventItemComponent_TypeInfo;
              }
              v32 = 70;
              v33 = 48.0;
              v34 = 46.0;
              v35 = 24;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v28,
                *(System_String_o **)((char *)&v31->static_fields->EVENT_ITEM_SCALE_DEFAULT + v35),
                0);
              EventItemComponent__setLocalPositionXItemIcon(v28, v34, 0);
              EventItemComponent__setLocalPositionDataLabel(v28, v33, -1.0, 0);
              EventItemComponent__setWidthDataLabel(v28, v32, 0);
            }
            else if ( !v27 )
            {
              v31 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v31 = TitleInfoEventItemComponent_TypeInfo;
              }
              v32 = 42;
              v33 = 35.0;
              v34 = 77.0;
              v35 = 16;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v28, 11, 0);
            EventItemComponent__setScaleItemIcon(v28, 0.6, 0);
            v38 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v38 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v38->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v36 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v36 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v36->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_35920504(v26, *p_EVENT_ITEM_SCALE_VS, 0);
          v40 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v28 )
          {
            Instance = sub_1C2D5CC(v28, v40->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v52 = sub_1C2D710(0);
              sub_1C2D5B8(v52, 0);
            }
          }
          if ( v22 >= LODWORD(v40->max_length) )
            goto LABEL_95;
          v41 = &v40->obj.klass + (int)v22;
          v41[4] = (Il2CppClass *)v28;
          sub_1C2D434((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v28, v24, v39);
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
    sub_1C2D6EC(Instance, v12);
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
    v46 = System_String__Concat_63457864(TITLE_SP_ITEM_NAME_PREFIX, v45, 0);
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
      sub_1C2D6F4(Instance, v12, v24);
    v47 = disp_types->m_Items[0];
    if ( v47 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_35918496(gameObject, 852.0, -26.0, 0);
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
      GameObjectExtensions__SetLocalPosition_35918496(v48, 865.0, -26.0, 0);
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
  __int64 v2; // x2
  TitleInfoEventItemComponent_o *v3; // x19
  struct EventItemComponent_array *mEventItemComponents; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4C25397 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25397 = 1;
  }
  mEventItemComponents = v3->fields.mEventItemComponents;
  if ( mEventItemComponents )
  {
    max_length = mEventItemComponents->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C2D6F4(this, method, v2);
        v7 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v6];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v7 )
            sub_1C2D6EC(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v7, 0);
        }
        LODWORD(max_length) = mEventItemComponents->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}