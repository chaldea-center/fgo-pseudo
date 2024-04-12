void __fastcall BoxGachaEntity___ctor(BoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1787 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B1787 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaEntity__CreatePrimaryKey(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall BoxGachaEntity__GetMessagePrizeName(BoxGachaEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1786 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_20644/*"message_prize_name"*/);
    byte_42B1786 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_20644/*"message_prize_name"*/,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B52D50(value);
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


bool __fastcall BoxGachaEntity__IsResetTarget(BoxGachaEntity_o *this, int32_t idx, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int32_array *baseIds; // x8
  int32_t max_length; // w10
  int32_t v10; // w9
  __int64 v12; // x0

  if ( (byte_42B1785 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1785 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
  baseIds = this->fields.baseIds;
  if ( !baseIds )
    goto LABEL_10;
  max_length = baseIds->max_length;
  v10 = max_length - 1;
  if ( max_length > idx )
    v10 = idx;
  if ( v10 >= (unsigned int)max_length )
  {
    v12 = sub_B52A88(Instance);
    sub_B52A28(v12, 0LL);
  }
  if ( !Instance )
LABEL_10:
    sub_B52A5C(Instance, v6);
  return BoxGachaBaseMaster__checkIsResetTarget((BoxGachaBaseMaster_o *)Instance, baseIds->m_Items[v10 + 1], v7);
}