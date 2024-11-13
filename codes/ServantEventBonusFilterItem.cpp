void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8

  if ( (byte_4B119A8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEventBonusFilterItem_TypeInfo, v1, v2);
    byte_4B119A8 = 1;
  }
  static_fields = ServantEventBonusFilterItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->LABEL_MAX_WIDTH = xmmword_BD3D80;
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
    sub_1BCAA3C(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BCAA3C(this, method);
  return (float)baseSprite->fields.mHeight;
}


void __fastcall ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  __int64 v21; // x1
  EventBonusFilterEntity_o *entity; // x0
  __int64 v23; // x1
  bool v24; // w22
  EventBonusFilterEntity_o *v25; // x22
  __int64 v26; // x1
  ServantEventBonusFilterItem_c *v27; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *v29; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v31; // x0
  System_String_o *v32; // x1
  EventBonusFilterEntity_o *v33; // x22
  struct UILabel_o *v34; // x22
  System_String_o *Detail; // x0
  __int64 v36; // x1
  ServantEventBonusFilterItem_c *v37; // x8
  System_String_o *v38; // x23
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v40; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v42; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v44; // w23
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v48; // x1

  if ( (byte_4B119A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity, sortParam);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v15,
      v16);
    sub_1BCA7E0(&ServantEventBonusFilterItem_TypeInfo, v17, v18);
    byte_4B119A5 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1BCA784(&this->fields.entity, filterEntity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1BCA784(&this->fields.sort, sortParam);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_40;
  v24 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  if ( v24 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v25 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v25[1].klass, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v25->fields.value, 0LL);
    v27 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    v29 = *(System_String_o **)&v25[1].fields.eventId;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v26);
      v27 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v27->static_fields;
    v31 = detailLabel;
    v32 = v29;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v33 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v33->fields.eventId, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v33->fields.value, 0LL);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)entity,
                                           v33->fields.eventId,
                                           1,
                                           0LL);
    if ( !entity )
      goto LABEL_40;
    v34 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v37 = ServantEventBonusFilterItem_TypeInfo;
    v38 = Detail;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v36);
      v37 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v37->static_fields;
    v31 = v34;
    v32 = v38;
  }
  WrapControlText__textAdjust(
    v31,
    v32,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v21);
  if ( !nameLabel
    || (UILabel__SetCondensedScale(nameLabel, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL),
        (v40 = this->fields.detailLabel) == 0LL) )
  {
LABEL_40:
    sub_1BCAA3C(entity, v21);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v40->fields.mHeight;
  v42 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v42->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v21);
      v42 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v42->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_40;
    v44 = v42->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, HIDWORD(entity[5].monitor) + v44, 0LL);
    if ( v44 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)entity,
                                               0LL);
        if ( this->fields.button )
        {
          v45 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v45, LocalPositionY - (float)v44, 0LL);
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
  ServantEventBonusFilterItem__UpdateButton(this, v48);
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
      sub_1BCAA3C(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_41508452(
      sort,
      entity->fields.eventId,
      entity->fields.value,
      this->fields.isHide,
      0LL);
  }
}


void __fastcall ServantEventBonusFilterItem__OnClick(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *sort; // x0
  __int64 v8; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_4B119A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantEventBonusFilterItem_OnClick__, method, v2);
    byte_4B119A6 = 1;
  }
  v4 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantEventBonusFilterItem_OnClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v6);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1BCAA3C(sort, v8);
  ListViewSort__SetSvtEventBonusFilter_41508452(
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
    sub_1BCAA3C(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_41508452(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterItem__SetEnableFilterButton(
        ServantEventBonusFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_1BCAA3C(0LL, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


void __fastcall ServantEventBonusFilterItem__UpdateButton(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Component_o *button; // x0
  _BOOL4 isHide; // w20
  __int64 v16; // x1
  UILabel_o *v17; // x20
  __int64 v18; // x2
  UILabel_o *v19; // x19
  float *v20; // x11
  float *v21; // x8
  float *v22; // x9
  float *v23; // x10
  float *v24; // x11
  __int64 v25; // x1
  UILabel_o *buttonLabel; // x20
  __int64 v27; // x2
  float *v28; // x11
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B119A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11937/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17662/*"btn_bg_off"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11935/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17667/*"btn_bg_on"*/, v12, v13);
    byte_4B119A7 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17667/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11935/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v19 = this->fields.buttonLabel;
      if ( !byte_4B11134 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v27);
        byte_4B11134 = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v19 )
      {
        v28 = *(float **)&button[7].fields.m_CachedPtr;
        v21 = v28 + 27;
        v22 = v28 + 26;
        v23 = v28 + 25;
        v24 = v28 + 24;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1BCAA3C(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17662/*"btn_bg_off"*/, 0LL);
  v17 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11937/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v17 )
    goto LABEL_25;
  UILabel__set_text(v17, (System_String_o *)button, 0LL);
  v19 = this->fields.buttonLabel;
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v18);
    byte_4B11133 = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_25;
  v20 = *(float **)&button[7].fields.m_CachedPtr;
  v21 = v20 + 23;
  v22 = v20 + 22;
  v23 = v20 + 21;
  v24 = v20 + 20;
LABEL_24:
  v29.fields.a = *v21;
  v29.fields.b = *v22;
  v29.fields.g = *v23;
  v29.fields.r = *v24;
  UILabel__set_effectColor(v19, v29, 0LL);
}