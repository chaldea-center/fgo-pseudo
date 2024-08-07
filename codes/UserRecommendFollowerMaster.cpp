void __fastcall UserRecommendFollowerMaster___ctor(UserRecommendFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF8A2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__, method);
    byte_49FF8A2 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__);
}