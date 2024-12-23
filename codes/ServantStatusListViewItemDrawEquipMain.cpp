void __fastcall ServantStatusListViewItemDrawEquipMain___ctor(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawEquipMain__GetKind(
        ServantStatusListViewItemDrawEquipMain_o *this,
        const MethodInfo *method)
{
  return 2;
}


void __fastcall ServantStatusListViewItemDrawEquipMain__SetItem(
        ServantStatusListViewItemDrawEquipMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  int32_t v25; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *svtEntity; // x8
  UnityEngine_Object_o *baseButton; // x21
  Il2CppObject *Master_object; // x21
  UILabel_o *genderTypeImageExplanationLabel; // x19
  float barExp[2]; // [xsp+10h] [xbp-40h] BYREF
  int32_t exp; // [xsp+18h] [xbp-38h] BYREF
  int32_t Level; // [xsp+1Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B63B72 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, item);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_21567/*"maleImageId"*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    sub_1BE4ACC(&StringLiteral_7035/*"GENDER_TYPE_IMAGE_EXPLANATION"*/, v13);
    byte_4B63B72 = 1;
  }
  entity = 0LL;
  exp = 0;
  *(_QWORD *)barExp = 0LL;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      servantFacceIcon = this->fields.servantFacceIcon;
      if ( !servantFacceIcon )
        goto LABEL_49;
      ServantFaceIconComponent__Set_39125412(servantFacceIcon, userSvtEntity, 0LL, 0LL, 0LL);
    }
    else
    {
      userSvtEntity = (UserServantEntity_o *)item->fields.userSvtCollectionEntity;
      if ( userSvtEntity )
      {
        servantFacceIcon = this->fields.servantFacceIcon;
        if ( !servantFacceIcon )
          goto LABEL_49;
        ServantFaceIconComponent__Set_39128068(
          servantFacceIcon,
          (UserServantCollectionEntity_o *)userSvtEntity,
          0LL,
          0LL,
          0,
          0LL);
      }
      else
      {
        userSvtEntity = (UserServantEntity_o *)item->fields.servantLeaderInfo;
        if ( userSvtEntity )
        {
          servantFacceIcon = this->fields.servantFacceIcon;
          if ( !servantFacceIcon )
            goto LABEL_49;
          ServantFaceIconComponent__Set_39129904(
            servantFacceIcon,
            (ServantLeaderInfo_o *)userSvtEntity,
            0LL,
            0LL,
            0,
            0,
            0LL);
        }
        else
        {
          userSvtEntity = (UserServantEntity_o *)item->fields.equipTargetInfo;
          servantFacceIcon = this->fields.servantFacceIcon;
          if ( userSvtEntity )
          {
            if ( !servantFacceIcon )
              goto LABEL_49;
            ServantFaceIconComponent__Set_39131180(servantFacceIcon, (EquipTargetInfo_o *)userSvtEntity, 0LL, 0LL, 0LL);
          }
          else
          {
            if ( !servantFacceIcon )
              goto LABEL_49;
            ServantFaceIconComponent__NoMount(servantFacceIcon, 0LL);
          }
        }
      }
    }
    levelLabel = this->fields.levelLabel;
    Level = ServantStatusListViewItem__get_Level(item, 0LL);
    servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0LL);
    if ( levelLabel )
    {
      UIExtrusionLabel__set_text(levelLabel, (System_String_o *)servantFacceIcon, 0LL);
      maxLevelLabel = this->fields.maxLevelLabel;
      Level = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
      servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0LL);
      if ( maxLevelLabel )
      {
        UILabel__set_text(maxLevelLabel, (System_String_o *)servantFacceIcon, 0LL);
        costLabel = this->fields.costLabel;
        Cost = ServantStatusListViewItem__get_Cost(item, 0LL);
        Level = ServantStatusListViewItem__get_EquipCost(item, 0LL) + Cost;
        servantFacceIcon = (ServantFaceIconComponent_o *)System_Int32__ToString((int32_t)&Level, 0LL);
        if ( costLabel )
        {
          UILabel__set_text(costLabel, (System_String_o *)servantFacceIcon, 0LL);
          attackIconLabel = this->fields.attackIconLabel;
          Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
          servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
          if ( attackIconLabel )
          {
            UIIconLabel__Set_39141664(attackIconLabel, 5, Atk, (int32_t)servantFacceIcon, 0, 0LL, 0, 0, 0, 0LL);
            hpIconLabel = this->fields.hpIconLabel;
            Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
            servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
            if ( hpIconLabel )
            {
              UIIconLabel__Set_39141664(hpIconLabel, 3, Hp, (int32_t)servantFacceIcon, 0, 0LL, 0, 0, 0, 0LL);
              servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__GetExpInfo(
                                                                 item,
                                                                 &exp,
                                                                 (int32_t *)&barExp[1],
                                                                 barExp,
                                                                 0LL);
              if ( this->fields.expBase )
              {
                if ( ((unsigned __int8)servantFacceIcon & 1) != 0 )
                {
                  UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.lateExpBase;
                  if ( !servantFacceIcon )
                    goto LABEL_49;
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)servantFacceIcon,
                    SLODWORD(barExp[1]) > 0,
                    0LL);
                  lateExpLabel = this->fields.lateExpLabel;
                  v25 = LODWORD(barExp[1]);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  servantFacceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetNumberFormat(v25, 0LL);
                  if ( !lateExpLabel )
                    goto LABEL_49;
                  UILabel__set_text(lateExpLabel, (System_String_o *)servantFacceIcon, 0LL);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.expBar;
                  if ( !servantFacceIcon )
                    goto LABEL_49;
                  UIProgressBar__set_value((UIProgressBar_o *)servantFacceIcon, barExp[0], 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
                }
                limitCountGauge = this->fields.limitCountGauge;
                servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
                svtEntity = item->fields.svtEntity;
                if ( svtEntity && limitCountGauge )
                {
                  ServantStatusLimitCountGauge__Set(
                    limitCountGauge,
                    (int32_t)servantFacceIcon,
                    svtEntity->fields.limitMax,
                    0LL);
                  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
                  servantFacceIcon = (ServantFaceIconComponent_o *)this->fields.genderTypeImageExplanationLabel;
                  if ( servantFacceIcon )
                  {
                    UILabel__set_text((UILabel_o *)servantFacceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
                    servantFacceIcon = (ServantFaceIconComponent_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
                    if ( Master_object )
                    {
                      servantFacceIcon = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                                         &entity,
                                                                         (int32_t)servantFacceIcon,
                                                                         (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
                      if ( ((unsigned __int8)servantFacceIcon & 1) == 0 )
                        return;
                      if ( entity )
                      {
                        if ( !EntityScriptUtil__ScriptHasKey(
                                (System_Collections_Generic_Dictionary_string__object__o *)entity[12].klass,
                                (System_String_o *)StringLiteral_21567/*"maleImageId"*/,
                                0LL) )
                          return;
                        genderTypeImageExplanationLabel = this->fields.genderTypeImageExplanationLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        servantFacceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_7035/*"GENDER_TYPE_IMAGE_EXPLANATION"*/,
                                                                           0LL);
                        if ( genderTypeImageExplanationLabel )
                        {
                          UILabel__set_text(genderTypeImageExplanationLabel, (System_String_o *)servantFacceIcon, 0LL);
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
LABEL_49:
    sub_1BE4D28(servantFacceIcon, userSvtEntity);
  }
}