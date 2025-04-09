void __fastcall EventRewardAnotherPayListViewItemDraw___ctor(
        EventRewardAnotherPayListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayListViewItemDraw__SetUi(
        EventRewardAnotherPayListViewItemDraw_o *this,
        EventRewardAnotherPayListViewItem_o *item,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o **v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct ItemEntity_o *ItemEntity_k__BackingField; // x21
  ItemIconComponent_o *v14; // x22
  Il2CppObject *Master_object; // x23
  int32_t value; // w20
  Il2CppObject *v17; // x22
  SkillLvMaster_o *v18; // x21
  UILabel_o *v19; // x21
  UILabel_o *v20; // x21
  System_String_o *Detail; // x0
  UILabel_o *v22; // x19
  SkillLvEntity_o *v23; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v4 = (EventRewardAnotherPayListViewItemDraw_o **)this;
  if ( (byte_49B5B5B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillLvMaster___, item);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&string_TypeInfo, v11);
    this = (EventRewardAnotherPayListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_1971/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/, v12);
    byte_49B5B5B = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  if ( !item )
    goto LABEL_43;
  ItemEntity_k__BackingField = item->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    goto LABEL_43;
  this = v4[4];
  if ( !this )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)this, ItemEntity_k__BackingField->fields.name, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_43;
  ItemIconComponent__SetItem_38678828((ItemIconComponent_o *)this, ItemEntity_k__BackingField, -1, 1, 0LL);
  v14 = (ItemIconComponent_o *)v4[5];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, item);
    byte_49B57A5 = 1;
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
                                                      0LL);
  if ( !this )
    goto LABEL_43;
  if ( !v14 )
    goto LABEL_43;
  ItemIconComponent__SetPossession(v14, HIDWORD(this->fields.m_CancellationTokenSource), 0LL);
  this = v4[10];
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    !item->fields._IsExchangeable_k__BackingField,
    0LL);
  if ( ItemEntity_k__BackingField->fields.type == 40 )
  {
    value = ItemEntity_k__BackingField->fields.value;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
    this = (EventRewardAnotherPayListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !v17 )
      goto LABEL_43;
    v18 = (SkillLvMaster_o *)this;
    this = (EventRewardAnotherPayListViewItemDraw_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                                        &entity,
                                                        value,
                                                        (const MethodInfo_319D9E8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_43;
      if ( SkillLvMaster__TryGetEntity(v18, &v23, value, 1, 0LL) )
      {
        this = v4[6];
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
          this = (EventRewardAnotherPayListViewItemDraw_o *)entity;
          if ( entity )
          {
            v19 = (UILabel_o *)v4[8];
            this = (EventRewardAnotherPayListViewItemDraw_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
            if ( v19 )
            {
              UILabel__set_text(v19, (System_String_o *)this, 0LL);
              this = (EventRewardAnotherPayListViewItemDraw_o *)v23;
              if ( v23 )
              {
                v20 = (UILabel_o *)v4[9];
                Detail = SkillLvEntity__getDetail(v23, 0, 0LL);
                WrapControlText__textAdjust(v20, Detail, 15, 0, 0LL);
                this = v4[7];
                if ( this )
                {
                  SkillIconComponent__Set((SkillIconComponent_o *)this, value, 0LL);
                  this = v4[7];
                  if ( this )
                  {
                    this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                    if ( this )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_43:
        sub_1B4D1EC(this, item);
      }
    }
  }
  else
  {
    this = v4[8];
    if ( !this )
      goto LABEL_43;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
    this = v4[9];
    if ( !this )
      goto LABEL_43;
    UILabel__set_text((UILabel_o *)this, string_TypeInfo->static_fields->Empty, 0LL);
    this = v4[7];
    if ( !this )
      goto LABEL_43;
    this = (EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v22 = (UILabel_o *)v4[6];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventRewardAnotherPayListViewItemDraw_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_1971/*"ANOTHER_PAY_ITEM_MULTI_LIST_SKILL_NONE"*/,
                                                        0LL);
    if ( !v22 )
      goto LABEL_43;
    UILabel__set_text(v22, (System_String_o *)this, 0LL);
  }
}