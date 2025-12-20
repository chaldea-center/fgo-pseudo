void EventRewardAnotherPayListViewItemDraw___ctor(
        EventRewardAnotherPayListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRewardAnotherPayListViewItemDraw__SetUi(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o **v4; // x19
  struct ItemEntity_o *ItemEntity_k__BackingField; // x21
  ItemIconComponent_o *v6; // x22
  Il2CppObject *Master_object; // x23
  int32_t value; // w20
  Il2CppObject *v9; // x22
  SkillLvMaster_o *v10; // x21
  UILabel_o *v11; // x21
  UILabel_o *v12; // x21
  System_String_o *Detail; // x0
  UILabel_o *v14; // x19
  SkillLvEntity_o *v15; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = (EventRewardAnotherPayListViewItemDraw_o **)this;
  if ( (byte_4D26FB7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_1C94098(&StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/);
    byte_4D26FB7 = 1;
  }
  entity = 0;
  v15 = 0;
  if ( !item )
    goto LABEL_43;
  ItemEntity_k__BackingField = item->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    goto LABEL_43;
  this = v4[4];
  if ( !this )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)this, ItemEntity_k__BackingField->fields.name, 0);
  this = v4[5];
  if ( !this )
    goto LABEL_43;
  ItemIconComponent__SetItem_41670868((ItemIconComponent_o *)this, ItemEntity_k__BackingField, -1, 1, 0);
  v6 = (ItemIconComponent_o *)v4[5];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  this = (EventRewardAnotherPayListViewItemDraw_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_43;
  this = (EventRewardAnotherPayListViewItemDraw_o *)UserItemMaster__GetEntityDefinitely(
                                                      (UserItemMaster_o *)Master_object,
                                                      *((_QWORD *)this[2].monitor + 8),
                                                      ItemEntity_k__BackingField->fields.id,
                                                      0);
  if ( !this )
    goto LABEL_43;
  if ( !v6 )
    goto LABEL_43;
  ItemIconComponent__SetPossession(v6, HIDWORD(this->fields.m_CancellationTokenSource), 0);
  this = v4[10];
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !item->fields._IsExchangeable_k__BackingField, 0);
  if ( ItemEntity_k__BackingField->fields.type == 40 )
  {
    value = ItemEntity_k__BackingField->fields.value;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
    this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !v9 )
      goto LABEL_43;
    v10 = (SkillLvMaster_o *)this;
    this = (EventRewardAnotherPayListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v9,
                                                        &entity,
                                                        value,
                                                        (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_43;
      if ( SkillLvMaster__TryGetEntity(v10, &v15, value, 1, 0) )
      {
        this = v4[6];
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
          this = (EventRewardAnotherPayListViewItemDraw_o *)entity;
          if ( entity )
          {
            v11 = (UILabel_o *)v4[8];
            this = (EventRewardAnotherPayListViewItemDraw_o *)SkillEntity__getName((SkillEntity_o *)entity, 0);
            if ( v11 )
            {
              UILabel__set_text(v11, (System_String_o *)this, 0);
              this = (EventRewardAnotherPayListViewItemDraw_o *)v15;
              if ( v15 )
              {
                v12 = (UILabel_o *)v4[9];
                Detail = SkillLvEntity__getDetail(v15, 0, 0, 0);
                WrapControlText__textAdjust(v12, Detail, 15, 0, 0);
                this = v4[7];
                if ( this )
                {
                  SkillIconComponent__Set((SkillIconComponent_o *)this, value, 0);
                  this = v4[7];
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
LABEL_43:
        sub_1C942F0(this, item);
      }
    }
  }
  else
  {
    this = v4[8];
    if ( !this )
      goto LABEL_43;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
    this = v4[9];
    if ( !this )
      goto LABEL_43;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0);
    this = v4[7];
    if ( !this )
      goto LABEL_43;
    this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v14 = (UILabel_o *)v4[6];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1960/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/, 0);
    if ( !v14 )
      goto LABEL_43;
    UILabel__set_text(v14, (System_String_o *)this, 0);
  }
}