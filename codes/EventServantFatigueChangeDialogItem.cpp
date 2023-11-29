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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  IconLabelInfo_o *v8; // x21
  int32_t lv; // w22
  int32_t LevelMax; // w0
  ServantFaceIconComponent_o *servantFaceIconComponent; // x0
  LimitCountIconComponent_o *limitCountIconComponent; // x0
  LimitCountIconComponent_o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  int32_t LimitCntMax; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FD163 & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, userServantEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FD163 = 1;
  }
  v8 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, userServantEntity, method, v3, v4);
  IconLabelInfo___ctor(v8, 0LL);
  if ( !userServantEntity )
    goto LABEL_12;
  lv = userServantEntity->fields.lv;
  LevelMax = UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v8 )
    goto LABEL_12;
  IconLabelInfo__Set_28888132(v8, 2, lv, LevelMax, 0, 0, 0, 0, 0LL);
  servantFaceIconComponent = this->fields.servantFaceIconComponent;
  if ( !servantFaceIconComponent )
    goto LABEL_12;
  ServantFaceIconComponent__Set_30631556(servantFaceIconComponent, userServantEntity, v8, 0LL, 0LL);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  if ( !limitCountIconComponent )
    goto LABEL_12;
  LimitCountIconComponent__Clear(limitCountIconComponent, 0LL);
  v13 = this->fields.limitCountIconComponent;
  v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  LimitCntMax = UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  if ( !v13 )
LABEL_12:
    sub_B170D4();
  LimitCountIconComponent__Set(v13, v16, LimitCntMax, 0LL);
}