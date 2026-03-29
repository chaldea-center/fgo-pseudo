void ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3076D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_4D3076D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    434,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}