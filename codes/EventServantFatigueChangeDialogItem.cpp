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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  IconLabelInfo_o *v9; // x21
  ServantFaceIconComponent_o *LevelMax; // x0
  __int64 v11; // x1
  int32_t lv; // w22
  LimitCountIconComponent_o *limitCountIconComponent; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42EC038 & 1) == 0 )
  {
    sub_B5D5C4(&IconLabelInfo_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42EC038 = 1;
  }
  v9 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0LL);
  if ( !userServantEntity )
    goto LABEL_12;
  lv = userServantEntity->fields.lv;
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax(userServantEntity, 0LL);
  if ( !v9 )
    goto LABEL_12;
  IconLabelInfo__Set_28463004(v9, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL);
  LevelMax = this->fields.servantFaceIconComponent;
  if ( !LevelMax )
    goto LABEL_12;
  ServantFaceIconComponent__Set_30775392(LevelMax, userServantEntity, v9, 0LL, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)this->fields.limitCountIconComponent;
  if ( !LevelMax )
    goto LABEL_12;
  LimitCountIconComponent__Clear((LimitCountIconComponent_o *)LevelMax, 0LL);
  limitCountIconComponent = this->fields.limitCountIconComponent;
  v15 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  LevelMax = (ServantFaceIconComponent_o *)UserServantEntity__getLimitCntMax(userServantEntity, 0LL);
  if ( !limitCountIconComponent )
LABEL_12:
    sub_B5D69C(LevelMax, v11);
  LimitCountIconComponent__Set(limitCountIconComponent, v16, (int32_t)LevelMax, 0LL);
}