void __fastcall ServantEventBonusFilterItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1D5C0 & 1) == 0 )
  {
    sub_1C3B764(&ServantEventBonusFilterItem_TypeInfo, v1);
    byte_4C1D5C0 = 1;
  }
  *ServantEventBonusFilterItem_TypeInfo->static_fields = (struct ServantEventBonusFilterItem_StaticFields)xmmword_C0CD00;
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
    sub_1C3B9C0(this, method);
  return entity->fields.eventId;
}


float __fastcall ServantEventBonusFilterItem__GetHeight(ServantEventBonusFilterItem_o *this, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1C3B9C0(this, method);
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
  __int64 v15; // x1
  EventBonusFilterEntity_o *entity; // x0
  bool v17; // w22
  EventBonusFilterEntity_o *v18; // x22
  ServantEventBonusFilterItem_c *v19; // x0
  struct UILabel_o *detailLabel; // x23
  System_String_o *klass; // x22
  struct ServantEventBonusFilterItem_StaticFields *static_fields; // x8
  UILabel_o *v23; // x0
  System_String_o *v24; // x1
  EventBonusFilterEntity_o *v25; // x22
  struct UILabel_o *v26; // x22
  System_String_o *Detail; // x0
  ServantEventBonusFilterItem_c *v28; // x8
  System_String_o *v29; // x23
  UILabel_o *nameLabel; // x22
  struct UILabel_o *v31; // x8
  int32_t mHeight; // w22
  struct ServantEventBonusFilterItem_StaticFields *v33; // x9
  int32_t DETAIL_BASE_HEIGHT; // w8
  int v35; // w23
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionY; // s0
  const MethodInfo *v39; // x1

  if ( (byte_4C1D5BD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___, filterEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1C3B764(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v11);
    sub_1C3B764(&ServantEventBonusFilterItem_TypeInfo, v12);
    byte_4C1D5BD = 1;
  }
  this->fields.entity = filterEntity;
  p_entity = &this->fields.entity;
  sub_1C3B708(&this->fields.entity);
  this->fields.sort = sortParam;
  p_sort = &this->fields.sort;
  sub_1C3B708(&this->fields.sort);
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_40;
  v17 = EventBonusFilterEntity__CheckBonusFilterType(entity, 5, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( v17 )
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventBonusFilterGroupInfoMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_329AE48 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v18 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)entity, v18->fields.condType, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v18->fields.value, 0LL);
    v19 = ServantEventBonusFilterItem_TypeInfo;
    detailLabel = this->fields.detailLabel;
    klass = (System_String_o *)v18[1].klass;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v19 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v19->static_fields;
    v23 = detailLabel;
    v24 = klass;
  }
  else
  {
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
    if ( !*p_entity )
      goto LABEL_40;
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)entity,
                                           (*p_entity)->fields.value,
                                           (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !entity )
      goto LABEL_40;
    v25 = entity;
    entity = (EventBonusFilterEntity_o *)this->fields.skillIconComponent;
    if ( !entity )
      goto LABEL_40;
    SkillIconComponent__Set((SkillIconComponent_o *)entity, v25->fields.eventId, 0LL);
    entity = (EventBonusFilterEntity_o *)this->fields.nameLabel;
    if ( !entity )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)entity, *(System_String_o **)&v25->fields.value, 0LL);
    entity = (EventBonusFilterEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !entity )
      goto LABEL_40;
    entity = (EventBonusFilterEntity_o *)SkillLvMaster__GetEntity(
                                           (SkillLvMaster_o *)entity,
                                           v25->fields.eventId,
                                           1,
                                           0LL);
    if ( !entity )
      goto LABEL_40;
    v26 = this->fields.detailLabel;
    Detail = SkillLvEntity__getDetail((SkillLvEntity_o *)entity, 0, 0LL);
    v28 = ServantEventBonusFilterItem_TypeInfo;
    v29 = Detail;
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v28 = ServantEventBonusFilterItem_TypeInfo;
    }
    static_fields = v28->static_fields;
    v23 = v26;
    v24 = v29;
  }
  WrapControlText__textAdjust(v23, v24, static_fields->DETAIL_FONT_SIZE, static_fields->DETAIL_FONT_SIZE, 0LL);
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
        (v31 = this->fields.detailLabel) == 0LL) )
  {
LABEL_40:
    sub_1C3B9C0(entity, v15);
  }
  entity = (EventBonusFilterEntity_o *)ServantEventBonusFilterItem_TypeInfo;
  mHeight = v31->fields.mHeight;
  v33 = ServantEventBonusFilterItem_TypeInfo->static_fields;
  DETAIL_BASE_HEIGHT = v33->DETAIL_BASE_HEIGHT;
  if ( mHeight > DETAIL_BASE_HEIGHT )
  {
    if ( !ServantEventBonusFilterItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterItem_TypeInfo);
      v33 = ServantEventBonusFilterItem_TypeInfo->static_fields;
      DETAIL_BASE_HEIGHT = v33->DETAIL_BASE_HEIGHT;
    }
    entity = (EventBonusFilterEntity_o *)this->fields.baseSprite;
    if ( !entity )
      goto LABEL_40;
    v35 = v33->ADJUST_HEIGHT + mHeight - DETAIL_BASE_HEIGHT;
    UIWidget__set_height((UIWidget_o *)entity, entity[3].fields.priority + v35, 0LL);
    if ( v35 )
    {
      entity = (EventBonusFilterEntity_o *)this->fields.button;
      if ( entity )
      {
        entity = (EventBonusFilterEntity_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)entity,
                                               0LL);
        if ( this->fields.button )
        {
          v36 = (UnityEngine_GameObject_o *)entity;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.button, 0LL);
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
          GameObjectExtensions__SetLocalPositionY(v36, LocalPositionY - (float)v35, 0LL);
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
  ServantEventBonusFilterItem__UpdateButton(this, v39);
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
      sub_1C3B9C0(sort, v4);
    ListViewSort__SetSvtEventBonusFilter_42260332(
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

  if ( (byte_4C1D5BE & 1) == 0 )
  {
    sub_1C3B764(&Method_ServantEventBonusFilterItem_OnClick__, method);
    byte_4C1D5BE = 1;
  }
  v3 = Method_ServantEventBonusFilterItem_OnClick__;
  if ( (*((_BYTE *)Method_ServantEventBonusFilterItem_OnClick__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3B77C(Method_ServantEventBonusFilterItem_OnClick__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.isHide ^= 1u;
  ServantEventBonusFilterItem__UpdateButton(this, v5);
  entity = this->fields.entity;
  if ( !entity || (sort = this->fields.sort) == 0LL )
    sub_1C3B9C0(sort, v7);
  ListViewSort__SetSvtEventBonusFilter_42260332(
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
    sub_1C3B9C0(sort, v5);
  ListViewSort__SetSvtEventBonusFilter_42260332(
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
    sub_1C3B9C0(0LL, isEnable);
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

  if ( (byte_4C1D5BF & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_12044/*"STONE_INFO"*/, v4);
    sub_1C3B764(&StringLiteral_17823/*"commandcard_select_1st"*/, v5);
    sub_1C3B764(&StringLiteral_12042/*"STONE_FRAGMENTS_UNIT"*/, v6);
    sub_1C3B764(&StringLiteral_17828/*"common"*/, v7);
    byte_4C1D5BF = 1;
  }
  button = (UnityEngine_Component_o *)this->fields.button;
  if ( !button )
    goto LABEL_25;
  isHide = this->fields.isHide;
  button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        button,
                                        (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !button )
    goto LABEL_25;
  if ( !isHide )
  {
    UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17828/*"common"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12042/*"STONE_FRAGMENTS_UNIT"*/, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)button, 0LL);
      v11 = this->fields.buttonLabel;
      if ( !byte_4C1CCC3 )
      {
        sub_1C3B764(&LocalizationManager_TypeInfo, method);
        byte_4C1CCC3 = 1;
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
    sub_1C3B9C0(button, method);
  }
  UISprite__set_spriteName((UISprite_o *)button, (System_String_o *)StringLiteral_17823/*"commandcard_select_1st"*/, 0LL);
  v10 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  button = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12044/*"STONE_INFO"*/, 0LL);
  if ( !v10 )
    goto LABEL_25;
  UILabel__set_text(v10, (System_String_o *)button, 0LL);
  v11 = this->fields.buttonLabel;
  if ( !byte_4C1CCC2 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    byte_4C1CCC2 = 1;
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