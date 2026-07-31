void BoxGachaEntity___ctor(BoxGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593834B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593834B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t BoxGachaEntity__CreatePrimaryKey(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *BoxGachaEntity__GetMessagePrizeName(BoxGachaEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_593834A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&StringLiteral_22613/*"message_prize_name"*/);
    byte_593834A = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_22613/*"message_prize_name"*/,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_594C0B8 )
    {
      sub_220024C(value, qword_594C0B8, v4, v5);
      return 0;
    }
  }
  return result;
}


int32_t BoxGachaEntity__GetPayType(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.payType;
}


bool BoxGachaEntity__HasFlag(BoxGachaEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool BoxGachaEntity__IsLimitLineUp(BoxGachaEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool BoxGachaEntity__IsResetTarget(BoxGachaEntity_o *this, int32_t idx, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int32_array *baseIds; // x8
  int32_t max_length; // w10
  int32_t v10; // w9

  if ( (byte_5938349 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938349 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BoxGachaBaseMaster___);
  baseIds = this->fields.baseIds;
  if ( !baseIds )
    goto LABEL_10;
  max_length = baseIds->max_length;
  v10 = max_length - 1;
  if ( max_length > idx )
    v10 = idx;
  if ( v10 >= (unsigned int)max_length )
    sub_21FFED4(Instance);
  if ( !Instance )
LABEL_10:
    sub_21FFECC(Instance, v6);
  return BoxGachaBaseMaster__checkIsResetTarget((BoxGachaBaseMaster_o *)Instance, baseIds->m_Items[v10], v7);
}