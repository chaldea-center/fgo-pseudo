void __fastcall BoxGachaEntity___ctor(BoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE834 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE834 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D6598 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaEntity__CreatePrimaryKey(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BoxGachaEntity__GetMessagePrizeName(BoxGachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FE833 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B64A00(&string_TypeInfo, v3);
    sub_1B64A00(&StringLiteral_21333/*"message_prize_name"*/, v4);
    byte_49FE833 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_21333/*"message_prize_name"*/,
            &value,
            (const MethodInfo_317D4F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1B64F1C(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall BoxGachaEntity__GetPayType(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


bool __fastcall BoxGachaEntity__HasFlag(BoxGachaEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall BoxGachaEntity__IsLimitLineUp(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaEntity__IsResetTarget(BoxGachaEntity_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Int32_array *baseIds; // x8
  int32_t max_length; // w10
  int32_t v11; // w9

  if ( (byte_49FE832 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_BoxGachaBaseMaster___, *(_QWORD *)&idx);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FE832 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
  baseIds = this->fields.baseIds;
  if ( !baseIds )
    goto LABEL_10;
  max_length = baseIds->max_length;
  v11 = max_length - 1;
  if ( max_length > idx )
    v11 = idx;
  if ( v11 >= (unsigned int)max_length )
    sub_1B64C64(Instance, v7);
  if ( !Instance )
LABEL_10:
    sub_1B64C5C(Instance, v7);
  return BoxGachaBaseMaster__checkIsResetTarget((BoxGachaBaseMaster_o *)Instance, baseIds->m_Items[v11 + 1], v8);
}