void ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  if ( (byte_596B1F5 & 1) == 0 )
  {
    sub_2213A60(&ServantEventBonusFilterItem_TypeInfo);
    byte_596B1F5 = 1;
  }
  *ServantEventBonusFilterItem_TypeInfo->static_fields = (struct ServantEventBonusFilterItem_StaticFields)xmmword_E9D4A0;
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
    sub_2213CDC(this, method);
  return entity->fields.eventId;
}


float ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_2213CDC(this, method);
  return (float)baseSprite->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterItem__Init(
        ServantEventBonusFilterItem_o *this,
        EventBonusFilterEntity_o *filterEntity,
        ListViewSort_o *sortParam,
        bool isDuplicate,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  EventBonusFilterEntity_o *entity; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  bool v24; // w8
  int v25; // w9
  EventBonusFilterEntity_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  ServantEventBonusFilterItem_c *v29; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *klass; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v33; // x0
  System_String_o *v34; // x1
  EventBonusFilterEntity_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *Detail; // x23
  System_String_o *v39; // x0
  ServantEventBonusFilterItem_c *v40; // x0
  struct UILabel_o *v41; // x22
  __int64 v42; // x2
  UILabel_o *nameLabel; // x22
  __int64 v44; // x2
  struct UILabel_o *v45; // x9
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v47; // x8
  int32_t DETAIL_BASE_HEIGHT; // w9
  int v49; // w23
  UnityEngine_GameObject_o *v50; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v53; // x1

  if ( (byte_596B1F2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ServantEventBonusFilterItem_TypeInfo);
    sub_2213A60(&StringLiteral_10510/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_596B1F2 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.entity,
    (int32_t)filterEntity,
    (System_String_o *)sortParam,
    (System_String_o *)isDuplicate,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)sortParam, v14, v15, v16, v17, v18, v19);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_46;
  v24 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0);
  v25 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  if ( v24 )
  {
    if ( !v25 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_46;
    if ( !entity )
      goto LABEL_46;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_46;
    v26 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_46;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, v26->fields.condType, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v26->fields.value, 0);
    v29 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    klass = (System_String_o *)v26[1].klass;
    if ( !*(&ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v27, v28);
      v29 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v29->static_fields;
    v33 = detailLabel;
    v34 = klass;
  }
  else
  {
    if ( !v25 )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_46;
    if ( !entity )
      goto LABEL_46;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_46;
    v35 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_46;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v35->fields.eventId, 0);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_46;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v35->fields.value, 0);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_46;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)entity, v35->fields.eventId, 1, 0);
    if ( !entity )
      goto LABEL_46;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0, 0);
    if ( isDuplicate )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10510/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
      Detail = System_String__Concat_75651716(Detail, v39, 0);
    }
    v40 = ServantEventBonusFilterItem_TypeInfo;
    v41 = this->fields.detailLabel;
    if ( !*(&ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v36, v37);
      v40 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v40->static_fields;
    v33 = v41;
    v34 = Detail;
  }
  WrapControlText__textAdjust(v33, v34, static_fields->DETAIL_FONT_SIZE, static_fields->DETAIL_FONT_SIZE, 0);
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !*(&ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v20, v42);
  if ( !nameLabel )
    goto LABEL_46;
  UILabel__SetCondensedScale(nameLabel, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0, 0);
  v45 = this->fields.detailLabel;
  if ( !v45 )
    goto LABEL_46;
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v45->fields.mHeight;
  v47 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v47->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !*(&ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo, v20, v44);
      v47 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v47->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_46;
    v49 = v47->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, entity[3].fields.priority + v49, 0);
    if ( v49 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)entity, 0);
        if ( this->fields.button )
        {
          v50 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v50, LocalPositionY - (float)v49, 0);
          goto LABEL_43;
        }
      }
LABEL_46:
      sub_2213CDC(entity, v20);
    }
  }
LABEL_43:
  if ( !*p_entity )
    goto LABEL_46;
  entity = (EventBonusFilterEntity_o *)*p_sort;
  if ( !*p_sort )
    goto LABEL_46;
  this->fields.isHide = ListViewSort__IsHideSvtEventBonusFilter(
                          (ListViewSort_o *)entity,
                          (*p_entity)->fields.eventId,
                          (*p_entity)->fields.value,
                          0);
  ServantEventBonusFilterItem__UpdateButton(this, v53);
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
      sub_2213CDC(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_50883460(
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

  if ( (byte_596B1F3 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantEventBonusFilterItem_OnClick__);
    byte_596B1F3 = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ServantEventBonusFilterItem_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0 )
    sub_2213CDC(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_50883460(
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
  bool IsHideSvtEventBonusFilter; // w8
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
    sub_2213CDC(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_50883460(
    sort,
    entity->fields.eventId,
    entity->fields.value,
    this->fields.isHide,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ServantEventBonusFilterItem__SetEnableFilterButton(
        ServantEventBonusFilterItem_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0

  button = this->fields.button;
  if ( !button )
    sub_2213CDC(0, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0);
}


void ServantEventBonusFilterItem__UpdateButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *button; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *v6; // x20
  __int64 v7; // x2
  UILabel_o *v8; // x19
  float *v9; // x11
  float *v10; // x8
  float *v11; // x9
  float *v12; // x10
  float *v13; // x11
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *buttonLabel; // x20
  __int64 v17; // x2
  float *m_CachedPtr; // x11
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B1F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12353/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_2213A60(&StringLiteral_18222/*"btn_bg_off"*/);
    sub_2213A60(&StringLiteral_12351/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/);
    sub_2213A60(&StringLiteral_18227/*"btn_bg_on"*/);
    byte_596B1F4 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !this->fields.isHide )
  {
    if ( button )
    {
      button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            button,
                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( button )
      {
        UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_18227/*"btn_bg_on"*/, 0);
        buttonLabel = this->fields.buttonLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0);
        if ( buttonLabel )
        {
          UILabel__set_text(buttonLabel, (System_String_o *)button, 0);
          v8 = this->fields.buttonLabel;
          if ( !byte_596ABD6 )
          {
            sub_2213A60(&LocalizationManager_TypeInfo);
            byte_596ABD6 = 1;
          }
          button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v17);
            button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
          }
          if ( v8 )
          {
            m_CachedPtr = (float *)button[7].fields.m_CachedPtr;
            v10 = m_CachedPtr + 27;
            v11 = m_CachedPtr + 24;
            v12 = m_CachedPtr + 26;
            v13 = m_CachedPtr + 25;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(button, method);
  }
  if ( !button )
    goto LABEL_27;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_27;
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_18222/*"btn_bg_off"*/, 0);
  v6 = this->fields.buttonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0);
  if ( !v6 )
    goto LABEL_27;
  UILabel__set_text(v6, (System_String_o *)button, 0);
  v8 = this->fields.buttonLabel;
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v7);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_27;
  v9 = (float *)button[7].fields.m_CachedPtr;
  v10 = v9 + 23;
  v11 = v9 + 20;
  v12 = v9 + 22;
  v13 = v9 + 21;
LABEL_26:
  v19.fields.g = *v13;
  v19.fields.r = *v11;
  v19.fields.a = *v10;
  v19.fields.b = *v12;
  UILabel__set_effectColor(v8, v19, 0);
}