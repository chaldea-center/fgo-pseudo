void __fastcall MissionNaviTransitionMaster___ctor(MissionNaviTransitionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CF6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__, method);
    byte_4B67CF6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__);
}