void WarReleaseEntity___ctor(WarReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A67 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A67 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarReleaseEntity__CreatePK(
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  if ( (byte_5939A66 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_5939A66 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           warId,
           condType,
           condId,
           condNum,
           (const MethodInfo_382195C *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *WarReleaseEntity__CreatePrimaryKey(WarReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarReleaseEntity__CreatePK(
           this->fields.warId,
           this->fields.condType,
           this->fields.condId,
           this->fields.condNum,
           v2);
}


bool WarReleaseEntity__IsAnnouncement(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 3;
}


bool WarReleaseEntity__IsClose(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 2;
}


bool WarReleaseEntity__IsHide(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 0;
}


bool WarReleaseEntity__IsMatch(WarReleaseEntity_o *this, int32_t inWarDisplayType, const MethodInfo *method)
{
  return this->fields.warDisplayType == inWarDisplayType;
}


bool WarReleaseEntity__IsOpen(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 1;
}


bool WarReleaseEntity__IsRelease(WarReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_5939A64 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5939A64 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool WarReleaseEntity__IsShowBoard(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.warDisplayType - 1) < 3;
}


bool WarReleaseEntity__TryGetTransitionDialogData(
        WarReleaseEntity_o *this,
        WarReleaseEntity_TransitionDialogData_o **data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939A65 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_JsonManager_Deserialize_WarReleaseEntity_TransitionDialogData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25791/*"useTransitionDialog"*/);
    byte_5939A65 = 1;
  }
  value = 0;
  *data = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)data, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_25791/*"useTransitionDialog"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v12 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    v13 = JsonManager__Deserialize_object_(
            v12,
            (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_WarReleaseEntity_TransitionDialogData___);
    *data = (WarReleaseEntity_TransitionDialogData_o *)v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)data, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  }
  return *data != 0;
}


void WarReleaseEntity_TransitionDialogData___ctor(
        WarReleaseEntity_TransitionDialogData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}