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
  __int64 v20; // x2
  struct System_Int32_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattleActionData_o **p_actData; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40FBCDB & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, actObj);
    sub_B16FFC(&StringLiteral_1/*""*/, v17);
    byte_40FBCDB = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = (BattleServantConfConponent_o *)&this->fields.attachNodeName;
  sub_B16F98(
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
  v21 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v20);
  this->fields.fieldIndiv = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fieldIndiv,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)actObj, v28, v29, v30, v31, v32, v33);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_B16F98((BattleServantConfConponent_o *)p_actData, (System_Int32_array **)actData, v35, v36, v37, v38, v39, v40);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_attachNodeName->klass = (BattleServantConfConponent_c *)attachNodeName;
  sub_B16F98(p_attachNodeName, (System_Int32_array **)attachNodeName, v41, v42, v43, v44, v45, v46);
  *((_BYTE *)p_actData + 24) = ispopAdjustment;
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
  if ( (byte_40FBCDC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, overwriteEffectIds);
    byte_40FBCDC = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overwriteEffectIds,
    (System_Int32_array **)overwriteEffectIds,
    (System_String_array **)fieldIndiv,
    (System_String_array **)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v19);
  this->fields.fieldIndiv = v10;
  sub_B16F98(
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