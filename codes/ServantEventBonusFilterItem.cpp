void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8

  if ( (byte_4A5635F & 1) == 0 )
  {
    sub_1B885B0(&ServantEventBonusFilterItem_TypeInfo);
    byte_4A5635F = 1;
  }
  static_fields = ServantEventBonusFilterItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LABEL_MAX_WIDTH = xmmword_BB5B70;
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
    sub_1B8880C(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1B8880C(this, method);
  return (float)baseSprite->fields.mHeight;
}


void __fastcall ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  __int64 v9; // x1
  EventBonusFilterEntity_o *entity; // x0
  bool v11; // w22
  EventBonusFilterEntity_o *v12; // x22
  ServantEventBonusFilterItem_c *v13; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *v15; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  EventBonusFilterEntity_o *v19; // x22
  struct UILabel_o *v20; // x22
  System_String_o *Detail; // x0
  ServantEventBonusFilterItem_c *v22; // x8
  System_String_o *v23; // x23
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v25; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v27; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v29; // w23
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v33; // x1

  if ( (byte_4A5635C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1B885B0(&ServantEventBonusFilterItem_TypeInfo);
    byte_4A5635C = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1B88554(&this->fields.entity, filterEntity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1B88554(&this->fields.sort, sortParam);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_40;
  v11 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v11 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v12 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v12[1].klass, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v12->fields.value, 0LL);
    v13 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    v15 = *(System_String_o **)&v12[1].fields.eventId;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v13 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v13->static_fields;
    v17 = detailLabel;
    v18 = v15;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v19 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v19->fields.eventId, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v19->fields.value, 0LL);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)entity,
                                           v19->fields.eventId,
                                           1,
                                           0LL);
    if ( !entity )
      goto LABEL_40;
    v20 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v22 = ServantEventBonusFilterItem_TypeInfo;
    v23 = Detail;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v22 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v22->static_fields;
    v17 = v20;
    v18 = v23;
  }
  WrapControlText__textAdjust(
    v17,
    v18,
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
        (v25 = this->fields.detailLabel) == 0LL) )
  {
LABEL_40:
    sub_1B8880C(entity, v9);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v25->fields.mHeight;
  v27 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v27->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v27 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v27->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_40;
    v29 = v27->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, HIDWORD(entity[5].monitor) + v29, 0LL);
    if ( v29 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)entity,
                                               0LL);
        if ( this->fields.button )
        {
          v30 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v30, LocalPositionY - (float)v29, 0LL);
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
  ServantEventBonusFilterItem__UpdateButton(this, v33);
}


void __fastcall ServantEventBonusFilterItem__InitButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  __int64 v4; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( this->fields.sort && this->fields.entity )
  {
    this->fields.isHide = 0;
    ServantEventBonusFilterItem__UpdateButton(this, method);
    entity = this->fields.entity;
    if ( !entity || (sort = this->fields.sort) == 0LL )
      sub_1B8880C(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_40786624(
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
  __int64 v7; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_4A5635D & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantEventBonusFilterItem_OnClick__);
    byte_4A5635D = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1B8880C(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_40786624(
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
  __int64 v5; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  this->fields.isHide = isHideParam;
  ServantEventBonusFilterItem__UpdateButton(this, (const MethodInfo *)isHideParam);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1B8880C(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_40786624(
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
    sub_1B8880C(0LL, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


void __fastcall ServantEventBonusFilterItem__UpdateButton(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0
  _BOOL4 isHide; // w20
  UILabel_o *v5; // x20
  UILabel_o *v6; // x19
  float *v7; // x11
  float *v8; // x8
  float *v9; // x9
  float *v10; // x10
  float *v11; // x11
  UILabel_o *buttonLabel; // x20
  float *v13; // x11
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5635E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11799/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_17489/*"btn_bg_off"*/);
    sub_1B885B0(&StringLiteral_11797/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_17494/*"btn_bg_on"*/);
    byte_4A5635E = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17494/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11797/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v6 = this->fields.buttonLabel;
      if ( !byte_4A5638D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A5638D = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v6 )
      {
        v13 = *(float **)&button[7].fields.m_CachedPtr;
        v8 = v13 + 27;
        v9 = v13 + 26;
        v10 = v13 + 25;
        v11 = v13 + 24;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B8880C(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17489/*"btn_bg_off"*/, 0LL);
  v5 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v5 )
    goto LABEL_25;
  UILabel__set_text(v5, (System_String_o *)button, 0LL);
  v6 = this->fields.buttonLabel;
  if ( !byte_4A5638C )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638C = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_25;
  v7 = *(float **)&button[7].fields.m_CachedPtr;
  v8 = v7 + 23;
  v9 = v7 + 22;
  v10 = v7 + 21;
  v11 = v7 + 20;
LABEL_24:
  v14.fields.a = *v8;
  v14.fields.b = *v9;
  v14.fields.g = *v10;
  v14.fields.r = *v11;
  UILabel__set_effectColor(v6, v14, 0LL);
}