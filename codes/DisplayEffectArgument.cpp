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
  __int64 v18; // x2
  void *v19; // x1
  struct System_String_o **p_attachNodeName; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Vector3_c *v23; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  float v27; // s1
  struct System_Int32_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct BattleActionData_o **p_actData; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B186E2 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, actObj, *(_QWORD *)&funcIndex);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B186E2 = 1;
  }
  v19 = StringLiteral_1/*""*/;
  this->fields.attachNodeName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_attachNodeName = &this->fields.attachNodeName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.attachNodeName,
    (int64_t)v19,
    *(int64_t *)&funcIndex,
    (int32_t)actData,
    (System_String_o *)isCommandAfter,
    (BattleSetupInfo_o *)isTreasureDevice,
    (FollowerInfo_o *)attachNodeName,
    (PartyListViewItem_o *)ispopAdjustment);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v22);
    byte_4B109C1 = 1;
  }
  v23 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.buffOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.buffOffset.fields.z = z;
  v26 = v23->static_fields;
  v27 = v26->zeroVector.fields.z;
  *(_QWORD *)&this->fields.popupOffset.fields.x = *(_QWORD *)&v26->zeroVector.fields.x;
  this->fields.popupOffset.fields.z = v27;
  v28 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actObj = actObj;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)actObj, v35, v36, v37, v38, v39, v40);
  this->fields.actData = actData;
  p_actData = &this->fields.actData;
  *((_DWORD *)p_actData - 2) = funcIndex;
  sub_1BCA784((PartyOrganizationUtility_o *)p_actData, (int64_t)actData, v42, v43, v44, v45, v46, v47);
  *((_BYTE *)p_actData + 8) = isCommandAfter;
  *((_BYTE *)p_actData + 9) = isTreasureDevice;
  p_actData[2] = (struct BattleActionData_o *)attachNodeName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_attachNodeName, (int64_t)attachNodeName, v48, v49, v50, v51, v52, v53);
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

  if ( (byte_4B186E4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetObj, method);
    byte_4B186E4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetObj);
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
    sub_1BCAA3C(v5, v6);
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
  if ( (byte_4B186E3 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, overwriteEffectIds, fieldIndiv);
    byte_4B186E3 = 1;
  }
  this->fields.overwriteEffectIds = overwriteEffectIds;
  this->fields.buffOffset.fields.x = v17;
  this->fields.buffOffset.fields.y = v16;
  this->fields.buffOffset.fields.z = v15;
  this->fields.popupOffset.fields.x = x;
  this->fields.popupOffset.fields.y = y;
  this->fields.popupOffset.fields.z = z;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteEffectIds,
    (int64_t)overwriteEffectIds,
    (int64_t)fieldIndiv,
    (int32_t)method,
    v6,
    v7,
    v8,
    v9);
  if ( !v10 )
    v10 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.fieldIndiv = v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fieldIndiv, (int64_t)v10, v19, v20, v21, v22, v23, v24);
  return this;
}