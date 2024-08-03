void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8

  if ( (byte_49F776E & 1) == 0 )
  {
    sub_1B640C8(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_49F776E = 1;
  }
  static_fields = ServantEventBonusFilterItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LABEL_MAX_WIDTH = xmmword_BA4340;
  static_fields->ADJUST_HEIGHT = 6;
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
    sub_1B64324(this);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1B64324(this);
  return (float)baseSprite->fields.mHeight;
}


void __fastcall ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  EventBonusFilterEntity_o *entity; // x0
  bool v16; // w22
  EventBonusFilterEntity_o *v17; // x22
  ServantEventBonusFilterItem_c *v18; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *v20; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v22; // x0
  System_String_o *v23; // x1
  EventBonusFilterEntity_o *v24; // x22
  struct UILabel_o *v25; // x22
  System_String_o *Detail; // x0
  ServantEventBonusFilterItem_c *v27; // x8
  System_String_o *v28; // x23
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v30; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v32; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v34; // w23
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v38; // x1

  if ( (byte_49F776B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B640C8(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v11);
    sub_1B640C8(&ServantEventBonusFilterItem_TypeInfo, v12);
    byte_49F776B = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1B6406C(&this->fields.entity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1B6406C(&this->fields.sort);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_40;
  v16 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v16 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v17 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v17[1].klass, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v17->fields.value, 0LL);
    v18 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    v20 = *(System_String_o **)&v17[1].fields.eventId;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v18 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v18->static_fields;
    v22 = detailLabel;
    v23 = v20;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v24 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v24->fields.eventId, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v24->fields.value, 0LL);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)entity,
                                           v24->fields.eventId,
                                           1,
                                           0LL);
    if ( !entity )
      goto LABEL_40;
    v25 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v27 = ServantEventBonusFilterItem_TypeInfo;
    v28 = Detail;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v27 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v27->static_fields;
    v22 = v25;
    v23 = v28;
  }
  WrapControlText__textAdjust(
    v22,
    v23,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    entity = (EventBonusFilterEntity_o *)j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  if ( !nameLabel
    || (UILabel__SetCondensedScale(nameLabel, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL),
        (v30 = this->fields.detailLabel) == 0LL) )
  {
LABEL_40:
    sub_1B64324(entity);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v30->fields.mHeight;
  v32 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v32->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v32 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v32->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_40;
    v34 = v32->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, HIDWORD(entity[5].monitor) + v34, 0LL);
    if ( v34 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)entity,
                                               0LL);
        if ( this->fields.button )
        {
          v35 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v35, LocalPositionY - (float)v34, 0LL);
          goto LABEL_37;
        }
      }
      goto LABEL_40;
    }
  }
LABEL_37:
  if ( !*p_entity )
    goto LABEL_40;
  entity = (EventBonusFilterEntity_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_40;
  this->fields.isHide = ListViewSort__IsHideSvtEventBonusFilter(
                          (ListViewSort_o *)entity,
                          (*p_entity)->fields.eventId,
                          (*p_entity)->fields.value,
                          0LL);
  ServantEventBonusFilterItem__UpdateButton(this, v38);
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
      sub_1B64324(sort);
    ListViewSort__SetSvtEventBonusFilter_40455164(
      sort,
      entity->fields.eventId,
      entity->fields.value,
      this->fields.isHide,
      0LL);
  }
}


void __fastcall ServantEventBonusFilterItem__OnClick(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x0
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_49F776C & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantEventBonusFilterItem_OnClick__, method);
    byte_49F776C = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0();
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1B64324(sort);
  ListViewSort__SetSvtEventBonusFilter_40455164(
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
    sub_1B64324(sort);
  ListViewSort__SetSvtEventBonusFilter_40455164(
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
    sub_1B64324(0LL);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


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
  float *v13; // x11
  float *v14; // x8
  float *v15; // x9
  float *v16; // x10
  float *v17; // x11
  UILabel_o *buttonLabel; // x20
  __int64 v19; // x1
  float *v20; // x11
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F776D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11744/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v4);
    sub_1B640C8(&StringLiteral_17419/*"btn_bg_off"*/, v5);
    sub_1B640C8(&StringLiteral_11742/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v6);
    sub_1B640C8(&StringLiteral_17424/*"btn_bg_on"*/, v7);
    byte_49F776D = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17424/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11742/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v12 = this->fields.buttonLabel;
      if ( !byte_49F779C )
      {
        sub_1B640C8(&LocalizationManager_TypeInfo, v19);
        byte_49F779C = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v12 )
      {
        v20 = *(float **)&button[7].fields.m_CachedPtr;
        v14 = v20 + 27;
        v15 = v20 + 26;
        v16 = v20 + 25;
        v17 = v20 + 24;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B64324(button);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17419/*"btn_bg_off"*/, 0LL);
  v10 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v10 )
    goto LABEL_25;
  UILabel__set_text(v10, (System_String_o *)button, 0LL);
  v12 = this->fields.buttonLabel;
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    byte_49F779B = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_25;
  v13 = *(float **)&button[7].fields.m_CachedPtr;
  v14 = v13 + 23;
  v15 = v13 + 22;
  v16 = v13 + 21;
  v17 = v13 + 20;
LABEL_24:
  v21.fields.a = *v14;
  v21.fields.b = *v15;
  v21.fields.g = *v16;
  v21.fields.r = *v17;
  UILabel__set_effectColor(v12, v21, 0LL);
}