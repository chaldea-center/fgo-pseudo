void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantEventBonusFilterItem_c *v2; // x8

  if ( (byte_4217521 & 1) == 0 )
  {
    sub_B0D8A4(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_4217521 = 1;
  }
  ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
  ServantEventBonusFilterItem_TypeInfo->static_fields->DETAIL_FONT_SIZE = 15;
  v2 = ServantEventBonusFilterItem_TypeInfo;
  ServantEventBonusFilterItem_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v2->static_fields->DETAIL_BASE_HEIGHT = 70;
  v2->static_fields->ADJUST_HEIGHT = 6;
}


void __fastcall ServantEventBonusFilterItem___ctor(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantEventBonusFilterItem__GetEventId(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B0D97C(this);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_B0D97C(this);
  return (float)baseSprite->fields.mHeight;
}


void __fastcall ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x22
  struct UILabel_o **p_nameLabel; // x24
  struct UILabel_o *detailLabel; // x23
  System_String_o *seriazlier; // x22
  ServantEventBonusFilterItem_c *v30; // x0
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v32; // x0
  System_String_o *v33; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x22
  struct UILabel_o *v35; // x22
  System_String_o *Detail; // x23
  ServantEventBonusFilterItem_c *v37; // x8
  UILabel_o *v38; // x22
  struct UILabel_o *v39; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v41; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v43; // w23
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v47; // x1

  if ( (byte_421751E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v14);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15);
    sub_B0D8A4(&ServantEventBonusFilterItem_TypeInfo, v16);
    byte_421751E = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)filterEntity,
    (System_String_array **)sortParam,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sortParam,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.entity;
  if ( !entity )
    goto LABEL_48;
  if ( EventBonusFilterEntity__CheckBonusFilterType((EventBonusFilterEntity_o *)entity, 5, 0LL) )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v26 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v26->fields.list, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v26->fields._MasterName_k__BackingField, 0LL);
    detailLabel = this->fields.detailLabel;
    seriazlier = (System_String_o *)v26->fields.seriazlier;
    v30 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v30 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v30->static_fields;
    v32 = detailLabel;
    v33 = seriazlier;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v34 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v34->fields._MasterKind_k__BackingField, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v34->fields._MasterName_k__BackingField, 0LL);
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__GetEntity(
                                                              (SkillLvMaster_o *)entity,
                                                              v34->fields._MasterKind_k__BackingField,
                                                              1,
                                                              0LL);
    if ( !entity )
      goto LABEL_48;
    v35 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v37 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v37 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v37->static_fields;
    v32 = v35;
    v33 = Detail;
  }
  WrapControlText__textAdjust(
    v32,
    v33,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  v38 = *p_nameLabel;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  }
  if ( !v38 )
    goto LABEL_48;
  UILabel__SetCondensedScale(v38, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  v39 = this->fields.detailLabel;
  if ( !v39 )
    goto LABEL_48;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v39->fields.mHeight;
  v41 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v41->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v41 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v41->DETAIL_BASE_HEIGHT;
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_48;
    v43 = v41->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, *(&entity[2].fields._MasterKind_k__BackingField + 1) + v43, 0LL);
    if ( v43 )
    {
      entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.button;
      if ( entity )
      {
        entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)entity,
                                                                  0LL);
        if ( this->fields.button )
        {
          v44 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v44, LocalPositionY - (float)v43, 0LL);
          goto LABEL_45;
        }
      }
LABEL_48:
      sub_B0D97C(entity);
    }
  }
LABEL_45:
  if ( !*p_entity )
    goto LABEL_48;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_48;
  this->fields.isHide = ListViewSort__IsHideSvtEventBonusFilter(
                          (ListViewSort_o *)entity,
                          (*p_entity)->fields.eventId,
                          (*p_entity)->fields.value,
                          0LL);
  ServantEventBonusFilterItem__UpdateButton(this, v47);
}


void __fastcall ServantEventBonusFilterItem__InitButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct EventBonusFilterEntity_o *entity; // x8

  if ( this->fields.sort && this->fields.entity )
  {
    this->fields.isHide = 0;
    ServantEventBonusFilterItem__UpdateButton(this, method);
    entity = this->fields.entity;
    if ( !entity || (sort = this->fields.sort) == 0LL )
      sub_B0D97C(sort);
    ListViewSort__SetSvtEventBonusFilter_32846648(
      sort,
      entity->fields.eventId,
      entity->fields.value,
      this->fields.isHide,
      0LL);
  }
}


void __fastcall ServantEventBonusFilterItem__OnClick(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewSort_o *sort; // x0
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_421751F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421751F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v3);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B0D97C(sort);
  ListViewSort__SetSvtEventBonusFilter_32846648(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0LL);
}


void __fastcall ServantEventBonusFilterItem__RefreshButtonState(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct EventBonusFilterEntity_o *entity; // x8
  bool IsHideSvtEventBonusFilter; // w1
  const MethodInfo *v6; // x2

  sort = this->fields.sort;
  if ( sort )
  {
    entity = this->fields.entity;
    if ( entity )
    {
      IsHideSvtEventBonusFilter = ListViewSort__IsHideSvtEventBonusFilter(
                                    sort,
                                    entity->fields.eventId,
                                    entity->fields.value,
                                    0LL);
      ServantEventBonusFilterItem__SetButtonState(this, IsHideSvtEventBonusFilter, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterItem__SetButtonState(
        ServantEventBonusFilterItem_o *this,
        bool isHideParam,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  struct EventBonusFilterEntity_o *entity; // x8

  this->fields.isHide = isHideParam;
  ServantEventBonusFilterItem__UpdateButton(this, (const MethodInfo *)isHideParam);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B0D97C(sort);
  ListViewSort__SetSvtEventBonusFilter_32846648(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0LL);
}


void __fastcall ServantEventBonusFilterItem__SetEnableFilterButton(
        ServantEventBonusFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_B0D97C(0LL);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterItem__UpdateButton(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *button; // x0
  _BOOL4 isHide; // w20
  UILabel_o *v10; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x19
  _DWORD *v13; // x8
  int v14; // s0
  int v15; // s1
  int v16; // s2
  int v17; // s3
  UILabel_o *buttonLabel; // x20
  __int64 v19; // x1
  _DWORD *v20; // x8

  if ( (byte_4217520 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11940/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v4);
    sub_B0D8A4(&StringLiteral_17022/*"btn_bg_off"*/, v5);
    sub_B0D8A4(&StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v6);
    sub_B0D8A4(&StringLiteral_17027/*"btn_bg_on"*/, v7);
    byte_4217520 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_29;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        button,
                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_29;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17027/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v12 = this->fields.buttonLabel;
      if ( !byte_4211436 )
      {
        sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
        byte_4211436 = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v12 )
      {
        v20 = *(_DWORD **)&button[7].fields.m_CachedPtr;
        v14 = v20[24];
        v15 = v20[25];
        v16 = v20[26];
        v17 = v20[27];
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B0D97C(button);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17022/*"btn_bg_off"*/, 0LL);
  v10 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v10 )
    goto LABEL_29;
  UILabel__set_text(v10, (System_String_o *)button, 0LL);
  v12 = this->fields.buttonLabel;
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    byte_4211435 = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_29;
  v13 = *(_DWORD **)&button[7].fields.m_CachedPtr;
  v14 = v13[20];
  v15 = v13[21];
  v16 = v13[22];
  v17 = v13[23];
LABEL_28:
  UILabel__set_effectColor(v12, *(UnityEngine_Color_o *)&v14, 0LL);
}