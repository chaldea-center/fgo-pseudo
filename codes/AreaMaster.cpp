void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC76C1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_4BC76C1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_3246354 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}