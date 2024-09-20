void __fastcall UserRecommendFollowerMaster___ctor(UserRecommendFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BF02 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__);
    byte_4A5BF02 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__);
}