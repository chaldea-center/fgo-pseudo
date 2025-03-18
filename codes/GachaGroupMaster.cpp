void __fastcall GachaGroupMaster___ctor(GachaGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C221F8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__, method);
    byte_4C221F8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    165,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int___ctor__);
}