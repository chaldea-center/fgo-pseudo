void AiActMaster___ctor(AiActMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593821A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
    byte_593821A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    111,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_AiActMaster__AiActEntity__int___ctor__);
}