void ServantTransformEntity___ctor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939161 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939161 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTransformEntity__CreatePK(
        int32_t befSvtId,
        int32_t befDispLimitCount,
        const MethodInfo *method)
{
  if ( (byte_5939160 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939160 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           befSvtId,
           befDispLimitCount,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantTransformEntity__CreatePrimaryKey(ServantTransformEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantTransformEntity__CreatePK(this->fields.befSvtId, this->fields.befDispLimitCount, v2);
}


System_String_o *ServantTransformEntity__GetCondLabelColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593915E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18980/*"condLabelColor"*/);
    byte_593915E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18980/*"condLabelColor"*/, 0, 0);
}


System_String_o *ServantTransformEntity__GetCondSpriteColor(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593915D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18982/*"condSpriteColor"*/);
    byte_593915D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18982/*"condSpriteColor"*/, 0, 0);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *befTitle; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_String_o *aftTitle; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7

  if ( (byte_593915F & 1) == 0 )
  {
    sub_21FFC50(&ServantEntity_TransformInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_21915/*"isNotProfileParameterChange"*/);
    sub_21FFC50(&StringLiteral_21911/*"isNotClassSkillChange"*/);
    sub_21FFC50(&StringLiteral_21917/*"isNotSkillChange"*/);
    byte_593915F = 1;
  }
  CondLabelColor = ServantTransformEntity__GetCondLabelColor(this, (const MethodInfo *)before);
  CondSpriteColor = ServantTransformEntity__GetCondSpriteColor(this, v8);
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21917/*"isNotSkillChange"*/, 0, 0);
  v11 = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21911/*"isNotClassSkillChange"*/, 0, 0);
  v12 = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21915/*"isNotProfileParameterChange"*/, 0, 0);
  v13 = sub_21FFEBC(ServantEntity_TransformInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  befTitle = this->fields.befTitle;
  *(_QWORD *)(v13 + 40) = befTitle;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)befTitle, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = CondLabelColor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)CondLabelColor, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v13 + 24) = CondSpriteColor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)CondSpriteColor, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v13 + 48) = IntValue;
  *(_DWORD *)(v13 + 52) = v11;
  *(_DWORD *)(v13 + 56) = v12;
  *before = (ServantEntity_TransformInfo_o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)before, v13, v35, v36, v37, v38, v39, v40);
  v41 = sub_21FFEBC(ServantEntity_TransformInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v41, 0);
  if ( !v41 )
LABEL_6:
    sub_21FFECC(v14, v15);
  aftTitle = this->fields.aftTitle;
  *(_QWORD *)(v41 + 40) = aftTitle;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 40), (int32_t)aftTitle, v42, v43, v44, v45, v46, v47);
  *(_QWORD *)(v41 + 32) = CondLabelColor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 32), (int32_t)CondLabelColor, v49, v50, v51, v52, v53, v54);
  *(_QWORD *)(v41 + 24) = CondSpriteColor;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 24), (int32_t)CondSpriteColor, v55, v56, v57, v58, v59, v60);
  *(_DWORD *)(v41 + 48) = IntValue;
  *(_DWORD *)(v41 + 52) = v11;
  *(_DWORD *)(v41 + 56) = v12;
  *after = (ServantEntity_TransformInfo_o *)v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)after, v41, v61, v62, v63, v64, v65, v66);
}


int32_t ServantTransformEntity__GetUnlockTransformCommonReleaseId(
        ServantTransformEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939159 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25716/*"unlockTransformCommonReleaseId"*/);
    byte_5939159 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25716/*"unlockTransformCommonReleaseId"*/, 0, 0);
}


bool ServantTransformEntity__IsNotClassSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593915B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21911/*"isNotClassSkillChange"*/);
    byte_593915B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21911/*"isNotClassSkillChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotProfileParameterChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593915C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21915/*"isNotProfileParameterChange"*/);
    byte_593915C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21915/*"isNotProfileParameterChange"*/, 0, 0) != 0;
}


bool ServantTransformEntity__IsNotSkillChange(ServantTransformEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593915A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21917/*"isNotSkillChange"*/);
    byte_593915A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21917/*"isNotSkillChange"*/, 0, 0) != 0;
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