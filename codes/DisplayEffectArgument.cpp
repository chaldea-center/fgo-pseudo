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
  int32_t v18; // w1
  struct System_String_o **p_attachNodeName; // x24
  __int64 v20; // x1
  UnityEngine_Vector3_c *v21; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v24; // x8
  float v25; // s1
  struct System_Int32_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct BattleActionData_o **p_actData; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_4A72319 & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, actObj);
    sub_1B90010(&StringLiteral_1/*""*/, v17);
    byte_4A72319 = 1;
  }
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.attachNodeName, v18, funcIndex, (int32_t)actData);
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4A6A9C1 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.buffOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.buffOffset.fields.z = z;
  v24 = v21->static_fields;
  v25 = v24->zeroVector.fields.z;
  *(_QWORD *)&this->fields.popupOffset.fields.x = *(_QWORD *)&v24->zeroVector.fields.x;
  this->fields.popupOffset.fields.z = v25;
  v26 = (struct System_Int32_array *)sub_1B900B8(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v26;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fieldIndiv, (int32_t)v26, v27, v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)actObj, v29, v30);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_actData, (int32_t)actData, v32, v33);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_attachNodeName, (int32_t)attachNodeName, v34, v35);
  *((_BYTE *)p_actData + 24) = ispopAdjustment;
}


bool __fastcall DisplayEffectArgument__IsDisplayablePopupEachActType(
        DisplayEffectArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct BattleActionData_o *actData; // x8

  if ( (byte_4A7231B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, targetObj);
    byte_4A7231B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObj, 0LL, 0LL);
  if ( v5 )
    return 0;
  actData = this->fields.actData;
  if ( !actData )
    goto LABEL_13;
  if ( actData->fields.actType == 4 && this->fields.isTreasureDevice )
  {
    if ( targetObj )
      return UnityEngine_GameObject__get_activeSelf(targetObj, 0LL);
LABEL_13:
    sub_1B9026C(v5, v6);
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
  struct System_Int32_array *v6; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  float v11; // s11
  float v12; // s12
  float v13; // s13
  int32_t v15; // w2
  int32_t v16; // w3

  v6 = fieldIndiv;
  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v11 = buffOffset.fields.z;
  v12 = buffOffset.fields.y;
  v13 = buffOffset.fields.x;
  if ( (byte_4A7231A & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, overwriteEffectIds);
    byte_4A7231A = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v13;
  this->fields.buffOffset.fields.y = v12;
  this->fields.buffOffset.fields.z = v11;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.overwriteEffectIds,
    (int32_t)overwriteEffectIds,
    (int32_t)fieldIndiv,
    (int32_t)method);
  if ( !v6 )
    v6 = (struct System_Int32_array *)sub_1B900B8(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fieldIndiv, (int32_t)v6, v15, v16);
  return this;
}