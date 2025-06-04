void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B022D0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_4B022D0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    165,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}