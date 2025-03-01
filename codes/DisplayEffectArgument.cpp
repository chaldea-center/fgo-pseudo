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
  void *v18; // x1
  struct System_String_o **p_attachNodeName; // x24
  __int64 v20; // x1
  UnityEngine_Vector3_c *v21; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v24; // x8
  float v25; // s1
  struct System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleActionData_o **p_actData; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4BFFD5D & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, actObj);
    sub_1C2E12C(&StringLiteral_1/*""*/, v17);
    byte_4BFFD5D = 1;
  }
  v18 = StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.attachNodeName,
    (int64_t)v18,
    *(int64_t *)&funcIndex,
    (int32_t)actData,
    (System_String_o *)isCommandAfter,
    (BattleSetupInfo_o *)isTreasureDevice,
    (FollowerInfo_o *)attachNodeName,
    (PartyListViewItem_o *)ispopAdjustment);
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4BF7D91 = 1;
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
  v26 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v26;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)actObj, v33, v34, v35, v36, v37, v38);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_actData, (int64_t)actData, v40, v41, v42, v43, v44, v45);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_attachNodeName, (int64_t)attachNodeName, v46, v47, v48, v49, v50, v51);
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

  if ( (byte_4BFFD5F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, targetObj);
    byte_4BFFD5F = 1;
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
    sub_1C2E388(v5, v6);
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
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_Int32_array *v10; // x19
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v10 = fieldIndiv;
  z = popupOffset.fields.z;
  y = popupOffset.fields.y;
  x = popupOffset.fields.x;
  v15 = buffOffset.fields.z;
  v16 = buffOffset.fields.y;
  v17 = buffOffset.fields.x;
  if ( (byte_4BFFD5E & 1) == 0 )
  {
    sub_1C2E12C(&int___TypeInfo, overwriteEffectIds);
    byte_4BFFD5E = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.overwriteEffectIds,
    (int64_t)overwriteEffectIds,
    (int64_t)fieldIndiv,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v10;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v10, v19, v20, v21, v22, v23, v24);
  return this;
}