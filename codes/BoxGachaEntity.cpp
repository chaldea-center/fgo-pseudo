void __fastcall BoxGachaEntity___ctor(BoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41896B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41896B0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41896AF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&string_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_20486/*"message_prize_name"*/, v4);
    byte_41896AF = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20486/*"message_prize_name"*/,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B2C728(value);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Int32_array *baseIds; // x8
  int32_t max_length; // w10
  int32_t v11; // w9
  __int64 v13; // x0

  if ( (byte_41896AE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BoxGachaBaseMaster___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41896AE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
  baseIds = this->fields.baseIds;
  if ( !baseIds )
    goto LABEL_10;
  max_length = baseIds->max_length;
  v11 = max_length - 1;
  if ( max_length > idx )
    v11 = idx;
  if ( v11 >= (unsigned int)max_length )
  {
    v13 = sub_B2C460(Instance);
    sub_B2C400(v13, 0LL);
  }
  if ( !Instance )
LABEL_10:
    sub_B2C434(Instance, v7);
  return BoxGachaBaseMaster__checkIsResetTarget((BoxGachaBaseMaster_o *)Instance, baseIds->m_Items[v11 + 1], v8);
}