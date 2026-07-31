void ClassBoardLockMaster___ctor(ClassBoardLockMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59383F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
    byte_59383F1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    436,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int___ctor__);
}