void __fastcall SubEquipMaster___ctor(SubEquipMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418578C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__, method);
    byte_418578C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    25,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SubEquipMaster__SubEquipEntity__int___ctor__);
}