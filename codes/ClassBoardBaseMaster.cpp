void __fastcall ClassBoardBaseMaster___ctor(ClassBoardBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B37F9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
    byte_42B37F9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    425,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int___ctor__);
}