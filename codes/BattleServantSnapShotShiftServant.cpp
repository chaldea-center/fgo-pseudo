void __fastcall BattleServantSnapShotShiftServant___ctor(
        BattleServantSnapShotShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v10; // x0
  System_Object_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A308D0 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, svtData);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A308D0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    goto LABEL_8;
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v14, 0LL);
  this->fields._TransformSvtId_k__BackingField = svtData->fields.transformSvtId;
  *(_QWORD *)&this->fields._TreasuredvcId_k__BackingField = *(_QWORD *)&svtData->fields.treasuredvcId;
  this->fields._DispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(
                                                   svtData->fields._dispLimitCount_k__BackingField,
                                                   0LL);
  this->fields._ResultHp_k__BackingField = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._13_get_resultHp.method)(
                                             svtData,
                                             svtData->klass->vtable._14_set_resultHp.methodPtr);
  this->fields._BaseMaxHp_k__BackingField = svtData->fields.maxhp;
  this->fields._MaxHp_k__BackingField = BattleServantData__getMaxHp(svtData, 0LL);
  this->fields._MaxTpTurn_k__BackingField = svtData->fields.maxtpturn;
  BuffData = BattleServantData__get_BuffData(svtData, 0LL);
  if ( !BuffData )
LABEL_8:
    sub_1B7641C(BuffData, v7);
  v10 = BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
  v11 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields._BuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v11;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._BuffArray_k__BackingField, (int32_t)v11, v12, v13);
}