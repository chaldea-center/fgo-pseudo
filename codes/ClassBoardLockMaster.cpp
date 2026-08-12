void ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59705A1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_59705A1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    436,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}