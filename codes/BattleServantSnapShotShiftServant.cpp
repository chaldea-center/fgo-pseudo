void __fastcall BattleServantSnapShotShiftServant___ctor(
        BattleServantSnapShotShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v11; // x0
  System_Object_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B18CED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, svtData, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B18CED = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    goto LABEL_8;
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v19.fields.currentCryptoKey = v10;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  this->fields._SvtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  this->fields._TransformSvtId_k__BackingField = svtData->fields.transformSvtId;
  *(_QWORD *)&this->fields._TreasuredvcId_k__BackingField = *(_QWORD *)&svtData->fields.treasuredvcId;
  this->fields._DispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
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
    sub_1BCAA3C(BuffData, v8);
  v11 = BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
  v12 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields._BuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BuffArray_k__BackingField,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}