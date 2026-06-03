void ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78145 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E78145 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4E78144 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4E78144 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_324D340 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantTransformEntity__CreatePrimaryKey(ServantTransformEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}


System_String_o *ServantTransformEntity__GetCondLabelColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78142 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18493/*"condLabelColor"*/);
    byte_4E78142 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18493/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTransformEntity__GetCondSpriteColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78141 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18495/*"condSpriteColor"*/);
    byte_4E78141 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18495/*"condSpriteColor"*/, 0, 0);
}


void ServantTransformEntity__GetTransformInfo(
        ServantTransformEntity_o *this,
        ServantEntity_TransformInfo_o **before,
        ServantEntity_TransformInfo_o **after,
        const MethodInfo *method)
{
  System_String_o *CondLabelColor; // x22
  const MethodInfo *v8; // x1
  System_String_o *CondSpriteColor; // x23
  int32_t IntValue; // w24
  int32_t v11; // w25
  int32_t v12; // w26
  __int64 v13; // x27
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_String_o *befTitle; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct System_String_o *aftTitle; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7

  if ( (byte_4E78143 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantEntity_TransformInfo_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21339/*"isNotProfileParameterChange"*/);
    sub_1D0F0B4(&StringLiteral_21335/*"isNotClassSkillChange"*/);
    sub_1D0F0B4(&StringLiteral_21341/*"isNotSkillChange"*/);
    byte_4E78143 = 1;
  }
  CondLabelColor = ServantTransformEntity__GetCondLabelColor(this, (const MethodInfo *)before);
  CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(this, v8);
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21341/*"isNotSkillChange"*/, 0, 0);
  v11 = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21335/*"isNotClassSkillChange"*/, 0, 0);
  v12 = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21339/*"isNotProfileParameterChange"*/, 0, 0);
  v13 = sub_1D0F300(ServantEntity_TransformInfo_TypeInfo);
  ServantEntity_TransformInfo___ctor((ServantEntity_TransformInfo_o *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  befTitle = this->fields.befTitle;
  *(_QWORD *)(v13 + 40) = befTitle;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v13 + 40), (int32_t)befTitle, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = CondLabelColor;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)CondLabelColor, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v13 + 24) = CondSpriteColor;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)CondSpriteColor, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v13 + 48) = IntValue;
  *(_DWORD *)(v13 + 52) = v11;
  *(_DWORD *)(v13 + 56) = v12;
  *before = (ServantEntity_TransformInfo_o *)v13;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)before, v13, v35, v36, v37, v38, v39, v40);
  v41 = sub_1D0F300(ServantEntity_TransformInfo_TypeInfo);
  ServantEntity_TransformInfo___ctor((ServantEntity_TransformInfo_o *)v41, 0);
  if ( !v41 )
LABEL_6:
    sub_1D0F30C(v14, v15);
  aftTitle = this->fields.aftTitle;
  *(_QWORD *)(v41 + 40) = aftTitle;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + 40), (int32_t)aftTitle, v42, v43, v44, v45, v46, v47);
  *(_QWORD *)(v41 + 32) = CondLabelColor;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + 32), (int32_t)CondLabelColor, v49, v50, v51, v52, v53, v54);
  *(_QWORD *)(v41 + 24) = CondSpriteColor;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + 24), (int32_t)CondSpriteColor, v55, v56, v57, v58, v59, v60);
  *(_DWORD *)(v41 + 48) = IntValue;
  *(_DWORD *)(v41 + 52) = v11;
  *(_DWORD *)(v41 + 56) = v12;
  *after = (ServantEntity_TransformInfo_o *)v41;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)after, v41, v61, v62, v63, v64, v65, v66);
}


int32_t ServantTransformEntity__GetUnlockTransformCommonReleaseId(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E7813D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24927/*"unlockTransformCommonReleaseId"*/);
    byte_4E7813D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24927/*"unlockTransformCommonReleaseId"*/, 0, 0);
}


bool ServantTransformEntity__IsNotClassSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7813F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21335/*"isNotClassSkillChange"*/);
    byte_4E7813F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21335/*"isNotClassSkillChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotProfileParameterChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78140 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21339/*"isNotProfileParameterChange"*/);
    byte_4E78140 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21339/*"isNotProfileParameterChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7813E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_21341/*"isNotSkillChange"*/);
    byte_4E7813E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21341/*"isNotSkillChange"*/, 0, 0) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantTransformEntity__IsUnlockTransformed(
        ServantTransformEntity_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int32_t UnlockTransformCommonReleaseId; // w0

  UnlockTransformCommonReleaseId = ServantTransformEntity__GetUnlockTransformCommonReleaseId(
                                     this,
                                     *(const MethodInfo **)&beforeClearQuestId);
  return !UnlockTransformCommonReleaseId
      || CommonReleaseExtension__IsOpenConsiderBeforeClearQuest(
           UnlockTransformCommonReleaseId,
           beforeClearQuestId,
           0,
           0);
}