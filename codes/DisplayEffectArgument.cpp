// local variable allocation has failed, the output may be wrong!
void __fastcall DisplayEffectArgument___ctor(
        DisplayEffectArgument_o *this,
        UnityEngine_GameObject_o *actObj,
        int32_t funcIndex,
        BattleActionData_o *actData,
        bool isCommandAfter,
        bool isTreasureDevice,
        System_String_o *attachNodeName,
        bool ispopAdjustment,
        const MethodInfo *method)
{
  __int64 v17; // x1
  System_Int32_array **v18; // x1
  BattleServantConfConponent_o *p_attachNodeName; // x27
  struct System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BattleActionData_o **p_actData; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42162D0 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, actObj);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_42162D0 = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = (BattleServantConfConponent_o *)&this->fields.attachNodeName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.attachNodeName,
    v18,
    *(System_String_array ***)&funcIndex,
    (System_String_array **)actData,
    (System_Boolean_array **)isCommandAfter,
    (System_Int32_array **)isTreasureDevice,
    (System_Int32_array *)attachNodeName,
    (System_Int32_array *)ispopAdjustment);
  this->fields.buffOffset = UnityEngine_Vector3__get_zero(0LL);
  this->fields.popupOffset = UnityEngine_Vector3__get_zero(0LL);
  v20 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)actObj, v27, v28, v29, v30, v31, v32);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_B0D840((BattleServantConfConponent_o *)p_actData, (System_Int32_array **)actData, v34, v35, v36, v37, v38, v39);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_attachNodeName->klass = (BattleServantConfConponent_c *)attachNodeName;
  sub_B0D840(p_attachNodeName, (System_Int32_array **)attachNodeName, v40, v41, v42, v43, v44, v45);
  *((_BYTE *)p_actData + 24) = ispopAdjustment;
}


bool __fastcall DisplayEffectArgument__IsDisplayablePopupEachActType(
        DisplayEffectArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  struct BattleActionData_o *actData; // x8

  if ( (byte_42162D2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetObj);
    byte_42162D2 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObj, 0LL, 0LL);
  if ( v5 )
    return 0;
  actData = this->fields.actData;
  if ( !actData )
    goto LABEL_14;
  if ( actData->fields.actType == 4 && this->fields.isTreasureDevice )
  {
    if ( targetObj )
      return UnityEngine_GameObject__get_activeSelf(targetObj, 0LL);
LABEL_14:
    sub_B0D97C(v5);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
DisplayEffectArgument_o *__fastcall DisplayEffectArgument__SetBuffParam(
        DisplayEffectArgument_o *this,
        UnityEngine_Vector3_o buffOffset,
        UnityEngine_Vector3_o popupOffset,
        System_Int32_array *overwriteEffectIds,
        System_Int32_array *fieldIndiv,
        const MethodInfo *method)
{
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Int32_array *v10; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v10 = fieldIndiv;
  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v15 = buffOffset.fields.z;
  v16 = buffOffset.fields.y;
  v17 = buffOffset.fields.x;
  if ( (byte_42162D1 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, overwriteEffectIds);
    byte_42162D1 = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.overwriteEffectIds,
    (System_Int32_array **)overwriteEffectIds,
    (System_String_array **)fieldIndiv,
    (System_String_array **)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v10,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  return this;
}