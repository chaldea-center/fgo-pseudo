void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantEventBonusFilterItem_c *v4; // x8

  if ( (byte_42EB99C & 1) == 0 )
  {
    sub_B5D5C4(&ServantEventBonusFilterItem_TypeInfo, v1, v2, v3);
    byte_42EB99C = 1;
  }
  ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH = 160;
  ServantEventBonusFilterItem_TypeInfo->static_fields->DETAIL_FONT_SIZE = 15;
  v4 = ServantEventBonusFilterItem_TypeInfo;
  ServantEventBonusFilterItem_TypeInfo->static_fields->DETAIL_MAX_HEIGHT = 500;
  v4->static_fields->DETAIL_BASE_HEIGHT = 70;
  v4->static_fields->ADJUST_HEIGHT = 6;
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
    sub_B5D69C(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_B5D69C(this, method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct EventBonusFilterEntity_o **p_entity; // x20
  struct ListViewSort_o **p_sort; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x22
  struct UILabel_o **p_nameLabel; // x24
  struct UILabel_o *detailLabel; // x23
  System_String_o *seriazlier; // x22
  ServantEventBonusFilterItem_c *v43; // x0
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v45; // x0
  System_String_o *v46; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x22
  struct UILabel_o *v48; // x22
  System_String_o *Detail; // x23
  ServantEventBonusFilterItem_c *v50; // x8
  UILabel_o *v51; // x22
  struct UILabel_o *v52; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v54; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v56; // w23
  UnityEngine_GameObject_o *v57; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v60; // x1

  if ( (byte_42EB999 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___,
      (_DWORD)filterEntity,
      (_DWORD)sortParam,
      method);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&ServantEventBonusFilterItem_TypeInfo, v26, v27, v28);
    byte_42EB999 = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)sortParam,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v39 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, (int32_t)v39->fields.list, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v39->fields._MasterName_k__BackingField, 0LL);
    detailLabel = this->fields.detailLabel;
    seriazlier = (System_String_o *)v39->fields.seriazlier;
    v43 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v43 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v43->static_fields;
    v45 = detailLabel;
    v46 = seriazlier;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_48;
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              entity,
                                                              (*p_entity)->fields.value,
                                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_48;
    v47 = entity;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_48;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v47->fields._MasterKind_k__BackingField, 0LL);
    p_nameLabel = &this->fields.nameLabel;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)entity, v47->fields._MasterName_k__BackingField, 0LL);
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_48;
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__GetEntity(
                                                              (SkillLvMaster_o *)entity,
                                                              v47->fields._MasterKind_k__BackingField,
                                                              1,
                                                              0LL);
    if ( !entity )
      goto LABEL_48;
    v48 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v50 = ServantEventBonusFilterItem_TypeInfo;
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v50 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v50->static_fields;
    v45 = v48;
    v46 = Detail;
  }
  WrapControlText__textAdjust(
    v45,
    v46,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_FONT_SIZE,
    static_fields->DETAIL_MAX_HEIGHT,
    0LL);
  v51 = *p_nameLabel;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_48;
  UILabel__SetCondensedScale(v51, ServantEventBonusFilterItem_TypeInfo->static_fields->LABEL_MAX_WIDTH, 0LL);
  v52 = this->fields.detailLabel;
  if ( !v52 )
    goto LABEL_48;
  entity = (DataMasterBase_WarMaster__WarEntity__int__o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v52->fields.mHeight;
  v54 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v54->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( (BYTE3(ServantEventBonusFilterItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v54 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v54->DETAIL_BASE_HEIGHT;
    }
    entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_48;
    v56 = v54->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, *(&entity[2].fields._MasterKind_k__BackingField + 1) + v56, 0LL);
    if ( v56 )
    {
      entity = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.button;
      if ( entity )
      {
        entity = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)entity,
                                                                  0LL);
        if ( this->fields.button )
        {
          v57 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v57, LocalPositionY - (float)v56, 0LL);
          goto LABEL_45;
        }
      }
LABEL_48:
      sub_B5D69C(entity, v37);
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
  ServantEventBonusFilterItem__UpdateButton(this, v60);
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
      sub_B5D69C(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_34052216(
      sort,
      entity->fields.eventId,
      entity->fields.value,
      this->fields.isHide,
      0LL);
  }
}


void __fastcall ServantEventBonusFilterItem__OnClick(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  ListViewSort_o *sort; // x0
  __int64 v7; // x1
  struct EventBonusFilterEntity_o *entity; // x8

  if ( (byte_42EB99A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB99A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_B5D69C(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_34052216(
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
    sub_B5D69C(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_34052216(
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
    sub_B5D69C(0LL, isEnable);
  UICommonButton__SetButtonEnableWithCollider(button, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEventBonusFilterItem__UpdateButton(
        ServantEventBonusFilterItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *button; // x0
  _BOOL4 isHide; // w20
  UILabel_o *v22; // x20
  int v23; // w2
  __int64 v24; // x3
  UILabel_o *v25; // x19
  _DWORD *v26; // x8
  int v27; // s0
  int v28; // s1
  int v29; // s2
  int v30; // s3
  UILabel_o *buttonLabel; // x20
  int v32; // w2
  __int64 v33; // x3
  _DWORD *v34; // x8

  if ( (byte_42EB99B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12052/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17180/*"btn_bg_off"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12050/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17185/*"btn_bg_on"*/, v17, v18, v19);
    byte_42EB99B = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_29;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                        button,
                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_29;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17185/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12050/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v25 = this->fields.buttonLabel;
      if ( !byte_42E563D )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v32, v33);
        byte_42E563D = 1;
      }
      button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v25 )
      {
        v34 = *(_DWORD **)&button[7].fields.m_CachedPtr;
        v27 = v34[24];
        v28 = v34[25];
        v29 = v34[26];
        v30 = v34[27];
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B5D69C(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17180/*"btn_bg_off"*/, 0LL);
  v22 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12052/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_NOT_DISPLAY"*/, 0LL);
  if ( !v22 )
    goto LABEL_29;
  UILabel__set_text(v22, (System_String_o *)button, 0LL);
  v25 = this->fields.buttonLabel;
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v23, v24);
    byte_42E563C = 1;
  }
  button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_29;
  v26 = *(_DWORD **)&button[7].fields.m_CachedPtr;
  v27 = v26[20];
  v28 = v26[21];
  v29 = v26[22];
  v30 = v26[23];
LABEL_28:
  UILabel__set_effectColor(v25, *(UnityEngine_Color_o *)&v27, 0LL);
}