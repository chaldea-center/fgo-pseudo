void EventServantFatigueChangeDialogItem___ctor(EventServantFatigueChangeDialogItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EventServantFatigueChangeDialogItem__Set(
        EventServantFatigueChangeDialogItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  IconLabelInfo_o *v5; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v7; // x1
  int32_t lv; // w22
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4CE8EC0 & 1) == 0 )
  {
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CE8EC0 = 1;
  }
  v5 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v5, 0);
  if ( !userServantEntity )
    goto LABEL_11;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0);
  if ( !v5 )
    goto LABEL_11;
  IconLabelInfo__Set_41483756(v5, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  ServantFaceIconComponent__Set_41658632(LevelMax, userServantEntity, v5, 0, 0);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_11;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v13, 0);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0);
  if ( !limitCountIconComponent )
LABEL_11:
    sub_1C7BD40(LevelMax, v7);
  LimitCountIconComponent__Set(limitCountIconComponent, v12, (int32_t)LevelMax, 0);
}