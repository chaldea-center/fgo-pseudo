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
  __int64 v6; // x1
  __int64 v7; // x2
  ItemIconComponent_o *itemIcon; // x22
  __int64 v9; // x2
  Il2CppObject *Master_object; // x23
  System_Collections_ICollection_o *SkillList; // x0
  __int64 v12; // x2
  int32_t value; // w20
  Il2CppObject *v14; // x22
  SkillLvMaster_o *v15; // x21
  UILabel_o *skillNameLabel; // x21
  UILabel_o *skillDetailLabel; // x21
  System_String_o *Detail; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *noneSkillLabel; // x19
  UILabel_o *skillExplainLabel; // x19
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  int32_t EventId_k__BackingField; // [xsp+4h] [xbp-5Ch] BYREF
  SkillLvEntity_o *v29; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_596ABE5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_2053/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_2213A60(&StringLiteral_2066/*"ANOTHER_PAY_SKILL_EXPLANATION{0}"*/);
    byte_596ABE5 = 1;
  }
  entity = 0;
  v29 = 0;
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
  ItemIconComponent__SetItem_47881372((ItemIconComponent_o *)this, ItemEntity_k__BackingField, -1, 1, 0);
  itemIcon = v4->fields.itemIcon;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  this = (EventRewardAnotherPayListViewItemDraw_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v9);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v12);
      v14 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
      this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !v14 )
        goto LABEL_51;
      v15 = (SkillLvMaster_o *)this;
      this = (EventRewardAnotherPayListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v14,
                                                          &entity,
                                                          value,
                                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_51;
        if ( SkillLvMaster__TryGetEntity(v15, &v29, value, 1, 0) )
        {
          this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.noneSkillLabel;
          if ( this )
          {
            UILabel__set_text((UILabel_o *)this, **(System_String_o ***)(qword_5984390 + 184), 0);
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
                  **(System_String_o ***)(qword_5984390 + 184),
                  3,
                  0);
                this = (EventRewardAnotherPayListViewItemDraw_o *)v29;
                if ( v29 )
                {
                  skillDetailLabel = v4->fields.skillDetailLabel;
                  Detail = SkillLvEntity__getDetail(v29, 0, 0, 0);
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
          sub_2213CDC(this, item);
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
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &EventId_k__BackingField);
      v26 = System_String__Format((System_String_o *)StringLiteral_2066/*"ANOTHER_PAY_SKILL_EXPLANATION{0}"*/, v23, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
      v27 = LocalizationManager__Get(v26, 0);
      UILabelHelper__SetLabelWithScroll(skillExplainLabel, v27, 3, 0);
    }
  }
  else
  {
    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillNameLabel;
    if ( !this )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)this, **(System_String_o ***)(qword_5984390 + 184), 0);
    this = (EventRewardAnotherPayListViewItemDraw_o *)v4->fields.skillDetailLabel;
    if ( !this )
      goto LABEL_51;
    UILabel__set_text((UILabel_o *)this, **(System_String_o ***)(qword_5984390 + 184), 0);
    UILabelHelper__SetLabelWithScroll(v4->fields.skillExplainLabel, **(System_String_o ***)(qword_5984390 + 184), 3, 0);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    this = (EventRewardAnotherPayListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2053/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/, 0);
    if ( !noneSkillLabel )
      goto LABEL_51;
    UILabel__set_text(noneSkillLabel, (System_String_o *)this, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayListViewItemDraw__SetSelectedFrame(
        EventRewardAnotherPayListViewItemDraw_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  long double v3; // q0
  struct UISprite_o *frameObj; // x0

  frameObj = this->fields.frameObj;
  if ( !frameObj )
    sub_2213CDC(0, isSelected);
  *(_QWORD *)&v3 = 0;
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
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *skillExplainLabel; // x20
  System_String_o *Detail; // x1
  UILabel_o *v11; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596ABE4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596ABE4 = 1;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this )
    goto LABEL_19;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, SkillEntity_k__BackingField->fields.id, 1, 0) )
  {
    this = (EventRewardAnotherPayListViewItemDraw_o *)entity;
    if ( !entity )
      goto LABEL_19;
    skillExplainLabel = v4->fields.skillExplainLabel;
    Detail = SkillLvEntity__getDetail(entity, 0, 0, 0);
    v11 = skillExplainLabel;
  }
  else
  {
    v11 = v4->fields.skillExplainLabel;
    Detail = **(System_String_o ***)(qword_5984390 + 184);
  }
  UILabelHelper__SetLabelWithScroll(v11, Detail, 3, 0);
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
    sub_2213CDC(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventRewardAnotherPayListViewItemDraw__SetUi(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  if ( item->fields._SkillEntity_k__BackingField )
    EventRewardAnotherPayListViewItemDraw__SetSkillUI(this, item, method);
  else
    EventRewardAnotherPayListViewItemDraw__SetItemUI(this, item, method);
}


void EventRewardAnotherPayListViewItemDraw__Start(
        EventRewardAnotherPayListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *frameObj; // x19

  if ( (byte_596ABE3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21392/*"img_frameselect"*/);
    byte_596ABE3 = 1;
  }
  frameObj = this->fields.frameObj;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetEventUI(frameObj, (System_String_o *)StringLiteral_21392/*"img_frameselect"*/, 0);
}