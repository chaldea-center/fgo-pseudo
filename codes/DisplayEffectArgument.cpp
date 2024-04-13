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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Int32_array **v20; // x1
  BattleServantConfConponent_o *p_attachNodeName; // x27
  struct System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattleActionData_o **p_actData; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42EA9B8 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)actObj, funcIndex, actData);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EA9B8 = 1;
  }
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = (BattleServantConfConponent_o *)&this->fields.attachNodeName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.attachNodeName,
    v20,
    *(System_String_array ***)&funcIndex,
    (System_String_array **)actData,
    (System_Boolean_array **)isCommandAfter,
    (System_Int32_array **)isTreasureDevice,
    (System_Int32_array *)attachNodeName,
    (System_Int32_array *)ispopAdjustment);
  this->fields.buffOffset = UnityEngine_Vector3__get_zero(0LL);
  this->fields.popupOffset = UnityEngine_Vector3__get_zero(0LL);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)actObj, v29, v30, v31, v32, v33, v34);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_B5D560((BattleServantConfConponent_o *)p_actData, (System_Int32_array **)actData, v36, v37, v38, v39, v40, v41);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_attachNodeName->klass = (BattleServantConfConponent_c *)attachNodeName;
  sub_B5D560(p_attachNodeName, (System_Int32_array **)attachNodeName, v42, v43, v44, v45, v46, v47);
  *((_BYTE *)p_actData + 24) = ispopAdjustment;
}


bool __fastcall DisplayEffectArgument__IsDisplayablePopupEachActType(
        DisplayEffectArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BattleActionData_o *actData; // x8

  if ( (byte_42EA9BA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetObj, (_DWORD)method, v3);
    byte_42EA9BA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObj, 0LL, 0LL);
  if ( v6 )
    return 0;
  actData = this->fields.actData;
  if ( !actData )
    goto LABEL_14;
  if ( actData->fields.actType == 4 && this->fields.isTreasureDevice )
  {
    if ( targetObj )
      return UnityEngine_GameObject__get_activeSelf(targetObj, 0LL);
LABEL_14:
    sub_B5D69C(v6, v7);
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
  if ( (byte_42EA9B9 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)overwriteEffectIds, (_DWORD)fieldIndiv, method);
    byte_42EA9B9 = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.overwriteEffectIds,
    (System_Int32_array **)overwriteEffectIds,
    (System_String_array **)fieldIndiv,
    (System_String_array **)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v10;
  sub_B5D560(
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