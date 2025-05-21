void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3F8EF & 1) == 0 )
  {
    sub_1BDB878(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_4B3F8EF = 1;
  }
  *ServantEventBonusFilterItem_TypeInfo->static_fields = (struct ServantEventBonusFilterItem_StaticFields)xmmword_BEA310;
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
    sub_1BDBAD4(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BDBAD4(this, method);
  return (float)baseSprite->fields.mHeight;
}


void __fastcall ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        bool isDuplicate,
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
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  __int64 v19; // x1
  EventBonusFilterEntity_o *entity; // x0
  bool v21; // w23
  EventBonusFilterEntity_o *v22; // x22
  ServantEventBonusFilterItem_c *v23; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *klass; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v27; // x0
  System_String_o *v28; // x1
  EventBonusFilterEntity_o *v29; // x23
  System_String_o *Detail; // x23
  System_String_o *v31; // x0
  ServantEventBonusFilterItem_c *v32; // x0
  struct UILabel_o *v33; // x22
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v35; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v37; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v39; // w23
  UnityEngine_GameObject_o *v40; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v43; // x1

  if ( (byte_4B3F8EC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_1BDB878(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&ServantEventBonusFilterItem_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, v16);
    byte_4B3F8EC = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1BDB81C(&this->fields.entity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1BDB81C(&this->fields.sort);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_44;
  v21 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v21 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v22 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, v22->fields.condType, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v22->fields.value, 0LL);
    v23 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    klass = (System_String_o *)v22[1].klass;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v23 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v23->static_fields;
    v27 = detailLabel;
    v28 = klass;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_44;
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_44;
    v29 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_44;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v29->fields.eventId, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_44;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v29->fields.value, 0LL);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_44;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)entity,
                                           v29->fields.eventId,
                                           1,
                                           0LL);
    if ( !entity )
      goto LABEL_44;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    if ( isDuplicate )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10099/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0LL);
      Detail = System_String__Concat_62572260(Detail, v31, 0LL);
    }
    v32 = ServantEventBonusFilterItem_TypeInfo;
    v33 = this->fields.detailLabel;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v32 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v32->static_fields;
    v27 = v33;
    v28 = Detail;
  }
  WrapControlText__textAdjust(v27, v28, static_fields->DETAIL_FONT_SIZE, static_fields->DETAIL_FONT_SIZE, 0LL);
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  if ( !nameLabel
    || (UILabel__SetCondensedScale(
          nameLabel,
          ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH,
          0,
          0LL),
        (v35 = this->fields.detailLabel) == 0LL) )
  {
LABEL_44:
    sub_1BDBAD4(entity, v19);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v35->fields.mHeight;
  v37 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v37->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v37 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v37->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_44;
    v39 = v37->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, entity[3].fields.priority + v39, 0LL);
    if ( v39 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)entity,
                                               0LL);
        if ( this->fields.button )
        {
          v40 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v40, LocalPositionY - (float)v39, 0LL);
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
                          0LL);
  ServantEventBonusFilterItem__UpdateButton(this, v43);
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
      sub_1BDBAD4(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_42795716(
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

  if ( (byte_4B3F8ED & 1) == 0 )
  {
    sub_1BDB878(&Method_ServantEventBonusFilterItem_OnClick__, method);
    byte_4B3F8ED = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_ServantEventBonusFilterItem_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1BDBAD4(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_42795716(
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
    sub_1BDBAD4(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_42795716(
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
    sub_1BDBAD4(0LL, isEnable);
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
  UILabel_o *v11; // x19
  float *v12; // x11
  float *v13; // x8
  float *v14; // x9
  float *v15; // x10
  float *v16; // x11
  UILabel_o *buttonLabel; // x20
  float *v18; // x11
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3F8EE & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_11811/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v4);
    sub_1BDB878(&StringLiteral_17474/*"btn_bg_off"*/, v5);
    sub_1BDB878(&StringLiteral_11809/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v6);
    sub_1BDB878(&StringLiteral_17479/*"btn_bg_on"*/, v7);
    byte_4B3F8EE = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17479/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v11 = this->fields.buttonLabel;
      if ( !byte_4B3F3B0 )
      {
        sub_1BDB878(&LocalizationManager_TypeInfo, method);
        byte_4B3F3B0 = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v11 )
      {
        v18 = *(float **)&button[7].fields.m_CachedPtr;
        v13 = v18 + 27;
        v14 = v18 + 26;
        v15 = v18 + 25;
        v16 = v18 + 24;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1BDBAD4(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17474/*"btn_bg_off"*/, 0LL);
  v10 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11811/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v10 )
    goto LABEL_25;
  UILabel__set_text(v10, (System_String_o *)button, 0LL);
  v11 = this->fields.buttonLabel;
  if ( !byte_4B3F3AF )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B3F3AF = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_25;
  v12 = *(float **)&button[7].fields.m_CachedPtr;
  v13 = v12 + 23;
  v14 = v12 + 22;
  v15 = v12 + 21;
  v16 = v12 + 20;
LABEL_24:
  v19.fields.a = *v13;
  v19.fields.b = *v14;
  v19.fields.g = *v15;
  v19.fields.r = *v16;
  UILabel__set_effectColor(v11, v19, 0LL);
}