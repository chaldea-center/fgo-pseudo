void __fastcall TelopMaster___ctor(TelopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B456C3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__, method);
    byte_4B456C3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    67,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_TelopMaster__TelopEntity__int___ctor__);
}