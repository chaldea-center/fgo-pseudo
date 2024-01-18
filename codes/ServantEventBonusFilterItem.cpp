void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantEventBonusFilterItem_c *v2; // x8

  if ( (byte_418AB55 & 1) == 0 )
  {
    sub_B2C35C(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_418AB55 = 1;
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
    sub_B2C434(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_B2C434(this, method);
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
  __int64 v25; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  struct UILabel_o **p_nameLabel; // x24
  struct UILabel_o *detailLabel; // x23
  System_String_o *seriazlier; // x22
  ServantEventBonusFilterItem_c *v31; // x0
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v33; // x0
  System_String_o *v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x22
  struct UILabel_o *v36; // x22
  System_String_o *Detail; // x23
  ServantEventBonusFilterItem_c *v38; // x8
  UILabel_o *v39; // x22
  struct UILabel_o *v40; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v42; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v44; // w23
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v48; // x1

  if ( (byte_418AB52 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v14);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15);
    sub_B2C35C(&ServantEventBonusFilterItem_TypeInfo, v16);
    byte_418AB52 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v27 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v27->fields.list, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v27->fields._MasterName_k__BackingField, 0LL);
    detailLabel = this->fields.detailLabel;
    seriazlier = (System_String_o *)v27->fields.seriazlier;
    v31 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v31 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v31->static_fields;
    v33 = detailLabel;
    v34 = seriazlier;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v35 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v35->fields._MasterKind_k__BackingField, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v35->fields._MasterName_k__BackingField, 0LL);
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__GetEntity(
                                                              (SkillLvMaster_o *)entity,
                                                              v35->fields._MasterKind_k__BackingField,
                                                              1,
                                                              0LL);
    if ( !entity )
      goto LABEL_48;
    v36 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v38 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v38 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v38->static_fields;
    v33 = v36;
    v34 = Detail;
  }
  WrapControlText__textAdjust(
    v33,
    v34,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  v39 = *p_nameLabel;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  }
  if ( !v39 )
    goto LABEL_48;
  UILabel__SetCondensedScale(v39, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  v40 = this->fields.detailLabel;
  if ( !v40 )
    goto LABEL_48;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v40->fields.mHeight;
  v42 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v42->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v42 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v42->DETAIL_BASE_HEIGHT;
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_48;
    v44 = v42->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, *(&entity[2].fields._MasterKind_k__BackingField + 1) + v44, 0LL);
    if ( v44 )
    {
      entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.button;
      if ( entity )
      {
        entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)entity,
                                                                  0LL);
        if ( this->fields.button )
        {
          v45 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v45, LocalPositionY - (float)v44, 0LL);
          goto LABEL_45;
        }
      }
LABEL_48:
      sub_B2C434(entity, v25);
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
      sub_B2C434(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_33937452(
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
  __int64 v5; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_418AB53 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AB53 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v3);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B2C434(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_33937452(
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
    sub_B2C434(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_33937452(
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
    sub_B2C434(0LL, isEnable);
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
  UILabel_o *v11; // x19
  _DWORD *v12; // x8
  int v13; // s0
  int v14; // s1
  int v15; // s2
  int v16; // s3
  UILabel_o *buttonLabel; // x20
  _DWORD *v18; // x8

  if ( (byte_418AB54 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11903/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v4);
    sub_B2C35C(&StringLiteral_16971/*"btn_bg_off"*/, v5);
    sub_B2C35C(&StringLiteral_11901/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v6);
    sub_B2C35C(&StringLiteral_16976/*"btn_bg_on"*/, v7);
    byte_418AB54 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_29;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        button,
                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_29;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_16976/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11901/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v11 = this->fields.buttonLabel;
      if ( !byte_4184964 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, method);
        byte_4184964 = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v11 )
      {
        v18 = *(_DWORD **)&button[7].fields.m_CachedPtr;
        v13 = v18[24];
        v14 = v18[25];
        v15 = v18[26];
        v16 = v18[27];
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B2C434(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_16971/*"btn_bg_off"*/, 0LL);
  v10 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11903/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v10 )
    goto LABEL_29;
  UILabel__set_text(v10, (System_String_o *)button, 0LL);
  v11 = this->fields.buttonLabel;
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4184963 = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_29;
  v12 = *(_DWORD **)&button[7].fields.m_CachedPtr;
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
LABEL_28:
  UILabel__set_effectColor(v11, *(UnityEngine_Color_o *)&v13, 0LL);
}