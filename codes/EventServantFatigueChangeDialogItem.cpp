void __fastcall EventServantFatigueChangeDialogItem___ctor(
        EventServantFatigueChangeDialogItem_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EventServantFatigueChangeDialogItem__Set(
        EventServantFatigueChangeDialogItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  IconLabelInfo_o *v6; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v8; // x1
  int32_t lv; // w22
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_418A974 & 1) == 0 )
  {
    sub_B2C35C(&IconLabelInfo_TypeInfo, userServantEntity);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418A974 = 1;
  }
  v6 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v6, 0LL);
  if ( !userServantEntity )
    goto LABEL_12;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v6 )
    goto LABEL_12;
  IconLabelInfo__Set_27362128(v6, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_12;
  ServantFaceIconComponent__Set_30719352(LevelMax, userServantEntity, v6, 0LL, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_12;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0LL);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  v12 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v12;
  *(_QWORD *)&v14.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  if ( !limitCountIconComponent )
LABEL_12:
    sub_B2C434(LevelMax, v8);
  LimitCountIconComponent__Set(limitCountIconComponent, v13, (int32_t)LevelMax, 0LL);
}