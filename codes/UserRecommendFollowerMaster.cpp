void __fastcall UserRecommendFollowerMaster___ctor(UserRecommendFollowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B679B4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__, method);
    byte_4B679B4 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    518,
    (const MethodInfo_31FD930 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long___ctor__);
}