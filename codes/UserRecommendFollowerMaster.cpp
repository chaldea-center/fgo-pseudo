void __fastcall UserRecommendFollowerMaster___ctor(UserRecommendFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6B04 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__, method);
    byte_4AB6B04 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__);
}