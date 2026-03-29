void ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B904 & 1) == 0 )
  {
    sub_1C93AD4(&ServantEventBonusFilterItem_TypeInfo);
    byte_4D2B904 = 1;
  }
  *ServantEventBonusFilterItem_TypeInfo->static_fields = (struct ServantEventBonusFilterItem_StaticFields)xmmword_D00110;
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
    sub_1C93D2C(this, method);
  return entity->fields.eventId;
}


float ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1C93D2C(this, method);
  return (float)baseSprite->fields.mHeight;
}


void ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        bool isDuplicate,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  int32_t v14; // w2
  char v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x1
  EventBonusFilterEntity_o *entity; // x0
  bool v22; // w23
  EventBonusFilterEntity_o *v23; // x22
  ServantEventBonusFilterItem_c *v24; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *klass; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v28; // x0
  System_String_o *v29; // x1
  EventBonusFilterEntity_o *v30; // x23
  System_String_o *Detail; // x23
  System_String_o *v32; // x0
  ServantEventBonusFilterItem_c *v33; // x0
  struct UILabel_o *v34; // x22
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v36; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v38; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v40; // w23
  UnityEngine_GameObject_o *v41; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v44; // x1

  if ( (byte_4D2B901 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&ServantEventBonusFilterItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_10161/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4D2B901 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.entity,
    (int32_t)filterEntity,
    (int32_t)sortParam,
    isDuplicate,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)sortParam, v14, v15, v16, v17, v18, v19);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_44;
  v22 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v22 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3463274 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v23 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, v23->fields.condType, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v23->fields.value, 0);
    v24 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    klass = (System_String_o *)v23[1].klass;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v24 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v24->static_fields;
    v28 = detailLabel;
    v29 = klass;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v30 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v30->fields.eventId, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v30->fields.value, 0);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)entity, v30->fields.eventId, 1, 0);
    if ( !entity )
      goto LABEL_44;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0, 0);
    if ( isDuplicate )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10161/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
      Detail = System_String__Concat_64425724(Detail, v32, 0);
    }
    v33 = ServantEventBonusFilterItem_TypeInfo;
    v34 = this->fields.detailLabel;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v33 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v33->static_fields;
    v28 = v34;
    v29 = Detail;
  }
  WrapControlText__textAdjust(v28, v29, static_fields->DETAIL_FONT_SIZE, static_fields->DETAIL_FONT_SIZE, 0);
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
        (v36 = this->fields.detailLabel) == 0) )
  {
LABEL_44:
    sub_1C93D2C(entity, v20);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v36->fields.mHeight;
  v38 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v38->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v38 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v38->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_44;
    v40 = v38->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, entity[3].fields.priority + v40, 0);
    if ( v40 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)entity, 0);
        if ( this->fields.button )
        {
          v41 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v41, LocalPositionY - (float)v40, 0);
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
  ServantEventBonusFilterItem__UpdateButton(this, v44);
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
      sub_1C93D2C(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_44548516(
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

  if ( (byte_4D2B902 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantEventBonusFilterItem_OnClick__);
    byte_4D2B902 = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantEventBonusFilterItem_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0 )
    sub_1C93D2C(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_44548516(
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
    sub_1C93D2C(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_44548516(
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
    sub_1C93D2C(0, isEnable);
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

  if ( (byte_4D2B903 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11929/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_17589/*"btn_bg_off"*/);
    sub_1C93AD4(&StringLiteral_11927/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_17594/*"btn_bg_on"*/);
    byte_4D2B903 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17594/*"btn_bg_on"*/, 0);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11927/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0);
      v6 = this->fields.buttonLabel;
      if ( !byte_4D2AFE0 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2AFE0 = 1;
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
    sub_1C93D2C(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17589/*"btn_bg_off"*/, 0);
  v5 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11929/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0);
  if ( !v5 )
    goto LABEL_25;
  UILabel__set_text(v5, (System_String_o *)button, 0);
  v6 = this->fields.buttonLabel;
  if ( !byte_4D2AFDF )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFDF = 1;
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