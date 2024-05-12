void __fastcall BattleServantSnapShotShiftServant___ctor(
        BattleServantSnapShotShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  struct BattleBuffData_BuffData_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_438E210 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E210 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    goto LABEL_9;
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL);
  this->fields._TransformSvtId_k__BackingField = svtData->fields.transformSvtId;
  this->fields._TreasuredvcId_k__BackingField = svtData->fields.treasuredvcId;
  this->fields._TreasuredvcLevel_k__BackingField = svtData->fields.treasuredvcLevel;
  this->fields._DispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
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
LABEL_9:
    sub_B7769C(BuffData, v6);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
  v10 = (struct BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v9,
                                                  (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields._BuffArray_k__BackingField = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BuffArray_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}