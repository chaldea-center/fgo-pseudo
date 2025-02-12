void __fastcall MissionNaviTransitionMaster___ctor(MissionNaviTransitionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8C01 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__, method);
    byte_4BC8C01 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_3246354 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__);
}