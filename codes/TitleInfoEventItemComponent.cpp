void TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  struct TitleInfoEventItemComponent_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_59365D6 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventItemComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21528/*"img_shopbg06"*/);
    sub_21FFC50(&StringLiteral_21527/*"img_shopbg05"*/);
    sub_21FFC50(&StringLiteral_20063/*"event_item_title_"*/);
    byte_59365D6 = 1;
  }
  v7 = StringLiteral_20063/*"event_item_title_"*/;
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_21527/*"img_shopbg05"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_21527/*"img_shopbg05"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->EVENT_ITEM_VS_BASE_SP_NAME, v9, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_21528/*"img_shopbg06"*/;
  v18 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v18->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_21528/*"img_shopbg06"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->EVENT_GPOINT_VS_BASE_SP_NAME, v17, v19, v20, v21, v22, v23, v24);
}


void TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TitleInfoEventItemComponent_o *v8; // x19
  struct EventItemComponent_array *v9; // x8
  MissionNaviTransitionBoardItem_o *p_mEventItemComponents; // x19
  struct EventItemComponent_array *mEventItemComponents; // t1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x23
  __int64 v15; // x24
  MissionNaviTransitionBoardItem_c *klass; // x8
  UnityEngine_Object_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MissionNaviTransitionBoardItem_c *v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *gameObject; // x20
  MissionNaviTransitionBoardItem_c *v28; // x8

  v8 = this;
  if ( (byte_59365D4 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59365D4 = 1;
  }
  mEventItemComponents = v8->fields.mEventItemComponents;
  p_mEventItemComponents = (MissionNaviTransitionBoardItem_o *)&v8->fields.mEventItemComponents;
  v9 = mEventItemComponents;
  if ( mEventItemComponents )
  {
    max_length = v9->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      v14 = (unsigned int)max_length;
      v15 = 32;
      do
      {
        klass = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_22:
          sub_21FFECC(this, method);
        if ( v13 >= LODWORD(klass->_1.namespaze) )
          goto LABEL_23;
        v17 = *(UnityEngine_Object_o **)((char *)&klass->_1.image + v15);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v24 = p_mEventItemComponents->klass;
          if ( !p_mEventItemComponents->klass )
            goto LABEL_22;
          if ( v13 >= LODWORD(v24->_1.namespaze) )
            goto LABEL_23;
          this = *(TitleInfoEventItemComponent_o **)((char *)&v24->_1.image + v15);
          if ( !this )
            goto LABEL_22;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
          UnityEngine_Object__Destroy_83246496(gameObject, 0);
        }
        v28 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_22;
        if ( v13 >= LODWORD(v28->_1.namespaze) )
LABEL_23:
          sub_21FFED4(this);
        *(void **)((char *)&v28->_1.image + v15) = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v28 + v15), 0, v18, v19, v20, v21, v22, v23);
        ++v13;
        v15 += 8;
      }
      while ( v14 != v13 );
    }
    p_mEventItemComponents->klass = 0;
    sub_21FFBF4(p_mEventItemComponents, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v13; // x1
  struct UnityEngine_GameObject_array *mItemObjParents; // x8
  struct EventItemComponent_array *v15; // x0
  struct EventItemComponent_array **p_mEventItemComponents; // x26
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x2
  struct UnityEngine_GameObject_array *v24; // x8
  int max_length; // w8
  __int64 v26; // x22
  int v27; // w8
  unsigned int v28; // w24
  Il2CppObject *mEventItemPrefab; // x27
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x28
  __int64 v32; // x2
  EventItemComponent_o *v33; // x27
  int v34; // w29
  unsigned int monitor; // w8
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  TitleInfoEventItemComponent_c *v39; // x0
  int v40; // w9
  int v41; // w10
  int32_t v42; // w29
  System_String_o **p_EVENT_GPOINT_VS_BASE_SP_NAME; // x8
  TitleInfoEventItemComponent_c *v44; // x0
  float *p_EVENT_ITEM_SCALE_DEFAULT; // x8
  TitleInfoEventItemComponent_c *v46; // x0
  float v47; // s9
  float v48; // s10
  __int64 v49; // x1
  __int64 v50; // x2
  TitleInfoEventItemComponent_c *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct EventItemComponent_array *v58; // x28
  __int64 v59; // x1
  Il2CppClass **v60; // x0
  __int64 v61; // x2
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v63; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  System_String_o *v68; // x21
  int32_t v69; // w8
  UnityEngine_GameObject_o *v70; // x0
  int v71; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v73; // x8
  __int64 v74; // x0
  int32_t v75; // [xsp+Ch] [xbp-94h]
  System_Collections_ICollection_o *self; // [xsp+10h] [xbp-90h]
  int v78; // [xsp+28h] [xbp-78h]
  int32_t v79; // [xsp+2Ch] [xbp-74h] BYREF

  v79 = titleImageId;
  if ( (byte_59365D3 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&EventItemComponent___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventItemComponent_TypeInfo);
    byte_59365D3 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_103;
  v15 = (struct EventItemComponent_array *)sub_21FFD10(
                                             EventItemComponent___TypeInfo,
                                             LODWORD(mItemObjParents->max_length));
  this->fields.mEventItemComponents = v15;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mEventItemComponents,
    (int32_t)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v24 = this->fields.mItemObjParents;
  if ( !v24 || !item_ids )
    goto LABEL_103;
  max_length = v24->max_length;
  v26 = Instance;
  v75 = titleImageId;
  if ( LODWORD(item_ids->max_length) - 1 >= max_length )
    v27 = max_length - 1;
  else
    v27 = LODWORD(item_ids->max_length) - 1;
  v78 = v27;
  if ( (v27 & 0x80000000) == 0 )
  {
    self = (System_Collections_ICollection_o *)iconIds;
    v28 = 0;
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v23);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v30 = this->fields.mItemObjParents;
      if ( !v30 )
        goto LABEL_103;
      if ( v28 >= LODWORD(v30->max_length) )
        goto LABEL_104;
      v31 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)Instance, v30->m_Items[v28], 0);
      if ( !v31 )
        goto LABEL_103;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v31,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_103;
      if ( v28 >= LODWORD(disp_types->max_length) )
        goto LABEL_104;
      v33 = (EventItemComponent_o *)Instance;
      v34 = disp_types->m_Items[v28];
      if ( v34 > 2 )
      {
        switch ( v34 )
        {
          case 3:
            if ( v28 >= LODWORD(item_ids->max_length) )
              goto LABEL_104;
            if ( !Instance )
              goto LABEL_103;
            EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v28], 0);
            break;
          case 4:
            if ( v28 >= LODWORD(item_ids->max_length) )
              goto LABEL_104;
            if ( !Instance )
              goto LABEL_103;
            EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v28], 0);
            break;
          case 5:
            if ( !Instance )
              goto LABEL_103;
            EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0);
            break;
        }
      }
      else if ( v34 )
      {
        if ( v34 == 1 )
        {
          Instance = BasicHelper__IsNullOrEmpty(self, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_45;
          if ( !self )
            goto LABEL_103;
          monitor = (unsigned int)self[1].monitor;
          if ( (int)v28 >= (int)monitor )
          {
LABEL_45:
            v36 = 0;
          }
          else
          {
            if ( v28 >= monitor )
              goto LABEL_104;
            v36 = *((_DWORD *)&self[2].klass + (int)v28);
          }
          if ( v28 >= LODWORD(item_ids->max_length) )
            goto LABEL_104;
          if ( !v33 )
            goto LABEL_103;
          EventItemComponent__SetPointEvent(v33, eventId, item_ids->m_Items[v28], v36, 0);
        }
        else if ( v34 == 2 )
        {
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0);
        }
      }
      else
      {
        if ( v28 >= LODWORD(item_ids->max_length) )
          goto LABEL_104;
        if ( !Instance )
          goto LABEL_103;
        EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v28], 0);
      }
      if ( !v26 )
        goto LABEL_103;
      if ( *(_DWORD *)(v26 + 148) == 4 )
        break;
      v44 = TitleInfoEventItemComponent_TypeInfo;
      if ( !*(&TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo, v13, v32);
        v44 = TitleInfoEventItemComponent_TypeInfo;
      }
      p_EVENT_ITEM_SCALE_DEFAULT = &v44->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_67:
      GameObjectExtensions__SetLocalScale_42878128(v31, *p_EVENT_ITEM_SCALE_DEFAULT, 0);
      v58 = *p_mEventItemComponents;
      if ( !*p_mEventItemComponents )
        goto LABEL_103;
      if ( v33 )
      {
        Instance = sub_21FFDA4(v33, v58->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v74 = sub_21FFEF0(0, v59);
          sub_21FFD90(v74, 0);
        }
      }
      if ( v28 >= LODWORD(v58->max_length) )
        goto LABEL_104;
      v60 = &v58->obj.klass + (int)v28;
      v60[4] = (Il2CppClass *)v33;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v33, v52, v53, v54, v55, v56, v57);
      if ( (int)++v28 > v78 )
        goto LABEL_74;
    }
    if ( !v33 )
      goto LABEL_103;
    EventItemComponent__setPivotDataLabel(v33, 5, 0);
    EventItemComponent__setHeightDataLabel(v33, 12, 0);
    if ( v34 == 4 )
    {
      v46 = TitleInfoEventItemComponent_TypeInfo;
      if ( !*(&TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo, v37, v38);
        v46 = TitleInfoEventItemComponent_TypeInfo;
      }
      v40 = 1111490560;
      v41 = 1110966272;
      v42 = 70;
      p_EVENT_GPOINT_VS_BASE_SP_NAME = &v46->static_fields->EVENT_GPOINT_VS_BASE_SP_NAME;
    }
    else
    {
      if ( v34 )
      {
LABEL_64:
        EventItemComponent__setFontSizeDataLabel(v33, 11, 0);
        EventItemComponent__setScaleItemIcon(v33, 0.6, 0);
        v51 = TitleInfoEventItemComponent_TypeInfo;
        if ( !*(&TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo, v49, v50);
          v51 = TitleInfoEventItemComponent_TypeInfo;
        }
        p_EVENT_ITEM_SCALE_DEFAULT = &v51->static_fields->EVENT_ITEM_SCALE_VS;
        goto LABEL_67;
      }
      v39 = TitleInfoEventItemComponent_TypeInfo;
      if ( !*(&TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo, v37, v38);
        v39 = TitleInfoEventItemComponent_TypeInfo;
      }
      v40 = 1108082688;
      v41 = 1117388800;
      v42 = 42;
      p_EVENT_GPOINT_VS_BASE_SP_NAME = &v39->static_fields->EVENT_ITEM_VS_BASE_SP_NAME;
    }
    v47 = *(float *)&v40;
    v48 = *(float *)&v41;
    EventItemComponent__setBaseSpriteDownloadAtlas(v33, *p_EVENT_GPOINT_VS_BASE_SP_NAME, 0);
    EventItemComponent__setLocalPositionXItemIcon(v33, v48, 0);
    EventItemComponent__setLocalPositionDataLabel(v33, v47, -1.0, 0);
    EventItemComponent__setWidthDataLabel(v33, v42, 0);
    goto LABEL_64;
  }
  v28 = 0;
LABEL_74:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_103:
    sub_21FFECC(Instance, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v28 < 3, 0);
  mStrSp = this->fields.mStrSp;
  if ( v75 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0);
    if ( !v26 )
      goto LABEL_103;
  }
  else
  {
    v63 = TitleInfoEventItemComponent_TypeInfo;
    if ( !*(&TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo, v13, v61);
      v63 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v63->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v65 = System_Int32__ToString((int32_t)&v79, 0);
    v68 = System_String__Concat_75438412(TITLE_SP_ITEM_NAME_PREFIX, v65, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v66, v67);
    Instance = AtlasManager__SetEventUI(mStrSp, v68, 0);
    if ( !mStrSp )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_103;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v26 )
      goto LABEL_103;
  }
  if ( *(_DWORD *)(v26 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_103;
    if ( !LODWORD(disp_types->max_length) )
LABEL_104:
      sub_21FFED4(Instance);
    v69 = disp_types->m_Items[0];
    Instance = (__int64)this->fields.itemGrid;
    if ( v69 == 4 )
    {
      if ( !Instance )
        goto LABEL_103;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_42876120(gameObject, 852.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_103;
      v71 = -1025114112;
    }
    else
    {
      if ( v69 )
      {
        if ( !Instance )
          goto LABEL_103;
        goto LABEL_100;
      }
      if ( !Instance )
        goto LABEL_103;
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      GameObjectExtensions__SetLocalPosition_42876120(v70, 865.0, -26.0, 0);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_103;
      v71 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v71;
LABEL_100:
    v73 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v73 + 440))(Instance, *(_QWORD *)(v73 + 448));
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_103;
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
  if ( (byte_59365D5 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59365D5 = 1;
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
          sub_21FFED4(this);
        v7 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v6];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v7 )
            sub_21FFECC(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v7, 0);
        }
        LODWORD(max_length) = mEventItemComponents->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}