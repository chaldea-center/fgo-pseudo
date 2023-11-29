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

  if ( (byte_40FDFBC & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventItemComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19553, v8);
    sub_B16FFC(&StringLiteral_19552, v9);
    sub_B16FFC(&StringLiteral_18456, v10);
    byte_40FDFBC = 1;
  }
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_DEFAULT = 0.75;
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_VS = 1.0;
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18456;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_18456;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_19552;
  v13->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19552;
  sub_B16F98((BattleServantConfConponent_o *)&v13->EVENT_ITEM_VS_BASE_SP_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_19553;
  v21->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19553;
  sub_B16F98((BattleServantConfConponent_o *)&v21->EVENT_GPOINT_VS_BASE_SP_NAME, v22, v23, v24, v25, v26, v27, v28);
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
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_c *v23; // x8
  UnityEngine_Component_o *v24; // x0
  UnityEngine_Object_o *gameObject; // x20
  BattleServantConfConponent_c *v26; // x8

  v8 = this;
  if ( (byte_40FDFBA & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDFBA = 1;
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
          v23 = v10->klass;
          if ( !v10->klass )
            goto LABEL_22;
          if ( v16 >= LODWORD(v23->_1.namespaze) )
            break;
          v24 = (UnityEngine_Component_o *)*((_QWORD *)&v23->_1.image + v14);
          if ( !v24 )
            goto LABEL_22;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        }
        v26 = v10->klass;
        if ( !v10->klass )
          goto LABEL_22;
        if ( v16 >= LODWORD(v26->_1.namespaze) )
          break;
        *(void **)((char *)&v26->_1.image + v15) = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v26 + v15), 0LL, v2, v18, v19, v20, v21, v22);
        if ( v14 - 3 >= v13 )
          goto LABEL_23;
        v9 = v10->klass;
        ++v14;
        v15 += 8LL;
        if ( !v10->klass )
LABEL_22:
          sub_B170D4();
      }
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
LABEL_23:
    v10->klass = 0LL;
    sub_B16F98(v10, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v18; // x2
  struct EventItemComponent_array *mEventItemComponents; // x8
  TitleInfoEventItemComponent_c *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  struct EventItemComponent_array *v30; // x8
  signed int max_length; // w8
  WarEntity_o *v32; // x22
  il2cpp_array_size_t v33; // w28
  signed int v34; // w21
  UnityEngine_UI_Dropdown_DropdownItem_o *mStrSp; // x26
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  struct EventItemComponent_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x27
  int32_t v41; // w24
  EventItemComponent_o *v42; // x26
  TitleInfoEventItemComponent_c *v43; // x0
  int32_t v44; // w1
  TitleInfoEventItemComponent_c *v45; // x0
  float EVENT_ITEM_SCALE_VS; // s0
  TitleInfoEventItemComponent_c *v47; // x0
  TitleInfoEventItemComponent_c *v48; // x0
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  TitleInfoEventItemComponent_c *klass; // x24
  void **v55; // x0
  UnityEngine_Component_o *itemGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v58; // x23
  TitleInfoEventItemComponent_c *v59; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v61; // x0
  System_String_o *v62; // x21
  bool v63; // w0
  struct UIGrid_o *v64; // x0
  int32_t v65; // w8
  UnityEngine_Component_o *mItemObjParents; // x0
  struct UnityEngine_GameObject_array **p_mItemObjParents; // x20
  UnityEngine_GameObject_o *v68; // x0
  struct UnityEngine_GameObject_array *v69; // x8
  int v70; // w9
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Behaviour_o *v73; // x0
  int32_t v74; // [xsp+8h] [xbp-98h]
  TitleInfoEventItemComponent_o *v76; // [xsp+10h] [xbp-90h]
  int32_t v77; // [xsp+1Ch] [xbp-84h] BYREF

  v77 = titleImageId;
  if ( (byte_40FDFB9 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item_ids);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_B16FFC(&EventItemComponent___TypeInfo, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&TitleInfoEventItemComponent_TypeInfo, v17);
    byte_40FDFB9 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mEventItemComponents = this->fields.mEventItemComponents;
  if ( !mEventItemComponents )
    goto LABEL_103;
  v20 = (TitleInfoEventItemComponent_c *)sub_B17014(
                                           EventItemComponent___TypeInfo,
                                           mEventItemComponents->max_length,
                                           v18);
  this[1].klass = v20;
  v76 = this + 1;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_103;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v30 = this->fields.mEventItemComponents;
  if ( !v30 || !item_ids )
    goto LABEL_103;
  max_length = v30->max_length;
  v32 = Entity;
  v33 = 0;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v34 = max_length - 1;
  else
    v34 = item_ids->max_length - 1;
  v74 = titleImageId;
  if ( (v34 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      mStrSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.mStrSp;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                              mStrSp,
                                                              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v39 = this->fields.mEventItemComponents;
      if ( !v39 )
        goto LABEL_103;
      if ( v33 >= v39->max_length )
        goto LABEL_104;
      v40 = Component_srcLineSprite;
      GameObjectExtensions__SafeSetParent_27425996(
        Component_srcLineSprite,
        (UnityEngine_GameObject_o *)v39->m_Items[v33],
        0LL);
      if ( !v40 )
        goto LABEL_103;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v40,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_103;
      if ( v33 >= disp_types->max_length )
        goto LABEL_104;
      v41 = disp_types->m_Items[v33 + 1];
      v42 = (EventItemComponent_o *)Component_srcLineSprite;
      switch ( v41 )
      {
        case 0:
          if ( v33 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__Set((EventItemComponent_o *)Component_srcLineSprite, item_ids->m_Items[v33 + 1], 0LL);
          if ( !v32 )
            goto LABEL_103;
          goto LABEL_43;
        case 1:
          if ( v33 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__SetPointEvent(
            (EventItemComponent_o *)Component_srcLineSprite,
            eventId,
            item_ids->m_Items[v33 + 1],
            0LL);
          if ( !v32 )
            goto LABEL_103;
          goto LABEL_43;
        case 2:
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Component_srcLineSprite, eventId, 0LL);
          if ( !v32 )
            goto LABEL_103;
          goto LABEL_43;
        case 3:
          if ( v33 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__SetRaidEvent(
            (EventItemComponent_o *)Component_srcLineSprite,
            eventId,
            item_ids->m_Items[v33 + 1],
            0LL);
          if ( !v32 )
            goto LABEL_103;
          goto LABEL_43;
        case 4:
          if ( v33 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__SetGroupPointEvent(
            (EventItemComponent_o *)Component_srcLineSprite,
            item_ids->m_Items[v33 + 1],
            0LL);
          if ( !v32 )
            goto LABEL_103;
          goto LABEL_43;
        case 5:
          if ( !Component_srcLineSprite )
            goto LABEL_103;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Component_srcLineSprite, eventId, 0LL);
LABEL_42:
          if ( !v32 )
            goto LABEL_103;
LABEL_43:
          if ( *(&v32[1].fields.id + 1) == 4 )
          {
            if ( !v42 )
              goto LABEL_103;
            EventItemComponent__setPivotDataLabel(v42, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v42, 12, 0LL);
            if ( v41 == 4 )
            {
              v47 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v47 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v42, v47->static_fields->EVENT_GPOINT_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v42, 46.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v42, 48.0, -1.0, 0LL);
              v44 = 70;
LABEL_59:
              EventItemComponent__setWidthDataLabel(v42, v44, 0LL);
            }
            else if ( !v41 )
            {
              v43 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v43 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v42, v43->static_fields->EVENT_ITEM_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v42, 77.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v42, 35.0, -1.0, 0LL);
              v44 = 42;
              goto LABEL_59;
            }
            EventItemComponent__setFontSizeDataLabel(v42, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v42, 0.6, 0LL);
            v48 = TitleInfoEventItemComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v48 = TitleInfoEventItemComponent_TypeInfo;
            }
            EVENT_ITEM_SCALE_VS = v48->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_64;
          }
          v45 = TitleInfoEventItemComponent_TypeInfo;
          if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v45 = TitleInfoEventItemComponent_TypeInfo;
          }
          EVENT_ITEM_SCALE_VS = v45->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_64:
          GameObjectExtensions__SetLocalScale_27422124(v40, EVENT_ITEM_SCALE_VS, 0LL);
          klass = v76->klass;
          if ( !v76->klass )
            goto LABEL_103;
          if ( v42 )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)sub_B170BC(v42, *((_QWORD *)klass->_1.image + 8));
            if ( !Component_srcLineSprite )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( v33 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_104;
          v55 = &klass->_1.image + (int)v33;
          v55[4] = v42;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v55 + 4),
            (System_Int32_array **)v42,
            v38,
            v49,
            v50,
            v51,
            v52,
            v53);
          if ( (int)++v33 > v34 )
            goto LABEL_69;
          break;
        default:
          goto LABEL_42;
      }
    }
  }
LABEL_69:
  itemGrid = (UnityEngine_Component_o *)this->fields.itemGrid;
  if ( !itemGrid || (gameObject = UnityEngine_Component__get_gameObject(itemGrid, 0LL)) == 0LL )
LABEL_103:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, (int)v33 < 3, 0LL);
  v58 = (UISprite_o *)this->fields.itemGrid;
  if ( v74 < 1 )
  {
    if ( !v58 )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemGrid, 0, 0LL);
    if ( !v32 )
      goto LABEL_103;
  }
  else
  {
    v59 = TitleInfoEventItemComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v59 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v59->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v61 = System_Int32__ToString((int32_t)&v77, 0LL);
    v62 = System_String__Concat_43743732(TITLE_SP_ITEM_NAME_PREFIX, v61, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v63 = AtlasManager__SetEventUI(v58, v62, 0LL);
    if ( !v58 )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v58, v63, 0LL);
    v64 = this->fields.itemGrid;
    if ( !v64 )
      goto LABEL_103;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v64->klass[1].vtable._4_Init.method)(
                                                            v64,
                                                            v64->klass[1].vtable._5_Start.methodPtr);
    if ( !v32 )
      goto LABEL_103;
  }
  if ( *(&v32[1].fields.id + 1) == 4 )
  {
    if ( !disp_types )
      goto LABEL_103;
    if ( !disp_types->max_length )
    {
LABEL_104:
      sub_B17100(Component_srcLineSprite, v37, v38);
      sub_B170A0();
    }
    v65 = disp_types->m_Items[1];
    if ( v65 )
    {
      if ( v65 != 4 )
      {
        p_mItemObjParents = &this->fields.mItemObjParents;
LABEL_97:
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        HIDWORD((*p_mItemObjParents)->m_Items[1]) = 0;
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        HIDWORD((*p_mItemObjParents)->m_Items[0]) = 0;
        if ( !*p_mItemObjParents )
          goto LABEL_103;
        ((void (__fastcall *)(struct UnityEngine_GameObject_array *, Il2CppMethodPointer))(*p_mItemObjParents)->obj.klass->vtable[8].method)(
          *p_mItemObjParents,
          (*p_mItemObjParents)->obj.klass->vtable[9].methodPtr);
        v73 = (UnityEngine_Behaviour_o *)this->fields.itemGrid;
        if ( !v73 )
          goto LABEL_103;
        UnityEngine_Behaviour__set_enabled(v73, 0, 0LL);
        return;
      }
      p_mItemObjParents = &this->fields.mItemObjParents;
      mItemObjParents = (UnityEngine_Component_o *)this->fields.mItemObjParents;
      if ( !mItemObjParents )
        goto LABEL_103;
      v68 = UnityEngine_Component__get_gameObject(mItemObjParents, 0LL);
      GameObjectExtensions__SetLocalPosition_27419968(v68, 852.0, -26.0, 0LL);
      v69 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v70 = -1025114112;
    }
    else
    {
      p_mItemObjParents = &this->fields.mItemObjParents;
      v71 = (UnityEngine_Component_o *)this->fields.mItemObjParents;
      if ( !v71 )
        goto LABEL_103;
      v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
      GameObjectExtensions__SetLocalPosition_27419968(v72, 865.0, -26.0, 0LL);
      v69 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v70 = -1029701632;
    }
    LODWORD(v69->m_Items[1]) = v70;
    goto LABEL_97;
  }
}


void __fastcall TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventItemComponent_o *v3; // x19
  TitleInfoEventItemComponent_c *klass; // x20
  const char *namespaze; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_40FDFBB & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDFBB = 1;
  }
  klass = v3[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)namespaze )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v7 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v6);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v7 )
            sub_B170D4();
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v7, 0LL);
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        ++v6;
      }
      while ( (__int64)v6 < (int)namespaze );
    }
  }
}