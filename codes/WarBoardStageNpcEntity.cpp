void WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Int32_array **p_tacticalIds; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4CEF859 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF859 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0;
  this->fields.groupId = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.masterName, v3, v4, v5, v6, v7, v8, v9);
  this->fields.masterImageId = 0;
  this->fields.servants = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.servants, 0, v10, v11, v12, v13, v14, v15);
  this->fields.svtEquipIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.svtEquipIds, 0, v16, v17, v18, v19, v20, v21);
  this->fields.aiIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.aiIds, 0, v22, v23, v24, v25, v26, v27);
  this->fields.ratingBaseIds = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.ratingBaseIds, 0, v28, v29, v30, v31, v32, v33);
  this->fields.tacticalIds = 0;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_tacticalIds, 0, v35, v36, v37, v38, v39, v40);
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_CF4ED0;
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
}


System_String_o *WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4CEF858 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF858 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarBoardStageNpcEntity__CreatePrimaryKey(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardStageNpcEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


System_Int32_array *WarBoardStageNpcEntity__GetDefenseTarget(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  long double inited; // q0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4CEF85D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_int___);
    sub_1C7BAE8(&StringLiteral_18655/*"defenseTarget"*/);
    byte_4CEF85D = 1;
  }
  v5 = Method_System_Array_Empty_int___;
  v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v6 )
  {
    sub_1C51BD8(Method_System_Array_Empty_int___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C51B7C(inited);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_18655/*"defenseTarget"*/,
           **(System_Int32_array ***)(v8 + 184),
           v2);
}


System_Int32_array *WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  WarBoardStageNpcEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__21_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4CEF85B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Converter_object__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__21_0__);
    sub_1C7BAE8(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_4CEF85B = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = ScriptObjListParam;
  v9 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo);
    v9 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  _9__21_0 = v9->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardStageNpcEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__21_0 = (System_Converter_object__int__o *)sub_1C7BD34(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__21_0,
      v11,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__21_0__,
      0);
    static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = _9__21_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
      (int32_t)_9__21_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__21_0,
                                                    (const MethodInfo_3096654 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1C7BD40(0, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF85C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CEF85C = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *WarBoardStageNpcEntity__getScriptObjListParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 naturalAligment; // x9
  WarBoardStageNpcEntity_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CEF85A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Collections_Generic_List_object__TypeInfo);
    byte_4CEF85A = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C7C0DC(result);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v7, v8, v9);
    }
  }
  return result;
}


void WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF85E & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_4CEF85E = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(WarBoardStageNpcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardStageNpcEntity___c_TypeInfo->static_fields->__9 = (struct WarBoardStageNpcEntity___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardStageNpcEntity___c___ctor(WarBoardStageNpcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardStageNpcEntity___c___getScriptIntArrayParam_b__21_0(
        WarBoardStageNpcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4CEF85F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEF85F = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}