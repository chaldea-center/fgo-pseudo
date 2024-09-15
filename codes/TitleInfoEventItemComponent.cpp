void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct TitleInfoEventItemComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct TitleInfoEventItemComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A2BF5C & 1) == 0 )
  {
    sub_1B761C0(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_20457/*"img_shopbg06"*/, v4);
    sub_1B761C0(&StringLiteral_20456/*"img_shopbg05"*/, v5);
    sub_1B761C0(&StringLiteral_19186/*"event_item_title_"*/, v6);
    byte_4A2BF5C = 1;
  }
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EVENT_ITEM_SCALE_DEFAULT = 0x3F8000003F400000LL;
  v8 = StringLiteral_19186/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_19186/*"event_item_title_"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v8, v2, v3);
  v9 = StringLiteral_20456/*"img_shopbg05"*/;
  v10 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20456/*"img_shopbg05"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v10->EVENT_ITEM_VS_BASE_SP_NAME, v9, v11, v12);
  v13 = StringLiteral_20457/*"img_shopbg06"*/;
  v14 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20457/*"img_shopbg06"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v14->EVENT_GPOINT_VS_BASE_SP_NAME, v13, v15, v16);
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
  if ( (byte_4A2BF5A & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2BF5A = 1;
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
          UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
        }
        v15 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
          goto LABEL_20;
        if ( v8 >= LODWORD(v15->_1.namespaze) )
          break;
        v16 = &v15->_1.image + v8;
        v16[4] = 0LL;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v16 + 4), 0, v11, v12);
        if ( ++v8 == namespaze )
          goto LABEL_21;
        v5 = p_mEventItemComponents->klass;
        if ( !p_mEventItemComponents->klass )
LABEL_20:
          sub_1B7641C(this, method);
      }
      sub_1B76424(this, method);
    }
LABEL_21:
    p_mEventItemComponents->klass = 0LL;
    sub_1B76164(p_mEventItemComponents, 0, v2, v3);
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
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_GameObject_array *v24; // x8
  signed int max_length; // w8
  TitleInfoEventItemComponent_c **v26; // x28
  __int64 v27; // x22
  signed int v28; // w23
  il2cpp_array_size_t v29; // w21
  Il2CppObject *mEventItemPrefab; // x26
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_GameObject_o *v32; // x27
  TitleInfoEventItemComponent_c **v33; // x24
  int32_t v34; // w28
  EventItemComponent_o *v35; // x26
  TitleInfoEventItemComponent_c *v36; // x0
  int32_t v37; // w28
  int v38; // s9
  int v39; // s10
  __int64 v40; // x8
  TitleInfoEventItemComponent_c *v41; // x0
  float *p_EVENT_ITEM_SCALE_DEFAULT; // x8
  TitleInfoEventItemComponent_c *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct EventItemComponent_array *v46; // x27
  Il2CppClass **v47; // x0
  UISprite_o *mStrSp; // x23
  TitleInfoEventItemComponent_c *v49; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v51; // x0
  System_String_o *v52; // x21
  int32_t v53; // w8
  UnityEngine_GameObject_o *v54; // x0
  int v55; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v57; // x8
  __int64 v58; // x0
  int32_t v59; // [xsp+4h] [xbp-8Ch]
  int32_t v62; // [xsp+1Ch] [xbp-74h] BYREF

  v62 = titleImageId;
  if ( (byte_4A2BF59 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, item_ids);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventDetailMaster___, v9);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10);
    sub_1B761C0(&EventItemComponent___TypeInfo, v11);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v12);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B761C0(&TitleInfoEventItemComponent_TypeInfo, v16);
    byte_4A2BF59 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mItemObjParents = this->fields.mItemObjParents;
  if ( !mItemObjParents )
    goto LABEL_88;
  v20 = (struct EventItemComponent_array *)sub_1B76268(EventItemComponent___TypeInfo, mItemObjParents->max_length);
  this->fields.mEventItemComponents = v20;
  p_mEventItemComponents = &this->fields.mEventItemComponents;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.mEventItemComponents, (int32_t)v20, v22, v23);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        eventId,
                        (const MethodInfo_30FF780 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v24 = this->fields.mItemObjParents;
  if ( !v24 )
    goto LABEL_88;
  v59 = titleImageId;
  if ( !item_ids )
    goto LABEL_88;
  max_length = v24->max_length;
  v26 = &TitleInfoEventItemComponent_TypeInfo;
  v27 = Instance;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v28 = max_length - 1;
  else
    v28 = item_ids->max_length - 1;
  v29 = 0;
  if ( (v28 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mEventItemPrefab = (Il2CppObject *)this->fields.mEventItemPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (__int64)UnityEngine_Object__Instantiate_object_(
                            mEventItemPrefab,
                            (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v31 = this->fields.mItemObjParents;
      if ( !v31 )
        goto LABEL_88;
      if ( v29 >= v31->max_length )
        goto LABEL_89;
      v32 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_33557996((UnityEngine_GameObject_o *)Instance, v31->m_Items[v29], 0LL);
      if ( !v32 )
        goto LABEL_88;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v32,
                            (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_88;
      if ( v29 >= disp_types->max_length )
        goto LABEL_89;
      v33 = v26;
      v34 = disp_types->m_Items[v29 + 1];
      v35 = (EventItemComponent_o *)Instance;
      switch ( v34 )
      {
        case 0:
          if ( v29 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v29 + 1], 0LL);
          break;
        case 1:
          if ( v29 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v29 + 1], 0LL);
          break;
        case 2:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        case 3:
          if ( v29 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v29 + 1], 0LL);
          break;
        case 4:
          if ( v29 >= item_ids->max_length )
            goto LABEL_89;
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v29 + 1], 0LL);
          break;
        case 5:
          if ( !Instance )
            goto LABEL_88;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          break;
        default:
          break;
      }
      if ( !v27 )
        goto LABEL_88;
      if ( *(_DWORD *)(v27 + 148) == 4 )
        break;
      v41 = *v33;
      v26 = v33;
      if ( !(*v33)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = *v33;
      }
      p_EVENT_ITEM_SCALE_DEFAULT = &v41->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_54:
      GameObjectExtensions__SetLocalScale_33554168(v32, *p_EVENT_ITEM_SCALE_DEFAULT, 0LL);
      v46 = *p_mEventItemComponents;
      if ( !*p_mEventItemComponents )
        goto LABEL_88;
      if ( v35 )
      {
        Instance = sub_1B762FC(v35, v46->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v58 = sub_1B76440(0LL);
          sub_1B762E8(v58, 0LL);
        }
      }
      if ( v29 >= v46->max_length )
        goto LABEL_89;
      v47 = &v46->obj.klass + (int)v29;
      v47[4] = (Il2CppClass *)v35;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v35, v44, v45);
      if ( (int)++v29 > v28 )
        goto LABEL_59;
    }
    if ( !v35 )
      goto LABEL_88;
    EventItemComponent__setPivotDataLabel(v35, 5, 0LL);
    EventItemComponent__setHeightDataLabel(v35, 12, 0LL);
    if ( v34 == 4 )
    {
      v36 = *v33;
      if ( !(*v33)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = *v33;
      }
      v37 = 70;
      v38 = 1111490560;
      v39 = 1110966272;
      v40 = 24LL;
    }
    else
    {
      if ( v34 )
      {
LABEL_51:
        EventItemComponent__setFontSizeDataLabel(v35, 11, 0LL);
        EventItemComponent__setScaleItemIcon(v35, 0.6, 0LL);
        v43 = *v33;
        v26 = v33;
        if ( !(*v33)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = *v33;
        }
        p_EVENT_ITEM_SCALE_DEFAULT = &v43->static_fields->EVENT_ITEM_SCALE_VS;
        goto LABEL_54;
      }
      v36 = *v33;
      if ( !(*v33)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = *v33;
      }
      v37 = 42;
      v38 = 1108082688;
      v39 = 1117388800;
      v40 = 16LL;
    }
    EventItemComponent__setBaseSpriteDownloadAtlas(
      v35,
      *(System_String_o **)((char *)&v36->static_fields->EVENT_ITEM_SCALE_DEFAULT + v40),
      0LL);
    EventItemComponent__setLocalPositionXItemIcon(v35, *(float *)&v39, 0LL);
    EventItemComponent__setLocalPositionDataLabel(v35, *(float *)&v38, -1.0, 0LL);
    EventItemComponent__setWidthDataLabel(v35, v37, 0LL);
    goto LABEL_51;
  }
LABEL_59:
  Instance = (__int64)this->fields.mStrSp;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_88:
    sub_1B7641C(Instance, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v29 < 3, 0LL);
  mStrSp = this->fields.mStrSp;
  if ( v59 < 1 )
  {
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.mStrSp, 0, 0LL);
    if ( !v27 )
      goto LABEL_88;
  }
  else
  {
    v49 = *v26;
    if ( !(*v26)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = *v26;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v49->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v51 = System_Int32__ToString((int32_t)&v62, 0LL);
    v52 = System_String__Concat_61535060(TITLE_SP_ITEM_NAME_PREFIX, v51, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI(mStrSp, v52, 0LL);
    if ( !mStrSp )
      goto LABEL_88;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mStrSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mStrSp;
    if ( !Instance )
      goto LABEL_88;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v27 )
      goto LABEL_88;
  }
  if ( *(_DWORD *)(v27 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_88;
    if ( !disp_types->max_length )
LABEL_89:
      sub_1B76424(Instance, v18);
    v53 = disp_types->m_Items[1];
    if ( v53 == 4 )
    {
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_33552048(gameObject, 852.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v55 = -1025114112;
    }
    else
    {
      if ( v53 )
      {
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_88;
        goto LABEL_85;
      }
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_33552048(v54, 865.0, -26.0, 0LL);
      Instance = (__int64)this->fields.itemGrid;
      if ( !Instance )
        goto LABEL_88;
      v55 = -1029701632;
    }
    *(_DWORD *)(Instance + 48) = v55;
LABEL_85:
    v57 = *(_QWORD *)Instance;
    *(_DWORD *)(Instance + 52) = 0;
    *(_DWORD *)(Instance + 44) = 0;
    (*(void (__fastcall **)(__int64, _QWORD))(v57 + 440))(Instance, *(_QWORD *)(v57 + 448));
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
  if ( (byte_4A2BF5B & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2BF5B = 1;
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
          sub_1B76424(this, method);
        v6 = (UnityEngine_Object_o *)mEventItemComponents->m_Items[v5];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_1B7641C(this, method);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(v4) = mEventItemComponents->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)v4 );
    }
  }
}