void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantEventBonusFilterItem_c *v2; // x8

  if ( (byte_40FD093 & 1) == 0 )
  {
    sub_B16FFC(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_40FD093 = 1;
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
    sub_B170D4();
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_B170D4();
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
  ListViewSort_o **p_sort; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  EventBonusFilterEntity_o *entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *v27; // x0
  WarEntity_o *v28; // x22
  SkillIconComponent_o *skillIconComponent; // x0
  UILabel_o *nameLabel; // x0
  struct UILabel_o **p_nameLabel; // x24
  struct UILabel_o *detailLabel; // x23
  System_String_o *v33; // x22
  ServantEventBonusFilterItem_c *v34; // x0
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v36; // x0
  System_String_o *v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x0
  WarEntity_o *v39; // x0
  WarEntity_o *v40; // x22
  SkillIconComponent_o *v41; // x0
  UILabel_o *v42; // x0
  SkillLvMaster_o *v43; // x0
  SkillLvEntity_o *v44; // x0
  struct UILabel_o *v45; // x22
  System_String_o *Detail; // x23
  ServantEventBonusFilterItem_c *v47; // x8
  UILabel_o *v48; // x22
  struct UILabel_o *v49; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v51; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  UIWidget_o *baseSprite; // x0
  int v54; // w23
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x22
  UnityEngine_GameObject_o *v58; // x0
  float LocalPositionY; // s0
  const MethodInfo *v60; // x1

  if ( (byte_40FD090 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v14);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v15);
    sub_B16FFC(&ServantEventBonusFilterItem_TypeInfo, v16);
    byte_40FD090 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sortParam,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_48;
  if ( EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL) )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_48;
    v27 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            Master_WarQuestSelectionMaster,
            (*p_entity)->fields.value,
            (const MethodInfo_266F388 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !v27 )
      goto LABEL_48;
    v28 = v27;
    skillIconComponent = this->fields.skillIconComponent;
    if ( !skillIconComponent )
      goto LABEL_48;
    SkillIconComponent__SetSpecifyIconId(skillIconComponent, (int32_t)v28->fields.name, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_48;
    UILabel__set_text(nameLabel, v28->fields.age, 0LL);
    detailLabel = this->fields.detailLabel;
    v33 = *(System_String_o **)&v28->fields.bannerId;
    v34 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v34 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v34->static_fields;
    v36 = detailLabel;
    v37 = v33;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !v38 )
      goto LABEL_48;
    v39 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v38,
            (*p_entity)->fields.value,
            (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !v39 )
      goto LABEL_48;
    v40 = v39;
    v41 = this->fields.skillIconComponent;
    if ( !v41 )
      goto LABEL_48;
    SkillIconComponent__Set(v41, v40->fields.id, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    v42 = this->fields.nameLabel;
    if ( !v42 )
      goto LABEL_48;
    UILabel__set_text(v42, v40->fields.age, 0LL);
    v43 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !v43 )
      goto LABEL_48;
    v44 = SkillLvMaster__GetEntity(v43, v40->fields.id, 1, 0LL);
    if ( !v44 )
      goto LABEL_48;
    v45 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail(v44, 0, 0LL);
    v47 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v47 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v47->static_fields;
    v36 = v45;
    v37 = Detail;
  }
  WrapControlText__textAdjust(
    v36,
    v37,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  v48 = *p_nameLabel;
  if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  }
  if ( !v48 )
    goto LABEL_48;
  UILabel__SetCondensedScale(v48, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  v49 = this->fields.detailLabel;
  if ( !v49 )
    goto LABEL_48;
  mHeight = v49->fields.mHeight;
  v51 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v51->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v51 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v51->DETAIL_BASE_HEIGHT;
    }
    baseSprite = (UIWidget_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_48;
    v54 = v51->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height(baseSprite, baseSprite->fields.mHeight + v54, 0LL);
    if ( v54 )
    {
      button = (UnityEngine_Component_o *)this->fields.button;
      if ( button )
      {
        gameObject = UnityEngine_Component__get_gameObject(button, 0LL);
        if ( this->fields.button )
        {
          v57 = gameObject;
          v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(v58, 0LL);
          GameObjectExtensions__SetLocalPositionY(v57, LocalPositionY - (float)v54, 0LL);
          goto LABEL_45;
        }
      }
LABEL_48:
      sub_B170D4();
    }
  }
LABEL_45:
  if ( !*p_entity || !*p_sort )
    goto LABEL_48;
  this->fields.isHide = ListViewSort__IsHideSvtEventBonusFilter(
                          *p_sort,
                          (*p_entity)->fields.eventId,
                          (*p_entity)->fields.value,
                          0LL);
  ServantEventBonusFilterItem__UpdateButton(this, v60);
}


void __fastcall ServantEventBonusFilterItem__InitButton(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct EventBonusFilterEntity_o *entity; // x8
  ListViewSort_o *sort; // x0

  if ( this->fields.sort && this->fields.entity )
  {
    this->fields.isHide = 0;
    ServantEventBonusFilterItem__UpdateButton(this, method);
    entity = this->fields.entity;
    if ( !entity || (sort = this->fields.sort) == 0LL )
      sub_B170D4();
    ListViewSort__SetSvtEventBonusFilter_30231228(
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
  struct EventBonusFilterEntity_o *entity; // x8
  ListViewSort_o *sort; // x0

  if ( (byte_40FD091 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD091 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v3);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B170D4();
  ListViewSort__SetSvtEventBonusFilter_30231228(
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
  struct EventBonusFilterEntity_o *entity; // x8
  ListViewSort_o *sort; // x0

  this->fields.isHide = isHideParam;
  ServantEventBonusFilterItem__UpdateButton(this, (const MethodInfo *)isHideParam);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B170D4();
  ListViewSort__SetSvtEventBonusFilter_30231228(
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
    sub_B170D4();
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
  WebViewObject_o *Component_WebViewObject; // x0
  UILabel_o *v11; // x20
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *v14; // x19
  LocalizationManager_c *v15; // x0
  struct LocalizationManager_StaticFields *v16; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UILabel_o *buttonLabel; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  LocalizationManager_c *v24; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8

  if ( (byte_40FD092 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11853/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v4);
    sub_B16FFC(&StringLiteral_16905/*"btn_bg_off"*/, v5);
    sub_B16FFC(&StringLiteral_11851/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v6);
    sub_B16FFC(&StringLiteral_16910/*"btn_bg_on"*/, v7);
    byte_40FD092 = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_29;
  isHide = this->fields.isHide;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              button,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Component_WebViewObject )
    goto LABEL_29;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16910/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, v22, 0LL);
      v14 = this->fields.buttonLabel;
      if ( !byte_40F6255 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, v23);
        byte_40F6255 = 1;
      }
      v24 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager_TypeInfo;
      }
      if ( v14 )
      {
        static_fields = v24->static_fields;
        r = static_fields->selectEffectColor.fields.r;
        g = static_fields->selectEffectColor.fields.g;
        b = static_fields->selectEffectColor.fields.b;
        a = static_fields->selectEffectColor.fields.a;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16905/*"btn_bg_off"*/, 0LL);
  v11 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11853/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v11 )
    goto LABEL_29;
  UILabel__set_text(v11, v12, 0LL);
  v14 = this->fields.buttonLabel;
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    byte_40F6254 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_29;
  v16 = v15->static_fields;
  r = v16->normalEffectColor.fields.r;
  g = v16->normalEffectColor.fields.g;
  b = v16->normalEffectColor.fields.b;
  a = v16->normalEffectColor.fields.a;
LABEL_28:
  UILabel__set_effectColor(v14, *(UnityEngine_Color_o *)&r, 0LL);
}