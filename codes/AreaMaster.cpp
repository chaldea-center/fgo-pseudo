void __fastcall AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F70C & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__, method);
    byte_4A1F70C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    80,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}