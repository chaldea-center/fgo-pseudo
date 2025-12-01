void BattleServantSnapShotShiftServant___ctor(
        BattleServantSnapShotShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v9; // x0
  System_Object_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CCA3A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CCA3A9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    goto LABEL_8;
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v8;
  *(_QWORD *)&v17.fields.fakeValue = v7;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v17, 0);
  this->fields._TransformSvtId_k__BackingField = svtData->fields.transformSvtId;
  *(_QWORD *)&this->fields._TreasuredvcId_k__BackingField = *(_QWORD *)&svtData->fields.treasuredvcId;
  this->fields._DispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                   svtData->fields._dispLimitCount_k__BackingField,
                                                   0);
  this->fields._ResultHp_k__BackingField = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._13_get_resultHp.methodPtr)(
                                             svtData,
                                             svtData->klass->vtable._13_get_resultHp.method);
  this->fields._BaseMaxHp_k__BackingField = svtData->fields.maxhp;
  this->fields._MaxHp_k__BackingField = BattleServantData__getMaxHp(svtData, 0);
  this->fields._MaxTpTurn_k__BackingField = svtData->fields.maxtpturn;
  BuffData = BattleServantData__get_BuffData(svtData, 0);
  if ( !BuffData )
LABEL_8:
    sub_1C71608(BuffData, v6);
  v9 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields._BuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BuffArray_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}