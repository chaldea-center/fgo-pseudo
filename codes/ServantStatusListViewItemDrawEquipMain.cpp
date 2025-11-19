void ServantStatusListViewItemDrawEquipMain___ctor(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusListViewItemDrawEquipMain__GetKind(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  return 2;
}


void ServantStatusListViewItemDrawEquipMain__SetItem(
        ServantStatusListViewItemDrawEquipMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UserServantEntity_o *userSvtEntity; // x1
  ServantFaceIconComponent_o *servantFacceIcon; // x0
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  int32_t Cost; // w22
  UIIconLabel_o *attackIconLabel; // x21
  int32_t Atk; // w22
  UIIconLabel_o *hpIconLabel; // x21
  int32_t Hp; // w22
  UILabel_o *lateExpLabel; // x21
  int32_t v18; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *svtEntity; // x8
  UnityEngine_Object_o *baseButton; // x21
  Il2CppObject *Master_object; // x21
  UILabel_o *genderTypeImageExplanationLabel; // x20
  UILabel_o *v24; // x19
  __int64 barExp; // [xsp+20h] [xbp-40h] BYREF
  int32_t exp; // [xsp+28h] [xbp-38h] BYREF
  int32_t Level; // [xsp+2Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4CB2E62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_21494/*"maleImageId"*/);
    sub_1C6BA08(&StringLiteral_10848/*"QUEST_CLEAR_SWITCH_IMAGE_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_20354/*"imagePartsGroupId"*/);
    sub_1C6BA08(&StringLiteral_6925/*"GENDER_TYPE_IMAGE_EXPLANATION"*/);
    byte_4CB2E62 = 1;
  }
  entity = 0;
  exp = 0;
  barExp = 0;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      servantFacceIcon = this->fields.servantFacceIcon;
      if ( !servantFacceIcon )
        goto LABEL_55;
      ServantFaceIconComponent__Set_41239152(servantFacceIcon, userSvtEntity, 0, 0, 0);
    }
    else
    {
      userSvtEntity = (UserServantEntity_o *)item->fields.userSvtCollectionEntity;
      if ( userSvtEntity )
      {
        servantFacceIcon = this->fields.servantFacceIcon;
        if ( !servantFacceIcon )
          goto LABEL_55;
        ServantFaceIconComponent__Set_41240764(
          servantFacceIcon,
          (UserServantCollectionEntity_o *)userSvtEntity,
          0,
          0,
          0,
          0);
      }
      else
      {
        userSvtEntity = (UserServantEntity_o *)item->fields.servantLeaderInfo;
        if ( userSvtEntity )
        {
          servantFacceIcon = this->fields.servantFacceIcon;
          if ( !servantFacceIcon )
            goto LABEL_55;
          ServantFaceIconComponent__Set_41243024(servantFacceIcon, (ServantLeaderInfo_o *)userSvtEntity, 0, 0, 0, 0, 0);
        }
        else
        {
          userSvtEntity = (UserServantEntity_o *)item->fields.equipTargetInfo;
          servantFacceIcon = this->fields.servantFacceIcon;
          if ( userSvtEntity )
          {
            if ( !servantFacceIcon )
              goto LABEL_55;
            ServantFaceIconComponent__Set_41245236(servantFacceIcon, (EquipTargetInfo_o *)userSvtEntity, 0, 0, 0);
          }
          else
          {
            if ( !servantFacceIcon )
              goto LABEL_55;
            ServantFaceIconComponent__NoMount(servantFacceIcon, 0);
          }
        }
      }
    }
    levelLabel = this->fields.levelLabel;
    Level = ServantStatusListViewItem__get_Level(item, 0);
    servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0);
    if ( levelLabel )
    {
      UIExtrusionLabel__set_text(levelLabel, (System_String_o *)servantFacceIcon, 0);
      maxLevelLabel = this->fields.maxLevelLabel;
      Level = ServantStatusListViewItem__get_MaxLevel(item, 0);
      servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0);
      if ( maxLevelLabel )
      {
        UILabel__set_text(maxLevelLabel, (System_String_o *)servantFacceIcon, 0);
        costLabel = this->fields.costLabel;
        Cost = ServantStatusListViewItem__get_Cost(item, 0);
        Level = ServantStatusListViewItem__get_EquipCost(item, 0) + Cost;
        servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0);
        if ( costLabel )
        {
          UILabel__set_text(costLabel, (System_String_o *)servantFacceIcon, 0);
          attackIconLabel = this->fields.attackIconLabel;
          Atk = ServantStatusListViewItem__get_Atk(item, 0);
          servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0);
          if ( attackIconLabel )
          {
            UIIconLabel__Set_41344128(attackIconLabel, 5, Atk, (int32_t)servantFacceIcon, 0, 0, 0, 0, 0, 0, 0);
            hpIconLabel = this->fields.hpIconLabel;
            Hp = ServantStatusListViewItem__get_Hp(item, 0);
            servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustHp(item, 0);
            if ( hpIconLabel )
            {
              UIIconLabel__Set_41344128(hpIconLabel, 3, Hp, (int32_t)servantFacceIcon, 0, 0, 0, 0, 0, 0, 0);
              servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__GetExpInfo(
                                                                 item,
                                                                 &exp,
                                                                 (int32_t *)&barExp + 1,
                                                                 (float *)&barExp,
                                                                 0);
              if ( this->fields.expBase )
              {
                if ( ((unsigned __int8)servantFacceIcon & 1) != 0 )
                {
                  UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.lateExpBase;
                  if ( !servantFacceIcon )
                    goto LABEL_55;
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)servantFacceIcon,
                    SHIDWORD(barExp) > 0,
                    0);
                  lateExpLabel = this->fields.lateExpLabel;
                  v18 = HIDWORD(barExp);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  servantFacceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetNumberFormat(v18, 0);
                  if ( !lateExpLabel )
                    goto LABEL_55;
                  UILabel__set_text(lateExpLabel, (System_String_o *)servantFacceIcon, 0);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.expBar;
                  if ( !servantFacceIcon )
                    goto LABEL_55;
                  UIProgressBar__set_value((UIProgressBar_o *)servantFacceIcon, *(float *)&barExp, 0);
                }
                else
                {
                  UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0);
                }
                limitCountGauge = this->fields.limitCountGauge;
                servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0);
                svtEntity = item->fields.svtEntity;
                if ( svtEntity && limitCountGauge )
                {
                  ServantStatusLimitCountGauge__Set(
                    limitCountGauge,
                    (int32_t)servantFacceIcon,
                    svtEntity->fields.limitMax,
                    0);
                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UnityEngine_Object__op_Inequality(baseButton, 0, 0);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.genderTypeImageExplanationLabel;
                  if ( servantFacceIcon )
                  {
                    UILabel__set_text((UILabel_o *)servantFacceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
                    servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0);
                    if ( Master_object )
                    {
                      servantFacceIcon = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                         &entity,
                                                                         (int32_t)servantFacceIcon,
                                                                         (const MethodInfo_33F9128 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                      if ( ((unsigned __int8)servantFacceIcon & 1) == 0 )
                        return;
                      if ( entity )
                      {
                        servantFacceIcon = (ServantFaceIconComponent_o *)EntityScriptUtil__ScriptHasKey(
                                                                           (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                                                           (System_String_o *)StringLiteral_21494/*"maleImageId"*/,
                                                                           0);
                        if ( ((unsigned __int8)servantFacceIcon & 1) != 0 )
                        {
                          genderTypeImageExplanationLabel = this->fields.genderTypeImageExplanationLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          servantFacceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_6925/*"GENDER_TYPE_IMAGE_EXPLANATION"*/,
                                                                             0);
                          if ( !genderTypeImageExplanationLabel )
                            goto LABEL_55;
                          UILabel__set_text(genderTypeImageExplanationLabel, (System_String_o *)servantFacceIcon, 0);
                        }
                        if ( entity )
                        {
                          if ( !EntityScriptUtil__ScriptHasKey(
                                  (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                  (System_String_o *)StringLiteral_20354/*"imagePartsGroupId"*/,
                                  0) )
                            return;
                          v24 = this->fields.genderTypeImageExplanationLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          servantFacceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_10848/*"QUEST_CLEAR_SWITCH_IMAGE_EXPLANATION"*/,
                                                                             0);
                          if ( v24 )
                          {
                            UILabel__set_text(v24, (System_String_o *)servantFacceIcon, 0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C6BC60(servantFacceIcon, userSvtEntity);
  }
}