// local variable allocation has failed, the output may be wrong!
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
  int32_t v26; // w3
  System_String_o *v27; // x4
  char v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  char v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct BattleActionData_o **p_actData; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  char v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  char v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7

  if ( (byte_4D333AD & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D333AD = 1;
  }
  v17 = StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.attachNodeName,
    v17,
    funcIndex,
    (int32_t)actData,
    (System_String_o *)isCommandAfter,
    isTreasureDevice,
    (int64_t)attachNodeName,
    (System_String_o *)ispopAdjustment);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
  v24 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.fieldIndiv = v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fieldIndiv, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actObj = actObj;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)actObj, v31, v32, v33, v34, v35, v36);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_actData, (int32_t)actData, v38, v39, v40, v41, v42, v43);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_attachNodeName, (int32_t)attachNodeName, v44, v45, v46, v47, v48, v49);
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

  if ( (byte_4D333AF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D333AF = 1;
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
    sub_1C93D2C(v5, v6);
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
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_Int32_array *v10; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v10 = fieldIndiv;
  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v15 = buffOffset.fields.z;
  v16 = buffOffset.fields.y;
  v17 = buffOffset.fields.x;
  if ( (byte_4D333AE & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D333AE = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteEffectIds,
    (int32_t)overwriteEffectIds,
    (int32_t)fieldIndiv,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.fieldIndiv = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fieldIndiv, (int32_t)v10, v19, v20, v21, v22, v23, v24);
  return this;
}