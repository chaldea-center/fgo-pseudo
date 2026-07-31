void GachaBehaviorEntity___ctor(GachaBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A4D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938A4D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaBehaviorEntity__CreatePK(int32_t gachaId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_5938A4B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938A4B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           svtId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaBehaviorEntity__CreatePrimaryKey(GachaBehaviorEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaBehaviorEntity__CreatePK(this->fields.gachaId, this->fields.svtId, v2);
}


int32_t GachaBehaviorEntity__GetOverwriteClassImageId(GachaBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5938A4C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23628/*"overwriteClassImageId"*/);
    byte_5938A4C = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_23628/*"overwriteClassImageId"*/,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v5);
      LODWORD(script) = DesignCardManager__GetEnableOverwriteClassImageId((DesignCardManager_o *)Instance, value, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}