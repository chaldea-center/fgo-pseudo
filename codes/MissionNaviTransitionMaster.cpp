void MissionNaviTransitionMaster___ctor(MissionNaviTransitionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__);
    byte_5939AA5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    501,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_MissionNaviTransitionMaster__MissionNaviTransitionEntity__int___ctor__);
}