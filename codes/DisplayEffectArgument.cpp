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
  Il2CppClass *v19; // x0
  UnityEngine_Vector3_c *v20; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  float v24; // s1
  struct System_Int32_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  char v28; // w4
  char v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  char v34; // w4
  char v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct BattleActionData_o **p_actData; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  char v41; // w4
  char v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  char v47; // w4
  char v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_5973341 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973341 = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attachNodeName,
    v17,
    *(System_String_o **)&funcIndex,
    (System_String_o *)actData,
    isCommandAfter,
    isTreasureDevice,
    (bool)attachNodeName,
    ispopAdjustment);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v19 = int___TypeInfo;
  v20 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.buffOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.buffOffset.fields.z = z;
  v23 = v20->static_fields;
  v24 = v23->zeroVector.fields.z;
  *(_QWORD *)&this->fields.popupOffset.fields.x = *(_QWORD *)&v23->zeroVector.fields.x;
  this->fields.popupOffset.fields.z = v24;
  v25 = (struct System_Int32_array *)sub_2213B20(v19, 0);
  this->fields.fieldIndiv = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fieldIndiv, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.actObj = actObj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)actObj, v32, v33, v34, v35, v36, v37);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_actData, (int32_t)actData, v39, v40, v41, v42, v43, v44);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_attachNodeName,
    (int32_t)attachNodeName,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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

  if ( (byte_5973343 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973343 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetObj);
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
    sub_2213CDC(v5, v6);
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
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  struct System_Int32_array *v16; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v13 = buffOffset.fields.z;
  v14 = buffOffset.fields.y;
  v15 = buffOffset.fields.x;
  v16 = fieldIndiv;
  if ( (byte_5973342 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_5973342 = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v15;
  this->fields.buffOffset.fields.y = v14;
  this->fields.buffOffset.fields.z = v13;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteEffectIds,
    (int32_t)overwriteEffectIds,
    (System_String_o *)fieldIndiv,
    (System_String_o *)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v16 )
    v16 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  this->fields.fieldIndiv = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fieldIndiv, (int32_t)v16, v19, v20, v21, v22, v23, v24);
  return this;
}