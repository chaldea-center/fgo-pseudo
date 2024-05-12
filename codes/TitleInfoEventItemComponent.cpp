void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventItemComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventItemComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438F72B & 1) == 0 )
  {
    sub_B775C4(&TitleInfoEventItemComponent_TypeInfo);
    sub_B775C4(&StringLiteral_20025/*"img_shopbg06"*/);
    sub_B775C4(&StringLiteral_20024/*"img_shopbg05"*/);
    sub_B775C4(&StringLiteral_18894/*"event_item_title_"*/);
    byte_438F72B = 1;
  }
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_DEFAULT = 0.75;
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_VS = 1.0;
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18894/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_18894/*"event_item_title_"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20024/*"img_shopbg05"*/;
  v9->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20024/*"img_shopbg05"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->EVENT_ITEM_VS_BASE_SP_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_20025/*"img_shopbg06"*/;
  v17->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_20025/*"img_shopbg06"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->EVENT_GPOINT_VS_BASE_SP_NAME, v18, v19, v20, v21, v22, v23, v24);
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
  if ( (byte_438F729 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F729 = 1;
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
          UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
        }
        v27 = v10->klass;
        if ( !v10->klass )
          goto LABEL_22;
        if ( v16 >= LODWORD(v27->_1.namespaze) )
          break;
        *(void **)((char *)&v27->_1.image + v15) = 0LL;
        sub_B77560((BattleServantConfConponent_o *)((char *)v27 + v15), 0LL, v19, v20, v21, v22, v23, v24);
        if ( v14 - 3 >= v13 )
          goto LABEL_23;
        v9 = v10->klass;
        ++v14;
        v15 += 8LL;
        if ( !v10->klass )
LABEL_22:
          sub_B7769C(this, v18);
      }
      v28 = sub_B776C8(this);
      sub_B77668(v28, 0LL);
    }
LABEL_23:
    v10->klass = 0LL;
    sub_B77560(v10, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 Instance; // x0
  __int64 v11; // x1
  struct EventItemComponent_array *mEventItemComponents; // x8
  TitleInfoEventItemComponent_c *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventItemComponent_array *v20; // x8
  signed int max_length; // w8
  __int64 v22; // x22
  il2cpp_array_size_t v23; // w28
  signed int v24; // w21
  UnityEngine_UI_Dropdown_DropdownItem_o *mStrSp; // x26
  struct EventItemComponent_array *v26; // x8
  UnityEngine_GameObject_o *v27; // x27
  int32_t v28; // w24
  EventItemComponent_o *v29; // x26
  TitleInfoEventItemComponent_c *v30; // x0
  int32_t v31; // w1
  TitleInfoEventItemComponent_c *v32; // x0
  float EVENT_ITEM_SCALE_VS; // s0
  TitleInfoEventItemComponent_c *v34; // x0
  TitleInfoEventItemComponent_c *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  TitleInfoEventItemComponent_c *klass; // x24
  void **v43; // x0
  UISprite_o *itemGrid; // x23
  TitleInfoEventItemComponent_c *v45; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v47; // x0
  System_String_o *v48; // x21
  int32_t v49; // w8
  struct UnityEngine_GameObject_array **p_mItemObjParents; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_array *v52; // x8
  int v53; // w9
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // [xsp+8h] [xbp-98h]
  TitleInfoEventItemComponent_o *v59; // [xsp+10h] [xbp-90h]
  int32_t v60; // [xsp+1Ch] [xbp-84h] BYREF

  v60 = titleImageId;
  if ( (byte_438F728 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&EventItemComponent___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TitleInfoEventItemComponent_TypeInfo);
    byte_438F728 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mEventItemComponents = this->fields.mEventItemComponents;
  if ( !mEventItemComponents )
    goto LABEL_103;
  v13 = (TitleInfoEventItemComponent_c *)sub_B775DC(EventItemComponent___TypeInfo, mEventItemComponents->max_length);
  this[1].klass = v13;
  v59 = this + 1;
  sub_B77560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v20 = this->fields.mEventItemComponents;
  if ( !v20 || !item_ids )
    goto LABEL_103;
  max_length = v20->max_length;
  v22 = Instance;
  v23 = 0;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v24 = max_length - 1;
  else
    v24 = item_ids->max_length - 1;
  v57 = titleImageId;
  if ( (v24 & 0x80000000) == 0 )
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
                            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v26 = this->fields.mEventItemComponents;
      if ( !v26 )
        goto LABEL_103;
      if ( v23 >= v26->max_length )
        goto LABEL_104;
      v27 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_32813688(
        (UnityEngine_GameObject_o *)Instance,
        (UnityEngine_GameObject_o *)v26->m_Items[v23],
        0LL);
      if ( !v27 )
        goto LABEL_103;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v27,
                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_103;
      if ( v23 >= disp_types->max_length )
        goto LABEL_104;
      v28 = disp_types->m_Items[v23 + 1];
      v29 = (EventItemComponent_o *)Instance;
      switch ( v28 )
      {
        case 0:
          if ( v23 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v23 + 1], 0LL);
          if ( !v22 )
            goto LABEL_103;
          goto LABEL_43;
        case 1:
          if ( v23 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v23 + 1], 0LL);
          if ( !v22 )
            goto LABEL_103;
          goto LABEL_43;
        case 2:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          if ( !v22 )
            goto LABEL_103;
          goto LABEL_43;
        case 3:
          if ( v23 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v23 + 1], 0LL);
          if ( !v22 )
            goto LABEL_103;
          goto LABEL_43;
        case 4:
          if ( v23 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v23 + 1], 0LL);
          if ( !v22 )
            goto LABEL_103;
          goto LABEL_43;
        case 5:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
LABEL_42:
          if ( !v22 )
            goto LABEL_103;
LABEL_43:
          if ( *(_DWORD *)(v22 + 148) == 4 )
          {
            if ( !v29 )
              goto LABEL_103;
            EventItemComponent__setPivotDataLabel(v29, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v29, 12, 0LL);
            if ( v28 == 4 )
            {
              v34 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v34 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v29, v34->static_fields->EVENT_GPOINT_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v29, 46.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v29, 48.0, -1.0, 0LL);
              v31 = 70;
LABEL_59:
              EventItemComponent__setWidthDataLabel(v29, v31, 0LL);
            }
            else if ( !v28 )
            {
              v30 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v30 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v29, v30->static_fields->EVENT_ITEM_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v29, 77.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v29, 35.0, -1.0, 0LL);
              v31 = 42;
              goto LABEL_59;
            }
            EventItemComponent__setFontSizeDataLabel(v29, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v29, 0.6, 0LL);
            v35 = TitleInfoEventItemComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v35 = TitleInfoEventItemComponent_TypeInfo;
            }
            EVENT_ITEM_SCALE_VS = v35->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_64;
          }
          v32 = TitleInfoEventItemComponent_TypeInfo;
          if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v32 = TitleInfoEventItemComponent_TypeInfo;
          }
          EVENT_ITEM_SCALE_VS = v32->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_64:
          GameObjectExtensions__SetLocalScale_32809816(v27, EVENT_ITEM_SCALE_VS, 0LL);
          klass = v59->klass;
          if ( !v59->klass )
            goto LABEL_103;
          if ( v29 )
          {
            Instance = sub_B77684(v29, *((_QWORD *)klass->_1.image + 8));
            if ( !Instance )
            {
              v56 = sub_B776BC(0LL);
              sub_B77668(v56, 0LL);
            }
          }
          if ( v23 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_104;
          v43 = &klass->_1.image + (int)v23;
          v43[4] = v29;
          sub_B77560(
            (BattleServantConfConponent_o *)(v43 + 4),
            (System_Int32_array **)v29,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
          if ( (int)++v23 > v24 )
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
    sub_B7769C(Instance, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v23 < 3, 0LL);
  itemGrid = (UISprite_o *)this->fields.itemGrid;
  if ( v57 < 1 )
  {
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemGrid, 0, 0LL);
    if ( !v22 )
      goto LABEL_103;
  }
  else
  {
    v45 = TitleInfoEventItemComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v45 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v45->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v47 = System_Int32__ToString((int32_t)&v60, 0LL);
    v48 = System_String__Concat_44901936(TITLE_SP_ITEM_NAME_PREFIX, v47, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(itemGrid, v48, 0LL);
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemGrid, Instance & 1, 0LL);
    Instance = (__int64)this->fields.itemGrid;
    if ( !Instance )
      goto LABEL_103;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v22 )
      goto LABEL_103;
  }
  if ( *(_DWORD *)(v22 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_103;
    if ( !disp_types->max_length )
    {
LABEL_104:
      v55 = sub_B776C8(Instance);
      sub_B77668(v55, 0LL);
    }
    v49 = disp_types->m_Items[1];
    if ( v49 )
    {
      if ( v49 != 4 )
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
      GameObjectExtensions__SetLocalPosition_32807660(gameObject, 852.0, -26.0, 0LL);
      v52 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v53 = -1025114112;
    }
    else
    {
      p_mItemObjParents = &this->fields.mItemObjParents;
      Instance = (__int64)this->fields.mItemObjParents;
      if ( !Instance )
        goto LABEL_103;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_32807660(v54, 865.0, -26.0, 0LL);
      v52 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v53 = -1029701632;
    }
    LODWORD(v52->m_Items[1]) = v53;
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
  if ( (byte_438F72A & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F72A = 1;
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
          v8 = sub_B776C8(this);
          sub_B77668(v8, 0LL);
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
            sub_B7769C(this, v7);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v6, 0LL);
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        ++v5;
      }
      while ( (__int64)v5 < (int)namespaze );
    }
  }
}