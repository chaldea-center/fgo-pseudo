void ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE40B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_4CEE40B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    434,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}