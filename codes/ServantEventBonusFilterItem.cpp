void ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  if ( (byte_4CC1CB6 & 1) == 0 )
  {
    sub_1C713B0(&ServantEventBonusFilterItem_TypeInfo);
    byte_4CC1CB6 = 1;
  }
  *ServantEventBonusFilterItem_TypeInfo->static_fields = (struct ServantEventBonusFilterItem_StaticFields)xmmword_CEE600;
}


void ServantEventBonusFilterItem___ctor(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantEventBonusFilterItem__GetEventId(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C71608(this, method);
  return entity->fields.eventId;
}


float ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1C71608(this, method);
  return (float)baseSprite->fields.mHeight;
}


void ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        bool isDuplicate,
        const MethodInfo *method)
{
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  __int64 v11; // x1
  EventBonusFilterEntity_o *entity; // x0
  bool v13; // w23
  EventBonusFilterEntity_o *v14; // x22
  ServantEventBonusFilterItem_c *v15; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *klass; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v19; // x0
  System_String_o *v20; // x1
  EventBonusFilterEntity_o *v21; // x23
  System_String_o *Detail; // x23
  System_String_o *v23; // x0
  ServantEventBonusFilterItem_c *v24; // x0
  struct UILabel_o *v25; // x22
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v27; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v29; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v31; // w23
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v35; // x1

  if ( (byte_4CC1CB3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&ServantEventBonusFilterItem_TypeInfo);
    sub_1C713B0(&StringLiteral_10103/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4CC1CB3 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1C71354(&this->fields.entity, filterEntity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1C71354(&this->fields.sort, sortParam);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_44;
  v13 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v13 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3408E80 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v14 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, v14->fields.condType, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v14->fields.value, 0);
    v15 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    klass = (System_String_o *)v14[1].klass;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v15 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v15->static_fields;
    v19 = detailLabel;
    v20 = klass;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v21 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v21->fields.eventId, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v21->fields.value, 0);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)entity, v21->fields.eventId, 1, 0);
    if ( !entity )
      goto LABEL_44;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0, 0);
    if ( isDuplicate )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10103/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
      Detail = System_String__Concat_64031724(Detail, v23, 0);
    }
    v24 = ServantEventBonusFilterItem_TypeInfo;
    v25 = this->fields.detailLabel;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v24 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v24->static_fields;
    v19 = v25;
    v20 = Detail;
  }
  WrapControlText__textAdjust(v19, v20, static_fields->DETAIL_FONT_SIZE, static_fields->DETAIL_FONT_SIZE, 0);
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  if ( !nameLabel
    || (UILabel__SetCondensedScale(
          nameLabel,
          ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH,
          0,
          0),
        (v27 = this->fields.detailLabel) == 0) )
  {
LABEL_44:
    sub_1C71608(entity, v11);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v27->fields.mHeight;
  v29 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v29->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v29 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v29->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_44;
    v31 = v29->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, entity[3].fields.priority + v31, 0);
    if ( v31 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)entity, 0);
        if ( this->fields.button )
        {
          v32 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v32, LocalPositionY - (float)v31, 0);
          goto LABEL_41;
        }
      }
      goto LABEL_44;
    }
  }
LABEL_41:
  if ( !*p_entity )
    goto LABEL_44;
  entity = (EventBonusFilterEntity_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_44;
  this->fields.isHide = ListViewSort__IsHideSvtEventBonusFilter(
                          (ListViewSort_o *)entity,
                          (*p_entity)->fields.eventId,
                          (*p_entity)->fields.value,
                          0);
  ServantEventBonusFilterItem__UpdateButton(this, v35);
}


void ServantEventBonusFilterItem__InitButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  __int64 v4; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( this->fields.sort && this->fields.entity )
  {
    this->fields.isHide = 0;
    ServantEventBonusFilterItem__UpdateButton(this, method);
    entity = this->fields.entity;
    if ( !entity || (sort = this->fields.sort) == 0 )
      sub_1C71608(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_44159944(
      sort,
      entity->fields.eventId,
      entity->fields.value,
      this->fields.isHide,
      0);
  }
}


void ServantEventBonusFilterItem__OnClick(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x0
  __int64 v7; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_4CC1CB4 & 1) == 0 )
  {
    sub_1C713B0(&Method_ServantEventBonusFilterItem_OnClick__);
    byte_4CC1CB4 = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_ServantEventBonusFilterItem_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0 )
    sub_1C71608(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_44159944(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0);
}


void ServantEventBonusFilterItem__RefreshButtonState(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
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
                                    0);
      ServantEventBonusFilterItem__SetButtonState(this, IsHideSvtEventBonusFilter, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterItem__SetButtonState(
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
  if ( !entity || (sort = this->fields.sort) == 0 )
    sub_1C71608(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_44159944(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0);
}


void ServantEventBonusFilterItem__SetEnableFilterButton(
        ServantEventBonusFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1C71608(0, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0);
}


void ServantEventBonusFilterItem__UpdateButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
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
  float *m_CachedPtr; // x11
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC1CB5 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11847/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1C713B0(&StringLiteral_17480/*"btn_bg_off"*/);
    sub_1C713B0(&StringLiteral_11845/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/);
    sub_1C713B0(&StringLiteral_17485/*"btn_bg_on"*/);
    byte_4CC1CB5 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17485/*"btn_bg_on"*/, 0);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0);
      v6 = this->fields.buttonLabel;
      if ( !byte_4CC1B4B )
      {
        sub_1C713B0(&LocalizationManager_TypeInfo);
        byte_4CC1B4B = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v6 )
      {
        m_CachedPtr = (float *)button[7].fields.m_CachedPtr;
        v8 = m_CachedPtr + 27;
        v9 = m_CachedPtr + 26;
        v10 = m_CachedPtr + 25;
        v11 = m_CachedPtr + 24;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1C71608(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17480/*"btn_bg_off"*/, 0);
  v5 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11847/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0);
  if ( !v5 )
    goto LABEL_25;
  UILabel__set_text(v5, (System_String_o *)button, 0);
  v6 = this->fields.buttonLabel;
  if ( !byte_4CC1B4A )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC1B4A = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_25;
  v7 = (float *)button[7].fields.m_CachedPtr;
  v8 = v7 + 23;
  v9 = v7 + 22;
  v10 = v7 + 21;
  v11 = v7 + 20;
LABEL_24:
  v14.fields.a = *v8;
  v14.fields.b = *v9;
  v14.fields.g = *v10;
  v14.fields.r = *v11;
  UILabel__set_effectColor(v6, v14, 0);
}