void EventRewardAnotherPayListViewItemDraw___ctor(
        EventRewardAnotherPayListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardAnotherPayListViewItemDraw__SetItemUI(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o *v4; // x19
  struct ItemEntity_o *ItemEntity_k__BackingField; // x21
  ItemIconComponent_o *itemIcon; // x22
  Il2CppObject *Master_object; // x23
  System_Collections_ICollection_o *SkillList; // x0
  int32_t value; // w20
  Il2CppObject *v10; // x22
  SkillLvMaster_o *v11; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  UILabel_o *noneSkillLabel; // x19
  UILabel_o *skillExplainLabel; // x19
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  int32_t EventId_k__BackingField; // [xsp+4h] [xbp-5Ch] BYREF
  SkillLvEntity_o *v21; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4D2B108 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_1967/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_1980/*"ANOTHER_PAY_SKILL_EXPLANATION{0}"*/);
    byte_4D2B108 = 1;
  }
  entity = 0;
  v21 = 0;
  if ( !item )
    goto LABEL_51;
  ItemEntity_k__BackingField = item->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    goto LABEL_51;
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.itemNameLabel;
  if ( !this )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)this, ItemEntity_k__BackingField->fields.name, 0);
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.itemIcon;
  if ( !this )
    goto LABEL_51;
  ItemIconComponent__SetItem_41637264((ItemIconComponent_o *)this, ItemEntity_k__BackingField, -1, 1, 0);
  itemIcon = v4->fields.itemIcon;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  this = (EventRewardAnotherPayListViewItemDraw_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_51;
  this = (EventRewardAnotherPayListViewItemDraw_o *)UserItemMaster__GetEntityDefinitely(
                                                      (UserItemMaster_o *)Master_object,
                                                      *(_QWORD *)(*((_QWORD *)this + 23) + 64LL),
                                                      ItemEntity_k__BackingField->fields.id,
                                                      0);
  if ( !this )
    goto LABEL_51;
  if ( !itemIcon )
    goto LABEL_51;
  ItemIconComponent__SetPossession(itemIcon, HIDWORD(this->fields.m_CancellationTokenSource), 0);
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.maskSpriteObj;
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !item->fields._IsExchangeable_k__BackingField, 0);
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIcon;
  if ( !this )
    goto LABEL_51;
  this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( ItemEntity_k__BackingField->fields.type == 40 )
  {
    SkillList = (System_Collections_ICollection_o *)ItemEntity__GetSkillList(ItemEntity_k__BackingField, 0);
    if ( BasicHelper__IsNullOrEmpty(SkillList, 0) )
    {
      value = ItemEntity_k__BackingField->fields.value;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v10 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
      this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !v10 )
        goto LABEL_51;
      v11 = (SkillLvMaster_o *)this;
      this = (EventRewardAnotherPayListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v10,
                                                          &entity,
                                                          value,
                                                          (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_51;
        if ( SkillLvMaster__TryGetEntity(v11, &v21, value, 1, 0) )
        {
          this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.noneSkillLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
            this = (EventRewardAnotherPayListViewItemDraw_o *)entity;
            if ( entity )
            {
              skillNameLabel = v4->fields.skillNameLabel;
              this = (EventRewardAnotherPayListViewItemDraw_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
              if ( skillNameLabel )
              {
                UILabel__set_text(skillNameLabel, (System_String_o *)this, 0);
                UILabelHelper__SetLabelWithScroll(
                  v4->fields.skillExplainLabel,
                  string_TypeInfo->static_fields->Empty,
                  3,
                  0);
                this = (EventRewardAnotherPayListViewItemDraw_o *)v21;
                if ( v21 )
                {
                  skillDetailLabel = v4->fields.skillDetailLabel;
                  Detail = SkillLvEntity__getDetail(v21, 0, 0, 0);
                  WrapControlText__textAdjust(skillDetailLabel, Detail, 15, 0, 0);
                  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIconMini;
                  if ( this )
                  {
                    SkillIconComponent__Set((SkillIconComponent_o *)this, value, 0);
                    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIconMini;
                    if ( this )
                    {
                      this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0);
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_51:
          sub_1C93D2C(this, item);
        }
      }
    }
    else
    {
      this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIconMini;
      if ( !this )
        goto LABEL_51;
      this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      skillExplainLabel = v4->fields.skillExplainLabel;
      EventId_k__BackingField = item->fields._EventId_k__BackingField;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EventId_k__BackingField);
      v18 = System_String__Format((System_String_o *)StringLiteral_1980/*"ANOTHER_PAY_SKILL_EXPLANATION{0}"*/, v17, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get(v18, 0);
      UILabelHelper__SetLabelWithScroll(skillExplainLabel, v19, 3, 0);
    }
  }
  else
  {
    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillNameLabel;
    if ( !this )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillDetailLabel;
    if ( !this )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
    UILabelHelper__SetLabelWithScroll(v4->fields.skillExplainLabel, string_TypeInfo->static_fields->Empty, 3, 0);
    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIconMini;
    if ( !this )
      goto LABEL_51;
    this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
    if ( !this )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    noneSkillLabel = v4->fields.noneSkillLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1967/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/, 0);
    if ( !noneSkillLabel )
      goto LABEL_51;
    UILabel__set_text(noneSkillLabel, (System_String_o *)this, 0);
  }
}


void EventRewardAnotherPayListViewItemDraw__SetSelectedFrame(
        EventRewardAnotherPayListViewItemDraw_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  long double v3; // q0
  struct UISprite_o *frameObj; // x0

  frameObj = this->fields.frameObj;
  if ( !frameObj )
    sub_1C93D2C(0, isSelected);
  LODWORD(v3) = 0;
  if ( isSelected )
    *(float *)&v3 = 1.0;
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, long double))frameObj->klass->vtable._8_set_alpha.methodPtr)(
    frameObj,
    frameObj->klass->vtable._8_set_alpha.method,
    v3);
}


void EventRewardAnotherPayListViewItemDraw__SetSkillUI(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o *v4; // x19
  struct SkillEntity_o *SkillEntity_k__BackingField; // x20
  UILabel_o *itemNameLabel; // x21
  bool v7; // w0
  UILabel_o *skillExplainLabel; // x20
  System_String_o *Detail; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2B107 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_1C93AD4(&string_TypeInfo);
    byte_4D2B107 = 1;
  }
  entity = 0;
  if ( !item )
    goto LABEL_19;
  SkillEntity_k__BackingField = item->fields._SkillEntity_k__BackingField;
  if ( !SkillEntity_k__BackingField )
    goto LABEL_19;
  itemNameLabel = v4->fields.itemNameLabel;
  this = (EventRewardAnotherPayListViewItemDraw_o *)SkillEntity__getName(SkillEntity_k__BackingField, 0);
  if ( !itemNameLabel )
    goto LABEL_19;
  UILabel__set_text(itemNameLabel, (System_String_o *)this, 0);
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIcon;
  if ( !this )
    goto LABEL_19;
  SkillIconComponent__Set((SkillIconComponent_o *)this, SkillEntity_k__BackingField->fields.id, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_19;
  v7 = SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, SkillEntity_k__BackingField->fields.id, 1, 0);
  skillExplainLabel = v4->fields.skillExplainLabel;
  if ( v7 )
  {
    this = (EventRewardAnotherPayListViewItemDraw_o *)entity;
    if ( !entity )
      goto LABEL_19;
    Detail = SkillLvEntity__getDetail(entity, 0, 0, 0);
  }
  else
  {
    Detail = string_TypeInfo->static_fields->Empty;
  }
  UILabelHelper__SetLabelWithScroll(skillExplainLabel, Detail, 3, 0);
  this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillIconMini;
  if ( !this
    || (this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.itemIcon) == 0)
    || (this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventRewardAnotherPayListViewItemDraw__SetUi(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C93D2C(this, 0);
  if ( item->fields._SkillEntity_k__BackingField )
    EventRewardAnotherPayListViewItemDraw__SetSkillUI(this, item, method);
  else
    EventRewardAnotherPayListViewItemDraw__SetItemUI(this, item, method);
}


void EventRewardAnotherPayListViewItemDraw__Start(
        EventRewardAnotherPayListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UISprite_o *frameObj; // x19

  if ( (byte_4D2B106 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_20637/*"img_frameselect"*/);
    byte_4D2B106 = 1;
  }
  frameObj = this->fields.frameObj;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(frameObj, (System_String_o *)StringLiteral_20637/*"img_frameselect"*/, 0);
}