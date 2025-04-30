void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct TitleInfoEventItemComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A4CE68 & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_20272/*"img_shopbg06"*/, v4);
    sub_1B863B8(&StringLiteral_20271/*"img_shopbg05"*/, v5);
    sub_1B863B8(&StringLiteral_18972/*"event_item_title_"*/, v6);
    byte_4A4CE68 = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v8 = StringLiteral_18972/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_18972/*"event_item_title_"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v8, v2, v3);
  v9 = StringLiteral_20271/*"img_shopbg05"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20271/*"img_shopbg05"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->EVENT_ITEM_VS_BASE_SP_NAME, v9, v11, v12);
  v13 = StringLiteral_20272/*"img_shopbg06"*/;
  v14 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20272/*"img_shopbg06"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v14->EVENT_GPOINT_VS_BASE_SP_NAME, v13, v15, v16);
}


void __fastcall TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4A4CE66 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4CE66 = 1;
  }
  mEventItemComponents = v4->fields.mEventItemComponents;
  p_mEventItemComponents = (CGThumbnailListItem_o *)&v4->fields.mEventItemComponents;
  v5 = (CGThumbnailListItem_c *)mEventItemComponents;
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
          UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
        }
        v15 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v15->_1.namespaze) )
          break;
        v16 = &v15->_1.image + v8;
        v16[4] = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)(v16 + 4), 0, v11, v12);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1B86614(this, method);
      }
      sub_1B8661C(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1B8635C(p_mEventItemComponents, 0, v2, v3);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UnityEngine_GameObject_array *v26; // x8
  signed int max_length; // w8
  __int64 v28; // x22
  il2cpp_array_size_t v29; // w8
  il2cpp_array_size_t v30; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_GameObject_o *v33; // x28
  int32_t v34; // w29
  EventItemComponent_o *v35; // x27
  il2cpp_array_size_t v36; // w8
  int32_t v37; // w3
  TitleInfoEventItemComponent_c *v38; // x0
  int32_t v39; // w29
  int v40; // s9
  int v41; // s10
  __int64 v42; // x8
  TitleInfoEventItemComponent_c *v43; // x0
  float *p_EVENT_ITEM_SCALE_VS; // x8
  TitleInfoEventItemComponent_c *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
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
  if ( (byte_4A4CE65 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item_ids);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_1B863B8(&EventItemComponent___TypeInfo, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v14);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B863B8(&TitleInfoEventItemComponent_TypeInfo, v18);
    byte_4A4CE65 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_94;
  v22 = (struct EventItemComponent_array *)sub_1B86460(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v22;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mEventItemComponents, (int32_t)v22, v24, v25);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v26 = this->fields.mItemObjParents;
  if ( !v26 || !item_ids )
    goto LABEL_94;
  max_length = v26->max_length;
  v61 = titleImageId;
  v28 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v29 = max_length - 1;
  else
    v29 = item_ids->max_length - 1;
  v30 = 0;
  v64 = v29;
  if ( (v29 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v32 = this->fields.mItemObjParents;
      if ( !v32 )
        goto LABEL_94;
      if ( v30 >= v32->max_length )
        goto LABEL_95;
      v33 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_34388184((UnityEngine_GameObject_o *)Instance, v32->m_Items[v30], 0LL);
      if ( !v33 )
        goto LABEL_94;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v33,
                            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_94;
      if ( v30 >= disp_types->max_length )
        goto LABEL_95;
      v34 = disp_types->m_Items[v30 + 1];
      v35 = (EventItemComponent_o *)Instance;
      switch ( v34 )
      {
        case 0:
          if ( v30 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v30 + 1], 0LL);
          goto LABEL_42;
        case 1:
          Instance = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)iconIds, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_38;
          if ( !iconIds )
            goto LABEL_94;
          v36 = iconIds->max_length;
          if ( (int)v30 >= (int)v36 )
          {
LABEL_38:
            v37 = 0;
          }
          else
          {
            if ( v30 >= v36 )
              goto LABEL_95;
            v37 = iconIds->m_Items[v30 + 1];
          }
          if ( v30 >= item_ids->max_length )
            goto LABEL_95;
          if ( !v35 )
            goto LABEL_94;
          EventItemComponent__SetPointEvent(v35, eventId, item_ids->m_Items[v30 + 1], v37, 0LL);
LABEL_42:
          if ( !v28 )
            goto LABEL_94;
          if ( *(_DWORD *)(v28 + 148) == 4 )
          {
            if ( !v35 )
              goto LABEL_94;
            EventItemComponent__setPivotDataLabel(v35, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v35, 12, 0LL);
            if ( v34 == 4 )
            {
              v38 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v38 = TitleInfoEventItemComponent_TypeInfo;
              }
              v39 = 70;
              v40 = 1111490560;
              v41 = 1110966272;
              v42 = 24LL;
LABEL_56:
              EventItemComponent__setBaseSpriteDownloadAtlas(
                v35,
                *(System_String_o **)((char *)&v38->static_fields->EVENT_ITEM_SCALE_DEFAULT + v42),
                0LL);
              EventItemComponent__setLocalPositionXItemIcon(v35, *(float *)&v41, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v35, *(float *)&v40, -1.0, 0LL);
              EventItemComponent__setWidthDataLabel(v35, v39, 0LL);
            }
            else if ( !v34 )
            {
              v38 = TitleInfoEventItemComponent_TypeInfo;
              if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v38 = TitleInfoEventItemComponent_TypeInfo;
              }
              v39 = 42;
              v40 = 1108082688;
              v41 = 1117388800;
              v42 = 16LL;
              goto LABEL_56;
            }
            EventItemComponent__setFontSizeDataLabel(v35, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v35, 0.6, 0LL);
            v45 = TitleInfoEventItemComponent_TypeInfo;
            if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v45 = TitleInfoEventItemComponent_TypeInfo;
            }
            p_EVENT_ITEM_SCALE_VS = &v45->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_60;
          }
          v43 = TitleInfoEventItemComponent_TypeInfo;
          if ( !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v43 = TitleInfoEventItemComponent_TypeInfo;
          }
          p_EVENT_ITEM_SCALE_VS = &v43->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_60:
          GameObjectExtensions__SetLocalScale_34384400(v33, *p_EVENT_ITEM_SCALE_VS, 0LL);
          v48 = *p_mEventItemComponents;
          if ( !*p_mEventItemComponents )
            goto LABEL_94;
          if ( v35 )
          {
            Instance = sub_1B864F4(v35, v48->obj.klass->_1.element_class);
            if ( !Instance )
            {
              v60 = sub_1B86638(0LL);
              sub_1B864E0(v60, 0LL);
            }
          }
          if ( v30 >= v48->max_length )
            goto LABEL_95;
          v49 = &v48->obj.klass + (int)v30;
          v49[4] = (Il2CppClass *)v35;
          sub_1B8635C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v35, v46, v47);
          if ( (int)++v30 > v64 )
            goto LABEL_65;
          break;
        case 2:
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          goto LABEL_42;
        case 3:
          if ( v30 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v30 + 1], 0LL);
          goto LABEL_42;
        case 4:
          if ( v30 >= item_ids->max_length )
            goto LABEL_95;
          if ( !Instance )
            goto LABEL_94;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v30 + 1], 0LL);
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
    sub_1B86614(Instance, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v30 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v61 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_94;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v28 )
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
    v54 = System_String__Concat_61645176(TITLE_SP_ITEM_NAME_PREFIX, v53, 0LL);
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
    if ( !v28 )
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v28 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_94;
    if ( !disp_types->max_length )
LABEL_95:
      sub_1B8661C(Instance, v20);
    v55 = disp_types->m_Items[1];
    if ( v55 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_94;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_34382392(gameObject, 852.0, -26.0, 0LL);
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
      GameObjectExtensions__SetLocalPosition_34382392(v56, 865.0, -26.0, 0LL);
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
  if ( (byte_4A4CE67 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4CE67 = 1;
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
          sub_1B8661C(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1B86614(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}