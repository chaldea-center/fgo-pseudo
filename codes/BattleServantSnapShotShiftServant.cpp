void BattleServantSnapShotShiftServant___ctor(
        BattleServantSnapShotShiftServant_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v7; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w0
  int32_t transformSvtId; // w8
  int32_t v12; // w0
  int32_t maxhp; // w8
  int32_t v14; // w0
  int32_t maxtpturn; // w8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x0
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_597387B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_597387B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    goto LABEL_8;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  this->fields._UniqueId_k__BackingField = svtData->fields.uniqueId;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v6);
  *(_QWORD *)&v24.fields.currentCryptoKey = v8;
  *(_QWORD *)&v24.fields.fakeValue = v9;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v24, 0);
  transformSvtId = svtData->fields.transformSvtId;
  this->fields._SvtId_k__BackingField = v10;
  this->fields._TransformSvtId_k__BackingField = transformSvtId;
  *(_QWORD *)&this->fields._TreasuredvcId_k__BackingField = *(_QWORD *)&svtData->fields.treasuredvcId;
  this->fields._DispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                   svtData->fields._dispLimitCount_k__BackingField,
                                                   0);
  v12 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._13_get_resultHp.methodPtr)(
          svtData,
          svtData->klass->vtable._13_get_resultHp.method);
  maxhp = svtData->fields.maxhp;
  this->fields._ResultHp_k__BackingField = v12;
  this->fields._BaseMaxHp_k__BackingField = maxhp;
  v14 = BattleServantData__getMaxHp(svtData, 0);
  maxtpturn = svtData->fields.maxtpturn;
  this->fields._MaxHp_k__BackingField = v14;
  this->fields._MaxTpTurn_k__BackingField = maxtpturn;
  BuffData = BattleServantData__get_BuffData(svtData, 0);
  if ( !BuffData )
LABEL_8:
    sub_2213CDC(BuffData, v6);
  v16 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v17 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  this->fields._BuffArray_k__BackingField = (struct BattleBuffData_BuffData_array *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BuffArray_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}