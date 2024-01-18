void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoEventItemComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventItemComponent_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_418B9F6 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19627/*"img_shopbg06"*/, v8);
    sub_B2C35C(&StringLiteral_19626/*"img_shopbg05"*/, v9);
    sub_B2C35C(&StringLiteral_18525/*"event_item_title_"*/, v10);
    byte_418B9F6 = 1;
  }
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_DEFAULT = 0.75;
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_VS = 1.0;
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18525/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_18525/*"event_item_title_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19626/*"img_shopbg05"*/;
  v13->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19626/*"img_shopbg05"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->EVENT_ITEM_VS_BASE_SP_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19627/*"img_shopbg06"*/;
  v21->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19627/*"img_shopbg06"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->EVENT_GPOINT_VS_BASE_SP_NAME, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventItemComponent___ctor(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventItemComponent__Destroy(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoEventItemComponent_o *v8; // x19
  BattleServantConfConponent_c *v9; // x8
  BattleServantConfConponent_o *v10; // x19
  TitleInfoEventItemComponent_c *klass; // t1
  const char *namespaze; // x9
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  unsigned __int64 v16; // x25
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_c *v25; // x8
  UnityEngine_Object_o *gameObject; // x20
  BattleServantConfConponent_c *v27; // x8
  __int64 v28; // x0

  v8 = this;
  if ( (byte_418B9F4 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B9F4 = 1;
  }
  klass = v8[1].klass;
  v10 = (BattleServantConfConponent_o *)&v8[1];
  v9 = (BattleServantConfConponent_c *)klass;
  if ( klass )
  {
    namespaze = v9->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v13 = (int)namespaze;
      v14 = 4LL;
      v15 = 32LL;
      while ( 1 )
      {
        v16 = v14 - 4;
        if ( v14 - 4 >= (unsigned __int64)LODWORD(v9->_1.namespaze) )
          break;
        v17 = (UnityEngine_Object_o *)*((_QWORD *)&v9->_1.image + v14);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v25 = v10->klass;
          if ( !v10->klass )
            goto LABEL_22;
          if ( v16 >= LODWORD(v25->_1.namespaze) )
            break;
          this = (TitleInfoEventItemComponent_o *)*((_QWORD *)&v25->_1.image + v14);
          if ( !this )
            goto LABEL_22;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
        }
        v27 = v10->klass;
        if ( !v10->klass )
          goto LABEL_22;
        if ( v16 >= LODWORD(v27->_1.namespaze) )
          break;
        *(void **)((char *)&v27->_1.image + v15) = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v27 + v15), 0LL, v19, v20, v21, v22, v23, v24);
        if ( v14 - 3 >= v13 )
          goto LABEL_23;
        v9 = v10->klass;
        ++v14;
        v15 += 8LL;
        if ( !v10->klass )
LABEL_22:
          sub_B2C434(this, v18);
      }
      v28 = sub_B2C460(this);
      sub_B2C400(v28, 0LL);
    }
LABEL_23:
    v10->klass = 0LL;
    sub_B2C2F8(v10, 0LL, v2, v3, v4, v5, v6, v7);
  }
}


bool __fastcall TitleInfoEventItemComponent__IsDispPossible(
        TitleInfoEventItemComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventItemComponent_c *klass; // x8

  klass = this[1].klass;
  return klass && LODWORD(klass->_1.namespaze) != 0;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 Instance; // x0
  __int64 v19; // x1
  struct EventItemComponent_array *mEventItemComponents; // x8
  TitleInfoEventItemComponent_c *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventItemComponent_array *v28; // x8
  signed int max_length; // w8
  __int64 v30; // x22
  il2cpp_array_size_t v31; // w28
  signed int v32; // w21
  UnityEngine_UI_Dropdown_DropdownItem_o *mStrSp; // x26
  struct EventItemComponent_array *v34; // x8
  UnityEngine_GameObject_o *v35; // x27
  int32_t v36; // w24
  EventItemComponent_o *v37; // x26
  TitleInfoEventItemComponent_c *v38; // x0
  int32_t v39; // w1
  TitleInfoEventItemComponent_c *v40; // x0
  float EVENT_ITEM_SCALE_VS; // s0
  TitleInfoEventItemComponent_c *v42; // x0
  TitleInfoEventItemComponent_c *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  TitleInfoEventItemComponent_c *klass; // x24
  void **v51; // x0
  UISprite_o *itemGrid; // x23
  TitleInfoEventItemComponent_c *v53; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v55; // x0
  System_String_o *v56; // x21
  int32_t v57; // w8
  struct UnityEngine_GameObject_array **p_mItemObjParents; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_array *v60; // x8
  int v61; // w9
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  int32_t v65; // [xsp+8h] [xbp-98h]
  TitleInfoEventItemComponent_o *v67; // [xsp+10h] [xbp-90h]
  int32_t v68; // [xsp+1Ch] [xbp-84h] BYREF

  v68 = titleImageId;
  if ( (byte_418B9F3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item_ids);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_B2C35C(&EventItemComponent___TypeInfo, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&TitleInfoEventItemComponent_TypeInfo, v17);
    byte_418B9F3 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mEventItemComponents = this->fields.mEventItemComponents;
  if ( !mEventItemComponents )
    goto LABEL_103;
  v21 = (TitleInfoEventItemComponent_c *)sub_B2C374(EventItemComponent___TypeInfo, mEventItemComponents->max_length);
  this[1].klass = v21;
  v67 = this + 1;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v28 = this->fields.mEventItemComponents;
  if ( !v28 || !item_ids )
    goto LABEL_103;
  max_length = v28->max_length;
  v30 = Instance;
  v31 = 0;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v32 = max_length - 1;
  else
    v32 = item_ids->max_length - 1;
  v65 = titleImageId;
  if ( (v32 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mStrSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.mStrSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            mStrSp,
                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v34 = this->fields.mEventItemComponents;
      if ( !v34 )
        goto LABEL_103;
      if ( v31 >= v34->max_length )
        goto LABEL_104;
      v35 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_31331952(
        (UnityEngine_GameObject_o *)Instance,
        (UnityEngine_GameObject_o *)v34->m_Items[v31],
        0LL);
      if ( !v35 )
        goto LABEL_103;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v35,
                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_103;
      if ( v31 >= disp_types->max_length )
        goto LABEL_104;
      v36 = disp_types->m_Items[v31 + 1];
      v37 = (EventItemComponent_o *)Instance;
      switch ( v36 )
      {
        case 0:
          if ( v31 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v31 + 1], 0LL);
          if ( !v30 )
            goto LABEL_103;
          goto LABEL_43;
        case 1:
          if ( v31 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v31 + 1], 0LL);
          if ( !v30 )
            goto LABEL_103;
          goto LABEL_43;
        case 2:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          if ( !v30 )
            goto LABEL_103;
          goto LABEL_43;
        case 3:
          if ( v31 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v31 + 1], 0LL);
          if ( !v30 )
            goto LABEL_103;
          goto LABEL_43;
        case 4:
          if ( v31 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v31 + 1], 0LL);
          if ( !v30 )
            goto LABEL_103;
          goto LABEL_43;
        case 5:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
LABEL_42:
          if ( !v30 )
            goto LABEL_103;
LABEL_43:
          if ( *(_DWORD *)(v30 + 148) == 4 )
          {
            if ( !v37 )
              goto LABEL_103;
            EventItemComponent__setPivotDataLabel(v37, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v37, 12, 0LL);
            if ( v36 == 4 )
            {
              v42 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v42 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v37, v42->static_fields->EVENT_GPOINT_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v37, 46.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v37, 48.0, -1.0, 0LL);
              v39 = 70;
LABEL_59:
              EventItemComponent__setWidthDataLabel(v37, v39, 0LL);
            }
            else if ( !v36 )
            {
              v38 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v38 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v37, v38->static_fields->EVENT_ITEM_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v37, 77.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v37, 35.0, -1.0, 0LL);
              v39 = 42;
              goto LABEL_59;
            }
            EventItemComponent__setFontSizeDataLabel(v37, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v37, 0.6, 0LL);
            v43 = TitleInfoEventItemComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v43 = TitleInfoEventItemComponent_TypeInfo;
            }
            EVENT_ITEM_SCALE_VS = v43->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_64;
          }
          v40 = TitleInfoEventItemComponent_TypeInfo;
          if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v40 = TitleInfoEventItemComponent_TypeInfo;
          }
          EVENT_ITEM_SCALE_VS = v40->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_64:
          GameObjectExtensions__SetLocalScale_31328080(v35, EVENT_ITEM_SCALE_VS, 0LL);
          klass = v67->klass;
          if ( !v67->klass )
            goto LABEL_103;
          if ( v37 )
          {
            Instance = sub_B2C41C(v37, *((_QWORD *)klass->_1.image + 8));
            if ( !Instance )
            {
              v64 = sub_B2C454(0LL);
              sub_B2C400(v64, 0LL);
            }
          }
          if ( v31 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_104;
          v51 = &klass->_1.image + (int)v31;
          v51[4] = v37;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v51 + 4),
            (System_Int32_array **)v37,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          if ( (int)++v31 > v32 )
            goto LABEL_69;
          break;
        default:
          goto LABEL_42;
      }
    }
  }
LABEL_69:
  Instance = (__int64)this->fields.itemGrid;
  if ( !Instance
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_103:
    sub_B2C434(Instance, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v31 < 3, 0LL);
  itemGrid = (UISprite_o *)this->fields.itemGrid;
  if ( v65 < 1 )
  {
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemGrid, 0, 0LL);
    if ( !v30 )
      goto LABEL_103;
  }
  else
  {
    v53 = TitleInfoEventItemComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v53 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v53->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v55 = System_Int32__ToString((int32_t)&v68, 0LL);
    v56 = System_String__Concat_44305532(TITLE_SP_ITEM_NAME_PREFIX, v55, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(itemGrid, v56, 0LL);
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemGrid, Instance & 1, 0LL);
    Instance = (__int64)this->fields.itemGrid;
    if ( !Instance )
      goto LABEL_103;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v30 )
      goto LABEL_103;
  }
  if ( *(_DWORD *)(v30 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_103;
    if ( !disp_types->max_length )
    {
LABEL_104:
      v63 = sub_B2C460(Instance);
      sub_B2C400(v63, 0LL);
    }
    v57 = disp_types->m_Items[1];
    if ( v57 )
    {
      if ( v57 != 4 )
      {
        p_mItemObjParents = &this->fields.mItemObjParents;
LABEL_97:
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        HIDWORD((*p_mItemObjParents)->m_Items[1]) = 0;
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        HIDWORD((*p_mItemObjParents)->m_Items[0]) = 0;
        Instance = (__int64)*p_mItemObjParents;
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 440LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 448LL));
        Instance = (__int64)this->fields.itemGrid;
        if ( !Instance )
          goto LABEL_103;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
        return;
      }
      p_mItemObjParents = &this->fields.mItemObjParents;
      Instance = (__int64)this->fields.mItemObjParents;
      if ( !Instance )
        goto LABEL_103;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_31325924(gameObject, 852.0, -26.0, 0LL);
      v60 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v61 = -1025114112;
    }
    else
    {
      p_mItemObjParents = &this->fields.mItemObjParents;
      Instance = (__int64)this->fields.mItemObjParents;
      if ( !Instance )
        goto LABEL_103;
      v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_31325924(v62, 865.0, -26.0, 0LL);
      v60 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v61 = -1029701632;
    }
    LODWORD(v60->m_Items[1]) = v61;
    goto LABEL_97;
  }
}


void __fastcall TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  TitleInfoEventItemComponent_o *v2; // x19
  TitleInfoEventItemComponent_c *klass; // x20
  const char *namespaze; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = this;
  if ( (byte_418B9F5 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B9F5 = 1;
  }
  klass = v2[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v5 = 0LL;
      do
      {
        if ( v5 >= (unsigned int)namespaze )
        {
          v8 = sub_B2C460(this);
          sub_B2C400(v8, 0LL);
        }
        v6 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v5);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v6 )
            sub_B2C434(this, v7);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        ++v5;
      }
      while ( (__int64)v5 < (int)namespaze );
    }
  }
}