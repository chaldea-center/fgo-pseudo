void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC80F8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__, method);
    byte_4BC80F8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    179,
    (const MethodInfo_3246354 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}