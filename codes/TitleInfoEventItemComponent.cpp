void __fastcall TitleInfoEventItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct TitleInfoEventItemComponent_StaticFields *static_fields; // x0
  System_Int32_array **v18; // x1
  struct TitleInfoEventItemComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoEventItemComponent_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42ECBE3 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventItemComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19876/*"img_shopbg06"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19875/*"img_shopbg05"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18756/*"event_item_title_"*/, v14, v15, v16);
    byte_42ECBE3 = 1;
  }
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_DEFAULT = 0.75;
  TitleInfoEventItemComponent_TypeInfo->static_fields->EVENT_ITEM_SCALE_VS = 1.0;
  static_fields = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18756/*"event_item_title_"*/;
  static_fields->TITLE_SP_ITEM_NAME_PREFIX = (struct System_String_o *)StringLiteral_18756/*"event_item_title_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->TITLE_SP_ITEM_NAME_PREFIX, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19875/*"img_shopbg05"*/;
  v19->EVENT_ITEM_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19875/*"img_shopbg05"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->EVENT_ITEM_VS_BASE_SP_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoEventItemComponent_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19876/*"img_shopbg06"*/;
  v27->EVENT_GPOINT_VS_BASE_SP_NAME = (struct System_String_o *)StringLiteral_19876/*"img_shopbg06"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->EVENT_GPOINT_VS_BASE_SP_NAME, v28, v29, v30, v31, v32, v33, v34);
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
  if ( (byte_42ECBE1 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ECBE1 = 1;
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
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        }
        v27 = v10->klass;
        if ( !v10->klass )
          goto LABEL_22;
        if ( v16 >= LODWORD(v27->_1.namespaze) )
          break;
        *(void **)((char *)&v27->_1.image + v15) = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v27 + v15), 0LL, v19, v20, v21, v22, v23, v24);
        if ( v14 - 3 >= v13 )
          goto LABEL_23;
        v9 = v10->klass;
        ++v14;
        v15 += 8LL;
        if ( !v10->klass )
LABEL_22:
          sub_B5D69C(this, v18);
      }
      v28 = sub_B5D6C8(this);
      sub_B5D668(v28, 0LL);
    }
LABEL_23:
    v10->klass = 0LL;
    sub_B5D560(v10, 0LL, v2, v3, v4, v5, v6, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventItemComponent__Setup(
        TitleInfoEventItemComponent_o *this,
        System_Int32_array *item_ids,
        TitleInfoEventItemComponent_DispType_array *disp_types,
        int32_t eventId,
        int32_t titleImageId,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  __int64 Instance; // x0
  __int64 v35; // x1
  struct EventItemComponent_array *mEventItemComponents; // x8
  TitleInfoEventItemComponent_c *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventItemComponent_array *v44; // x8
  signed int max_length; // w8
  __int64 v46; // x22
  il2cpp_array_size_t v47; // w28
  signed int v48; // w21
  UnityEngine_UI_Dropdown_DropdownItem_o *mStrSp; // x26
  struct EventItemComponent_array *v50; // x8
  UnityEngine_GameObject_o *v51; // x27
  int32_t v52; // w24
  EventItemComponent_o *v53; // x26
  TitleInfoEventItemComponent_c *v54; // x0
  int32_t v55; // w1
  TitleInfoEventItemComponent_c *v56; // x0
  float EVENT_ITEM_SCALE_VS; // s0
  TitleInfoEventItemComponent_c *v58; // x0
  TitleInfoEventItemComponent_c *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  TitleInfoEventItemComponent_c *klass; // x24
  void **v67; // x0
  UISprite_o *itemGrid; // x23
  TitleInfoEventItemComponent_c *v69; // x0
  System_String_o *TITLE_SP_ITEM_NAME_PREFIX; // x21
  System_String_o *v71; // x0
  System_String_o *v72; // x21
  int32_t v73; // w8
  struct UnityEngine_GameObject_array **p_mItemObjParents; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_array *v76; // x8
  int v77; // w9
  UnityEngine_GameObject_o *v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  int32_t v81; // [xsp+8h] [xbp-98h]
  TitleInfoEventItemComponent_o *v83; // [xsp+10h] [xbp-90h]
  int32_t v84; // [xsp+1Ch] [xbp-84h] BYREF

  v84 = titleImageId;
  if ( (byte_42ECBE0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item_ids, (_DWORD)disp_types, *(_QWORD *)&eventId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&EventItemComponent___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventItemComponent___, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&TitleInfoEventItemComponent_TypeInfo, v31, v32, v33);
    byte_42ECBE0 = 1;
  }
  TitleInfoEventItemComponent__Destroy(this, (const MethodInfo *)item_ids);
  mEventItemComponents = this->fields.mEventItemComponents;
  if ( !mEventItemComponents )
    goto LABEL_103;
  v37 = (TitleInfoEventItemComponent_c *)sub_B5D5DC(EventItemComponent___TypeInfo, mEventItemComponents->max_length);
  this[1].klass = v37;
  v83 = this + 1;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_103;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        eventId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  v44 = this->fields.mEventItemComponents;
  if ( !v44 || !item_ids )
    goto LABEL_103;
  max_length = v44->max_length;
  v46 = Instance;
  v47 = 0;
  if ( (signed int)(item_ids->max_length - 1) >= max_length )
    v48 = max_length - 1;
  else
    v48 = item_ids->max_length - 1;
  v81 = titleImageId;
  if ( (v48 & 0x80000000) == 0 )
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
                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      v50 = this->fields.mEventItemComponents;
      if ( !v50 )
        goto LABEL_103;
      if ( v47 >= v50->max_length )
        goto LABEL_104;
      v51 = (UnityEngine_GameObject_o *)Instance;
      GameObjectExtensions__SafeSetParent_32436524(
        (UnityEngine_GameObject_o *)Instance,
        (UnityEngine_GameObject_o *)v50->m_Items[v47],
        0LL);
      if ( !v51 )
        goto LABEL_103;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v51,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventItemComponent___);
      if ( !disp_types )
        goto LABEL_103;
      if ( v47 >= disp_types->max_length )
        goto LABEL_104;
      v52 = disp_types->m_Items[v47 + 1];
      v53 = (EventItemComponent_o *)Instance;
      switch ( v52 )
      {
        case 0:
          if ( v47 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__Set((EventItemComponent_o *)Instance, item_ids->m_Items[v47 + 1], 0LL);
          if ( !v46 )
            goto LABEL_103;
          goto LABEL_43;
        case 1:
          if ( v47 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetPointEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v47 + 1], 0LL);
          if ( !v46 )
            goto LABEL_103;
          goto LABEL_43;
        case 2:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
          if ( !v46 )
            goto LABEL_103;
          goto LABEL_43;
        case 3:
          if ( v47 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetRaidEvent((EventItemComponent_o *)Instance, eventId, item_ids->m_Items[v47 + 1], 0LL);
          if ( !v46 )
            goto LABEL_103;
          goto LABEL_43;
        case 4:
          if ( v47 >= item_ids->max_length )
            goto LABEL_104;
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetGroupPointEvent((EventItemComponent_o *)Instance, item_ids->m_Items[v47 + 1], 0LL);
          if ( !v46 )
            goto LABEL_103;
          goto LABEL_43;
        case 5:
          if ( !Instance )
            goto LABEL_103;
          EventItemComponent__SetDailyMissionEvent((EventItemComponent_o *)Instance, eventId, 0LL);
LABEL_42:
          if ( !v46 )
            goto LABEL_103;
LABEL_43:
          if ( *(_DWORD *)(v46 + 148) == 4 )
          {
            if ( !v53 )
              goto LABEL_103;
            EventItemComponent__setPivotDataLabel(v53, 5, 0LL);
            EventItemComponent__setHeightDataLabel(v53, 12, 0LL);
            if ( v52 == 4 )
            {
              v58 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v58 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v53, v58->static_fields->EVENT_GPOINT_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v53, 46.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v53, 48.0, -1.0, 0LL);
              v55 = 70;
LABEL_59:
              EventItemComponent__setWidthDataLabel(v53, v55, 0LL);
            }
            else if ( !v52 )
            {
              v54 = TitleInfoEventItemComponent_TypeInfo;
              if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
                v54 = TitleInfoEventItemComponent_TypeInfo;
              }
              EventItemComponent__setBaseSpriteDownloadAtlas(v53, v54->static_fields->EVENT_ITEM_VS_BASE_SP_NAME, 0LL);
              EventItemComponent__setLocalPositionXItemIcon(v53, 77.0, 0LL);
              EventItemComponent__setLocalPositionDataLabel(v53, 35.0, -1.0, 0LL);
              v55 = 42;
              goto LABEL_59;
            }
            EventItemComponent__setFontSizeDataLabel(v53, 11, 0LL);
            EventItemComponent__setScaleItemIcon(v53, 0.6, 0LL);
            v59 = TitleInfoEventItemComponent_TypeInfo;
            if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
              v59 = TitleInfoEventItemComponent_TypeInfo;
            }
            EVENT_ITEM_SCALE_VS = v59->static_fields->EVENT_ITEM_SCALE_VS;
            goto LABEL_64;
          }
          v56 = TitleInfoEventItemComponent_TypeInfo;
          if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
            v56 = TitleInfoEventItemComponent_TypeInfo;
          }
          EVENT_ITEM_SCALE_VS = v56->static_fields->EVENT_ITEM_SCALE_DEFAULT;
LABEL_64:
          GameObjectExtensions__SetLocalScale_32432652(v51, EVENT_ITEM_SCALE_VS, 0LL);
          klass = v83->klass;
          if ( !v83->klass )
            goto LABEL_103;
          if ( v53 )
          {
            Instance = sub_B5D684(v53, *((_QWORD *)klass->_1.image + 8));
            if ( !Instance )
            {
              v80 = sub_B5D6BC(0LL);
              sub_B5D668(v80, 0LL);
            }
          }
          if ( v47 >= LODWORD(klass->_1.namespaze) )
            goto LABEL_104;
          v67 = &klass->_1.image + (int)v47;
          v67[4] = v53;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v67 + 4),
            (System_Int32_array **)v53,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65);
          if ( (int)++v47 > v48 )
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
    sub_B5D69C(Instance, v35);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (int)v47 < 3, 0LL);
  itemGrid = (UISprite_o *)this->fields.itemGrid;
  if ( v81 < 1 )
  {
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.itemGrid, 0, 0LL);
    if ( !v46 )
      goto LABEL_103;
  }
  else
  {
    v69 = TitleInfoEventItemComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventItemComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventItemComponent_TypeInfo);
      v69 = TitleInfoEventItemComponent_TypeInfo;
    }
    TITLE_SP_ITEM_NAME_PREFIX = v69->static_fields->TITLE_SP_ITEM_NAME_PREFIX;
    v71 = System_Int32__ToString((int32_t)&v84, 0LL);
    v72 = System_String__Concat_44577788(TITLE_SP_ITEM_NAME_PREFIX, v71, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(itemGrid, v72, 0LL);
    if ( !itemGrid )
      goto LABEL_103;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)itemGrid, Instance & 1, 0LL);
    Instance = (__int64)this->fields.itemGrid;
    if ( !Instance )
      goto LABEL_103;
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
                 Instance,
                 *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    if ( !v46 )
      goto LABEL_103;
  }
  if ( *(_DWORD *)(v46 + 148) == 4 )
  {
    if ( !disp_types )
      goto LABEL_103;
    if ( !disp_types->max_length )
    {
LABEL_104:
      v79 = sub_B5D6C8(Instance);
      sub_B5D668(v79, 0LL);
    }
    v73 = disp_types->m_Items[1];
    if ( v73 )
    {
      if ( v73 != 4 )
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
      GameObjectExtensions__SetLocalPosition_32430496(gameObject, 852.0, -26.0, 0LL);
      v76 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v77 = -1025114112;
    }
    else
    {
      p_mItemObjParents = &this->fields.mItemObjParents;
      Instance = (__int64)this->fields.mItemObjParents;
      if ( !Instance )
        goto LABEL_103;
      v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      GameObjectExtensions__SetLocalPosition_32430496(v78, 865.0, -26.0, 0LL);
      v76 = *p_mItemObjParents;
      if ( !*p_mItemObjParents )
        goto LABEL_103;
      v77 = -1029701632;
    }
    LODWORD(v76->m_Items[1]) = v77;
    goto LABEL_97;
  }
}


void __fastcall TitleInfoEventItemComponent__UpdateDisp(TitleInfoEventItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventItemComponent_o *v4; // x19
  TitleInfoEventItemComponent_c *klass; // x20
  const char *namespaze; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42ECBE2 & 1) == 0 )
  {
    this = (TitleInfoEventItemComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECBE2 = 1;
  }
  klass = v4[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( (int)namespaze >= 1 )
    {
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)namespaze )
        {
          v10 = sub_B5D6C8(this);
          sub_B5D668(v10, 0LL);
        }
        v8 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v7);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventItemComponent_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v8 )
            sub_B5D69C(this, v9);
          EventItemComponent__UpdateDisp((EventItemComponent_o *)v8, 0LL);
        }
        LODWORD(namespaze) = klass->_1.namespaze;
        ++v7;
      }
      while ( (__int64)v7 < (int)namespaze );
    }
  }
}