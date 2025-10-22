void DisplayEffectArgument___ctor(
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
  int32_t v17; // w1
  struct System_String_o **p_attachNodeName; // x24
  UnityEngine_Vector3_c *v19; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  float v23; // s1
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct BattleActionData_o **p_actData; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C596F2 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C596F2 = 1;
  }
  v17 = StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.attachNodeName, v17, funcIndex, (const MethodInfo *)actData);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  v19 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.buffOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.buffOffset.fields.z = z;
  v22 = v19->static_fields;
  v23 = v22->zeroVector.fields.z;
  *(_QWORD *)&this->fields.popupOffset.fields.x = *(_QWORD *)&v22->zeroVector.fields.x;
  this->fields.popupOffset.fields.z = v23;
  v24 = (struct System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
  this->fields.fieldIndiv = v24;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fieldIndiv, (int32_t)v24, v25, v26);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actObj = actObj;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)actObj, v27, v28);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_1C3E508((CGThumbnailListItem_o *)p_actData, (int32_t)actData, v30, v31);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_1C3E508((CGThumbnailListItem_o *)p_attachNodeName, (int32_t)attachNodeName, v32, v33);
  *((_BYTE *)p_actData + 24) = ispopAdjustment;
}


bool DisplayEffectArgument__IsDisplayablePopupEachActType(
        DisplayEffectArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct BattleActionData_o *actData; // x8

  if ( (byte_4C596F4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C596F4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetObj, 0, 0);
  if ( v5 )
    return 0;
  actData = this->fields.actData;
  if ( !actData )
    goto LABEL_13;
  if ( actData->fields.actType == 4 && this->fields.isTreasureDevice )
  {
    if ( targetObj )
      return UnityEngine_GameObject__get_activeSelf(targetObj, 0);
LABEL_13:
    sub_1C3E7C0(v5, v6);
  }
  return 1;
}


DisplayEffectArgument_o *DisplayEffectArgument__SetBuffParam(
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
  const MethodInfo *v16; // x3

  v6 = fieldIndiv;
  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v11 = buffOffset.fields.z;
  v12 = buffOffset.fields.y;
  v13 = buffOffset.fields.x;
  if ( (byte_4C596F3 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C596F3 = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v13;
  this->fields.buffOffset.fields.y = v12;
  this->fields.buffOffset.fields.z = v11;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.overwriteEffectIds,
    (int32_t)overwriteEffectIds,
    (int32_t)fieldIndiv,
    method);
  if ( !v6 )
    v6 = (struct System_Int32_array *)sub_1C3E60C(int___TypeInfo, 0);
  this->fields.fieldIndiv = v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fieldIndiv, (int32_t)v6, v15, v16);
  return this;
}